// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/battle/instant_win_handler.asm (source_named).
bool execute_battle_instant_win_handler_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_handler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC261BD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261BF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261C0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC261C1.
    case 0xC261C3: cpu.execute_instruction<0xFF>(0xBC9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC261C4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    case 0xC261C5: cpu.execute_instruction<0x9C>(0x004DBC, 3); return true;
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC261C3.
    case 0xC261C7: cpu.execute_instruction<0x4D>(0x00B7A9, 3); return true;
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    case 0xC261C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0000B7, 3); return true;
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    // Overlapping static entry reached from 0xC261C8.
    case 0xC261CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:22 JSL CHANGE_MUSIC
    case 0xC261CB: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/battle/instant_win_handler.asm:23 JSL UNKNOWN_C2E9ED
    case 0xC261CF: cpu.execute_instruction<0x22>(0xC2E9ED, 4); return true;
    // src/battle/instant_win_handler.asm:24 LDX #0
    case 0xC261D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:24 LDX #0
    // Overlapping static entry reached from 0xC261D3.
    case 0xC261D5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_handler.asm:25 STX @LOCAL04
    case 0xC261D6: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:26 BRA @UNKNOWN1
    case 0xC261D8: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    case 0xC261DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0003E0, 3); return true;
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    // Overlapping static entry reached from 0xC261DA.
    case 0xC261DC: cpu.execute_instruction<0x03>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    case 0xC261DD: cpu.execute_instruction<0x20>(0x006189, 3); return true;
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    // Overlapping static entry reached from 0xC261DC.
    case 0xC261DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000061, 2); else cpu.execute_instruction<0x89>(0x00A961, 3); return true;
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    case 0xC261E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    // Overlapping static entry reached from 0xC261DE.
    case 0xC261E1: cpu.execute_instruction<0x1F>(0x892000, 4); return true;
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    // Overlapping static entry reached from 0xC261E0.
    case 0xC261E2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:31 JSR UNKNOWN_C26189
    case 0xC261E3: cpu.execute_instruction<0x20>(0x006189, 3); return true;
    // src/battle/instant_win_handler.asm:31 JSR UNKNOWN_C26189
    // Overlapping static entry reached from 0xC261E1.
    case 0xC261E5: cpu.execute_instruction<0x61>(0x0000A9, 2); return true;
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    case 0xC261E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    // Overlapping static entry reached from 0xC261E5.
    case 0xC261E7: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    // Overlapping static entry reached from 0xC261E6.
    case 0xC261E8: cpu.execute_instruction<0x7C>(0x008920, 3); return true;
    // src/battle/instant_win_handler.asm:33 JSR UNKNOWN_C26189
    case 0xC261E9: cpu.execute_instruction<0x20>(0x006189, 3); return true;
    // src/battle/instant_win_handler.asm:34 LDX @LOCAL04
    case 0xC261EC: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:35 INX
    case 0xC261EE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:36 STX @LOCAL04
    case 0xC261EF: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:38 CPX #2
    case 0xC261F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:38 CPX #2
    // Overlapping static entry reached from 0xC261F1.
    case 0xC261F3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:39 BCC @UNKNOWN0
    case 0xC261F4: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/battle/instant_win_handler.asm:40 LDA #0
    case 0xC261F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:40 LDA #0
    // Overlapping static entry reached from 0xC261F6.
    case 0xC261F8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:41 JSR UNKNOWN_C26189
    case 0xC261F9: cpu.execute_instruction<0x20>(0x006189, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC261FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC261FC.
    case 0xC261FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC261FF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26201: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26201.
    case 0xC26203: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26204: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26206: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC26206.
    case 0xC26208: cpu.execute_instruction<0x20>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26209: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC2620B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC2620B.
    case 0xC2620D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC2620E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    case 0xC26210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    // Overlapping static entry reached from 0xC26210.
    case 0xC26212: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:45 JSL MEMCPY24
    case 0xC26213: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    case 0xC26217: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    // Overlapping static entry reached from 0xC26217.
    case 0xC26219: cpu.execute_instruction<0xFF>(0x0006A9, 4); return true;
    // src/battle/instant_win_handler.asm:47 LDA #6
    case 0xC2621A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:47 LDA #6
    // Overlapping static entry reached from 0xC2621A.
    case 0xC2621C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:48 JSL UNKNOWN_C496E7
    case 0xC2621D: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/battle/instant_win_handler.asm:49 LDX #0
    case 0xC26221: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:49 LDX #0
    // Overlapping static entry reached from 0xC26221.
    case 0xC26223: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_handler.asm:50 STX @LOCAL03
    case 0xC26224: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:51 BRA @UNKNOWN3
    case 0xC26226: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/instant_win_handler.asm:53 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC26228: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/battle/instant_win_handler.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC2622C: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/battle/instant_win_handler.asm:55 LDX @LOCAL03
    case 0xC26230: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:56 INX
    case 0xC26232: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:57 STX @LOCAL03
    case 0xC26233: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:59 CPX #6
    case 0xC26235: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:59 CPX #6
    // Overlapping static entry reached from 0xC26235.
    case 0xC26237: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:60 BCC @UNKNOWN2
    case 0xC26238: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/battle/instant_win_handler.asm:61 JSL UNKNOWN_C49740
    case 0xC2623A: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // src/battle/instant_win_handler.asm:62 JSL UNKNOWN_C0943C
    case 0xC2623E: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC26242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC26242.
    case 0xC26244: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC26245: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // src/battle/instant_win_handler.asm:64 STZ BATTLE_MONEY_SCRATCH
    case 0xC26249: cpu.execute_instruction<0x9C>(0x00A978, 3); return true;
    // src/battle/instant_win_handler.asm:65 LDA #0
    case 0xC2624C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:65 LDA #0
    // Overlapping static entry reached from 0xC2624C.
    case 0xC2624E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:66 STA @LOCAL03
    case 0xC2624F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:67 BRA @UNKNOWN5
    case 0xC26251: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/battle/instant_win_handler.asm:69 ASL
    case 0xC26253: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:70 TAX
    case 0xC26254: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:71 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26255: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    case 0xC26258: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26258.
    case 0xC2625A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:73 JSL MULT168
    case 0xC2625B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_handler.asm:74 CLC
    case 0xC2625F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    case 0xC26260: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    // Overlapping static entry reached from 0xC26260.
    case 0xC26262: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_handler.asm:76 TAX
    case 0xC26263: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:77 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26264: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/instant_win_handler.asm:78 CLC
    case 0xC26268: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:79 ADC BATTLE_MONEY_SCRATCH
    case 0xC26269: cpu.execute_instruction<0x6D>(0x00A978, 3); return true;
    // src/battle/instant_win_handler.asm:80 STA BATTLE_MONEY_SCRATCH
    case 0xC2626C: cpu.execute_instruction<0x8D>(0x00A978, 3); return true;
    // src/battle/instant_win_handler.asm:81 LDA @LOCAL03
    case 0xC2626F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:82 INC
    case 0xC26271: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:83 STA @LOCAL03
    case 0xC26272: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:85 CMP ENEMIES_IN_BATTLE
    case 0xC26274: cpu.execute_instruction<0xCD>(0x009F8A, 3); return true;
    // src/battle/instant_win_handler.asm:86 BCC @UNKNOWN4
    case 0xC26277: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC26279: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B9, 2); else cpu.execute_instruction<0xA0>(0x0098B9, 3); return true;
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC26279.
    case 0xC2627B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:88 STY @LOCAL02ALT
    case 0xC2627C: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:89 LDA BATTLE_MONEY_SCRATCH
    case 0xC2627E: cpu.execute_instruction<0xAD>(0x00A978, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC26281: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC26283: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC26285: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC26287: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC26289: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC2628B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/instant_win_handler.asm:92 JSL DEPOSIT_INTO_ATM
    case 0xC2628D: cpu.execute_instruction<0x22>(0xC2281D, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26291: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26293: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26295: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC26297: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:94 LDY @LOCAL02ALT
    case 0xC26299: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC2629B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC2629E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC262A0: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC262A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:96 CLC
    case 0xC262A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262A8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262AE: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC262B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC262B9: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:99 LDY #0
    case 0xC262BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:99 LDY #0
    // Overlapping static entry reached from 0xC262BC.
    case 0xC262BE: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/instant_win_handler.asm:100 STY @LOCAL03
    case 0xC262BF: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:101 BRA @UNKNOWN7
    case 0xC262C1: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/instant_win_handler.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC262C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    case 0xC262C5: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    case 0xC262C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC262C7.
    case 0xC262C9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/instant_win_handler.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC262CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:107 TYA
    case 0xC262CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:108 TXY
    case 0xC262CD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:109 JSL MULT168
    case 0xC262CE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_handler.asm:110 CLC
    case 0xC262D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC262D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC262D3.
    case 0xC262D5: cpu.execute_instruction<0x9F>(0x8EFC22, 4); return true;
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    case 0xC262D6: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    // Overlapping static entry reached from 0xC262D5.
    case 0xC262D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0018A4, 3); return true;
    // src/battle/instant_win_handler.asm:113 LDY @LOCAL03
    case 0xC262DA: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:113 LDY @LOCAL03
    // Overlapping static entry reached from 0xC262D9.
    case 0xC262DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:114 INY
    case 0xC262DC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:115 STY @LOCAL03
    case 0xC262DD: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    case 0xC262DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC262DF.
    case 0xC262E1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:118 BCC @UNKNOWN6
    case 0xC262E2: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/battle/instant_win_handler.asm:119 LDY #0
    case 0xC262E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:119 LDY #0
    // Overlapping static entry reached from 0xC262E4.
    case 0xC262E6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/instant_win_handler.asm:120 STY @LOCAL02ALT2
    case 0xC262E7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:121 BRA @UNKNOWN11
    case 0xC262E9: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/instant_win_handler.asm:130 LDA GAME_STATE + game_state::party_members,Y
    case 0xC262EB: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    case 0xC262EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC262EE.
    case 0xC262F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:133 STA @LOCAL03
    case 0xC262F1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:134 BEQ @UNKNOWN10
    case 0xC262F3: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:135 CMP #4
    case 0xC262F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/instant_win_handler.asm:135 CMP #4
    // Overlapping static entry reached from 0xC262F5.
    case 0xC262F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC262F8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC262FA: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/battle/instant_win_handler.asm:137 TYA
    case 0xC262FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    case 0xC262FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC262FD.
    case 0xC262FF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:139 JSL MULT168
    case 0xC26300: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_handler.asm:140 CLC
    case 0xC26304: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC26305: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26305.
    case 0xC26307: cpu.execute_instruction<0x9F>(0x18A5AA, 4); return true;
    // src/battle/instant_win_handler.asm:142 TAX
    case 0xC26308: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:143 LDA @LOCAL03
    case 0xC26309: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:144 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC2630B: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // src/battle/instant_win_handler.asm:146 LDY @LOCAL02ALT2
    case 0xC2630F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:147 INY
    case 0xC26311: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:148 STY @LOCAL02ALT2
    case 0xC26312: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    case 0xC26314: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC26314.
    case 0xC26316: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:151 BCC @UNKNOWN8
    case 0xC26317: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26319: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC26319.
    case 0xC2631B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC2631C: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC2631F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC2631F.
    case 0xC26321: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26322: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/instant_win_handler.asm:153 LDA #0
    case 0xC26325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:153 LDA #0
    // Overlapping static entry reached from 0xC26325.
    case 0xC26327: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:154 STA @LOCAL03
    case 0xC26328: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:155 BRA @UNKNOWN13
    case 0xC2632A: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2632C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2632C.
    case 0xC2632E: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2632F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2632E.
    case 0xC26330: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26331: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26330.
    case 0xC26332: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26331.
    case 0xC26333: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26334: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:158 LDA @LOCAL03
    case 0xC26336: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:159 ASL
    case 0xC26338: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:160 TAX
    case 0xC26339: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:161 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2633A: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    case 0xC2633D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2633D.
    case 0xC2633F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:163 JSL MULT168
    case 0xC26340: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_handler.asm:164 CLC
    case 0xC26344: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    case 0xC26345: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    // Overlapping static entry reached from 0xC26345.
    case 0xC26347: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:166 CLC
    case 0xC26348: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:167 ADC @VIRTUAL06
    case 0xC26349: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:168 STA @VIRTUAL06
    case 0xC2634B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2634D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2634D.
    case 0xC2634F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26350: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26352: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26353: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26355: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26357: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26359: cpu.execute_instruction<0xAD>(0x00A974, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2635C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2635E: cpu.execute_instruction<0xAD>(0x00A976, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26361: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:171 CLC
    case 0xC26363: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26364: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26366: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26368: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2636A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2636C: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2636E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26370: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26372: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26375: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC26377: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/instant_win_handler.asm:174 LDA @LOCAL03
    case 0xC2637A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:175 INC
    case 0xC2637C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:176 STA @LOCAL03
    case 0xC2637D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:178 CMP ENEMIES_IN_BATTLE
    case 0xC2637F: cpu.execute_instruction<0xCD>(0x009F8A, 3); return true;
    // src/battle/instant_win_handler.asm:179 BCC @UNKNOWN12
    case 0xC26382: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/battle/instant_win_handler.asm:180 LDA #0
    case 0xC26384: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:180 LDA #0
    // Overlapping static entry reached from 0xC26384.
    case 0xC26386: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:181 JSL COUNT_CHARS
    case 0xC26387: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/instant_win_handler.asm:182 DEC
    case 0xC2638B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC2638C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC2638E: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26390: cpu.execute_instruction<0xAD>(0x00A974, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26393: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26395: cpu.execute_instruction<0xAD>(0x00A976, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26398: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:185 CLC
    case 0xC2639A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2639B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2639D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2639F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC263A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC263A3: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC263A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263A9: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263AE: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/instant_win_handler.asm:188 LDA #0
    case 0xC263B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:188 LDA #0
    // Overlapping static entry reached from 0xC263B1.
    case 0xC263B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:189 JSL COUNT_CHARS
    case 0xC263B4: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC263B8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC263BA: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:191 JSL DIVISION32
    case 0xC263BC: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C2: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC263C7: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x007A28, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC263CA.
    case 0xC263CC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC263CF.
    case 0xC263D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC263D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC263DA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/instant_win_handler.asm:195 JSL DISPLAY_TEXT_WAIT
    case 0xC263DC: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC263E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AC, 2); else cpu.execute_instruction<0xA0>(0x009FAC, 3); return true;
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC263E0.
    case 0xC263E2: cpu.execute_instruction<0x9F>(0xA91A84, 4); return true;
    // src/battle/instant_win_handler.asm:197 STY @LOCAL04ALT
    case 0xC263E3: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:198 LDA #0
    case 0xC263E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC263E2.
    case 0xC263E6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC263E5.
    case 0xC263E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:199 STA @VIRTUAL02
    case 0xC263E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_handler.asm:200 BRA @UNKNOWN16
    case 0xC263EA: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/battle/instant_win_handler.asm:202 LDA a:battler::consciousness,Y
    case 0xC263EC: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    case 0xC263EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC263EF.
    case 0xC263F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:204 BEQ @UNKNOWN15
    case 0xC263F2: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/battle/instant_win_handler.asm:205 LDA a:battler::ally_or_enemy,Y
    case 0xC263F4: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    case 0xC263F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC263F7.
    case 0xC263F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_handler.asm:207 BNE @UNKNOWN15
    case 0xC263FA: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/battle/instant_win_handler.asm:208 LDA a:battler::npc_id,Y
    case 0xC263FC: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    case 0xC263FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC263FF.
    case 0xC26401: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_handler.asm:210 BNE @UNKNOWN15
    case 0xC26402: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/battle/instant_win_handler.asm:211 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC26404: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    case 0xC26407: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    // Overlapping static entry reached from 0xC26407.
    case 0xC26409: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_handler.asm:213 TAX
    case 0xC2640A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    case 0xC2640B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2640B.
    case 0xC2640D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:215 BEQ @UNKNOWN15
    case 0xC2640E: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    case 0xC26410: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC26410.
    case 0xC26412: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:217 BEQ @UNKNOWN15
    case 0xC26413: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26415: cpu.execute_instruction<0xAD>(0x00A974, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26418: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2641A: cpu.execute_instruction<0xAD>(0x00A976, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2641D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2641F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26421: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26423: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26425: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/instant_win_handler.asm:220 LDX #1
    case 0xC26427: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:220 LDX #1
    // Overlapping static entry reached from 0xC26427.
    case 0xC26429: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/battle/instant_win_handler.asm:221 LDA __BSS_START__,Y
    case 0xC2642A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:222 JSL GAIN_EXP
    case 0xC2642D: cpu.execute_instruction<0x22>(0xC1D9E9, 4); return true;
    // src/battle/instant_win_handler.asm:224 LDY @LOCAL04ALT
    case 0xC26431: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:225 TYA
    case 0xC26433: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:226 CLC
    case 0xC26434: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    case 0xC26435: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26435.
    case 0xC26437: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/instant_win_handler.asm:228 TAY
    case 0xC26438: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:229 STY @LOCAL04ALT
    case 0xC26439: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:230 INC @VIRTUAL02
    case 0xC2643B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/instant_win_handler.asm:232 LDA @VIRTUAL02
    case 0xC2643D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    case 0xC2643F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2643F.
    case 0xC26441: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:234 BCC @UNKNOWN14
    case 0xC26442: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/battle/instant_win_handler.asm:235 LDA ENEMIES_IN_BATTLE
    case 0xC26444: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/battle/instant_win_handler.asm:236 JSR RAND_LIMIT
    case 0xC26447: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/instant_win_handler.asm:237 ASL
    case 0xC2644A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:238 TAX
    case 0xC2644B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:239 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2644C: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/instant_win_handler.asm:240 STA @LOCAL02ALT2
    case 0xC2644F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26451: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26451.
    case 0xC26453: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26454: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26453.
    case 0xC26455: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26455.
    case 0xC26457: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26456.
    case 0xC26458: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26459: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:242 LDA @LOCAL02ALT2
    case 0xC2645B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    case 0xC2645D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2645D.
    case 0xC2645F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:244 JSL MULT168
    case 0xC26460: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_handler.asm:245 STA @LOCAL03
    case 0xC26464: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:246 CLC
    case 0xC26466: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    case 0xC26467: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000058, 2); else cpu.execute_instruction<0x69>(0x000058, 3); return true;
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC26467.
    case 0xC26469: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2646A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2646C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2646E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC26470: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:249 CLC
    case 0xC26472: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:250 ADC @VIRTUAL0A
    case 0xC26473: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/instant_win_handler.asm:251 STA @VIRTUAL0A
    case 0xC26475: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/instant_win_handler.asm:252 LDA [@VIRTUAL0A]
    case 0xC26477: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    case 0xC26479: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    // Overlapping static entry reached from 0xC26479.
    case 0xC2647B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/instant_win_handler.asm:254 STA ITEM_DROPPED
    case 0xC2647C: cpu.execute_instruction<0x8D>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:255 LDA @LOCAL03
    case 0xC2647F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:256 CLC
    case 0xC26481: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    case 0xC26482: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000057, 2); else cpu.execute_instruction<0x69>(0x000057, 3); return true;
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC26482.
    case 0xC26484: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:258 CLC
    case 0xC26485: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:259 ADC @VIRTUAL06
    case 0xC26486: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:260 STA @VIRTUAL06
    case 0xC26488: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:261 LDA [@VIRTUAL06]
    case 0xC2648A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    case 0xC2648C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC2648C.
    case 0xC2648E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:263 BEQ @UNKNOWN17
    case 0xC2648F: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:264 CMP #1
    case 0xC26491: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:264 CMP #1
    // Overlapping static entry reached from 0xC26491.
    case 0xC26493: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:265 BEQ @UNKNOWN18
    case 0xC26494: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/instant_win_handler.asm:266 CMP #2
    case 0xC26496: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:266 CMP #2
    // Overlapping static entry reached from 0xC26496.
    case 0xC26498: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:267 BEQ @UNKNOWN19
    case 0xC26499: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/instant_win_handler.asm:268 CMP #3
    case 0xC2649B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/instant_win_handler.asm:268 CMP #3
    // Overlapping static entry reached from 0xC2649B.
    case 0xC2649D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:269 BEQ @UNKNOWN20
    case 0xC2649E: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/instant_win_handler.asm:270 CMP #4
    case 0xC264A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/instant_win_handler.asm:270 CMP #4
    // Overlapping static entry reached from 0xC264A0.
    case 0xC264A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:271 BEQ @UNKNOWN21
    case 0xC264A3: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/battle/instant_win_handler.asm:272 CMP #5
    case 0xC264A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/instant_win_handler.asm:272 CMP #5
    // Overlapping static entry reached from 0xC264A5.
    case 0xC264A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:273 BEQ @UNKNOWN22
    case 0xC264A8: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/instant_win_handler.asm:274 CMP #6
    case 0xC264AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:274 CMP #6
    // Overlapping static entry reached from 0xC264AA.
    case 0xC264AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:275 BEQ @UNKNOWN23
    case 0xC264AD: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/battle/instant_win_handler.asm:276 BRA @UNKNOWN24
    case 0xC264AF: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/battle/instant_win_handler.asm:278 JSL RAND
    case 0xC264B1: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    case 0xC264B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    // Overlapping static entry reached from 0xC264B5.
    case 0xC264B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:280 BEQ @UNKNOWN24
    case 0xC264B8: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/battle/instant_win_handler.asm:281 STZ ITEM_DROPPED
    case 0xC264BA: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:282 BRA @UNKNOWN24
    case 0xC264BD: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/instant_win_handler.asm:284 JSL RAND
    case 0xC264BF: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    case 0xC264C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    // Overlapping static entry reached from 0xC264C3.
    case 0xC264C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:286 BEQ @UNKNOWN24
    case 0xC264C6: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/battle/instant_win_handler.asm:287 STZ ITEM_DROPPED
    case 0xC264C8: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:288 BRA @UNKNOWN24
    case 0xC264CB: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/battle/instant_win_handler.asm:290 JSL RAND
    case 0xC264CD: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    case 0xC264D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    // Overlapping static entry reached from 0xC264D1.
    case 0xC264D3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:292 BEQ @UNKNOWN24
    case 0xC264D4: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/instant_win_handler.asm:293 STZ ITEM_DROPPED
    case 0xC264D6: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:294 BRA @UNKNOWN24
    case 0xC264D9: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/battle/instant_win_handler.asm:296 JSL RAND
    case 0xC264DB: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    case 0xC264DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    // Overlapping static entry reached from 0xC264DF.
    case 0xC264E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:298 BEQ @UNKNOWN24
    case 0xC264E2: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/instant_win_handler.asm:299 STZ ITEM_DROPPED
    case 0xC264E4: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:300 BRA @UNKNOWN24
    case 0xC264E7: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/instant_win_handler.asm:302 JSL RAND
    case 0xC264E9: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    case 0xC264ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    // Overlapping static entry reached from 0xC264ED.
    case 0xC264EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:304 BEQ @UNKNOWN24
    case 0xC264F0: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/instant_win_handler.asm:305 STZ ITEM_DROPPED
    case 0xC264F2: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:306 BRA @UNKNOWN24
    case 0xC264F5: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:308 JSL RAND
    case 0xC264F7: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    case 0xC264FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    // Overlapping static entry reached from 0xC264FB.
    case 0xC264FD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:310 BEQ @UNKNOWN24
    case 0xC264FE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/instant_win_handler.asm:311 STZ ITEM_DROPPED
    case 0xC26500: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:312 BRA @UNKNOWN24
    case 0xC26503: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:314 JSL RAND
    case 0xC26505: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    case 0xC26509: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    // Overlapping static entry reached from 0xC26509.
    case 0xC2650B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:316 BEQ @UNKNOWN24
    case 0xC2650C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/instant_win_handler.asm:317 STZ ITEM_DROPPED
    case 0xC2650E: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:319 LDA ITEM_DROPPED
    case 0xC26511: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:320 BEQ @UNKNOWN25
    case 0xC26514: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/instant_win_handler.asm:321 SEP #PROC_FLAGS::ACCUM8
    case 0xC26516: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:322 LDA ITEM_DROPPED
    case 0xC26518: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // src/battle/instant_win_handler.asm:323 JSL REDIRECT_C1ACF8
    case 0xC2651B: cpu.execute_instruction<0x22>(0xC1DD7C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2651F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x007BDF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC2651F.
    case 0xC26521: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26522: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26524.
    case 0xC26526: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26527: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26529: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/instant_win_handler.asm:327 JSL UNKNOWN_C1DD5F
    case 0xC2652D: cpu.execute_instruction<0x22>(0xC1DD5F, 4); return true;
    // src/battle/instant_win_handler.asm:328 LDA GAME_STATE+game_state::walking_style
    case 0xC26531: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    case 0xC26534: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC26534.
    case 0xC26536: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_handler.asm:330 BNE @UNKNOWN26
    case 0xC26537: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    case 0xC26539: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC26539.
    case 0xC2653B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:332 JSL CHANGE_MUSIC
    case 0xC2653C: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/battle/instant_win_handler.asm:333 BRA @UNKNOWN27
    case 0xC26540: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/instant_win_handler.asm:335 JSL UNKNOWN_C06A07
    case 0xC26542: cpu.execute_instruction<0x22>(0xC06A07, 4); return true;
    // src/battle/instant_win_handler.asm:337 JSL UNKNOWN_C09451
    case 0xC26546: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2654A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2654B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/is_char_targetted.asm (source_named).
bool execute_battle_is_char_targetted_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/is_char_targetted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27029: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2702E.
    case 0xC27030: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC27031: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC27032: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:9 STA @LOCAL00
    case 0xC27033: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/is_char_targetted.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC27030.
    case 0xC27034: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/battle/is_char_targetted.asm:10 LDX #0
    case 0xC27035: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/is_char_targetted.asm:10 LDX #0
    // Overlapping static entry reached from 0xC27035.
    case 0xC27037: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27038: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27038.
    case 0xC2703A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2703B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2703A.
    case 0xC2703C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2703D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2703C.
    case 0xC2703E: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2703D.
    case 0xC2703F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27040: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/is_char_targetted.asm:12 LDA @LOCAL00
    case 0xC27042: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/is_char_targetted.asm:13 ASL
    case 0xC27044: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:14 ASL
    case 0xC27045: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:15 CLC
    case 0xC27046: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:16 ADC @VIRTUAL06
    case 0xC27047: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/is_char_targetted.asm:17 STA @VIRTUAL06
    case 0xC27049: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2704B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2704B.
    case 0xC2704D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2704E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27050: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27051: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27053: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27055: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27057: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2705A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2705C: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2705F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27061: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27063: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27065: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27067: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27069: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2706B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2706D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2706D.
    case 0xC2706F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC27070: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC27072: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27072.
    case 0xC27074: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC27075: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC27077: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC27079: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2707B: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2707D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2707F: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/is_char_targetted.asm:23 BEQ @UNKNOWN1
    case 0xC27081: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/is_char_targetted.asm:24 LDX #1
    case 0xC27083: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/is_char_targetted.asm:24 LDX #1
    // Overlapping static entry reached from 0xC27083.
    case 0xC27085: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/is_char_targetted.asm:26 TXA
    case 0xC27086: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/is_char_targetted.asm:27 END_C_FUNCTION
    case 0xC27087: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/is_char_targetted.asm:27 END_C_FUNCTION
    case 0xC27088: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/ko_target.asm (source_named).
bool execute_battle_ko_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/ko_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27550: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27552: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27553: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27554: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27555: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC27555.
    case 0xC27557: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27558: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27559: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    case 0xC2755A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27557.
    case 0xC2755B: cpu.execute_instruction<0x02>(0x00009C, 2); return true;
    // src/battle/ko_target.asm:21 STZ SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2755C: cpu.execute_instruction<0x9C>(0x00AA92, 3); return true;
    // src/battle/ko_target.asm:22 LDX @VIRTUAL02
    case 0xC2755F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC27561: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/ko_target.asm:24 AND #$00FF
    case 0xC27564: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC27564.
    case 0xC27566: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC27567: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC27569: cpu.execute_instruction<0x4C>(0x0077CA, 3); return true;
    // src/battle/ko_target.asm:26 LDX @VIRTUAL02
    case 0xC2756C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:27 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2756E: cpu.execute_instruction<0xBD>(0x00001E, 3); return true;
    // src/battle/ko_target.asm:28 AND #$00FF
    case 0xC27571: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC27571.
    case 0xC27573: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    case 0xC27574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27574.
    case 0xC27576: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC27577: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC27579: cpu.execute_instruction<0x4C>(0x007639, 3); return true;
    // src/battle/ko_target.asm:31 LDY #0
    case 0xC2757C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:31 LDY #0
    // Overlapping static entry reached from 0xC2757C.
    case 0xC2757E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/ko_target.asm:32 STY @LOCAL07
    case 0xC2757F: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:33 JMP @UNKNOWN9
    case 0xC27581: cpu.execute_instruction<0x4C>(0x00762F, 3); return true;
    // src/battle/ko_target.asm:35 TYA
    case 0xC27584: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    case 0xC27585: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27585.
    case 0xC27587: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:37 JSL MULT168
    case 0xC27588: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:38 STA @LOCAL06
    case 0xC2758C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/ko_target.asm:39 TAX
    case 0xC2758E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:40 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2758F: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/ko_target.asm:41 AND #$00FF
    case 0xC27592: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC27592.
    case 0xC27594: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC27595: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC27597: cpu.execute_instruction<0x4C>(0x00762A, 3); return true;
    // src/battle/ko_target.asm:43 LDA @LOCAL06
    case 0xC2759A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/ko_target.asm:44 TAX
    case 0xC2759C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:45 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2759D: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/ko_target.asm:46 AND #$00FF
    case 0xC275A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC275A0.
    case 0xC275A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC275A3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC275A5: cpu.execute_instruction<0x4C>(0x00762A, 3); return true;
    // src/battle/ko_target.asm:48 LDA @LOCAL06
    case 0xC275A8: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/ko_target.asm:49 CLC
    case 0xC275AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC275AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC275AB.
    case 0xC275AD: cpu.execute_instruction<0x9F>(0x01BDAA, 4); return true;
    // src/battle/ko_target.asm:51 TAX
    case 0xC275AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:52 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC275AF: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/ko_target.asm:52 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC275AD.
    case 0xC275B1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/ko_target.asm:53 AND #$00FF
    case 0xC275B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC275B2.
    case 0xC275B4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    case 0xC275B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC275B5.
    case 0xC275B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:55 BNE @UNKNOWN8
    case 0xC275B8: cpu.execute_instruction<0xD0>(0x000070, 2); return true;
    // src/battle/ko_target.asm:56 LDA @LOCAL06
    case 0xC275BA: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/ko_target.asm:57 CLC
    case 0xC275BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC275BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC275BD.
    case 0xC275BF: cpu.execute_instruction<0x9F>(0xA50485, 4); return true;
    // src/battle/ko_target.asm:59 STA @VIRTUAL04
    case 0xC275C0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    case 0xC275C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC275BF.
    case 0xC275C3: cpu.execute_instruction<0x02>(0x0000C5, 2); return true;
    // src/battle/ko_target.asm:61 CMP @VIRTUAL04
    case 0xC275C4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:62 BNE @UNKNOWN10
    case 0xC275C6: cpu.execute_instruction<0xD0>(0x000071, 2); return true;
    // src/battle/ko_target.asm:63 LDA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC275C8: cpu.execute_instruction<0xAD>(0x00A18F, 3); return true;
    // src/battle/ko_target.asm:64 AND #$00FF
    case 0xC275CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC275CB.
    case 0xC275CD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC275CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D5, 2); else cpu.execute_instruction<0xC9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC275CE.
    case 0xC275D0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:66 BNE @UNKNOWN10
    case 0xC275D1: cpu.execute_instruction<0xD0>(0x000066, 2); return true;
    // src/battle/ko_target.asm:67 SEP #PROC_FLAGS::ACCUM8
    case 0xC275D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:68 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::consciousness
    case 0xC275D5: cpu.execute_instruction<0x9C>(0x00A18C, 3); return true;
    // src/battle/ko_target.asm:69 BRA @UNKNOWN7
    case 0xC275D8: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/ko_target.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC275DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:72 TYA
    case 0xC275DC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    case 0xC275DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC275DD.
    case 0xC275DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:74 JSL MULT168
    case 0xC275E0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:75 TAX
    case 0xC275E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:76 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC275E5: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/ko_target.asm:77 AND #$00FF
    case 0xC275E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC275E8.
    case 0xC275EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:78 BEQ @UNKNOWN6
    case 0xC275EB: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/ko_target.asm:79 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC275ED: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/ko_target.asm:80 AND #$00FF
    case 0xC275F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC275F0.
    case 0xC275F2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:81 BNE @UNKNOWN6
    case 0xC275F3: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/battle/ko_target.asm:82 TXA
    case 0xC275F5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:83 CLC
    case 0xC275F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC275F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC275F7.
    case 0xC275F9: cpu.execute_instruction<0x9F>(0x01BDAA, 4); return true;
    // src/battle/ko_target.asm:85 TAX
    case 0xC275FA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:86 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC275FB: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/ko_target.asm:86 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC275F9.
    case 0xC275FD: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/ko_target.asm:87 AND #$00FF
    case 0xC275FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC275FE.
    case 0xC27600: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    case 0xC27601: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27601.
    case 0xC27603: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:89 BNE @UNKNOWN6
    case 0xC27604: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27606: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x00A180, 3); return true;
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27606.
    case 0xC27608: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27609: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27608.
    case 0xC2760A: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27609.
    case 0xC2760B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:92 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2760C: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/ko_target.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC27610: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:94 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27612: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x008DD5, 3); return true;
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27614: cpu.execute_instruction<0x8D>(0x00A18F, 3); return true;
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27612.
    case 0xC27615: cpu.execute_instruction<0x8F>(0x01A9A1, 4); return true;
    // src/battle/ko_target.asm:96 LDA #1
    case 0xC27617: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    case 0xC27619: cpu.execute_instruction<0x8D>(0x00A18D, 3); return true;
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    // Overlapping static entry reached from 0xC27617.
    case 0xC2761A: cpu.execute_instruction<0x8D>(0x00A4A1, 3); return true;
    // src/battle/ko_target.asm:99 LDY @LOCAL07
    case 0xC2761C: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:99 LDY @LOCAL07
    // Overlapping static entry reached from 0xC2761A.
    case 0xC2761D: cpu.execute_instruction<0x22>(0x2284C8, 4); return true;
    // src/battle/ko_target.asm:100 INY
    case 0xC2761E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:101 STY @LOCAL07
    case 0xC2761F: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:103 LDY @LOCAL07
    case 0xC27621: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:104 CPY #6
    case 0xC27623: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:104 CPY #6
    // Overlapping static entry reached from 0xC27623.
    case 0xC27625: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:105 BCC @UNKNOWN5
    case 0xC27626: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // src/battle/ko_target.asm:106 BRA @UNKNOWN10
    case 0xC27628: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/ko_target.asm:108 LDY @LOCAL07
    case 0xC2762A: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:109 INY
    case 0xC2762C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:110 STY @LOCAL07
    case 0xC2762D: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:112 CPY #6
    case 0xC2762F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:112 CPY #6
    // Overlapping static entry reached from 0xC2762F.
    case 0xC27631: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27632: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27634: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27636: cpu.execute_instruction<0x4C>(0x007584, 3); return true;
    // src/battle/ko_target.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC27639: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:116 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2763B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    case 0xC2763D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2763B.
    case 0xC2763E: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:118 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2763F: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:119 LDX @VIRTUAL02
    case 0xC27642: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:120 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27644: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/ko_target.asm:121 LDX @VIRTUAL02
    case 0xC27647: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:122 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27649: cpu.execute_instruction<0x9E>(0x000022, 3); return true;
    // src/battle/ko_target.asm:123 LDX @VIRTUAL02
    case 0xC2764C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:124 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2764E: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/ko_target.asm:125 LDX @VIRTUAL02
    case 0xC27651: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:126 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27653: cpu.execute_instruction<0x9E>(0x000020, 3); return true;
    // src/battle/ko_target.asm:127 LDX @VIRTUAL02
    case 0xC27656: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:128 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27658: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:129 LDX @VIRTUAL02
    case 0xC2765B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:130 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2765D: cpu.execute_instruction<0x9E>(0x00001E, 3); return true;
    // src/battle/ko_target.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC27660: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:132 LDA @VIRTUAL02
    case 0xC27662: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:133 CLC
    case 0xC27664: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    case 0xC27665: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    // Overlapping static entry reached from 0xC27665.
    case 0xC27667: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:135 TAX
    case 0xC27668: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:136 STX @LOCAL07
    case 0xC27669: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/ko_target.asm:137 LDA __BSS_START__,X
    case 0xC2766B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:138 AND #$00FF
    case 0xC2766E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC2766E.
    case 0xC27670: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC27671: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC27673: cpu.execute_instruction<0x4C>(0x007784, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27676.
    case 0xC27678: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27679: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27678.
    case 0xC2767A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC2767B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2767B.
    case 0xC2767D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC2767E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/ko_target.asm:141 LDX @VIRTUAL02
    case 0xC27680: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:142 LDA a:battler::id,X
    case 0xC27682: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    case 0xC27685: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27685.
    case 0xC27687: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:144 JSL MULT168
    case 0xC27688: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:145 CLC
    case 0xC2768C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    case 0xC2768D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x000031, 3); return true;
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC2768D.
    case 0xC2768F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:147 CLC
    case 0xC27690: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:148 ADC @VIRTUAL0A
    case 0xC27691: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:149 STA @VIRTUAL0A
    case 0xC27693: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27695: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC27695.
    case 0xC27697: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27698: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:152 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC276A9: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/ko_target.asm:153 LDX @VIRTUAL02
    case 0xC276AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC276AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:155 STZ a:battler::consciousness,X
    case 0xC276B1: cpu.execute_instruction<0x9E>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:156 LDX @LOCAL07
    case 0xC276B4: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/ko_target.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC276B6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:158 LDA __BSS_START__,X ;battler::npc_id
    case 0xC276B8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:159 AND #$00FF
    case 0xC276BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC276BB.
    case 0xC276BD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:160 TAX
    case 0xC276BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    case 0xC276BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC276BF.
    case 0xC276C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:162 BEQ @UNKNOWN12
    case 0xC276C2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC276C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000011, 2); else cpu.execute_instruction<0xE0>(0x000011, 3); return true;
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC276C4.
    case 0xC276C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:164 BNE @UNKNOWN14
    case 0xC276C7: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/battle/ko_target.asm:166 LDA @VIRTUAL02
    case 0xC276C9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:167 CLC
    case 0xC276CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:168 ADC #battler::row
    case 0xC276CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/ko_target.asm:168 ADC #battler::row
    // Overlapping static entry reached from 0xC276CC.
    case 0xC276CE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:169 TAX
    case 0xC276CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:170 STX @LOCAL05
    case 0xC276D0: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:171 LDA __BSS_START__,X
    case 0xC276D2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:172 AND #$00FF
    case 0xC276D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC276D5.
    case 0xC276D7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:179 TAX
    case 0xC276D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:180 LDA GAME_STATE+game_state::party_npc_1,X
    case 0xC276D9: cpu.execute_instruction<0xBD>(0x00983A, 3); return true;
    // src/battle/ko_target.asm:182 AND #$00FF
    case 0xC276DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC276DC.
    case 0xC276DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC276DF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC276E1: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:184 SEP #PROC_FLAGS::ACCUM8
    case 0xC276E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:185 LDA #1
    case 0xC276E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    case 0xC276E8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC276E6.
    case 0xC276E9: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:187 STA a:battler::consciousness,X
    case 0xC276EA: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:188 LDX @VIRTUAL02
    case 0xC276ED: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:189 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC276EF: cpu.execute_instruction<0x9E>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:190 LDX @LOCAL05
    case 0xC276F2: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:191 REP #PROC_FLAGS::ACCUM8
    case 0xC276F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:192 LDA __BSS_START__,X
    case 0xC276F6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:193 AND #$00FF
    case 0xC276F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:193 AND #$00FF
    // Overlapping static entry reached from 0xC276F9.
    case 0xC276FB: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:194 ASL
    case 0xC276FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:201 TAX
    case 0xC276FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:202 LDA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC276FE: cpu.execute_instruction<0xBD>(0x00983C, 3); return true;
    // src/battle/ko_target.asm:204 LDX @VIRTUAL02
    case 0xC27701: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:205 STA a:battler::hp_target,X
    case 0xC27703: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/ko_target.asm:206 LDX @VIRTUAL02
    case 0xC27706: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:207 STA a:battler::hp,X
    case 0xC27708: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/ko_target.asm:208 LDX @LOCAL05
    case 0xC2770B: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:209 LDA __BSS_START__,X
    case 0xC2770D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:210 AND #$00FF
    case 0xC27710: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC27710.
    case 0xC27712: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:218 TAX
    case 0xC27713: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC27714: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:220 LDA GAME_STATE+game_state::party_npc_1,X
    case 0xC27716: cpu.execute_instruction<0xBD>(0x00983A, 3); return true;
    // src/battle/ko_target.asm:222 LDX @VIRTUAL02
    case 0xC27719: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:223 STA a:battler::npc_id,X
    case 0xC2771B: cpu.execute_instruction<0x9D>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC2771E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:225 AND #$00FF
    case 0xC27720: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC27720.
    case 0xC27722: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:226 ASL
    case 0xC27723: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:227 TAX
    case 0xC27724: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:228 INX
    case 0xC27725: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:229 LDA f:NPC_AI_TABLE,X
    case 0xC27726: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/battle/ko_target.asm:230 AND #$00FF
    case 0xC2772A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC2772A.
    case 0xC2772C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/ko_target.asm:231 LDX @VIRTUAL02
    case 0xC2772D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:232 STA a:battler::id,X
    case 0xC2772F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/ko_target.asm:233 JMP @UNKNOWN62
    case 0xC27732: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:235 LDA GAME_STATE+game_state::party_npc_1
    case 0xC27735: cpu.execute_instruction<0xAD>(0x00983A, 3); return true;
    // src/battle/ko_target.asm:236 AND #$00FF
    case 0xC27738: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC27738.
    case 0xC2773A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC2773B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC2773D: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC27740: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27740.
    case 0xC27742: cpu.execute_instruction<0x9F>(0x0000A0, 4); return true;
    // src/battle/ko_target.asm:239 LDY #0
    case 0xC27743: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:239 LDY #0
    // Overlapping static entry reached from 0xC27743.
    case 0xC27745: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/ko_target.asm:240 BRA @UNKNOWN18
    case 0xC27746: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/ko_target.asm:242 LDA a:battler::consciousness,X
    case 0xC27748: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:243 AND #$00FF
    case 0xC2774B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:243 AND #$00FF
    // Overlapping static entry reached from 0xC2774B.
    case 0xC2774D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:244 BEQ @UNKNOWN17
    case 0xC2774E: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/ko_target.asm:245 LDA a:battler::ally_or_enemy,X
    case 0xC27750: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/ko_target.asm:246 AND #$00FF
    case 0xC27753: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:246 AND #$00FF
    // Overlapping static entry reached from 0xC27753.
    case 0xC27755: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:247 BNE @UNKNOWN17
    case 0xC27756: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/battle/ko_target.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC27758: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:249 LDA a:battler::npc_id,X
    case 0xC2775A: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:250 CMP GAME_STATE+game_state::party_npc_1
    case 0xC2775D: cpu.execute_instruction<0xCD>(0x00983A, 3); return true;
    // src/battle/ko_target.asm:251 BNE @UNKNOWN17
    case 0xC27760: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/ko_target.asm:252 STZ a:battler::row,X
    case 0xC27762: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/battle/ko_target.asm:253 JMP @UNKNOWN62
    case 0xC27765: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:255 REP #PROC_FLAGS::ACCUM8
    case 0xC27768: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:256 TXA
    case 0xC2776A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:257 CLC
    case 0xC2776B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    case 0xC2776C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2776C.
    case 0xC2776E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:259 TAX
    case 0xC2776F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:260 INY
    case 0xC27770: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:262 STY @VIRTUAL02
    case 0xC27771: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    case 0xC27773: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27773.
    case 0xC27775: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:264 CLC
    case 0xC27776: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:265 SBC @VIRTUAL02
    case 0xC27777: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC27779: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC2777B: cpu.execute_instruction<0x10>(0x0000CB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC2777D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC2777F: cpu.execute_instruction<0x30>(0x0000C7, 2); return true;
    // src/battle/ko_target.asm:267 JMP @UNKNOWN62
    case 0xC27781: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:269 LDX @VIRTUAL02
    case 0xC27784: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:270 STZ a:battler::hp_target,X
    case 0xC27786: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/battle/ko_target.asm:271 LDA @VIRTUAL02
    case 0xC27789: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:272 CLC
    case 0xC2778B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:273 ADC #battler::row
    case 0xC2778C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/ko_target.asm:273 ADC #battler::row
    // Overlapping static entry reached from 0xC2778C.
    case 0xC2778E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:274 TAX
    case 0xC2778F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:275 STX @LOCAL04
    case 0xC27790: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/battle/ko_target.asm:276 LDA __BSS_START__,X
    case 0xC27792: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:277 AND #$00FF
    case 0xC27795: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:277 AND #$00FF
    // Overlapping static entry reached from 0xC27795.
    case 0xC27797: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    case 0xC27798: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27798.
    case 0xC2779A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:279 JSL MULT168
    case 0xC2779B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:280 TAX
    case 0xC2779F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:281 STZ PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC277A0: cpu.execute_instruction<0x9E>(0x009A15, 3); return true;
    // src/battle/ko_target.asm:282 LDX @LOCAL04
    case 0xC277A3: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/ko_target.asm:283 LDA __BSS_START__,X
    case 0xC277A5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:284 AND #$00FF
    case 0xC277A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC277A8.
    case 0xC277AA: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    case 0xC277AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC277AB.
    case 0xC277AD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:286 JSL MULT168
    case 0xC277AE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:287 TAX
    case 0xC277B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:288 LDA #1
    case 0xC277B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:288 LDA #1
    // Overlapping static entry reached from 0xC277B3.
    case 0xC277B5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:289 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC277B6: cpu.execute_instruction<0x9D>(0x009A13, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x006C6B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC277B9.
    case 0xC277BB: cpu.execute_instruction<0x6C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC277BE.
    case 0xC277C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277C3: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/ko_target.asm:291 JMP @UNKNOWN62
    case 0xC277C7: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:293 LDX @VIRTUAL02
    case 0xC277CA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:294 LDA a:battler::id,X
    case 0xC277CC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    case 0xC277CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DA, 2); else cpu.execute_instruction<0xC9>(0x0000DA, 3); return true;
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC277CF.
    case 0xC277D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC277D2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC277D4: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    case 0xC277D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0000DB, 3); return true;
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC277D7.
    case 0xC277D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC277DA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC277DC: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    case 0xC277DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DD, 2); else cpu.execute_instruction<0xC9>(0x0000DD, 3); return true;
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC277DF.
    case 0xC277E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC277E2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC277E4: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    case 0xC277E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC277E7.
    case 0xC277E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC277EA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC277EC: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:303 LDA #1
    case 0xC277EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:303 LDA #1
    // Overlapping static entry reached from 0xC277EF.
    case 0xC277F1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:304 JSL COUNT_CHARS
    case 0xC277F2: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/ko_target.asm:305 CMP #1
    case 0xC277F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:305 CMP #1
    // Overlapping static entry reached from 0xC277F6.
    case 0xC277F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC277F9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC277FB: cpu.execute_instruction<0x4C>(0x007879, 3); return true;
    // src/battle/ko_target.asm:307 JSL RESET_HPPP_ROLLING
    case 0xC277FE: cpu.execute_instruction<0x22>(0xC20F9A, 4); return true;
    // src/battle/ko_target.asm:308 LDA #0
    case 0xC27802: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:308 LDA #0
    // Overlapping static entry reached from 0xC27802.
    case 0xC27804: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:309 STA @LOCAL07
    case 0xC27805: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/ko_target.asm:310 BRA @UNKNOWN30
    case 0xC27807: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    case 0xC27809: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27809.
    case 0xC2780B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:313 JSL MULT168
    case 0xC2780C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:314 TAX
    case 0xC27810: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:315 STX @LOCAL05
    case 0xC27811: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:316 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27813: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/ko_target.asm:317 AND #$00FF
    case 0xC27816: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:317 AND #$00FF
    // Overlapping static entry reached from 0xC27816.
    case 0xC27818: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:318 BEQ @UNKNOWN29
    case 0xC27819: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/ko_target.asm:319 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2781B: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/battle/ko_target.asm:320 AND #$00FF
    case 0xC2781E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:320 AND #$00FF
    // Overlapping static entry reached from 0xC2781E.
    case 0xC27820: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:321 BNE @UNKNOWN29
    case 0xC27821: cpu.execute_instruction<0xD0>(0x00004C, 2); return true;
    // src/battle/ko_target.asm:322 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27823: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/battle/ko_target.asm:323 AND #$00FF
    case 0xC27826: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC27826.
    case 0xC27828: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    case 0xC27829: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27829.
    case 0xC2782B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:325 BEQ @UNKNOWN29
    case 0xC2782C: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/battle/ko_target.asm:326 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2782E: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/ko_target.asm:327 AND #$00FF
    case 0xC27831: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:327 AND #$00FF
    // Overlapping static entry reached from 0xC27831.
    case 0xC27833: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:328 BNE @UNKNOWN29
    case 0xC27834: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/battle/ko_target.asm:329 TXA
    case 0xC27836: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:330 CLC
    case 0xC27837: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC27838: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BC, 2); else cpu.execute_instruction<0x69>(0x009FBC, 3); return true;
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC27838.
    case 0xC2783A: cpu.execute_instruction<0x9F>(0x2084A8, 4); return true;
    // src/battle/ko_target.asm:332 TAY
    case 0xC2783B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:333 STY @LOCAL06
    case 0xC2783C: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/battle/ko_target.asm:334 LDA __BSS_START__,Y
    case 0xC2783E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:335 AND #$00FF
    case 0xC27841: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:335 AND #$00FF
    // Overlapping static entry reached from 0xC27841.
    case 0xC27843: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    case 0xC27844: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27844.
    case 0xC27846: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:337 JSL MULT168
    case 0xC27847: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:338 TAX
    case 0xC2784B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:339 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC2784C: cpu.execute_instruction<0xBD>(0x009A13, 3); return true;
    // src/battle/ko_target.asm:340 BNE @UNKNOWN29
    case 0xC2784F: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:341 LDA #1
    case 0xC27851: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:341 LDA #1
    // Overlapping static entry reached from 0xC27851.
    case 0xC27853: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/ko_target.asm:342 LDX @LOCAL05
    case 0xC27854: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:343 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC27856: cpu.execute_instruction<0x9D>(0x009FBF, 3); return true;
    // src/battle/ko_target.asm:344 LDY @LOCAL06
    case 0xC27859: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/battle/ko_target.asm:345 LDA __BSS_START__,Y
    case 0xC2785B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:346 AND #$00FF
    case 0xC2785E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:346 AND #$00FF
    // Overlapping static entry reached from 0xC2785E.
    case 0xC27860: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    case 0xC27861: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27861.
    case 0xC27863: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:348 JSL MULT168
    case 0xC27864: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:349 TAX
    case 0xC27868: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:350 LDA #1
    case 0xC27869: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:350 LDA #1
    // Overlapping static entry reached from 0xC27869.
    case 0xC2786B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:351 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC2786C: cpu.execute_instruction<0x9D>(0x009A15, 3); return true;
    // src/battle/ko_target.asm:353 LDA @LOCAL07
    case 0xC2786F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/ko_target.asm:354 INC
    case 0xC27871: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:355 STA @LOCAL07
    case 0xC27872: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    case 0xC27874: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27874.
    case 0xC27876: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:358 BCC @UNKNOWN28
    case 0xC27877: cpu.execute_instruction<0x90>(0x000090, 2); return true;
    // src/battle/ko_target.asm:360 LDA @VIRTUAL02
    case 0xC27879: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:361 CLC
    case 0xC2787B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:362 ADC #battler::exp
    case 0xC2787C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003F, 2); else cpu.execute_instruction<0x69>(0x00003F, 3); return true;
    // src/battle/ko_target.asm:362 ADC #battler::exp
    // Overlapping static entry reached from 0xC2787C.
    case 0xC2787E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:363 TAY
    case 0xC2787F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27880: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27883: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27885: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27888: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2788A: cpu.execute_instruction<0xAD>(0x00A974, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2788D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2788F: cpu.execute_instruction<0xAD>(0x00A976, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC27892: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/ko_target.asm:366 CLC
    case 0xC27894: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27895: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27897: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27899: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2789B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2789D: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2789F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A3: cpu.execute_instruction<0x8D>(0x00A974, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A8: cpu.execute_instruction<0x8D>(0x00A976, 3); return true;
    // src/battle/ko_target.asm:369 LDX @VIRTUAL02
    case 0xC278AB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:370 LDA a:battler::money,X
    case 0xC278AD: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // src/battle/ko_target.asm:371 CLC
    case 0xC278B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:372 ADC BATTLE_MONEY_SCRATCH
    case 0xC278B1: cpu.execute_instruction<0x6D>(0x00A978, 3); return true;
    // src/battle/ko_target.asm:373 STA BATTLE_MONEY_SCRATCH
    case 0xC278B4: cpu.execute_instruction<0x8D>(0x00A978, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC278B7.
    case 0xC278B9: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278BA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC278B9.
    case 0xC278BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC278BC.
    case 0xC278BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278BF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/ko_target.asm:379 LDX @VIRTUAL02
    case 0xC278C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:380 LDA a:battler::id,X
    case 0xC278C3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    case 0xC278C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC278C6.
    case 0xC278C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:382 JSL MULT168
    case 0xC278C9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:383 CLC
    case 0xC278CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    case 0xC278CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC278CE.
    case 0xC278D0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:414 TAY
    case 0xC278D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:415 LDA [@LOCAL03],Y
    case 0xC278D2: cpu.execute_instruction<0xB7>(0x000018, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:416 BEQL @UNKNOWN33
    case 0xC278D4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:416 BEQL @UNKNOWN33
    case 0xC278D6: cpu.execute_instruction<0x4C>(0x007A07, 3); return true;
    // src/battle/ko_target.asm:417 LDA #1
    case 0xC278D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:417 LDA #1
    // Overlapping static entry reached from 0xC278D9.
    case 0xC278DB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/ko_target.asm:418 STA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC278DC: cpu.execute_instruction<0x8D>(0x00AA90, 3); return true;
    // src/battle/ko_target.asm:419 LDX CURRENT_ATTACKER
    case 0xC278DF: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/ko_target.asm:420 STX @LOCAL05
    case 0xC278E2: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:421 LDY CURRENT_TARGET
    case 0xC278E4: cpu.execute_instruction<0xAC>(0x00A972, 3); return true;
    // src/battle/ko_target.asm:422 STY @LOCAL02
    case 0xC278E7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278E9: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278EC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278EE: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278F1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/ko_target.asm:425 LDA @VIRTUAL02
    case 0xC278FB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:426 STA CURRENT_ATTACKER
    case 0xC278FD: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/battle/ko_target.asm:427 LDX @VIRTUAL02
    case 0xC27900: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:428 LDA a:battler::id,X
    case 0xC27902: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:429 LDY #.SIZEOF(enemy_data)
    case 0xC27905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:429 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27905.
    case 0xC27907: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:430 JSL MULT168
    case 0xC27908: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:431 CLC
    case 0xC2790C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:432 ADC #enemy_data::final_action
    case 0xC2790D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:432 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC2790D.
    case 0xC2790F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:433 TAY
    case 0xC27910: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:434 LDA [@LOCAL03],Y
    case 0xC27911: cpu.execute_instruction<0xB7>(0x000018, 2); return true;
    // src/battle/ko_target.asm:436 LDX @VIRTUAL02
    case 0xC27913: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:437 STA a:battler::current_action,X
    case 0xC27915: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/battle/ko_target.asm:438 LDX @VIRTUAL02
    case 0xC27918: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:439 LDA a:battler::id,X
    case 0xC2791A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    case 0xC2791D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2791D.
    case 0xC2791F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:441 JSL MULT168
    case 0xC27920: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:442 CLC
    case 0xC27924: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    case 0xC27925: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000054, 2); else cpu.execute_instruction<0x69>(0x000054, 3); return true;
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    // Overlapping static entry reached from 0xC27925.
    case 0xC27927: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:452 TAY
    case 0xC27928: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:453 SEP #PROC_FLAGS::ACCUM8
    case 0xC27929: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:454 LDA [@LOCAL03],Y
    case 0xC2792B: cpu.execute_instruction<0xB7>(0x000018, 2); return true;
    // src/battle/ko_target.asm:456 LDX @VIRTUAL02
    case 0xC2792D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:457 STA a:battler::current_action_argument,X
    case 0xC2792F: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/battle/ko_target.asm:458 REP #PROC_FLAGS::ACCUM8
    case 0xC27932: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:459 LDA CURRENT_ATTACKER
    case 0xC27934: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/ko_target.asm:460 JSL CHOOSE_TARGET
    case 0xC27937: cpu.execute_instruction<0x22>(0xC24477, 4); return true;
    // src/battle/ko_target.asm:461 LDA CURRENT_ATTACKER
    case 0xC2793B: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/ko_target.asm:462 JSL UNKNOWN_C24703
    case 0xC2793E: cpu.execute_instruction<0x22>(0xC24703, 4); return true;
    // src/battle/ko_target.asm:463 LDA #0
    case 0xC27942: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:463 LDA #0
    // Overlapping static entry reached from 0xC27942.
    case 0xC27944: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:464 JSL FIX_ATTACKER_NAME
    case 0xC27945: cpu.execute_instruction<0x22>(0xC23BCF, 4); return true;
    // src/battle/ko_target.asm:465 JSL UNKNOWN_C23E32
    case 0xC27949: cpu.execute_instruction<0x22>(0xC23E32, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC2794D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2794D.
    case 0xC2794F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC27950: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC27952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27952.
    case 0xC27954: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC27955: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/ko_target.asm:471 LDX @VIRTUAL02
    case 0xC27957: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:472 LDA a:battler::id,X
    case 0xC27959: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    case 0xC2795C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2795C.
    case 0xC2795E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:474 JSL MULT168
    case 0xC2795F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:475 CLC
    case 0xC27963: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    case 0xC27964: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC27964.
    case 0xC27966: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:484 TAY
    case 0xC27967: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:485 LDA [@LOCAL03],Y
    case 0xC27968: cpu.execute_instruction<0xB7>(0x000018, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC27970: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:488 INC
    case 0xC27971: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:489 INC
    case 0xC27972: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:490 INC
    case 0xC27973: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:491 INC
    case 0xC27974: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27975: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27977: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27979: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2797B: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/ko_target.asm:499 CLC
    case 0xC2797D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:500 ADC @VIRTUAL06
    case 0xC2797E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:501 STA @VIRTUAL06
    case 0xC27980: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27982: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC27982.
    case 0xC27984: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27985: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27987: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27988: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2798A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2798C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2798E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27990: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27992: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27994: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:504 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC27996: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/ko_target.asm:505 LDX @VIRTUAL02
    case 0xC2799A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:506 LDA a:battler::id,X
    case 0xC2799C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    case 0xC2799F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2799F.
    case 0xC279A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:508 JSL MULT168
    case 0xC279A2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:509 CLC
    case 0xC279A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    case 0xC279A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC279A7.
    case 0xC279A9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:518 TAY
    case 0xC279AA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:519 LDA [@LOCAL03],Y
    case 0xC279AB: cpu.execute_instruction<0xB7>(0x000018, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279AD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279B0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:522 CLC
    case 0xC279B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    case 0xC279B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC279B5.
    case 0xC279B7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:534 CLC
    case 0xC279B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:535 ADC @VIRTUAL0A
    case 0xC279B9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:536 STA @VIRTUAL0A
    case 0xC279BB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC279BD.
    case 0xC279BF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C0: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:540 JSL UNKNOWN_C240A4
    case 0xC279D1: cpu.execute_instruction<0x22>(0xC240A4, 4); return true;
    // src/battle/ko_target.asm:541 STZ ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC279D5: cpu.execute_instruction<0x9C>(0x00AA90, 3); return true;
    // src/battle/ko_target.asm:549 LDX @LOCAL05
    case 0xC279D8: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:550 STX CURRENT_ATTACKER
    case 0xC279DA: cpu.execute_instruction<0x8E>(0x00A970, 3); return true;
    // src/battle/ko_target.asm:551 LDY @LOCAL02
    case 0xC279DD: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/ko_target.asm:552 STY CURRENT_TARGET
    case 0xC279DF: cpu.execute_instruction<0x8C>(0x00A972, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E6: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279EC: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279EF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279F1: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/ko_target.asm:556 LDA #0
    case 0xC279F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:556 LDA #0
    // Overlapping static entry reached from 0xC279F4.
    case 0xC279F6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:557 JSL FIX_ATTACKER_NAME
    case 0xC279F7: cpu.execute_instruction<0x22>(0xC23BCF, 4); return true;
    // src/battle/ko_target.asm:558 JSL FIX_TARGET_NAME
    case 0xC279FB: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/ko_target.asm:559 LDA SPECIAL_DEFEAT
    case 0xC279FF: cpu.execute_instruction<0xAD>(0x00AA0E, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27A02: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27A04: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:562 LDA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC27A07: cpu.execute_instruction<0xAD>(0x00AA92, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC27A0A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC27A0C: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27A0F.
    case 0xC27A11: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A12: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27A11.
    case 0xC27A13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27A14.
    case 0xC27A16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A17: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/ko_target.asm:565 LDX @VIRTUAL02
    case 0xC27A19: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:566 LDA a:battler::id,X
    case 0xC27A1B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    case 0xC27A1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27A1E.
    case 0xC27A20: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:568 JSL MULT168
    case 0xC27A21: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:569 CLC
    case 0xC27A25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    case 0xC27A26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x000031, 3); return true;
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC27A26.
    case 0xC27A28: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:571 CLC
    case 0xC27A29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:572 ADC @VIRTUAL0A
    case 0xC27A2A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:573 STA @VIRTUAL0A
    case 0xC27A2C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC27A2E.
    case 0xC27A30: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A31: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A33: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A34: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A36: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A38: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A3A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:576 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC27A42: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC27A46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27A46.
    case 0xC27A48: cpu.execute_instruction<0x9F>(0x0000A2, 4); return true;
    // src/battle/ko_target.asm:578 LDX #0
    case 0xC27A49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/ko_target.asm:578 LDX #0
    // Overlapping static entry reached from 0xC27A49.
    case 0xC27A4B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/ko_target.asm:579 STX @LOCAL07
    case 0xC27A4C: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/ko_target.asm:580 BRA @UNKNOWN36
    case 0xC27A4E: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/ko_target.asm:582 TAX
    case 0xC27A50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:583 SEP #PROC_FLAGS::ACCUM8
    case 0xC27A51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:584 STZ a:battler::use_alt_spritemap,X
    case 0xC27A53: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/ko_target.asm:585 CLC
    case 0xC27A56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:586 REP #PROC_FLAGS::ACCUM8
    case 0xC27A57: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    case 0xC27A59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27A59.
    case 0xC27A5B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/ko_target.asm:588 LDX @LOCAL07
    case 0xC27A5C: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/ko_target.asm:589 INX
    case 0xC27A5E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:590 STX @LOCAL07
    case 0xC27A5F: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    case 0xC27A61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27A61.
    case 0xC27A63: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:593 BCC @UNKNOWN35
    case 0xC27A64: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/battle/ko_target.asm:594 SEP #PROC_FLAGS::ACCUM8
    case 0xC27A66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:595 LDA #1
    case 0xC27A68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    case 0xC27A6A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC27A68.
    case 0xC27A6B: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:597 STA a:battler::use_alt_spritemap,X
    case 0xC27A6C: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/ko_target.asm:598 REP #PROC_FLAGS::ACCUM8
    case 0xC27A6F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:599 LDA #10
    case 0xC27A71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:599 LDA #10
    // Overlapping static entry reached from 0xC27A71.
    case 0xC27A73: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:600 JSL UNKNOWN_C2FAD8
    case 0xC27A74: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/battle/ko_target.asm:601 LDA #1
    case 0xC27A78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:601 LDA #1
    // Overlapping static entry reached from 0xC27A78.
    case 0xC27A7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:602 STA @VIRTUAL04
    case 0xC27A7B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:603 BRA @UNKNOWN38
    case 0xC27A7D: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/ko_target.asm:605 LDA #31
    case 0xC27A7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:605 LDA #31
    // Overlapping static entry reached from 0xC27A7F.
    case 0xC27A81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:606 STA @LOCAL00
    case 0xC27A82: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:607 TAY
    case 0xC27A84: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:608 TAX
    case 0xC27A85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:609 STX @LOCAL05
    case 0xC27A86: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:610 LDX @VIRTUAL02
    case 0xC27A88: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:611 LDA a:battler::vram_sprite_index,X
    case 0xC27A8A: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/ko_target.asm:612 AND #$00FF
    case 0xC27A8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:612 AND #$00FF
    // Overlapping static entry reached from 0xC27A8D.
    case 0xC27A8F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:613 ASL
    case 0xC27A90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:614 ASL
    case 0xC27A91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:615 ASL
    case 0xC27A92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:616 ASL
    case 0xC27A93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:617 CLC
    case 0xC27A94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:618 ADC @VIRTUAL04
    case 0xC27A95: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/ko_target.asm:619 LDX @LOCAL05
    case 0xC27A97: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:620 JSL UNKNOWN_C2FB35
    case 0xC27A99: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/battle/ko_target.asm:621 INC @VIRTUAL04
    case 0xC27A9D: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:623 LDA @VIRTUAL04
    case 0xC27A9F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:624 CMP #16
    case 0xC27AA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/ko_target.asm:624 CMP #16
    // Overlapping static entry reached from 0xC27AA1.
    case 0xC27AA3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:625 BCC @UNKNOWN37
    case 0xC27AA4: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    case 0xC27AA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27AA6.
    case 0xC27AA8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:627 JSR WAIT
    case 0xC27AA9: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/ko_target.asm:628 LDA #20
    case 0xC27AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:628 LDA #20
    // Overlapping static entry reached from 0xC27AAC.
    case 0xC27AAE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:629 JSL UNKNOWN_C2FAD8
    case 0xC27AAF: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/battle/ko_target.asm:630 LDA #1
    case 0xC27AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:630 LDA #1
    // Overlapping static entry reached from 0xC27AB3.
    case 0xC27AB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:631 STA @VIRTUAL04
    case 0xC27AB6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:632 BRA @UNKNOWN40
    case 0xC27AB8: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    case 0xC27ABA: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:639 LDY #0
    case 0xC27ABC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:639 LDY #0
    // Overlapping static entry reached from 0xC27ABC.
    case 0xC27ABE: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/ko_target.asm:640 TYX
    case 0xC27ABF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/ko_target.asm:642 STX @LOCAL05
    case 0xC27AC0: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:643 LDX @VIRTUAL02
    case 0xC27AC2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:644 LDA a:battler::vram_sprite_index,X
    case 0xC27AC4: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/ko_target.asm:645 AND #$00FF
    case 0xC27AC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:645 AND #$00FF
    // Overlapping static entry reached from 0xC27AC7.
    case 0xC27AC9: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:646 ASL
    case 0xC27ACA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:647 ASL
    case 0xC27ACB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:648 ASL
    case 0xC27ACC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:649 ASL
    case 0xC27ACD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:650 CLC
    case 0xC27ACE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:651 ADC @VIRTUAL04
    case 0xC27ACF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/ko_target.asm:652 LDX @LOCAL05
    case 0xC27AD1: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:653 JSL UNKNOWN_C2FB35
    case 0xC27AD3: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/battle/ko_target.asm:654 INC @VIRTUAL04
    case 0xC27AD7: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:656 LDA @VIRTUAL04
    case 0xC27AD9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:657 CMP #16
    case 0xC27ADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/ko_target.asm:657 CMP #16
    // Overlapping static entry reached from 0xC27ADB.
    case 0xC27ADD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:658 BCC @UNKNOWN39
    case 0xC27ADE: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    case 0xC27AE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    // Overlapping static entry reached from 0xC27AE0.
    case 0xC27AE2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:660 JSR WAIT
    case 0xC27AE3: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/ko_target.asm:661 SEP #PROC_FLAGS::ACCUM8
    case 0xC27AE6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:662 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27AE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    case 0xC27AEA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC27AE8.
    case 0xC27AEB: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:664 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27AEC: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:665 LDX @VIRTUAL02
    case 0xC27AEF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:666 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27AF1: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/ko_target.asm:667 LDX @VIRTUAL02
    case 0xC27AF4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:668 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27AF6: cpu.execute_instruction<0x9E>(0x000022, 3); return true;
    // src/battle/ko_target.asm:669 LDX @VIRTUAL02
    case 0xC27AF9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:670 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC27AFB: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/ko_target.asm:671 LDX @VIRTUAL02
    case 0xC27AFE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:672 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27B00: cpu.execute_instruction<0x9E>(0x000020, 3); return true;
    // src/battle/ko_target.asm:673 LDX @VIRTUAL02
    case 0xC27B03: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:674 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27B05: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:675 LDX @VIRTUAL02
    case 0xC27B08: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:676 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27B0A: cpu.execute_instruction<0x9E>(0x00001E, 3); return true;
    // src/battle/ko_target.asm:677 LDX @VIRTUAL02
    case 0xC27B0D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:678 REP #PROC_FLAGS::ACCUM8
    case 0xC27B0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:679 STZ a:battler::hp_target,X
    case 0xC27B11: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/battle/ko_target.asm:680 LDX @VIRTUAL02
    case 0xC27B14: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:681 LDA a:battler::id,X
    case 0xC27B16: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    case 0xC27B19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27B19.
    case 0xC27B1B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:683 JSL MULT168
    case 0xC27B1C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:684 CLC
    case 0xC27B20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    case 0xC27B21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005A, 2); else cpu.execute_instruction<0x69>(0x00005A, 3); return true;
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    // Overlapping static entry reached from 0xC27B21.
    case 0xC27B23: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:686 TAX
    case 0xC27B24: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:687 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC27B25: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/ko_target.asm:688 AND #$00FF
    case 0xC27B29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:688 AND #$00FF
    // Overlapping static entry reached from 0xC27B29.
    case 0xC27B2B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27B2C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27B2E: cpu.execute_instruction<0x4C>(0x007BED, 3); return true;
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    case 0xC27B31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00A21C, 3); return true;
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    // Overlapping static entry reached from 0xC27B31.
    case 0xC27B33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A0, 2); else cpu.execute_instruction<0xA2>(0x0008A0, 3); return true;
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    case 0xC27B34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27B33.
    case 0xC27B35: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27B34.
    case 0xC27B36: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/ko_target.asm:692 BRA @UNKNOWN44
    case 0xC27B37: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/ko_target.asm:694 LDA a:battler::consciousness,X
    case 0xC27B39: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:695 AND #$00FF
    case 0xC27B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:695 AND #$00FF
    // Overlapping static entry reached from 0xC27B3C.
    case 0xC27B3E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:696 BEQ @UNKNOWN43
    case 0xC27B3F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/ko_target.asm:697 SEP #PROC_FLAGS::ACCUM8
    case 0xC27B41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:698 LDA #1
    case 0xC27B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    case 0xC27B45: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27B43.
    case 0xC27B46: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27B46.
    case 0xC27B47: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/ko_target.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC27B48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:702 TXA
    case 0xC27B4A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:703 CLC
    case 0xC27B4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    case 0xC27B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27B4C.
    case 0xC27B4E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:705 TAX
    case 0xC27B4F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:706 INY
    case 0xC27B50: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    case 0xC27B51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27B51.
    case 0xC27B53: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:709 BCC @UNKNOWN42
    case 0xC27B54: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    case 0xC27B56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    // Overlapping static entry reached from 0xC27B56.
    case 0xC27B58: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:711 JSL PLAY_SOUND
    case 0xC27B59: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/battle/ko_target.asm:712 LDA #10
    case 0xC27B5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:712 LDA #10
    // Overlapping static entry reached from 0xC27B5D.
    case 0xC27B5F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:713 JSL UNKNOWN_C2FAD8
    case 0xC27B60: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/battle/ko_target.asm:714 LDA #1
    case 0xC27B64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:714 LDA #1
    // Overlapping static entry reached from 0xC27B64.
    case 0xC27B66: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:715 STA @VIRTUAL04
    case 0xC27B67: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:716 BRA @UNKNOWN47
    case 0xC27B69: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/ko_target.asm:718 LDA @VIRTUAL04
    case 0xC27B6B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:719 AND #15
    case 0xC27B6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:719 AND #15
    // Overlapping static entry reached from 0xC27B6D.
    case 0xC27B6F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:720 BEQ @UNKNOWN46
    case 0xC27B70: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/ko_target.asm:721 LDA #31
    case 0xC27B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:721 LDA #31
    // Overlapping static entry reached from 0xC27B72.
    case 0xC27B74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:722 STA @LOCAL00
    case 0xC27B75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:723 TAY
    case 0xC27B77: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:724 TAX
    case 0xC27B78: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:725 LDA @VIRTUAL04
    case 0xC27B79: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:726 JSL UNKNOWN_C2FB35
    case 0xC27B7B: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/battle/ko_target.asm:728 INC @VIRTUAL04
    case 0xC27B7F: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:730 LDA @VIRTUAL04
    case 0xC27B81: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:731 CMP #64
    case 0xC27B83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/battle/ko_target.asm:731 CMP #64
    // Overlapping static entry reached from 0xC27B83.
    case 0xC27B85: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:732 BCC @UNKNOWN45
    case 0xC27B86: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    case 0xC27B88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27B88.
    case 0xC27B8A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:734 JSR WAIT
    case 0xC27B8B: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/ko_target.asm:735 LDA #20
    case 0xC27B8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:735 LDA #20
    // Overlapping static entry reached from 0xC27B8E.
    case 0xC27B90: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:736 JSL UNKNOWN_C2FAD8
    case 0xC27B91: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/battle/ko_target.asm:737 LDA #1
    case 0xC27B95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:737 LDA #1
    // Overlapping static entry reached from 0xC27B95.
    case 0xC27B97: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:738 STA @VIRTUAL04
    case 0xC27B98: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:739 BRA @UNKNOWN50
    case 0xC27B9A: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/ko_target.asm:741 LDA @VIRTUAL04
    case 0xC27B9C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:742 AND #15
    case 0xC27B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:742 AND #15
    // Overlapping static entry reached from 0xC27B9E.
    case 0xC27BA0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:743 BEQ @UNKNOWN49
    case 0xC27BA1: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    case 0xC27BA3: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:749 LDY #0
    case 0xC27BA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:749 LDY #0
    // Overlapping static entry reached from 0xC27BA5.
    case 0xC27BA7: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/ko_target.asm:750 TYX
    case 0xC27BA8: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/ko_target.asm:752 LDA @VIRTUAL04
    case 0xC27BA9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:753 JSL UNKNOWN_C2FB35
    case 0xC27BAB: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/battle/ko_target.asm:755 INC @VIRTUAL04
    case 0xC27BAF: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:757 LDA @VIRTUAL04
    case 0xC27BB1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:758 CMP #64
    case 0xC27BB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/battle/ko_target.asm:758 CMP #64
    // Overlapping static entry reached from 0xC27BB3.
    case 0xC27BB5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:759 BCC @UNKNOWN48
    case 0xC27BB6: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/battle/ko_target.asm:760 LDA #20
    case 0xC27BB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:760 LDA #20
    // Overlapping static entry reached from 0xC27BB8.
    case 0xC27BBA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:761 JSR WAIT
    case 0xC27BBB: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC27BBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00A21C, 3); return true;
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC27BBE.
    case 0xC27BC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A0, 2); else cpu.execute_instruction<0xA2>(0x0008A0, 3); return true;
    // src/battle/ko_target.asm:763 LDY #8
    case 0xC27BC1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27BC0.
    case 0xC27BC2: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27BC1.
    case 0xC27BC3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/ko_target.asm:764 BRA @UNKNOWN53
    case 0xC27BC4: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/ko_target.asm:766 LDA a:battler::consciousness,X
    case 0xC27BC6: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:767 AND #$00FF
    case 0xC27BC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:767 AND #$00FF
    // Overlapping static entry reached from 0xC27BC9.
    case 0xC27BCB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:768 BEQ @UNKNOWN52
    case 0xC27BCC: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/ko_target.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC27BCE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:770 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27BD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27BD2: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC27BD0.
    case 0xC27BD3: cpu.execute_instruction<0x1D>(0x00C200, 3); return true;
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    case 0xC27BD5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC27BD3.
    case 0xC27BD6: cpu.execute_instruction<0x20>(0x00188A, 3); return true;
    // src/battle/ko_target.asm:774 TXA
    case 0xC27BD7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:775 CLC
    case 0xC27BD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    case 0xC27BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27BD9.
    case 0xC27BDB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:777 TAX
    case 0xC27BDC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:778 INY
    case 0xC27BDD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    case 0xC27BDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27BDE.
    case 0xC27BE0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:781 BCC @UNKNOWN51
    case 0xC27BE1: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:782 JSL UNKNOWN_C2F8F9
    case 0xC27BE3: cpu.execute_instruction<0x22>(0xC2F8F9, 4); return true;
    // src/battle/ko_target.asm:783 LDA #2
    case 0xC27BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:783 LDA #2
    // Overlapping static entry reached from 0xC27BE7.
    case 0xC27BE9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/ko_target.asm:784 STA SPECIAL_DEFEAT
    case 0xC27BEA: cpu.execute_instruction<0x8D>(0x00AA0E, 3); return true;
    // src/battle/ko_target.asm:786 LDX @VIRTUAL02
    case 0xC27BED: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:787 LDA a:battler::npc_id,X
    case 0xC27BEF: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:788 AND #$00FF
    case 0xC27BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:788 AND #$00FF
    // Overlapping static entry reached from 0xC27BF2.
    case 0xC27BF4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC27BF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D5, 2); else cpu.execute_instruction<0xC9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27BF5.
    case 0xC27BF7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27BF8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27BFA: cpu.execute_instruction<0x4C>(0x007C92, 3); return true;
    // src/battle/ko_target.asm:791 LDY #0
    case 0xC27BFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:791 LDY #0
    // Overlapping static entry reached from 0xC27BFD.
    case 0xC27BFF: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/ko_target.asm:792 STY @LOCAL07
    case 0xC27C00: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:793 BRA @UNKNOWN58
    case 0xC27C02: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/battle/ko_target.asm:795 TYA
    case 0xC27C04: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    case 0xC27C05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27C05.
    case 0xC27C07: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:797 JSL MULT168
    case 0xC27C08: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:798 TAX
    case 0xC27C0C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:799 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27C0D: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/ko_target.asm:800 AND #$00FF
    case 0xC27C10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:800 AND #$00FF
    // Overlapping static entry reached from 0xC27C10.
    case 0xC27C12: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:801 BEQ @UNKNOWN57
    case 0xC27C13: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/ko_target.asm:802 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27C15: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/ko_target.asm:803 AND #$00FF
    case 0xC27C18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:803 AND #$00FF
    // Overlapping static entry reached from 0xC27C18.
    case 0xC27C1A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:804 BNE @UNKNOWN57
    case 0xC27C1B: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/battle/ko_target.asm:805 TXA
    case 0xC27C1D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:806 CLC
    case 0xC27C1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27C1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27C1F.
    case 0xC27C21: cpu.execute_instruction<0x9F>(0xBDE8AA, 4); return true;
    // src/battle/ko_target.asm:808 TAX
    case 0xC27C22: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:809 INX
    case 0xC27C23: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:810 LDA __BSS_START__,X ; STATUS_GROUP::PERSISTENT_HARDHEAL
    case 0xC27C24: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:810 LDA __BSS_START__,X ; STATUS_GROUP::PERSISTENT_HARDHEAL
    // Overlapping static entry reached from 0xC27C21.
    case 0xC27C25: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/ko_target.asm:811 AND #$00FF
    case 0xC27C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:811 AND #$00FF
    // Overlapping static entry reached from 0xC27C27.
    case 0xC27C29: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:812 CMP #2
    case 0xC27C2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:812 CMP #2
    // Overlapping static entry reached from 0xC27C2A.
    case 0xC27C2C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:813 BNE @UNKNOWN57
    case 0xC27C2D: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/ko_target.asm:814 SEP #PROC_FLAGS::ACCUM8
    case 0xC27C2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:815 LDA #0
    case 0xC27C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    case 0xC27C33: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC27C31.
    case 0xC27C34: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/ko_target.asm:817 BRA @UNKNOWN61
    case 0xC27C36: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/battle/ko_target.asm:819 LDY @LOCAL07
    case 0xC27C38: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:820 INY
    case 0xC27C3A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:821 STY @LOCAL07
    case 0xC27C3B: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    case 0xC27C3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27C3D.
    case 0xC27C3F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:824 BCC @UNKNOWN56
    case 0xC27C40: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/battle/ko_target.asm:825 BRA @UNKNOWN61
    case 0xC27C42: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/ko_target.asm:827 REP #PROC_FLAGS::ACCUM8
    case 0xC27C44: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:828 TYA
    case 0xC27C46: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    case 0xC27C47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27C47.
    case 0xC27C49: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:830 JSL MULT168
    case 0xC27C4A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/ko_target.asm:831 TAX
    case 0xC27C4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:832 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27C4F: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/ko_target.asm:833 AND #$00FF
    case 0xC27C52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:833 AND #$00FF
    // Overlapping static entry reached from 0xC27C52.
    case 0xC27C54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:834 BEQ @UNKNOWN60
    case 0xC27C55: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/ko_target.asm:835 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27C57: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/ko_target.asm:836 AND #$00FF
    case 0xC27C5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:836 AND #$00FF
    // Overlapping static entry reached from 0xC27C5A.
    case 0xC27C5C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:837 BNE @UNKNOWN60
    case 0xC27C5D: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/battle/ko_target.asm:838 TXA
    case 0xC27C5F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:839 CLC
    case 0xC27C60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27C61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27C61.
    case 0xC27C63: cpu.execute_instruction<0x9F>(0x01BDAA, 4); return true;
    // src/battle/ko_target.asm:841 TAX
    case 0xC27C64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:842 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27C65: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/ko_target.asm:842 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC27C63.
    case 0xC27C67: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/ko_target.asm:843 AND #$00FF
    case 0xC27C68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:843 AND #$00FF
    // Overlapping static entry reached from 0xC27C68.
    case 0xC27C6A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    case 0xC27C6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27C6B.
    case 0xC27C6D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:845 BNE @UNKNOWN60
    case 0xC27C6E: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27C70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x00A180, 3); return true;
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27C70.
    case 0xC27C72: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C72.
    case 0xC27C74: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C73.
    case 0xC27C75: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:848 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC27C76: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/ko_target.asm:849 SEP #PROC_FLAGS::ACCUM8
    case 0xC27C7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:850 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x008DD5, 3); return true;
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27C7E: cpu.execute_instruction<0x8D>(0x00A18F, 3); return true;
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27C7C.
    case 0xC27C7F: cpu.execute_instruction<0x8F>(0x01A9A1, 4); return true;
    // src/battle/ko_target.asm:852 LDA #1
    case 0xC27C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    case 0xC27C83: cpu.execute_instruction<0x8D>(0x00A18D, 3); return true;
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    // Overlapping static entry reached from 0xC27C81.
    case 0xC27C84: cpu.execute_instruction<0x8D>(0x00A4A1, 3); return true;
    // src/battle/ko_target.asm:855 LDY @LOCAL07
    case 0xC27C86: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:855 LDY @LOCAL07
    // Overlapping static entry reached from 0xC27C84.
    case 0xC27C87: cpu.execute_instruction<0x22>(0x2284C8, 4); return true;
    // src/battle/ko_target.asm:856 INY
    case 0xC27C88: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:857 STY @LOCAL07
    case 0xC27C89: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:859 LDY @LOCAL07
    case 0xC27C8B: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    case 0xC27C8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27C8D.
    case 0xC27C8F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:861 BCC @UNKNOWN59
    case 0xC27C90: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // src/battle/ko_target.asm:863 REP #PROC_FLAGS::ACCUM8
    case 0xC27C92: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C95: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_battle_sprite.asm (source_named).
bool execute_battle_load_battle_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battle_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC2EAEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EAEF.
    case 0xC2EAF1: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EAF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:24 TAX
    case 0xC2EAF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:25 STX @LOCAL09
    case 0xC2EAF5: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:26 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EAF7: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/battle/load_battle_sprite.asm:27 ASL
    case 0xC2EAFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:28 TAX
    case 0xC2EAFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:29 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EAFC: cpu.execute_instruction<0xAD>(0x00AAB2, 3); return true;
    // src/battle/load_battle_sprite.asm:30 STA BATTLE_SPRITEMAP_ALLOCATION_COUNTS,X
    case 0xC2EAFF: cpu.execute_instruction<0x9D>(0x00AAB6, 3); return true;
    // src/battle/load_battle_sprite.asm:31 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EB02: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB05: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB09: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EB0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:33 CLC
    case 0xC2EB0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:34 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2EB10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00AAD6, 3); return true;
    // src/battle/load_battle_sprite.asm:34 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2EB10.
    case 0xC2EB12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:35 STA @LOCAL08
    case 0xC2EB13: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:36 LDX @LOCAL09
    case 0xC2EB15: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:37 TXA
    case 0xC2EB17: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:38 DEC
    case 0xC2EB18: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:39 STA @VIRTUAL04
    case 0xC2EB19: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:40 STA @LOCAL09
    case 0xC2EB1B: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:41 LDY #1
    case 0xC2EB1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/load_battle_sprite.asm:41 LDY #1
    // Overlapping static entry reached from 0xC2EB1D.
    case 0xC2EB1F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:42 STY @LOCAL07
    case 0xC2EB20: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:43 TYA
    case 0xC2EB22: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:44 STA @VIRTUAL02
    case 0xC2EB23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:45 STA @LOCAL06
    case 0xC2EB25: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:46 LDX #0
    case 0xC2EB27: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:46 LDX #0
    // Overlapping static entry reached from 0xC2EB27.
    case 0xC2EB29: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battle_sprite.asm:47 STX @LOCAL05
    case 0xC2EB2A: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:48 JMP @UNKNOWN1
    case 0xC2EB2C: cpu.execute_instruction<0x4C>(0x00EBC4, 3); return true;
    // src/battle/load_battle_sprite.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB2F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:51 TXA
    case 0xC2EB31: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB32: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EB36: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:53 STA @LOCAL04
    case 0xC2EB38: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:54 TAY
    case 0xC2EB3A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB3B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:56 LDA #224
    case 0xC2EB3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0091E0, 3); return true;
    // src/battle/load_battle_sprite.asm:57 STA (@LOCAL08),Y ;spritemap::y_offset
    case 0xC2EB3F: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:57 STA (@LOCAL08),Y ;spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB3D.
    case 0xC2EB40: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/battle/load_battle_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB41: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EB40.
    case 0xC2EB42: cpu.execute_instruction<0x20>(0x00B1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x00F8B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EB43.
    case 0xC2EB45: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB46: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EB48.
    case 0xC2EB4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EB4B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:60 LDA @LOCAL04
    case 0xC2EB4D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:61 TAY
    case 0xC2EB4F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:62 INY
    case 0xC2EB50: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:63 TXA
    case 0xC2EB51: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:64 CLC
    case 0xC2EB52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:65 ADC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EB53: cpu.execute_instruction<0x6D>(0x00AAB2, 3); return true;
    // src/battle/load_battle_sprite.asm:66 ASL
    case 0xC2EB56: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:67 PHA
    case 0xC2EB57: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB58: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB5A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB5C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EB5E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battle_sprite.asm:69 PLA
    case 0xC2EB60: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:70 CLC
    case 0xC2EB61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:71 ADC @VIRTUAL0A
    case 0xC2EB62: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:72 STA @VIRTUAL0A
    case 0xC2EB64: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:74 LDA [@VIRTUAL0A]
    case 0xC2EB68: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:75 STA (@LOCAL08),Y ;spritemap::tile
    case 0xC2EB6A: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:76 LDA #8
    case 0xC2EB6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x004808, 3); return true;
    // src/battle/load_battle_sprite.asm:77 PHA
    case 0xC2EB6E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB6F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:79 TXA
    case 0xC2EB71: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:80 CLC
    case 0xC2EB72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:81 ADC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EB73: cpu.execute_instruction<0x6D>(0x00AAB2, 3); return true;
    // src/battle/load_battle_sprite.asm:82 ASL
    case 0xC2EB76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:83 CLC
    case 0xC2EB77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:84 ADC @VIRTUAL06
    case 0xC2EB78: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:85 STA @VIRTUAL06
    case 0xC2EB7A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:86 LDA [@VIRTUAL06]
    case 0xC2EB7C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:87 SEP #PROC_FLAGS::INDEX8
    case 0xC2EB7E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/load_battle_sprite.asm:88 PLY
    case 0xC2EB80: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:89 JSL ASR8_UNKNOWN1
    case 0xC2EB81: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/battle/load_battle_sprite.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:91 STA @VIRTUAL00
    case 0xC2EB87: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:92 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EB89: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/battle/load_battle_sprite.asm:93 ASL
    case 0xC2EB8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:94 CLC
    case 0xC2EB8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:95 ADC @VIRTUAL00
    case 0xC2EB8E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:96 CLC
    case 0xC2EB90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:97 ADC #32
    case 0xC2EB91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x004820, 3); return true;
    // src/battle/load_battle_sprite.asm:98 PHA
    case 0xC2EB93: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2EB94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:100 LDA @LOCAL04
    case 0xC2EB96: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:101 REP #PROC_FLAGS::INDEX8
    case 0xC2EB98: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/load_battle_sprite.asm:102 TAY
    case 0xC2EB9A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:103 INY
    case 0xC2EB9B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:104 INY
    case 0xC2EB9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB9D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:106 PLA
    case 0xC2EB9F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:107 STA (@LOCAL08),Y ;spritemap::flags
    case 0xC2EBA0: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC2EBA2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:109 LDA @LOCAL04
    case 0xC2EBA4: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:110 TAY
    case 0xC2EBA6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:111 INY
    case 0xC2EBA7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:112 INY
    case 0xC2EBA8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:113 INY
    case 0xC2EBA9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:114 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EBAA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:115 LDA #240
    case 0xC2EBAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0091F0, 3); return true;
    // src/battle/load_battle_sprite.asm:116 STA (@LOCAL08),Y ;;spritemap::x_offset
    case 0xC2EBAE: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:116 STA (@LOCAL08),Y ;;spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBAC.
    case 0xC2EBAF: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/battle/load_battle_sprite.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2EBB0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:117 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EBAF.
    case 0xC2EBB1: cpu.execute_instruction<0x20>(0x001EA5, 3); return true;
    // src/battle/load_battle_sprite.asm:118 LDA @LOCAL04
    case 0xC2EBB2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:119 TAY
    case 0xC2EBB4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:120 INY
    case 0xC2EBB5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:121 INY
    case 0xC2EBB6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:122 INY
    case 0xC2EBB7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:123 INY
    case 0xC2EBB8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EBB9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:125 LDA #1
    case 0xC2EBBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009101, 3); return true;
    // src/battle/load_battle_sprite.asm:126 STA (@LOCAL08),Y ;spritemap::special_flags
    case 0xC2EBBD: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:126 STA (@LOCAL08),Y ;spritemap::special_flags
    // Overlapping static entry reached from 0xC2EBBB.
    case 0xC2EBBE: cpu.execute_instruction<0x26>(0x0000A6, 2); return true;
    // src/battle/load_battle_sprite.asm:127 LDX @LOCAL05
    case 0xC2EBBF: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:127 LDX @LOCAL05
    // Overlapping static entry reached from 0xC2EBBE.
    case 0xC2EBC0: cpu.execute_instruction<0x20>(0x0086E8, 3); return true;
    // src/battle/load_battle_sprite.asm:128 INX
    case 0xC2EBC1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:129 STX @LOCAL05
    case 0xC2EBC2: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:129 STX @LOCAL05
    // Overlapping static entry reached from 0xC2EBC0.
    case 0xC2EBC3: cpu.execute_instruction<0x20>(0x0010E0, 3); return true;
    // src/battle/load_battle_sprite.asm:131 CPX #16
    case 0xC2EBC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/load_battle_sprite.asm:131 CPX #16
    // Overlapping static entry reached from 0xC2EBC4.
    case 0xC2EBC6: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EBC7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EBC9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EBCB: cpu.execute_instruction<0x4C>(0x00EB2F, 3); return true;
    // src/battle/load_battle_sprite.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC2EBCE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:134 LDA @LOCAL09
    case 0xC2EBD0: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:135 STA @VIRTUAL04
    case 0xC2EBD2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EBD8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:137 TAX
    case 0xC2EBDA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:138 INX
    case 0xC2EBDB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:139 INX
    case 0xC2EBDC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:140 INX
    case 0xC2EBDD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:141 INX
    case 0xC2EBDE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:142 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2EBDF: cpu.execute_instruction<0xBF>(0xCE62EE, 4); return true;
    // src/battle/load_battle_sprite.asm:143 AND #$00FF
    case 0xC2EBE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battle_sprite.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC2EBE3.
    case 0xC2EBE5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/load_battle_sprite.asm:144 CMP #2
    case 0xC2EBE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:144 CMP #2
    // Overlapping static entry reached from 0xC2EBE6.
    case 0xC2EBE8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:145 BEQ @UNKNOWN4
    case 0xC2EBE9: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/load_battle_sprite.asm:146 CMP #3
    case 0xC2EBEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:146 CMP #3
    // Overlapping static entry reached from 0xC2EBEB.
    case 0xC2EBED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:147 BEQ @UNKNOWN5
    case 0xC2EBEE: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/load_battle_sprite.asm:148 CMP #4
    case 0xC2EBF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:148 CMP #4
    // Overlapping static entry reached from 0xC2EBF0.
    case 0xC2EBF2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:149 BEQ @UNKNOWN6
    case 0xC2EBF3: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/load_battle_sprite.asm:150 CMP #5
    case 0xC2EBF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:150 CMP #5
    // Overlapping static entry reached from 0xC2EBF5.
    case 0xC2EBF7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:151 BEQ @UNKNOWN7
    case 0xC2EBF8: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/battle/load_battle_sprite.asm:152 CMP #6
    case 0xC2EBFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/load_battle_sprite.asm:152 CMP #6
    // Overlapping static entry reached from 0xC2EBFA.
    case 0xC2EBFC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battle_sprite.asm:153 BEQL @UNKNOWN8
    case 0xC2EBFD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:153 BEQL @UNKNOWN8
    case 0xC2EBFF: cpu.execute_instruction<0x4C>(0x00ECAE, 3); return true;
    // src/battle/load_battle_sprite.asm:154 JMP @UNKNOWN9
    case 0xC2EC02: cpu.execute_instruction<0x4C>(0x00ED4B, 3); return true;
    // src/battle/load_battle_sprite.asm:156 LDA #2
    case 0xC2EC05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:156 LDA #2
    // Overlapping static entry reached from 0xC2EC05.
    case 0xC2EC07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battle_sprite.asm:157 STA @VIRTUAL02
    case 0xC2EC08: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:158 STA @LOCAL06
    case 0xC2EC0A: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:160 LDA #224
    case 0xC2EC0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    case 0xC2EC10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC0E.
    case 0xC2EC11: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC10.
    case 0xC2EC12: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:162 STA (@LOCAL08),Y
    case 0xC2EC13: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:163 LDX @LOCAL08
    case 0xC2EC15: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:164 STZ a:0 + (.SIZEOF(spritemap) * 1) + spritemap::x_offset,X ;not sure why the +0 is necessary here
    case 0xC2EC17: cpu.execute_instruction<0x9E>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:165 JMP @UNKNOWN9
    case 0xC2EC1A: cpu.execute_instruction<0x4C>(0x00ED4B, 3); return true;
    // src/battle/load_battle_sprite.asm:167 LDY #2
    case 0xC2EC1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:167 LDY #2
    // Overlapping static entry reached from 0xC2EC1D.
    case 0xC2EC1F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:168 STY @LOCAL07
    case 0xC2EC20: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:170 LDA #192
    case 0xC2EC24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0092C0, 3); return true;
    // src/battle/load_battle_sprite.asm:171 STA (@LOCAL08) ;spritemap::y_offset
    case 0xC2EC26: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:171 STA (@LOCAL08) ;spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC24.
    case 0xC2EC27: cpu.execute_instruction<0x26>(0x00004C, 2); return true;
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    case 0xC2EC28: cpu.execute_instruction<0x4C>(0x00ED4B, 3); return true;
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    // Overlapping static entry reached from 0xC2EC27.
    case 0xC2EC29: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    // Overlapping static entry reached from 0xC2EC29.
    case 0xC2EC2A: cpu.execute_instruction<0xED>(0x0002A0, 3); return true;
    // src/battle/load_battle_sprite.asm:174 LDY #2
    case 0xC2EC2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:174 LDY #2
    // Overlapping static entry reached from 0xC2EC2B.
    case 0xC2EC2D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:175 STY @LOCAL07
    case 0xC2EC2E: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:176 STY @VIRTUAL02
    case 0xC2EC30: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:177 LDA @VIRTUAL02
    case 0xC2EC32: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:178 STA @LOCAL06
    case 0xC2EC34: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:179 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC36: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:180 LDA #192
    case 0xC2EC38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00A0C0, 3); return true;
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EC3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC38.
    case 0xC2EC3B: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC3A.
    case 0xC2EC3C: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:182 STA (@LOCAL08),Y
    case 0xC2EC3D: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:183 STA (@LOCAL08) ;spritemap::y_offset
    case 0xC2EC3F: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:184 LDA #224
    case 0xC2EC41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    case 0xC2EC43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC41.
    case 0xC2EC44: cpu.execute_instruction<0x0D>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC43.
    case 0xC2EC45: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:186 STA (@LOCAL08),Y
    case 0xC2EC46: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:186 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC44.
    case 0xC2EC47: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EC48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC47.
    case 0xC2EC49: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC48.
    case 0xC2EC4A: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:188 STA (@LOCAL08),Y
    case 0xC2EC4B: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:189 LDA #0
    case 0xC2EC4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A000, 3); return true;
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2EC4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC4D.
    case 0xC2EC50: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC4F.
    case 0xC2EC51: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:191 STA (@LOCAL08),Y
    case 0xC2EC52: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:192 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EC54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:192 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC54.
    case 0xC2EC56: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:193 STA (@LOCAL08),Y
    case 0xC2EC57: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:194 JMP @UNKNOWN9
    case 0xC2EC59: cpu.execute_instruction<0x4C>(0x00ED4B, 3); return true;
    // src/battle/load_battle_sprite.asm:197 LDA #4
    case 0xC2EC5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:197 LDA #4
    // Overlapping static entry reached from 0xC2EC5C.
    case 0xC2EC5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battle_sprite.asm:198 STA @VIRTUAL02
    case 0xC2EC5F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:199 STA @LOCAL06
    case 0xC2EC61: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:200 LDY #2
    case 0xC2EC63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:200 LDY #2
    // Overlapping static entry reached from 0xC2EC63.
    case 0xC2EC65: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:201 STY @LOCAL07
    case 0xC2EC66: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC68: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:203 LDA #192
    case 0xC2EC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00A0C0, 3); return true;
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    case 0xC2EC6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC6A.
    case 0xC2EC6D: cpu.execute_instruction<0x0F>(0x269100, 4); return true;
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC6C.
    case 0xC2EC6E: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:205 STA (@LOCAL08),Y
    case 0xC2EC6F: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:206 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    case 0xC2EC71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/load_battle_sprite.asm:206 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC71.
    case 0xC2EC73: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:207 STA (@LOCAL08),Y
    case 0xC2EC74: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:208 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EC76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:208 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EC76.
    case 0xC2EC78: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:209 STA (@LOCAL08),Y
    case 0xC2EC79: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:210 STA (@LOCAL08) ;(.SIZEOF(spritemap) * 0) + spritemap::y_offset
    case 0xC2EC7B: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:211 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    case 0xC2EC7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000017, 2); else cpu.execute_instruction<0xA0>(0x000017, 3); return true;
    // src/battle/load_battle_sprite.asm:211 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC7D.
    case 0xC2EC7F: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:212 STA (@LOCAL08),Y
    case 0xC2EC80: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:213 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EC82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:213 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC82.
    case 0xC2EC84: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:214 STA (@LOCAL08),Y
    case 0xC2EC85: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:215 LDA #224
    case 0xC2EC87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    case 0xC2EC89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC87.
    case 0xC2EC8A: cpu.execute_instruction<0x1C>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC89.
    case 0xC2EC8B: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:217 STA (@LOCAL08),Y
    case 0xC2EC8C: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:217 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC8A.
    case 0xC2EC8D: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EC8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC8D.
    case 0xC2EC8F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC8E.
    case 0xC2EC90: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:219 STA (@LOCAL08),Y
    case 0xC2EC91: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:220 LDA #0
    case 0xC2EC93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A000, 3); return true;
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    case 0xC2EC95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000021, 2); else cpu.execute_instruction<0xA0>(0x000021, 3); return true;
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC93.
    case 0xC2EC96: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC95.
    case 0xC2EC97: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:222 STA (@LOCAL08),Y
    case 0xC2EC98: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:223 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    case 0xC2EC9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/battle/load_battle_sprite.asm:223 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC9A.
    case 0xC2EC9C: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:224 STA (@LOCAL08),Y
    case 0xC2EC9D: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:225 LDA #32
    case 0xC2EC9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00A020, 3); return true;
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    case 0xC2ECA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x000026, 3); return true;
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC9F.
    case 0xC2ECA2: cpu.execute_instruction<0x26>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECA1.
    case 0xC2ECA3: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:227 STA (@LOCAL08),Y
    case 0xC2ECA4: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:228 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2ECA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/load_battle_sprite.asm:228 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECA6.
    case 0xC2ECA8: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:229 STA (@LOCAL08),Y
    case 0xC2ECA9: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:230 JMP @UNKNOWN9
    case 0xC2ECAB: cpu.execute_instruction<0x4C>(0x00ED4B, 3); return true;
    // src/battle/load_battle_sprite.asm:232 LDY #4
    case 0xC2ECAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:232 LDY #4
    // Overlapping static entry reached from 0xC2ECAE.
    case 0xC2ECB0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:233 STY @LOCAL07
    case 0xC2ECB1: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:234 TYA
    case 0xC2ECB3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:235 STA @VIRTUAL02
    case 0xC2ECB4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:236 STA @LOCAL06
    case 0xC2ECB6: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ECB8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:238 LDA #160
    case 0xC2ECBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x00A0A0, 3); return true;
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    case 0xC2ECBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECBA.
    case 0xC2ECBD: cpu.execute_instruction<0x0F>(0x269100, 4); return true;
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECBC.
    case 0xC2ECBE: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:240 STA (@LOCAL08),Y
    case 0xC2ECBF: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:241 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    case 0xC2ECC1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/load_battle_sprite.asm:241 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECC1.
    case 0xC2ECC3: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:242 STA (@LOCAL08),Y
    case 0xC2ECC4: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:243 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2ECC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:243 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECC6.
    case 0xC2ECC8: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:244 STA (@LOCAL08),Y
    case 0xC2ECC9: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:245 STA (@LOCAL08) ;(.SIZEOF(spritemap) * 0) + spritemap::y_offset
    case 0xC2ECCB: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:246 LDA #192
    case 0xC2ECCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00A0C0, 3); return true;
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    case 0xC2ECCF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000023, 2); else cpu.execute_instruction<0xA0>(0x000023, 3); return true;
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECCD.
    case 0xC2ECD0: cpu.execute_instruction<0x23>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECCF.
    case 0xC2ECD1: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:248 STA (@LOCAL08),Y
    case 0xC2ECD2: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:249 LDY #(.SIZEOF(spritemap) * 6) + spritemap::y_offset
    case 0xC2ECD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00001E, 3); return true;
    // src/battle/load_battle_sprite.asm:249 LDY #(.SIZEOF(spritemap) * 6) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECD4.
    case 0xC2ECD6: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:250 STA (@LOCAL08),Y
    case 0xC2ECD7: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:251 LDY #(.SIZEOF(spritemap) * 5) + spritemap::y_offset
    case 0xC2ECD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000019, 2); else cpu.execute_instruction<0xA0>(0x000019, 3); return true;
    // src/battle/load_battle_sprite.asm:251 LDY #(.SIZEOF(spritemap) * 5) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECD9.
    case 0xC2ECDB: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:252 STA (@LOCAL08),Y
    case 0xC2ECDC: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:253 LDY #(.SIZEOF(spritemap) * 4) + spritemap::y_offset
    case 0xC2ECDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000014, 2); else cpu.execute_instruction<0xA0>(0x000014, 3); return true;
    // src/battle/load_battle_sprite.asm:253 LDY #(.SIZEOF(spritemap) * 4) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2ECDE.
    case 0xC2ECE0: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:254 STA (@LOCAL08),Y
    case 0xC2ECE1: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:255 LDX @LOCAL08
    case 0xC2ECE3: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:256 STZ a:0 + (.SIZEOF(spritemap) * 15) + spritemap::y_offset,X
    case 0xC2ECE5: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/load_battle_sprite.asm:257 LDX @LOCAL08
    case 0xC2ECE8: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:258 STZ a:0 + (.SIZEOF(spritemap) * 14) + spritemap::y_offset,X
    case 0xC2ECEA: cpu.execute_instruction<0x9E>(0x000046, 3); return true;
    // src/battle/load_battle_sprite.asm:259 LDX @LOCAL08
    case 0xC2ECED: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:260 STZ a:0 + (.SIZEOF(spritemap) * 13) + spritemap::y_offset,X
    case 0xC2ECEF: cpu.execute_instruction<0x9E>(0x000041, 3); return true;
    // src/battle/load_battle_sprite.asm:261 LDX @LOCAL08
    case 0xC2ECF2: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:262 STZ a:0 + (.SIZEOF(spritemap) * 12) + spritemap::y_offset,X
    case 0xC2ECF4: cpu.execute_instruction<0x9E>(0x00003C, 3); return true;
    // src/battle/load_battle_sprite.asm:263 LDY #(.SIZEOF(spritemap) * 12) + spritemap::x_offset
    case 0xC2ECF7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003F, 2); else cpu.execute_instruction<0xA0>(0x00003F, 3); return true;
    // src/battle/load_battle_sprite.asm:263 LDY #(.SIZEOF(spritemap) * 12) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECF7.
    case 0xC2ECF9: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:264 STA (@LOCAL08),Y
    case 0xC2ECFA: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:265 LDY #(.SIZEOF(spritemap) * 8) + spritemap::x_offset
    case 0xC2ECFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/battle/load_battle_sprite.asm:265 LDY #(.SIZEOF(spritemap) * 8) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ECFC.
    case 0xC2ECFE: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:266 STA (@LOCAL08),Y
    case 0xC2ECFF: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:267 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    case 0xC2ED01: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000017, 2); else cpu.execute_instruction<0xA0>(0x000017, 3); return true;
    // src/battle/load_battle_sprite.asm:267 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED01.
    case 0xC2ED03: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:268 STA (@LOCAL08),Y
    case 0xC2ED04: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:269 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2ED06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:269 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED06.
    case 0xC2ED08: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:270 STA (@LOCAL08),Y
    case 0xC2ED09: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:271 LDA #224
    case 0xC2ED0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    case 0xC2ED0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED0B.
    case 0xC2ED0E: cpu.execute_instruction<0x44>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED0D.
    case 0xC2ED0F: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:273 STA (@LOCAL08),Y
    case 0xC2ED10: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:273 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2ED0E.
    case 0xC2ED11: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    case 0xC2ED12: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000030, 2); else cpu.execute_instruction<0xA0>(0x000030, 3); return true;
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED11.
    case 0xC2ED13: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED12.
    case 0xC2ED14: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:275 STA (@LOCAL08),Y
    case 0xC2ED15: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:276 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    case 0xC2ED17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/battle/load_battle_sprite.asm:276 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED17.
    case 0xC2ED19: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:277 STA (@LOCAL08),Y
    case 0xC2ED1A: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:278 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2ED1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:278 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED1C.
    case 0xC2ED1E: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:279 STA (@LOCAL08),Y
    case 0xC2ED1F: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:280 LDX @LOCAL08
    case 0xC2ED21: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:281 STZ a:0 + (.SIZEOF(spritemap) * 14) + spritemap::x_offset,X
    case 0xC2ED23: cpu.execute_instruction<0x9E>(0x000049, 3); return true;
    // src/battle/load_battle_sprite.asm:282 LDX @LOCAL08
    case 0xC2ED26: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:283 STZ a:0 + (.SIZEOF(spritemap) * 10) + spritemap::x_offset,X
    case 0xC2ED28: cpu.execute_instruction<0x9E>(0x000035, 3); return true;
    // src/battle/load_battle_sprite.asm:284 LDX @LOCAL08
    case 0xC2ED2B: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:285 STZ a:0 + (.SIZEOF(spritemap) * 6) + spritemap::x_offset,X
    case 0xC2ED2D: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/load_battle_sprite.asm:286 LDX @LOCAL08
    case 0xC2ED30: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:287 STZ a:0 + (.SIZEOF(spritemap) * 2) + spritemap::x_offset,X
    case 0xC2ED32: cpu.execute_instruction<0x9E>(0x00000D, 3); return true;
    // src/battle/load_battle_sprite.asm:288 LDA #32
    case 0xC2ED35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00A020, 3); return true;
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    case 0xC2ED37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED35.
    case 0xC2ED38: cpu.execute_instruction<0x4E>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED37.
    case 0xC2ED39: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:290 STA (@LOCAL08),Y
    case 0xC2ED3A: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:290 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2ED38.
    case 0xC2ED3B: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    case 0xC2ED3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003A, 2); else cpu.execute_instruction<0xA0>(0x00003A, 3); return true;
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED3B.
    case 0xC2ED3D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED3C.
    case 0xC2ED3E: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:292 STA (@LOCAL08),Y
    case 0xC2ED3F: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:293 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    case 0xC2ED41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x000026, 3); return true;
    // src/battle/load_battle_sprite.asm:293 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED41.
    case 0xC2ED43: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:294 STA (@LOCAL08),Y
    case 0xC2ED44: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:295 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2ED46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/load_battle_sprite.asm:295 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2ED46.
    case 0xC2ED48: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:296 STA (@LOCAL08),Y
    case 0xC2ED49: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:298 LDY @LOCAL07
    case 0xC2ED4B: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:299 REP #PROC_FLAGS::ACCUM8
    case 0xC2ED4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:300 LDA @VIRTUAL02
    case 0xC2ED4F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:301 JSL MULT16
    case 0xC2ED51: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED55: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED59: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:303 TAY
    case 0xC2ED5B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:304 DEY
    case 0xC2ED5C: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ED5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:306 LDA #$81
    case 0xC2ED5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x009181, 3); return true;
    // src/battle/load_battle_sprite.asm:307 STA (@LOCAL08),Y
    case 0xC2ED61: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:307 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2ED5F.
    case 0xC2ED62: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/battle/load_battle_sprite.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2ED63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:308 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2ED62.
    case 0xC2ED64: cpu.execute_instruction<0x20>(0x00B4AD, 3); return true;
    // src/battle/load_battle_sprite.asm:309 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ED65: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/battle/load_battle_sprite.asm:309 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2ED64.
    case 0xC2ED67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED68: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ED71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:311 STA @LOCAL04
    case 0xC2ED72: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:312 LDA #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2ED74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00AC16, 3); return true;
    // src/battle/load_battle_sprite.asm:312 LDA #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2ED74.
    case 0xC2ED76: cpu.execute_instruction<0xAC>(0x002685, 3); return true;
    // src/battle/load_battle_sprite.asm:313 STA @LOCAL20ALT2
    case 0xC2ED77: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:314 LDA @LOCAL04
    case 0xC2ED79: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:315 CLC
    case 0xC2ED7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:316 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2ED7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00AAD6, 3); return true;
    // src/battle/load_battle_sprite.asm:316 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2ED7C.
    case 0xC2ED7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED81: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED82: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED84: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED85: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ED87: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battle_sprite.asm:318 REP #PROC_FLAGS::ACCUM8
    case 0xC2ED89: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED8B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED8D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED8F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ED91: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battle_sprite.asm:320 LDX #80
    case 0xC2ED93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000050, 2); else cpu.execute_instruction<0xA2>(0x000050, 3); return true;
    // src/battle/load_battle_sprite.asm:320 LDX #80
    // Overlapping static entry reached from 0xC2ED93.
    case 0xC2ED95: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/load_battle_sprite.asm:321 LDA @LOCAL04
    case 0xC2ED96: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:322 CLC
    case 0xC2ED98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:323 ADC @LOCAL20ALT2
    case 0xC2ED99: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:324 JSL MEMCPY16
    case 0xC2ED9B: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battle_sprite.asm:325 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ED9F: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EDAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:327 CLC
    case 0xC2EDAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:328 ADC @LOCAL20ALT2
    case 0xC2EDAD: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:329 STA @LOCAL04
    case 0xC2EDAF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:330 LDX #0
    case 0xC2EDB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:330 LDX #0
    // Overlapping static entry reached from 0xC2EDB1.
    case 0xC2EDB3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/load_battle_sprite.asm:331 BRA @UNKNOWN11
    case 0xC2EDB4: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:333 REP #PROC_FLAGS::ACCUM8
    case 0xC2EDB6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:334 TXA
    case 0xC2EDB8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDB9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EDBD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:336 STA @VIRTUAL02
    case 0xC2EDBF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:337 INC @VIRTUAL02
    case 0xC2EDC1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:338 INC @VIRTUAL02
    case 0xC2EDC3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:339 LDA @LOCAL04
    case 0xC2EDC5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:340 CLC
    case 0xC2EDC7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:341 ADC @VIRTUAL02
    case 0xC2EDC8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:342 STA @LOCAL05
    case 0xC2EDCA: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EDCC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:344 LDA (@LOCAL05)
    case 0xC2EDCE: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:345 CLC
    case 0xC2EDD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:346 ADC #8
    case 0xC2EDD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x009208, 3); return true;
    // src/battle/load_battle_sprite.asm:347 STA (@LOCAL05)
    case 0xC2EDD3: cpu.execute_instruction<0x92>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:347 STA (@LOCAL05)
    // Overlapping static entry reached from 0xC2EDD1.
    case 0xC2EDD4: cpu.execute_instruction<0x20>(0x00E0E8, 3); return true;
    // src/battle/load_battle_sprite.asm:348 INX
    case 0xC2EDD5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:350 CPX #16
    case 0xC2EDD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/load_battle_sprite.asm:350 CPX #16
    // Overlapping static entry reached from 0xC2EDD4.
    case 0xC2EDD7: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:350 CPX #16
    // Overlapping static entry reached from 0xC2EDD6.
    case 0xC2EDD8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/load_battle_sprite.asm:351 BCC @UNKNOWN10
    case 0xC2EDD9: cpu.execute_instruction<0x90>(0x0000DB, 2); return true;
    // src/battle/load_battle_sprite.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2EDDB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:353 LDA @LOCAL06
    case 0xC2EDDD: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:354 STA @VIRTUAL02
    case 0xC2EDDF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:355 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EDE1: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/battle/load_battle_sprite.asm:356 ASL
    case 0xC2EDE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:357 TAX
    case 0xC2EDE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:358 LDA @VIRTUAL02
    case 0xC2EDE6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:359 STA CURRENT_BATTLE_SPRITE_WIDTHS,X
    case 0xC2EDE8: cpu.execute_instruction<0x9D>(0x00AAC6, 3); return true;
    // src/battle/load_battle_sprite.asm:360 LDY @LOCAL07
    case 0xC2EDEB: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:361 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EDED: cpu.execute_instruction<0xAD>(0x00AAB4, 3); return true;
    // src/battle/load_battle_sprite.asm:362 ASL
    case 0xC2EDF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:363 TAX
    case 0xC2EDF1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:364 TYA
    case 0xC2EDF2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:365 STA CURRENT_BATTLE_SPRITE_HEIGHTS,X
    case 0xC2EDF3: cpu.execute_instruction<0x9D>(0x00AACE, 3); return true;
    // src/battle/load_battle_sprite.asm:366 INC CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EDF6: cpu.execute_instruction<0xEE>(0x00AAB4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EDF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EDF9.
    case 0xC2EDFB: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EDFC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EDFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EDFE.
    case 0xC2EE00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2EE01: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE03: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE05: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE07: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE09: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0062EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE0B.
    case 0xC2EE0D: cpu.execute_instruction<0x62>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE0E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE10.
    case 0xC2EE12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:372 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL0A
    case 0xC2EE13: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battle_sprite.asm:374 LDA @LOCAL09
    case 0xC2EE15: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:375 STA @VIRTUAL04
    case 0xC2EE17: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE19: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EE1D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:377 CLC
    case 0xC2EE1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:384 ADC @VIRTUAL0A
    case 0xC2EE20: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:385 STA @VIRTUAL0A
    case 0xC2EE22: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EE24.
    case 0xC2EE26: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE27: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE29: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:386 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE2E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE30: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE32: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE34: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:387 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2EE36: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE38: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE3A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE3C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE3E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE40: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE42: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE44: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2EE46: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battle_sprite.asm:391 JSL DECOMP
    case 0xC2EE48: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE4C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE4E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE50: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EE52: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/load_battle_sprite.asm:393 LDY @LOCAL07
    case 0xC2EE54: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:394 LDA @VIRTUAL02
    case 0xC2EE56: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:395 JSL MULT16
    case 0xC2EE58: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/battle/load_battle_sprite.asm:396 TAY
    case 0xC2EE5C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:397 JMP @UNKNOWN17
    case 0xC2EE5D: cpu.execute_instruction<0x4C>(0x00EEDB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE60.
    case 0xC2EE62: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE63: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2EE65.
    case 0xC2EE67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2EE68: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battle_sprite.asm:400 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EE6A: cpu.execute_instruction<0xAD>(0x00AAB2, 3); return true;
    // src/battle/load_battle_sprite.asm:401 ASL
    case 0xC2EE6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:402 TAX
    case 0xC2EE6E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:403 LDA f:UNKNOWN_C3F871,X
    case 0xC2EE6F: cpu.execute_instruction<0xBF>(0xC3F871, 4); return true;
    // src/battle/load_battle_sprite.asm:404 CLC
    case 0xC2EE73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:405 ADC @VIRTUAL0A
    case 0xC2EE74: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:406 STA @VIRTUAL0A
    case 0xC2EE76: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:407 INC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EE78: cpu.execute_instruction<0xEE>(0x00AAB2, 3); return true;
    // src/battle/load_battle_sprite.asm:408 LDA #0
    case 0xC2EE7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:408 LDA #0
    // Overlapping static entry reached from 0xC2EE7B.
    case 0xC2EE7D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battle_sprite.asm:409 STA @LOCAL20ALT
    case 0xC2EE7E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:410 BRA @UNKNOWN16
    case 0xC2EE80: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE82: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE84: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE86: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EE88: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE8A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE8C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE8E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EE90: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battle_sprite.asm:414 LDX #0
    case 0xC2EE92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:414 LDX #0
    // Overlapping static entry reached from 0xC2EE92.
    case 0xC2EE94: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/load_battle_sprite.asm:415 BRA @UNKNOWN15
    case 0xC2EE95: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/battle/load_battle_sprite.asm:417 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EE97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:418 LDA [@LOCAL03]
    case 0xC2EE99: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/battle/load_battle_sprite.asm:419 STA [@VIRTUAL06]
    case 0xC2EE9B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:420 REP #PROC_FLAGS::ACCUM8
    case 0xC2EE9D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EE9F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EEA1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EEA3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EEA5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:422 INC @VIRTUAL06
    case 0xC2EEA7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEA9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEAB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEAD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EEAF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EEB7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:425 INC @VIRTUAL06
    case 0xC2EEB9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEBB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEBD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEBF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EEC1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battle_sprite.asm:427 INX
    case 0xC2EEC3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:429 CPX #$0080
    case 0xC2EEC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/battle/load_battle_sprite.asm:429 CPX #$0080
    // Overlapping static entry reached from 0xC2EEC4.
    case 0xC2EEC6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/load_battle_sprite.asm:430 BCC @UNKNOWN14
    case 0xC2EEC7: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/battle/load_battle_sprite.asm:431 LDA #$0200
    case 0xC2EEC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/battle/load_battle_sprite.asm:431 LDA #$0200
    // Overlapping static entry reached from 0xC2EEC9.
    case 0xC2EECB: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/load_battle_sprite.asm:432 CLC
    case 0xC2EECC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:433 ADC @VIRTUAL0A
    case 0xC2EECD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:434 STA @VIRTUAL0A
    case 0xC2EECF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:435 LDA @LOCAL20ALT
    case 0xC2EED1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:436 INC
    case 0xC2EED3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:437 STA @LOCAL20ALT
    case 0xC2EED4: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:439 CMP #4
    case 0xC2EED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:439 CMP #4
    // Overlapping static entry reached from 0xC2EED6.
    case 0xC2EED8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/load_battle_sprite.asm:440 BCC @UNKNOWN13
    case 0xC2EED9: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // src/battle/load_battle_sprite.asm:442 TYX
    case 0xC2EEDB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:443 DEY
    case 0xC2EEDC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:444 CPX #0
    case 0xC2EEDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:444 CPX #0
    // Overlapping static entry reached from 0xC2EEDD.
    case 0xC2EEDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battle_sprite.asm:445 BNEL @UNKNOWN12
    case 0xC2EEE0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:445 BNEL @UNKNOWN12
    case 0xC2EEE2: cpu.execute_instruction<0x4C>(0x00EE60, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battle_sprite.asm:446 END_C_FUNCTION
    case 0xC2EEE5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/load_battle_sprite.asm:446 END_C_FUNCTION
    case 0xC2EEE6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_battlebg.asm (source_named).
bool execute_battle_load_battlebg_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battlebg.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2D121: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D123: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D124: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D125: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D126: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D0, 2); else cpu.execute_instruction<0x69>(0x00FFD0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC2D126.
    case 0xC2D128: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D129: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battlebg.asm:19 END_STACK_VARS
    case 0xC2D12A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:20 STY @LOCAL0A
    case 0xC2D12B: cpu.execute_instruction<0x84>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:20 STY @LOCAL0A
    // Overlapping static entry reached from 0xC2D128.
    case 0xC2D12C: cpu.execute_instruction<0x2E>(0x000486, 3); return true;
    // src/battle/load_battlebg.asm:21 STX @VIRTUAL04
    case 0xC2D12D: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:22 STX @LOCAL09
    case 0xC2D12F: cpu.execute_instruction<0x86>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:23 STA @VIRTUAL02
    case 0xC2D131: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:24 STZ RED_FLASH_DURATION
    case 0xC2D133: cpu.execute_instruction<0x9C>(0x00ADA0, 3); return true;
    // src/battle/load_battlebg.asm:25 STZ GREEN_FLASH_DURATION
    case 0xC2D136: cpu.execute_instruction<0x9C>(0x00AD9E, 3); return true;
    // src/battle/load_battlebg.asm:26 STZ SHAKE_DURATION
    case 0xC2D139: cpu.execute_instruction<0x9C>(0x00AD94, 3); return true;
    // src/battle/load_battlebg.asm:27 STZ WOBBLE_DURATION
    case 0xC2D13C: cpu.execute_instruction<0x9C>(0x00AD92, 3); return true;
    // src/battle/load_battlebg.asm:28 STZ SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2D13F: cpu.execute_instruction<0x9C>(0x00AD90, 3); return true;
    // src/battle/load_battlebg.asm:29 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2D142: cpu.execute_instruction<0x9C>(0x00AD8E, 3); return true;
    // src/battle/load_battlebg.asm:30 STZ VERTICAL_SHAKE_DURATION
    case 0xC2D145: cpu.execute_instruction<0x9C>(0x00AD8C, 3); return true;
    // src/battle/load_battlebg.asm:31 LDA @LOCAL0A
    case 0xC2D148: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:32 AND #$0003
    case 0xC2D14A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/load_battlebg.asm:32 AND #$0003
    // Overlapping static entry reached from 0xC2D14A.
    case 0xC2D14C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg.asm:33 BEQ @NO_LETTERBOX
    case 0xC2D14D: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/load_battlebg.asm:34 CMP #LETTERBOX_STYLE::LARGE
    case 0xC2D14F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/load_battlebg.asm:34 CMP #LETTERBOX_STYLE::LARGE
    // Overlapping static entry reached from 0xC2D14F.
    case 0xC2D151: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg.asm:35 BEQ @LARGE_LETTERBOX
    case 0xC2D152: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/load_battlebg.asm:36 CMP #LETTERBOX_STYLE::MEDIUM
    case 0xC2D154: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/load_battlebg.asm:36 CMP #LETTERBOX_STYLE::MEDIUM
    // Overlapping static entry reached from 0xC2D154.
    case 0xC2D156: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg.asm:37 BEQ @MEDIUM_LETTERBOX
    case 0xC2D157: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:38 CMP #LETTERBOX_STYLE::SMALL
    case 0xC2D159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/load_battlebg.asm:38 CMP #LETTERBOX_STYLE::SMALL
    // Overlapping static entry reached from 0xC2D159.
    case 0xC2D15B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg.asm:39 BEQ @SMALL_LETTERBOX
    case 0xC2D15C: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/load_battlebg.asm:40 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D15E: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/load_battlebg.asm:42 STZ LETTERBOX_TOP_END
    case 0xC2D160: cpu.execute_instruction<0x9C>(0x00ADB2, 3); return true;
    // src/battle/load_battlebg.asm:43 LDA #SCREEN_Y_RESOLUTION
    case 0xC2D163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/battle/load_battlebg.asm:43 LDA #SCREEN_Y_RESOLUTION
    // Overlapping static entry reached from 0xC2D163.
    case 0xC2D165: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:44 STA LETTERBOX_BOTTOM_START
    case 0xC2D166: cpu.execute_instruction<0x8D>(0x00ADB4, 3); return true;
    // src/battle/load_battlebg.asm:45 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D169: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/load_battlebg.asm:47 LDA #LETTERBOX_SIZE_LARGE - 1
    case 0xC2D16B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/battle/load_battlebg.asm:47 LDA #LETTERBOX_SIZE_LARGE - 1
    // Overlapping static entry reached from 0xC2D16B.
    case 0xC2D16D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:48 STA LETTERBOX_TOP_END
    case 0xC2D16E: cpu.execute_instruction<0x8D>(0x00ADB2, 3); return true;
    // src/battle/load_battlebg.asm:49 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    case 0xC2D171: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0000B0, 3); return true;
    // src/battle/load_battlebg.asm:49 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    // Overlapping static entry reached from 0xC2D171.
    case 0xC2D173: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:50 STA LETTERBOX_BOTTOM_START
    case 0xC2D174: cpu.execute_instruction<0x8D>(0x00ADB4, 3); return true;
    // src/battle/load_battlebg.asm:51 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D177: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/battle/load_battlebg.asm:53 LDA #LETTERBOX_SIZE_MEDIUM - 1
    case 0xC2D179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000039, 2); else cpu.execute_instruction<0xA9>(0x000039, 3); return true;
    // src/battle/load_battlebg.asm:53 LDA #LETTERBOX_SIZE_MEDIUM - 1
    // Overlapping static entry reached from 0xC2D179.
    case 0xC2D17B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:54 STA LETTERBOX_TOP_END
    case 0xC2D17C: cpu.execute_instruction<0x8D>(0x00ADB2, 3); return true;
    // src/battle/load_battlebg.asm:55 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    case 0xC2D17F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A6, 2); else cpu.execute_instruction<0xA9>(0x0000A6, 3); return true;
    // src/battle/load_battlebg.asm:55 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    // Overlapping static entry reached from 0xC2D17F.
    case 0xC2D181: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:56 STA LETTERBOX_BOTTOM_START
    case 0xC2D182: cpu.execute_instruction<0x8D>(0x00ADB4, 3); return true;
    // src/battle/load_battlebg.asm:57 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D185: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:59 LDA #LETTERBOX_SIZE_SMALL - 1
    case 0xC2D187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000043, 2); else cpu.execute_instruction<0xA9>(0x000043, 3); return true;
    // src/battle/load_battlebg.asm:59 LDA #LETTERBOX_SIZE_SMALL - 1
    // Overlapping static entry reached from 0xC2D187.
    case 0xC2D189: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:60 STA LETTERBOX_TOP_END
    case 0xC2D18A: cpu.execute_instruction<0x8D>(0x00ADB2, 3); return true;
    // src/battle/load_battlebg.asm:61 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    case 0xC2D18D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009C, 2); else cpu.execute_instruction<0xA9>(0x00009C, 3); return true;
    // src/battle/load_battlebg.asm:61 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    // Overlapping static entry reached from 0xC2D18D.
    case 0xC2D18F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:62 STA LETTERBOX_BOTTOM_START
    case 0xC2D190: cpu.execute_instruction<0x8D>(0x00ADB4, 3); return true;
    // src/battle/load_battlebg.asm:64 STZ LETTERBOX_EFFECT_ENDING
    case 0xC2D193: cpu.execute_instruction<0x9C>(0x00ADB6, 3); return true;
    // src/battle/load_battlebg.asm:65 LDX #$7000
    case 0xC2D196: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007000, 3); return true;
    // src/battle/load_battlebg.asm:65 LDX #$7000
    // Overlapping static entry reached from 0xC2D196.
    case 0xC2D198: cpu.execute_instruction<0x70>(0x00008E, 2); return true;
    // src/battle/load_battlebg.asm:66 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2D199: cpu.execute_instruction<0x8E>(0x00ADCE, 3); return true;
    // src/battle/load_battlebg.asm:66 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2D198.
    case 0xC2D19A: cpu.execute_instruction<0xCE>(0x008EAD, 3); return true;
    // src/battle/load_battlebg.asm:67 STX LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2D19C: cpu.execute_instruction<0x8E>(0x00ADCC, 3); return true;
    // src/battle/load_battlebg.asm:67 STX LETTERBOX_EFFECT_ENDING_TOP
    // Overlapping static entry reached from 0xC2D19A.
    case 0xC2D19D: cpu.execute_instruction<0xCC>(0x009CAD, 3); return true;
    // src/battle/load_battlebg.asm:68 STZ ENABLE_BACKGROUND_DARKENING
    case 0xC2D19F: cpu.execute_instruction<0x9C>(0x00ADD0, 3); return true;
    // src/battle/load_battlebg.asm:68 STZ ENABLE_BACKGROUND_DARKENING
    // Overlapping static entry reached from 0xC2D19D.
    case 0xC2D1A0: cpu.execute_instruction<0xD0>(0x0000AD, 2); return true;
    // src/battle/load_battlebg.asm:69 LDA #$FFFF
    case 0xC2D1A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/load_battlebg.asm:69 LDA #$FFFF
    // Overlapping static entry reached from 0xC2D1A2.
    case 0xC2D1A4: cpu.execute_instruction<0xFF>(0xADD28D, 4); return true;
    // src/battle/load_battlebg.asm:70 STA BACKGROUND_BRIGHTNESS
    case 0xC2D1A5: cpu.execute_instruction<0x8D>(0x00ADD2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1A8.
    case 0xC2D1AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1AD.
    case 0xC2D1AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:71 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    // Overlapping static entry reached from 0xC2D20F.
    case 0xC2D1B3: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B4: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    // Overlapping static entry reached from 0xC2D1B3.
    case 0xC2D1B5: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:72 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D1B8: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D1BA.
    case 0xC2D1BC: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1BD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D1BC.
    case 0xC2D1BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D1BF.
    case 0xC2D1C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:73 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D1C2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:74 LDA @VIRTUAL02
    case 0xC2D1C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1C6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D1CC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:76 TAX
    case 0xC2D1CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:77 LDA f:BG_DATA_TABLE,X
    case 0xC2D1CF: cpu.execute_instruction<0xBF>(0xCADCA1, 4); return true;
    // src/battle/load_battlebg.asm:78 AND #$00FF
    case 0xC2D1D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC2D1D3.
    case 0xC2D1D5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:79 ASL
    case 0xC2D1D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:80 ASL
    case 0xC2D1D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:81 CLC
    case 0xC2D1D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:82 ADC @VIRTUAL0A
    case 0xC2D1D9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:83 STA @VIRTUAL0A
    case 0xC2D1DB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1DD.
    case 0xC2D1DF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E0: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:84 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D1E7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D1EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F1: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F5: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:86 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D1F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1FB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:87 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1FF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg.asm:88 JSL DECOMP
    case 0xC2D201: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/battle/load_battlebg.asm:89 LDA CURRENT_BATTLE_GROUP
    case 0xC2D205: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/load_battlebg.asm:90 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    case 0xC2D208: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DE, 2); else cpu.execute_instruction<0xC9>(0x0001DE, 3); return true;
    // src/battle/load_battlebg.asm:90 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    // Overlapping static entry reached from 0xC2D208.
    case 0xC2D20A: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/battle/load_battlebg.asm:91 BNE @UNKNOWN5
    case 0xC2D20B: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/battle/load_battlebg.asm:91 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC2D20A.
    case 0xC2D20C: cpu.execute_instruction<0x25>(0x0000A0, 2); return true;
    // src/battle/load_battlebg.asm:92 LDY #$3000
    case 0xC2D20D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // src/battle/load_battlebg.asm:92 LDY #$3000
    // Overlapping static entry reached from 0xC2D20C.
    case 0xC2D20E: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/battle/load_battlebg.asm:92 LDY #$3000
    // Overlapping static entry reached from 0xC2D20D.
    case 0xC2D20F: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // src/battle/load_battlebg.asm:93 LDX #$5C00
    case 0xC2D210: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/battle/load_battlebg.asm:93 LDX #$5C00
    // Overlapping static entry reached from 0xC2D20F.
    case 0xC2D211: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/battle/load_battlebg.asm:93 LDX #$5C00
    // Overlapping static entry reached from 0xC2D210.
    case 0xC2D212: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/battle/load_battlebg.asm:94 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D213: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:94 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D213.
    case 0xC2D215: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:95 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D216: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D21A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D21C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D21E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D220: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D222: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D222.
    case 0xC2D224: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D225: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D224.
    case 0xC2D226: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D225.
    case 0xC2D227: cpu.execute_instruction<0x50>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D228: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D227.
    case 0xC2D229: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D22A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D22C: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D22A.
    case 0xC2D22D: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:96 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D22D.
    case 0xC2D22F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x001680, 3); return true;
    // src/battle/load_battlebg.asm:97 BRA @UNKNOWN6
    case 0xC2D230: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/load_battlebg.asm:97 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC2D22F.
    case 0xC2D231: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D232: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D231.
    case 0xC2D233: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D234: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D233.
    case 0xC2D235: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D236: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D238: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D23A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D23A.
    case 0xC2D23C: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D23D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D23C.
    case 0xC2D23E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D23D.
    case 0xC2D23F: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D240: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D244: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D242.
    case 0xC2D245: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:99 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D245.
    case 0xC2D247: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D247.
    case 0xC2D249: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D248.
    case 0xC2D24A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D24B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D24D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D24D.
    case 0xC2D24F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:102 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D250: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D252: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:104 LDA #0
    case 0xC2D254: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/battle/load_battlebg.asm:105 STA [@VIRTUAL0A]
    case 0xC2D256: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:105 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC2D254.
    case 0xC2D257: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC2D258: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:107 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D260: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D262: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D264: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D266: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D268: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D26A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D26A.
    case 0xC2D26C: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D26D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D26D.
    case 0xC2D26F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D270: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D274: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D272.
    case 0xC2D275: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:108 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D275.
    case 0xC2D277: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x000AA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D278: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D277.
    case 0xC2D279: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D27A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D27C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:109 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D27E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D280: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D282: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D284: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D286: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D288: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D288.
    case 0xC2D28A: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D28B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D28B.
    case 0xC2D28D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D28E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D292: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D290.
    case 0xC2D293: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D293.
    case 0xC2D295: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D296: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D295.
    case 0xC2D297: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D296.
    case 0xC2D298: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D299: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D29B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D29B.
    case 0xC2D29D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D29E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A2: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:113 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D2A6: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battlebg.asm:114 LDA @VIRTUAL02
    case 0xC2D2A8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:115 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D2B0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:116 STA @LOCAL06
    case 0xC2D2B2: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:117 CLC
    case 0xC2D2B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:118 ADC @VIRTUAL06
    case 0xC2D2B5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:119 STA @VIRTUAL06
    case 0xC2D2B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:120 LDA [@VIRTUAL06]
    case 0xC2D2B9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:121 AND #$00FF
    case 0xC2D2BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC2D2BB.
    case 0xC2D2BD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D2BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D2BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:123 PHA
    case 0xC2D2C0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2C1.
    case 0xC2D2C3: cpu.execute_instruction<0xD9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2C6.
    case 0xC2D2C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D2C9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:125 PLA
    case 0xC2D2CB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:126 CLC
    case 0xC2D2CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:127 ADC @VIRTUAL06
    case 0xC2D2CD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:128 STA @VIRTUAL06
    case 0xC2D2CF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2D1.
    case 0xC2D2D3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D2DB: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D2E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2E5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2E9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2EB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2ED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2EF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2F1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D2F3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg.asm:133 JSL DECOMP
    case 0xC2D2F5: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/battle/load_battlebg.asm:134 LDA @LOCAL06
    case 0xC2D2F9: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:135 INC
    case 0xC2D2FB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:136 INC
    case 0xC2D2FC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D2FD: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D2FF: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D301: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:137 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D303: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:138 CLC
    case 0xC2D305: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:139 ADC @VIRTUAL06
    case 0xC2D306: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:140 STA @VIRTUAL06
    case 0xC2D308: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:141 LDA [@VIRTUAL06]
    case 0xC2D30A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:142 AND #$00FF
    case 0xC2D30C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2D30C.
    case 0xC2D30E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/load_battlebg.asm:143 CMP #4
    case 0xC2D30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/load_battlebg.asm:143 CMP #4
    // Overlapping static entry reached from 0xC2D30F.
    case 0xC2D311: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battlebg.asm:144 BNEL @UNKNOWN15
    case 0xC2D312: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:144 BNEL @UNKNOWN15
    case 0xC2D314: cpu.execute_instruction<0x4C>(0x00D714, 3); return true;
    // src/battle/load_battlebg.asm:145 LDA #9
    case 0xC2D317: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/battle/load_battlebg.asm:145 LDA #9
    // Overlapping static entry reached from 0xC2D317.
    case 0xC2D319: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:146 JSL UNKNOWN_C08D79
    case 0xC2D31A: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/battle/load_battlebg.asm:147 LDA #0
    case 0xC2D31E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:147 LDA #0
    // Overlapping static entry reached from 0xC2D31E.
    case 0xC2D320: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg.asm:148 STA @LOCAL06
    case 0xC2D321: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:149 BRA @UNKNOWN9
    case 0xC2D323: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D325: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D327: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:152 CLC
    case 0xC2D329: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D32A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D32C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D32C.
    case 0xC2D32E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D32F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D331: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D333: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D333.
    case 0xC2D335: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D336: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D338: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:155 LDA [@VIRTUAL06]
    case 0xC2D33A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:156 AND #$00DF
    case 0xC2D33C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0009DF, 3); return true;
    // src/battle/load_battlebg.asm:157 ORA #$0008
    case 0xC2D33E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000008, 2); else cpu.execute_instruction<0x09>(0x008708, 3); return true;
    // src/battle/load_battlebg.asm:157 ORA #$0008
    // Overlapping static entry reached from 0xC2D33C.
    case 0xC2D33F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:158 STA [@VIRTUAL06]
    case 0xC2D340: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:158 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D33E.
    case 0xC2D341: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2D342: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:159 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D341.
    case 0xC2D343: cpu.execute_instruction<0x20>(0x0022A5, 3); return true;
    // src/battle/load_battlebg.asm:160 LDA @LOCAL06
    case 0xC2D344: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:161 INC
    case 0xC2D346: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:162 INC
    case 0xC2D347: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:163 STA @LOCAL06
    case 0xC2D348: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:165 CMP #$0800
    case 0xC2D34A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg.asm:165 CMP #$0800
    // Overlapping static entry reached from 0xC2D34A.
    case 0xC2D34C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:166 BCC @UNKNOWN8
    case 0xC2D34D: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D34F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    // Overlapping static entry reached from 0xC2D34F.
    case 0xC2D351: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D352: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    // Overlapping static entry reached from 0xC2D354.
    case 0xC2D356: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:167 LOADPTR BUFFER, @LOCAL08
    case 0xC2D357: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D359: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D35B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D35D: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:168 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D35F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D361: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D363: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D365: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D367: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D369: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D369.
    case 0xC2D36B: cpu.execute_instruction<0x5C>(0x0800A2, 4); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D36C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D36C.
    case 0xC2D36E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D36F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D371: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D373: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D371.
    case 0xC2D374: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:169 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D374.
    case 0xC2D376: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D376.
    case 0xC2D378: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D377.
    case 0xC2D379: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D37A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D37C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D37C.
    case 0xC2D37E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:171 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D37F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D381: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D383: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D385: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:172 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D387: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battlebg.asm:173 LDA @VIRTUAL02
    case 0xC2D389: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D38F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D390: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:174 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D391: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:175 TAX
    case 0xC2D393: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:176 STX @LOCAL05
    case 0xC2D394: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:177 TXA
    case 0xC2D396: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:178 CLC
    case 0xC2D397: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:179 ADC @VIRTUAL06
    case 0xC2D398: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:180 STA @VIRTUAL06
    case 0xC2D39A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:181 STA @LOCAL00
    case 0xC2D39C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg.asm:182 LDA @VIRTUAL06+2
    case 0xC2D39E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:183 STA @LOCAL00+2
    case 0xC2D3A0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:184 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D3A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/battle/load_battlebg.asm:184 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D3A2.
    case 0xC2D3A4: cpu.execute_instruction<0xAD>(0x00E522, 3); return true;
    // src/battle/load_battlebg.asm:185 JSL UNKNOWN_C2CFE5
    case 0xC2D3A5: cpu.execute_instruction<0x22>(0xC2CFE5, 4); return true;
    // src/battle/load_battlebg.asm:185 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D3A4.
    case 0xC2D3A7: cpu.execute_instruction<0xCF>(0x20A9C2, 4); return true;
    // src/battle/load_battlebg.asm:186 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D3A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00AE20, 3); return true;
    // src/battle/load_battlebg.asm:186 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D3A9.
    case 0xC2D3AB: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/battle/load_battlebg.asm:187 STA @VIRTUAL02
    case 0xC2D3AC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:188 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC2D3AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/battle/load_battlebg.asm:188 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC2D3AE.
    case 0xC2D3B0: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg.asm:189 LDX @VIRTUAL02
    case 0xC2D3B1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:190 STA __BSS_START__,X
    case 0xC2D3B3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:191 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D3B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E0, 2); else cpu.execute_instruction<0xA0>(0x00ADE0, 3); return true;
    // src/battle/load_battlebg.asm:191 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D3B6.
    case 0xC2D3B8: cpu.execute_instruction<0xAD>(0x001E84, 3); return true;
    // src/battle/load_battlebg.asm:192 STY @LOCAL04
    case 0xC2D3B9: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D3BB.
    case 0xC2D3BD: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3BE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D3C0.
    case 0xC2D3C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:193 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D3C3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/load_battlebg.asm:194 LDX @LOCAL05
    case 0xC2D3C5: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:195 TXA
    case 0xC2D3C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:196 INC
    case 0xC2D3C8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3C9: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3CB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3CD: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:197 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D3CF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D1: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D3: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D5: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:198 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D3D7: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:199 CLC
    case 0xC2D3D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:200 ADC @VIRTUAL0A
    case 0xC2D3DA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:201 STA @VIRTUAL0A
    case 0xC2D3DC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3DE: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3E2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:202 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D3E4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:203 LDA [@VIRTUAL0A]
    case 0xC2D3E6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:204 AND #$00FF
    case 0xC2D3E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC2D3E8.
    case 0xC2D3EA: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:205 ASL
    case 0xC2D3EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:206 ASL
    case 0xC2D3EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:207 CLC
    case 0xC2D3ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:208 ADC @VIRTUAL06
    case 0xC2D3EE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:209 STA @VIRTUAL06
    case 0xC2D3F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D3F2.
    case 0xC2D3F4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3F8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:210 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3FC: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D400: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D402: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:211 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D404: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:212 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D406: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:212 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D406.
    case 0xC2D408: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg.asm:213 LDY @LOCAL04
    case 0xC2D409: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:214 TYA
    case 0xC2D40B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:215 JSL MEMCPY16
    case 0xC2D40C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:216 LDA [@VIRTUAL0A]
    case 0xC2D410: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:217 AND #$00FF
    case 0xC2D412: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC2D412.
    case 0xC2D414: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:218 ASL
    case 0xC2D415: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:219 ASL
    case 0xC2D416: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:220 PHA
    case 0xC2D417: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D418: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D41A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D41C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:221 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D41E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:222 PLA
    case 0xC2D420: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:223 CLC
    case 0xC2D421: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:224 ADC @VIRTUAL0A
    case 0xC2D422: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:225 STA @VIRTUAL0A
    case 0xC2D424: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D426: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D426.
    case 0xC2D428: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D429: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D42B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D42C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D42E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:226 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D430: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D432: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D434: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D436: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D438: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:228 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D43A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:228 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D43A.
    case 0xC2D43C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg.asm:229 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D43D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00AE00, 3); return true;
    // src/battle/load_battlebg.asm:229 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D43D.
    case 0xC2D43F: cpu.execute_instruction<0xAE>(0x00D222, 3); return true;
    // src/battle/load_battlebg.asm:230 JSL MEMCPY16
    case 0xC2D440: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:230 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D43F.
    case 0xC2D442: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/battle/load_battlebg.asm:231 LDY @LOCAL04
    case 0xC2D444: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:231 LDY @LOCAL04
    // Overlapping static entry reached from 0xC2D442.
    case 0xC2D445: cpu.execute_instruction<0x1E>(0x008598, 3); return true;
    // src/battle/load_battlebg.asm:232 TYA
    case 0xC2D446: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D447: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D445.
    case 0xC2D448: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D449: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:233 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D44F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC2D451: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D453: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D455: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D457: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:235 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D459: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:236 LDX #32
    case 0xC2D45B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:236 LDX #32
    // Overlapping static entry reached from 0xC2D45B.
    case 0xC2D45D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg.asm:237 STX @LOCAL05
    case 0xC2D45E: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:238 LDX @VIRTUAL02
    case 0xC2D460: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:239 LDA __BSS_START__,X
    case 0xC2D462: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:240 LDX @LOCAL05
    case 0xC2D465: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:241 JSL MEMCPY16
    case 0xC2D467: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D46B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:243 LDA #2
    case 0xC2D46D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/battle/load_battlebg.asm:244 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    case 0xC2D46F: cpu.execute_instruction<0x8D>(0x00ADD4, 3); return true;
    // src/battle/load_battlebg.asm:244 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    // Overlapping static entry reached from 0xC2D46D.
    case 0xC2D470: cpu.execute_instruction<0xD4>(0x0000AD, 2); return true;
    // src/battle/load_battlebg.asm:245 LDX #0
    case 0xC2D472: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:245 LDX #0
    // Overlapping static entry reached from 0xC2D472.
    case 0xC2D474: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/load_battlebg.asm:246 REP #PROC_FLAGS::ACCUM8
    case 0xC2D475: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:247 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D477: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/battle/load_battlebg.asm:247 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D477.
    case 0xC2D479: cpu.execute_instruction<0xAD>(0x002D22, 3); return true;
    // src/battle/load_battlebg.asm:248 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D47A: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/battle/load_battlebg.asm:248 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC2D479.
    case 0xC2D47C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C2, 2); else cpu.execute_instruction<0xC9>(0x00A2C2, 3); return true;
    // src/battle/load_battlebg.asm:249 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D47E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004B, 2); else cpu.execute_instruction<0xA2>(0x00AE4B, 3); return true;
    // src/battle/load_battlebg.asm:249 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D47C.
    case 0xC2D47F: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:249 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D47E.
    case 0xC2D480: cpu.execute_instruction<0xAE>(0x001E86, 3); return true;
    // src/battle/load_battlebg.asm:250 STX @LOCAL04
    case 0xC2D481: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:251 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D483: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:252 LDA #0
    case 0xC2D485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/load_battlebg.asm:253 STA __BSS_START__,X
    case 0xC2D487: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:253 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D485.
    case 0xC2D488: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg.asm:254 REP #PROC_FLAGS::ACCUM8
    case 0xC2D48A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:255 LDA #1
    case 0xC2D48C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/load_battlebg.asm:255 LDA #1
    // Overlapping static entry reached from 0xC2D48C.
    case 0xC2D48E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:256 STA CURRENT_LAYER_CONFIG
    case 0xC2D48F: cpu.execute_instruction<0x8D>(0x00AD8A, 3); return true;
    // src/battle/load_battlebg.asm:257 JSL UNKNOWN_C0AFCD
    case 0xC2D492: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // src/battle/load_battlebg.asm:258 LDA #$0017
    case 0xC2D496: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/battle/load_battlebg.asm:258 LDA #$0017
    // Overlapping static entry reached from 0xC2D496.
    case 0xC2D498: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:259 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D499: cpu.execute_instruction<0x8D>(0x00ADAE, 3); return true;
    // src/battle/load_battlebg.asm:260 LDA #$0015
    case 0xC2D49C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/load_battlebg.asm:260 LDA #$0015
    // Overlapping static entry reached from 0xC2D49C.
    case 0xC2D49E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:261 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D49F: cpu.execute_instruction<0x8D>(0x00ADB0, 3); return true;
    // src/battle/load_battlebg.asm:262 LDA @LOCAL09
    case 0xC2D4A2: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:263 STA @VIRTUAL04
    case 0xC2D4A4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg.asm:264 BEQL @UNKNOWN23
    case 0xC2D4A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:264 BEQL @UNKNOWN23
    case 0xC2D4A8: cpu.execute_instruction<0x4C>(0x00DAB2, 3); return true;
    // src/battle/load_battlebg.asm:265 LDA @LOCAL0A
    case 0xC2D4AB: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:266 AND #$0004
    case 0xC2D4AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/load_battlebg.asm:266 AND #$0004
    // Overlapping static entry reached from 0xC2D4AD.
    case 0xC2D4AF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg.asm:267 BEQL @UNKNOWN14
    case 0xC2D4B0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:267 BEQL @UNKNOWN14
    case 0xC2D4B2: cpu.execute_instruction<0x4C>(0x00D6DF, 3); return true;
    // src/battle/load_battlebg.asm:268 LDA #7
    case 0xC2D4B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/load_battlebg.asm:268 LDA #7
    // Overlapping static entry reached from 0xC2D4B5.
    case 0xC2D4B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:269 STA CURRENT_LAYER_CONFIG
    case 0xC2D4B8: cpu.execute_instruction<0x8D>(0x00AD8A, 3); return true;
    // src/battle/load_battlebg.asm:270 JSL UNKNOWN_C0AFCD
    case 0xC2D4BB: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // src/battle/load_battlebg.asm:271 LDA @VIRTUAL04
    case 0xC2D4BF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:272 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D4C7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4C9: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4CB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4CD: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:273 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D4CF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:274 CLC
    case 0xC2D4D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:275 ADC @VIRTUAL06
    case 0xC2D4D2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:276 STA @VIRTUAL06
    case 0xC2D4D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:277 STA @LOCAL02
    case 0xC2D4D6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/load_battlebg.asm:278 LDA @VIRTUAL06+2
    case 0xC2D4D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:279 STA @LOCAL02+2
    case 0xC2D4DA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D4DC.
    case 0xC2D4DE: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4DF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D4DE.
    case 0xC2D4E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D4E1.
    case 0xC2D4E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:280 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL0A
    case 0xC2D4E4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:281 LDA [@VIRTUAL06]
    case 0xC2D4E6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:282 AND #$00FF
    case 0xC2D4E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC2D4E8.
    case 0xC2D4EA: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:283 ASL
    case 0xC2D4EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:284 ASL
    case 0xC2D4EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:285 CLC
    case 0xC2D4ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:286 ADC @VIRTUAL0A
    case 0xC2D4EE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:287 STA @VIRTUAL0A
    case 0xC2D4F0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4F2.
    case 0xC2D4F4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F5: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4F8: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:288 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D4FC: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D500: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D502: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:289 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D504: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D506: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D508: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D50A: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:290 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D50C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D50E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D510: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D512: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:291 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D514: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg.asm:292 JSL DECOMP
    case 0xC2D516: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D51A: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D51C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D51E: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:293 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D520: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D522: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D524: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D526: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D59E.
    case 0xC2D527: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D528: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D52A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D52A.
    case 0xC2D52C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D52D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D52D.
    case 0xC2D52F: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D530: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D532: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:294 COPY_TO_VRAM1P @VIRTUAL06, $0000, $2000, 0
    case 0xC2D533: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D537: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D537.
    case 0xC2D539: cpu.execute_instruction<0xD9>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D53A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D53C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D53C.
    case 0xC2D53E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:296 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D53F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D541: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D543: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D545: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:297 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D547: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:298 LDA [@VIRTUAL06]
    case 0xC2D549: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:299 AND #$00FF
    case 0xC2D54B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC2D54B.
    case 0xC2D54D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:300 ASL
    case 0xC2D54E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:301 ASL
    case 0xC2D54F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:302 CLC
    case 0xC2D550: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:303 ADC @VIRTUAL0A
    case 0xC2D551: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:304 STA @VIRTUAL0A
    case 0xC2D553: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D555: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D555.
    case 0xC2D557: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D558: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:305 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D55F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D561: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D563: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D565: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D567: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D569: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D56B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D56D: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:307 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D56F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D571: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D573: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D575: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:308 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D577: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg.asm:309 JSL DECOMP
    case 0xC2D579: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/battle/load_battlebg.asm:310 LDA #0
    case 0xC2D57D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:310 LDA #0
    // Overlapping static entry reached from 0xC2D57D.
    case 0xC2D57F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg.asm:311 STA @LOCAL0A
    case 0xC2D580: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:312 BRA @UNKNOWN13
    case 0xC2D582: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D584: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D586: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:315 CLC
    case 0xC2D588: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D589: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D58B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D58B.
    case 0xC2D58D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D58E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D590: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D592: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D592.
    case 0xC2D594: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D595: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:317 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D597: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:318 LDA [@VIRTUAL06]
    case 0xC2D599: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:319 AND #$00DF
    case 0xC2D59B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0009DF, 3); return true;
    // src/battle/load_battlebg.asm:320 ORA #$0010
    case 0xC2D59D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000010, 2); else cpu.execute_instruction<0x09>(0x008710, 3); return true;
    // src/battle/load_battlebg.asm:320 ORA #$0010
    // Overlapping static entry reached from 0xC2D59B.
    case 0xC2D59E: cpu.execute_instruction<0x10>(0x000087, 2); return true;
    // src/battle/load_battlebg.asm:321 STA [@VIRTUAL06]
    case 0xC2D59F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:321 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D59D.
    case 0xC2D5A0: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC2D5A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:322 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D5A0.
    case 0xC2D5A2: cpu.execute_instruction<0x20>(0x002EA5, 3); return true;
    // src/battle/load_battlebg.asm:323 LDA @LOCAL0A
    case 0xC2D5A3: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:324 INC
    case 0xC2D5A5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:325 INC
    case 0xC2D5A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:326 STA @LOCAL0A
    case 0xC2D5A7: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:328 CMP #$0800
    case 0xC2D5A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg.asm:328 CMP #$0800
    // Overlapping static entry reached from 0xC2D5A9.
    case 0xC2D5AB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:329 BCC @UNKNOWN12
    case 0xC2D5AC: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5AE.
    case 0xC2D5B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5B3.
    case 0xC2D5B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5B8.
    case 0xC2D5BA: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5BB.
    case 0xC2D5BD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D5C2: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5C0.
    case 0xC2D5C3: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D5C3.
    case 0xC2D5C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5C5.
    case 0xC2D5C7: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5C6.
    case 0xC2D5C8: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5CB.
    case 0xC2D5CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D5CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D2: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D5D6: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/battle/load_battlebg.asm:334 LDA @LOCAL09
    case 0xC2D5D8: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:335 STA @VIRTUAL04
    case 0xC2D5DA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5DC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:336 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D5E2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:337 TAX
    case 0xC2D5E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:338 STX @LOCAL05
    case 0xC2D5E5: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:339 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D5E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00AE4B, 3); return true;
    // src/battle/load_battlebg.asm:339 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D5E7.
    case 0xC2D5E9: cpu.execute_instruction<0xAE>(0x000485, 3); return true;
    // src/battle/load_battlebg.asm:340 STA @VIRTUAL04
    case 0xC2D5EA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:341 TXA
    case 0xC2D5EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:342 CLC
    case 0xC2D5ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:343 ADC @VIRTUAL06
    case 0xC2D5EE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:344 STA @VIRTUAL06
    case 0xC2D5F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:345 STA @LOCAL00
    case 0xC2D5F2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg.asm:346 LDA @VIRTUAL06+2
    case 0xC2D5F4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:347 STA @LOCAL00+2
    case 0xC2D5F6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:348 LDA @VIRTUAL04
    case 0xC2D5F8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:349 JSL UNKNOWN_C2CFE5
    case 0xC2D5FA: cpu.execute_instruction<0x22>(0xC2CFE5, 4); return true;
    // src/battle/load_battlebg.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x00AE97, 3); return true;
    // src/battle/load_battlebg.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D5FE.
    case 0xC2D600: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/battle/load_battlebg.asm:351 STA @VIRTUAL02
    case 0xC2D601: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D603: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/load_battlebg.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D603.
    case 0xC2D605: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg.asm:353 LDX @VIRTUAL02
    case 0xC2D606: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:354 STA __BSS_START__,X
    case 0xC2D608: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:355 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D60B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:356 LDA #1
    case 0xC2D60D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/load_battlebg.asm:357 LDX @VIRTUAL04
    case 0xC2D60F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:357 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D60D.
    case 0xC2D610: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/load_battlebg.asm:358 STA __BSS_START__,X
    case 0xC2D611: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:358 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D610.
    case 0xC2D612: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D614: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000057, 2); else cpu.execute_instruction<0xA0>(0x00AE57, 3); return true;
    // src/battle/load_battlebg.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D614.
    case 0xC2D616: cpu.execute_instruction<0xAE>(0x002C84, 3); return true;
    // src/battle/load_battlebg.asm:360 STY @LOCAL09
    case 0xC2D617: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:361 REP #PROC_FLAGS::ACCUM8
    case 0xC2D619: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D61B.
    case 0xC2D61D: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D61E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D620: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D620.
    case 0xC2D622: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D623: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:363 LDX @LOCAL05
    case 0xC2D625: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:364 TXA
    case 0xC2D627: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:365 INC
    case 0xC2D628: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D629: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D62B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D62D: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:366 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D62F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:367 CLC
    case 0xC2D631: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:368 ADC @VIRTUAL06
    case 0xC2D632: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:369 STA @VIRTUAL06
    case 0xC2D634: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:370 STA @LOCAL02
    case 0xC2D636: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/load_battlebg.asm:371 LDA @VIRTUAL06+2
    case 0xC2D638: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:372 STA @LOCAL02+2
    case 0xC2D63A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battlebg.asm:373 LDA [@VIRTUAL06]
    case 0xC2D63C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:374 AND #$00FF
    case 0xC2D63E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:374 AND #$00FF
    // Overlapping static entry reached from 0xC2D63E.
    case 0xC2D640: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:375 ASL
    case 0xC2D641: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:376 ASL
    case 0xC2D642: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D643: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D645: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D647: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:377 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D649: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:378 CLC
    case 0xC2D64B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:379 ADC @VIRTUAL06
    case 0xC2D64C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:380 STA @VIRTUAL06
    case 0xC2D64E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D650: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D650.
    case 0xC2D652: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D653: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D655: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D656: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D658: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D65A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D65C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D65E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D660: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D662: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:383 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D664: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:383 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D664.
    case 0xC2D666: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg.asm:384 LDY @LOCAL09
    case 0xC2D667: cpu.execute_instruction<0xA4>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:385 TYA
    case 0xC2D669: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:386 JSL MEMCPY16
    case 0xC2D66A: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D66E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D670: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D672: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:387 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2D674: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:388 LDA [@VIRTUAL06]
    case 0xC2D676: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:389 AND #$00FF
    case 0xC2D678: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:389 AND #$00FF
    // Overlapping static entry reached from 0xC2D678.
    case 0xC2D67A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:390 ASL
    case 0xC2D67B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:391 ASL
    case 0xC2D67C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:392 CLC
    case 0xC2D67D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:393 ADC @VIRTUAL0A
    case 0xC2D67E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:394 STA @VIRTUAL0A
    case 0xC2D680: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D682: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D682.
    case 0xC2D684: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D685: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D687: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D688: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D68A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:395 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D68C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D68E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D690: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D692: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:396 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D694: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:397 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D696: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:397 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D696.
    case 0xC2D698: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg.asm:398 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2D699: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x00AE77, 3); return true;
    // src/battle/load_battlebg.asm:398 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D699.
    case 0xC2D69B: cpu.execute_instruction<0xAE>(0x00D222, 3); return true;
    // src/battle/load_battlebg.asm:399 JSL MEMCPY16
    case 0xC2D69C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:399 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D69B.
    case 0xC2D69E: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/battle/load_battlebg.asm:400 LDY @LOCAL09
    case 0xC2D6A0: cpu.execute_instruction<0xA4>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:400 LDY @LOCAL09
    // Overlapping static entry reached from 0xC2D69E.
    case 0xC2D6A1: cpu.execute_instruction<0x2C>(0x008598, 3); return true;
    // src/battle/load_battlebg.asm:401 TYA
    case 0xC2D6A2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D6A1.
    case 0xC2D6A4: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A5: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:402 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D6AB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg.asm:403 REP #PROC_FLAGS::ACCUM8
    case 0xC2D6AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:404 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D6B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:405 LDX #32
    case 0xC2D6B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:405 LDX #32
    // Overlapping static entry reached from 0xC2D6B7.
    case 0xC2D6B9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg.asm:406 STX @LOCAL06
    case 0xC2D6BA: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:407 LDX @VIRTUAL02
    case 0xC2D6BC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:408 LDA __BSS_START__,X
    case 0xC2D6BE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:409 LDX @LOCAL06
    case 0xC2D6C1: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:410 JSL MEMCPY16
    case 0xC2D6C3: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:411 LDX #1
    case 0xC2D6C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/load_battlebg.asm:411 LDX #1
    // Overlapping static entry reached from 0xC2D6C7.
    case 0xC2D6C9: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/load_battlebg.asm:412 LDA @VIRTUAL04
    case 0xC2D6CA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:413 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D6CC: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/battle/load_battlebg.asm:414 LDA #$0215
    case 0xC2D6D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000215, 3); return true;
    // src/battle/load_battlebg.asm:414 LDA #$0215
    // Overlapping static entry reached from 0xC2D6D0.
    case 0xC2D6D2: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:415 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D6D3: cpu.execute_instruction<0x8D>(0x00ADAE, 3); return true;
    // src/battle/load_battlebg.asm:416 LDA #$0014
    case 0xC2D6D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/load_battlebg.asm:416 LDA #$0014
    // Overlapping static entry reached from 0xC2D6D6.
    case 0xC2D6D8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:417 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D6D9: cpu.execute_instruction<0x8D>(0x00ADB0, 3); return true;
    // src/battle/load_battlebg.asm:418 JMP @UNKNOWN23
    case 0xC2D6DC: cpu.execute_instruction<0x4C>(0x00DAB2, 3); return true;
    // src/battle/load_battlebg.asm:420 LDA @VIRTUAL04
    case 0xC2D6DF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:421 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D6E7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6E9: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6EB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6ED: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:422 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D6EF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:423 CLC
    case 0xC2D6F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:424 ADC @VIRTUAL06
    case 0xC2D6F2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:425 STA @VIRTUAL06
    case 0xC2D6F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:426 STA @LOCAL00
    case 0xC2D6F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg.asm:427 LDA @VIRTUAL06+2
    case 0xC2D6F8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:428 STA @LOCAL00+2
    case 0xC2D6FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:429 LDX @LOCAL04
    case 0xC2D6FC: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:430 TXA
    case 0xC2D6FE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:431 JSL UNKNOWN_C2CFE5
    case 0xC2D6FF: cpu.execute_instruction<0x22>(0xC2CFE5, 4); return true;
    // src/battle/load_battlebg.asm:432 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D703: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:433 LDA #1
    case 0xC2D705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/load_battlebg.asm:434 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    case 0xC2D707: cpu.execute_instruction<0x8D>(0x00AE4D, 3); return true;
    // src/battle/load_battlebg.asm:434 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    // Overlapping static entry reached from 0xC2D705.
    case 0xC2D708: cpu.execute_instruction<0x4D>(0x00A9AE, 3); return true;
    // src/battle/load_battlebg.asm:435 LDA #2
    case 0xC2D70A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00A602, 3); return true;
    // src/battle/load_battlebg.asm:435 LDA #2
    // Overlapping static entry reached from 0xC2D708.
    case 0xC2D70B: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg.asm:436 LDX @LOCAL04
    case 0xC2D70C: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:436 LDX @LOCAL04
    // Overlapping static entry reached from 0xC2D70A.
    case 0xC2D70D: cpu.execute_instruction<0x1E>(0x00009D, 3); return true;
    // src/battle/load_battlebg.asm:437 STA __BSS_START__,X
    case 0xC2D70E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:437 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D70D.
    case 0xC2D710: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/load_battlebg.asm:438 JMP @UNKNOWN23
    case 0xC2D711: cpu.execute_instruction<0x4C>(0x00DAB2, 3); return true;
    // src/battle/load_battlebg.asm:441 LDA #8
    case 0xC2D714: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/load_battlebg.asm:441 LDA #8
    // Overlapping static entry reached from 0xC2D714.
    case 0xC2D716: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:442 JSL UNKNOWN_C08D79
    case 0xC2D717: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/battle/load_battlebg.asm:443 LDY #$6000
    case 0xC2D71B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/battle/load_battlebg.asm:443 LDY #$6000
    // Overlapping static entry reached from 0xC2D71B.
    case 0xC2D71D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:444 LDX #$7C00
    case 0xC2D71E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/battle/load_battlebg.asm:444 LDX #$7C00
    // Overlapping static entry reached from 0xC2D71E.
    case 0xC2D720: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/battle/load_battlebg.asm:445 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D721: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:445 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D721.
    case 0xC2D723: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:446 JSL SET_BG1_VRAM_LOCATION
    case 0xC2D724: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/battle/load_battlebg.asm:447 LDY #$0000
    case 0xC2D728: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:447 LDY #$0000
    // Overlapping static entry reached from 0xC2D728.
    case 0xC2D72A: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/load_battlebg.asm:448 LDX #$5800
    case 0xC2D72B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/battle/load_battlebg.asm:448 LDX #$5800
    // Overlapping static entry reached from 0xC2D72B.
    case 0xC2D72D: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:449 TYA
    case 0xC2D72E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:450 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D72F: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // src/battle/load_battlebg.asm:451 LDY #$1000
    case 0xC2D733: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/battle/load_battlebg.asm:451 LDY #$1000
    // Overlapping static entry reached from 0xC2D733.
    case 0xC2D735: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/battle/load_battlebg.asm:452 LDX #$5C00
    case 0xC2D736: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/battle/load_battlebg.asm:452 LDX #$5C00
    // Overlapping static entry reached from 0xC2D735.
    case 0xC2D737: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/battle/load_battlebg.asm:452 LDX #$5C00
    // Overlapping static entry reached from 0xC2D736.
    case 0xC2D738: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/battle/load_battlebg.asm:453 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D739: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:453 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D739.
    case 0xC2D73B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:454 JSL SET_BG3_VRAM_LOCATION
    case 0xC2D73C: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/battle/load_battlebg.asm:455 LDY #$3000
    case 0xC2D740: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // src/battle/load_battlebg.asm:455 LDY #$3000
    // Overlapping static entry reached from 0xC2D740.
    case 0xC2D742: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // src/battle/load_battlebg.asm:456 LDX #$0C00
    case 0xC2D743: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // src/battle/load_battlebg.asm:456 LDX #$0C00
    // Overlapping static entry reached from 0xC2D742.
    case 0xC2D744: cpu.execute_instruction<0x00>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:456 LDX #$0C00
    // Overlapping static entry reached from 0xC2D743.
    case 0xC2D745: cpu.execute_instruction<0x0C>(0x0000A9, 3); return true;
    // src/battle/load_battlebg.asm:457 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D746: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:457 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D746.
    case 0xC2D748: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:458 JSL SET_BG4_VRAM_LOCATION
    case 0xC2D749: cpu.execute_instruction<0x22>(0xC08E5C, 4); return true;
    // src/battle/load_battlebg.asm:459 LDA #0
    case 0xC2D74D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:459 LDA #0
    // Overlapping static entry reached from 0xC2D74D.
    case 0xC2D74F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg.asm:460 STA @LOCAL0A
    case 0xC2D750: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:461 BRA @UNKNOWN17
    case 0xC2D752: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:463 STORE_INT1632 @VIRTUAL06
    case 0xC2D754: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:463 STORE_INT1632 @VIRTUAL06
    case 0xC2D756: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:464 CLC
    case 0xC2D758: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D759: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D75B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D75B.
    case 0xC2D75D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D75E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D760: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D762: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D762.
    case 0xC2D764: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:465 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D765: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:466 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D767: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:467 LDA [@VIRTUAL06]
    case 0xC2D769: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:468 AND #$00DF
    case 0xC2D76B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0087DF, 3); return true;
    // src/battle/load_battlebg.asm:469 STA [@VIRTUAL06]
    case 0xC2D76D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:469 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D76B.
    case 0xC2D76E: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg.asm:470 REP #PROC_FLAGS::ACCUM8
    case 0xC2D76F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:470 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D76E.
    case 0xC2D770: cpu.execute_instruction<0x20>(0x002EA5, 3); return true;
    // src/battle/load_battlebg.asm:471 LDA @LOCAL0A
    case 0xC2D771: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:472 INC
    case 0xC2D773: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:473 INC
    case 0xC2D774: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:474 STA @LOCAL0A
    case 0xC2D775: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:476 CMP #$0800
    case 0xC2D777: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg.asm:476 CMP #$0800
    // Overlapping static entry reached from 0xC2D777.
    case 0xC2D779: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:477 BCC @UNKNOWN16
    case 0xC2D77A: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D77C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D77C.
    case 0xC2D77E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D77F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D781: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D781.
    case 0xC2D783: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:478 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D784: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D786: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D788: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D78A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:479 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D78C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D78E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D790: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D792: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D794: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D796: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D796.
    case 0xC2D798: cpu.execute_instruction<0x5C>(0x0800A2, 4); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D799: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D799.
    case 0xC2D79B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D79C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D79E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D7A0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D79E.
    case 0xC2D7A1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:480 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D7A1.
    case 0xC2D7A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    // Overlapping static entry reached from 0xC2D7A3.
    case 0xC2D7A5: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    // Overlapping static entry reached from 0xC2D7A4.
    case 0xC2D7A6: cpu.execute_instruction<0xDC>(0x002885, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7A7: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    // Overlapping static entry reached from 0xC2D7A9.
    case 0xC2D7AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:482 LOADPTR BG_DATA_TABLE, @LOCAL08
    case 0xC2D7AC: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/battle/load_battlebg.asm:483 LDA @VIRTUAL02
    case 0xC2D7AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:484 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D7B6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:485 TAX
    case 0xC2D7B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:486 STX @LOCAL05
    case 0xC2D7B9: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7BB: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7BF: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:487 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC2D7C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:488 TXA
    case 0xC2D7C3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:489 CLC
    case 0xC2D7C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:490 ADC @VIRTUAL06
    case 0xC2D7C5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:491 STA @VIRTUAL06
    case 0xC2D7C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:492 STA @LOCAL00
    case 0xC2D7C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg.asm:493 LDA @VIRTUAL06+2
    case 0xC2D7CB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:494 STA @LOCAL00+2
    case 0xC2D7CD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:495 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D7CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/battle/load_battlebg.asm:495 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D7CF.
    case 0xC2D7D1: cpu.execute_instruction<0xAD>(0x00E522, 3); return true;
    // src/battle/load_battlebg.asm:496 JSL UNKNOWN_C2CFE5
    case 0xC2D7D2: cpu.execute_instruction<0x22>(0xC2CFE5, 4); return true;
    // src/battle/load_battlebg.asm:496 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D7D1.
    case 0xC2D7D4: cpu.execute_instruction<0xCF>(0x20A9C2, 4); return true;
    // src/battle/load_battlebg.asm:497 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D7D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00AE20, 3); return true;
    // src/battle/load_battlebg.asm:497 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D7D6.
    case 0xC2D7D8: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/battle/load_battlebg.asm:498 STA @VIRTUAL02
    case 0xC2D7D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:499 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D7DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/load_battlebg.asm:499 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D7DB.
    case 0xC2D7DD: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg.asm:500 LDX @VIRTUAL02
    case 0xC2D7DE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:501 STA __BSS_START__,X
    case 0xC2D7E0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:502 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D7E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E0, 2); else cpu.execute_instruction<0xA0>(0x00ADE0, 3); return true;
    // src/battle/load_battlebg.asm:502 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D7E3.
    case 0xC2D7E5: cpu.execute_instruction<0xAD>(0x001E84, 3); return true;
    // src/battle/load_battlebg.asm:503 STY @LOCAL04
    case 0xC2D7E6: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D7E8.
    case 0xC2D7EA: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7EB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D7ED.
    case 0xC2D7EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:504 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D7F0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F2: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F6: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:505 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D7F8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:506 LDX @LOCAL05
    case 0xC2D7FA: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:507 TXA
    case 0xC2D7FC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:508 INC
    case 0xC2D7FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:509 CLC
    case 0xC2D7FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:510 ADC @VIRTUAL0A
    case 0xC2D7FF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:511 STA @VIRTUAL0A
    case 0xC2D801: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D803: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D805: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D807: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:512 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D809: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:513 LDA [@VIRTUAL0A]
    case 0xC2D80B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:514 AND #$00FF
    case 0xC2D80D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:514 AND #$00FF
    // Overlapping static entry reached from 0xC2D80D.
    case 0xC2D80F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:515 ASL
    case 0xC2D810: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:516 ASL
    case 0xC2D811: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:517 CLC
    case 0xC2D812: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:518 ADC @VIRTUAL06
    case 0xC2D813: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:519 STA @VIRTUAL06
    case 0xC2D815: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D817: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D817.
    case 0xC2D819: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D81F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:520 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D821: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D823: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D825: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D827: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:521 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D829: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:522 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D82B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:522 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D82B.
    case 0xC2D82D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg.asm:523 LDY @LOCAL04
    case 0xC2D82E: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:524 TYA
    case 0xC2D830: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:525 JSL MEMCPY16
    case 0xC2D831: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:526 LDA [@VIRTUAL0A]
    case 0xC2D835: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:527 AND #$00FF
    case 0xC2D837: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC2D837.
    case 0xC2D839: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:528 ASL
    case 0xC2D83A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:529 ASL
    case 0xC2D83B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:530 PHA
    case 0xC2D83C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D83D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D83F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D841: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:531 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC2D843: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:532 PLA
    case 0xC2D845: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:533 CLC
    case 0xC2D846: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:534 ADC @VIRTUAL0A
    case 0xC2D847: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:535 STA @VIRTUAL0A
    case 0xC2D849: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D84B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D84B.
    case 0xC2D84D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D84E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D850: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D851: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D853: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:536 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D855: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D857: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D859: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D85B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:537 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D85D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:538 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D85F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:538 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D85F.
    case 0xC2D861: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg.asm:539 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D862: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00AE00, 3); return true;
    // src/battle/load_battlebg.asm:539 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D862.
    case 0xC2D864: cpu.execute_instruction<0xAE>(0x00D222, 3); return true;
    // src/battle/load_battlebg.asm:540 JSL MEMCPY16
    case 0xC2D865: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:540 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D864.
    case 0xC2D867: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/battle/load_battlebg.asm:541 LDY @LOCAL04
    case 0xC2D869: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/battle/load_battlebg.asm:541 LDY @LOCAL04
    // Overlapping static entry reached from 0xC2D867.
    case 0xC2D86A: cpu.execute_instruction<0x1E>(0x008598, 3); return true;
    // src/battle/load_battlebg.asm:542 TYA
    case 0xC2D86B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D86C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D86A.
    case 0xC2D86D: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D86E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D86F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D871: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D872: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:543 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D874: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg.asm:544 REP #PROC_FLAGS::ACCUM8
    case 0xC2D876: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D878: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D87A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D87C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:545 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D87E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:546 LDX #32
    case 0xC2D880: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:546 LDX #32
    // Overlapping static entry reached from 0xC2D880.
    case 0xC2D882: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg.asm:547 STX @LOCAL05
    case 0xC2D883: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:548 LDX @VIRTUAL02
    case 0xC2D885: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:549 LDA __BSS_START__,X
    case 0xC2D887: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:550 LDX @LOCAL05
    case 0xC2D88A: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:551 JSL MEMCPY16
    case 0xC2D88C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:552 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D890: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:553 LDA #3
    case 0xC2D892: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/battle/load_battlebg.asm:554 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    case 0xC2D894: cpu.execute_instruction<0x8D>(0x00ADD4, 3); return true;
    // src/battle/load_battlebg.asm:554 STA LOADED_BG_DATA_LAYER1 + loaded_bg_data::target_layer
    // Overlapping static entry reached from 0xC2D892.
    case 0xC2D895: cpu.execute_instruction<0xD4>(0x0000AD, 2); return true;
    // src/battle/load_battlebg.asm:555 REP #PROC_FLAGS::ACCUM8
    case 0xC2D897: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:556 LDA @LOCAL09
    case 0xC2D899: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:557 STA @VIRTUAL04
    case 0xC2D89B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg.asm:558 BEQL @UNKNOWN21
    case 0xC2D89D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg.asm:558 BEQL @UNKNOWN21
    case 0xC2D89F: cpu.execute_instruction<0x4C>(0x00DA9F, 3); return true;
    // src/battle/load_battlebg.asm:559 LDA #3
    case 0xC2D8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/load_battlebg.asm:559 LDA #3
    // Overlapping static entry reached from 0xC2D8A2.
    case 0xC2D8A4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:560 STA CURRENT_LAYER_CONFIG
    case 0xC2D8A5: cpu.execute_instruction<0x8D>(0x00AD8A, 3); return true;
    // src/battle/load_battlebg.asm:561 JSL UNKNOWN_C0AFCD
    case 0xC2D8A8: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8AC: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8AE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D90B.
    case 0xC2D8AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8B0: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:562 MOVE_INT @LOCAL08, @VIRTUAL0A
    case 0xC2D8B2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:563 LDA @VIRTUAL04
    case 0xC2D8B4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:564 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D8BC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:565 CLC
    case 0xC2D8BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:566 ADC @VIRTUAL0A
    case 0xC2D8BF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:567 STA @VIRTUAL0A
    case 0xC2D8C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C3.
    case 0xC2D8C5: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C5.
    case 0xC2D8C7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C7.
    case 0xC2D8C9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8C8.
    case 0xC2D8CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:568 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D8CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:569 LDA [@VIRTUAL0A]
    case 0xC2D8CD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:570 AND #$00FF
    case 0xC2D8CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:570 AND #$00FF
    // Overlapping static entry reached from 0xC2D8CF.
    case 0xC2D8D1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg.asm:571 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D8D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg.asm:571 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D8D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:572 CLC
    case 0xC2D8D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:573 ADC @VIRTUAL06
    case 0xC2D8D5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:574 STA @VIRTUAL06
    case 0xC2D8D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8D9.
    case 0xC2D8DB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8DC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8DE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8DF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8E1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:575 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D8E3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8E5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:576 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D8EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8ED: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8F1: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:577 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8F7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:578 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8FB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg.asm:579 JSL DECOMP
    case 0xC2D8FD: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D901: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D903: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D905: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D907: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D909: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D909.
    case 0xC2D90B: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D90C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D90B.
    case 0xC2D90D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D90C.
    case 0xC2D90E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D90F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D911: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D913: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D911.
    case 0xC2D914: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:580 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D914.
    case 0xC2D916: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A7, 2); else cpu.execute_instruction<0xC0>(0x000AA7, 3); return true;
    // src/battle/load_battlebg.asm:582 LDA [@VIRTUAL0A]
    case 0xC2D917: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:582 LDA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC2D916.
    case 0xC2D918: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:583 AND #$00FF
    case 0xC2D919: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:583 AND #$00FF
    // Overlapping static entry reached from 0xC2D919.
    case 0xC2D91B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:584 ASL
    case 0xC2D91C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:585 ASL
    case 0xC2D91D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:586 PHA
    case 0xC2D91E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D91F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D91F.
    case 0xC2D921: cpu.execute_instruction<0xD9>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D922: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D924: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D924.
    case 0xC2D926: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:587 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC2D927: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:588 PLA
    case 0xC2D929: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:589 CLC
    case 0xC2D92A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:590 ADC @VIRTUAL0A
    case 0xC2D92B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:591 STA @VIRTUAL0A
    case 0xC2D92D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D92F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D92F.
    case 0xC2D931: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D932: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D934: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D935: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D937: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:592 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D939: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D93B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D93D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D93F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:593 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D941: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D943: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D945: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D947: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:594 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D949: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D94B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D94D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D94F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:595 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D951: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg.asm:596 JSL DECOMP
    case 0xC2D953: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/battle/load_battlebg.asm:597 LDA #0
    case 0xC2D957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:597 LDA #0
    // Overlapping static entry reached from 0xC2D957.
    case 0xC2D959: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg.asm:598 STA @LOCAL0A
    case 0xC2D95A: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:599 BRA @UNKNOWN20
    case 0xC2D95C: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg.asm:601 STORE_INT1632 @VIRTUAL06
    case 0xC2D95E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg.asm:601 STORE_INT1632 @VIRTUAL06
    case 0xC2D960: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:602 CLC
    case 0xC2D962: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D963: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D965: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D965.
    case 0xC2D967: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D968: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D96A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D96C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D96C.
    case 0xC2D96E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:603 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D96F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:604 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D971: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:605 LDA [@VIRTUAL06]
    case 0xC2D973: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:606 AND #$00DF
    case 0xC2D975: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0087DF, 3); return true;
    // src/battle/load_battlebg.asm:607 STA [@VIRTUAL06]
    case 0xC2D977: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:607 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D975.
    case 0xC2D978: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg.asm:608 REP #PROC_FLAGS::ACCUM8
    case 0xC2D979: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:608 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D978.
    case 0xC2D97A: cpu.execute_instruction<0x20>(0x002EA5, 3); return true;
    // src/battle/load_battlebg.asm:609 LDA @LOCAL0A
    case 0xC2D97B: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:610 INC
    case 0xC2D97D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:611 INC
    case 0xC2D97E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:612 STA @LOCAL0A
    case 0xC2D97F: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/load_battlebg.asm:614 CMP #$0800
    case 0xC2D981: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg.asm:614 CMP #$0800
    // Overlapping static entry reached from 0xC2D981.
    case 0xC2D983: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:615 BCC @UNKNOWN19
    case 0xC2D984: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D986: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D986.
    case 0xC2D988: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D989: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D98B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D98B.
    case 0xC2D98D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D98E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D990: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D990.
    case 0xC2D992: cpu.execute_instruction<0x0C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D993.
    case 0xC2D995: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D996: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D99A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D998.
    case 0xC2D99B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg.asm:616 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D99B.
    case 0xC2D99D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D99E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D99D.
    case 0xC2D99F: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D99E.
    case 0xC2D9A0: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D9A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D9A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D9A3.
    case 0xC2D9A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:618 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D9A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9AA: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:619 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC2D9AE: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/battle/load_battlebg.asm:620 LDA @LOCAL09
    case 0xC2D9B0: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:621 STA @VIRTUAL04
    case 0xC2D9B2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg.asm:622 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D9BA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:623 TAX
    case 0xC2D9BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:624 STX @LOCAL05
    case 0xC2D9BD: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:625 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D9BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00AE4B, 3); return true;
    // src/battle/load_battlebg.asm:625 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D9BF.
    case 0xC2D9C1: cpu.execute_instruction<0xAE>(0x000485, 3); return true;
    // src/battle/load_battlebg.asm:626 STA @VIRTUAL04
    case 0xC2D9C2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:627 TXA
    case 0xC2D9C4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:628 CLC
    case 0xC2D9C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:629 ADC @VIRTUAL06
    case 0xC2D9C6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:630 STA @VIRTUAL06
    case 0xC2D9C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:631 STA @LOCAL00
    case 0xC2D9CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg.asm:632 LDA @VIRTUAL06+2
    case 0xC2D9CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:633 STA @LOCAL00+2
    case 0xC2D9CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:634 LDA @VIRTUAL04
    case 0xC2D9D0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:635 JSL UNKNOWN_C2CFE5
    case 0xC2D9D2: cpu.execute_instruction<0x22>(0xC2CFE5, 4); return true;
    // src/battle/load_battlebg.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D9D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x00AE97, 3); return true;
    // src/battle/load_battlebg.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D9D6.
    case 0xC2D9D8: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/battle/load_battlebg.asm:637 STA @VIRTUAL02
    case 0xC2D9D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:638 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    case 0xC2D9DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0002C0, 3); return true;
    // src/battle/load_battlebg.asm:638 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2D9DB.
    case 0xC2D9DD: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg.asm:639 LDX @VIRTUAL02
    case 0xC2D9DE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:640 STA __BSS_START__,X
    case 0xC2D9E0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:641 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D9E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000057, 2); else cpu.execute_instruction<0xA0>(0x00AE57, 3); return true;
    // src/battle/load_battlebg.asm:641 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D9E3.
    case 0xC2D9E5: cpu.execute_instruction<0xAE>(0x002C84, 3); return true;
    // src/battle/load_battlebg.asm:642 STY @LOCAL09
    case 0xC2D9E6: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D9E8.
    case 0xC2D9EA: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9EB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D9ED.
    case 0xC2D9EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg.asm:643 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D9F0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg.asm:644 LDX @LOCAL05
    case 0xC2D9F2: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:645 TXA
    case 0xC2D9F4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:646 INC
    case 0xC2D9F5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9F6: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9F8: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9FA: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:647 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC2D9FC: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:648 CLC
    case 0xC2D9FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:649 ADC @VIRTUAL06
    case 0xC2D9FF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:650 STA @VIRTUAL06
    case 0xC2DA01: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:651 STA @LOCAL02
    case 0xC2DA03: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/load_battlebg.asm:652 LDA @VIRTUAL06+2
    case 0xC2DA05: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:653 STA @LOCAL02+2
    case 0xC2DA07: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battlebg.asm:654 LDA [@VIRTUAL06]
    case 0xC2DA09: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:655 AND #$00FF
    case 0xC2DA0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:655 AND #$00FF
    // Overlapping static entry reached from 0xC2DA0B.
    case 0xC2DA0D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:656 ASL
    case 0xC2DA0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:657 ASL
    case 0xC2DA0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA10: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA12: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA14: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg.asm:658 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA16: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:659 CLC
    case 0xC2DA18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:660 ADC @VIRTUAL06
    case 0xC2DA19: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:661 STA @VIRTUAL06
    case 0xC2DA1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DA1D.
    case 0xC2DA1F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA20: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA22: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA23: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA25: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:662 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2DA27: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA29: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA2B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA2D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:663 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA2F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:664 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2DA31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:664 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2DA31.
    case 0xC2DA33: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg.asm:665 LDY @LOCAL09
    case 0xC2DA34: cpu.execute_instruction<0xA4>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:666 TYA
    case 0xC2DA36: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:667 JSL MEMCPY16
    case 0xC2DA37: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA3B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA3D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA3F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:668 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2DA41: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg.asm:669 LDA [@VIRTUAL06]
    case 0xC2DA43: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:670 AND #$00FF
    case 0xC2DA45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:670 AND #$00FF
    // Overlapping static entry reached from 0xC2DA45.
    case 0xC2DA47: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:671 ASL
    case 0xC2DA48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:672 ASL
    case 0xC2DA49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:673 CLC
    case 0xC2DA4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:674 ADC @VIRTUAL0A
    case 0xC2DA4B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg.asm:675 STA @VIRTUAL0A
    case 0xC2DA4D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2DA4F.
    case 0xC2DA51: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA52: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA54: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA55: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg.asm:676 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2DA59: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA5F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA61: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:678 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2DA63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:678 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2DA63.
    case 0xC2DA65: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg.asm:679 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2DA66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x00AE77, 3); return true;
    // src/battle/load_battlebg.asm:679 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2DA66.
    case 0xC2DA68: cpu.execute_instruction<0xAE>(0x00D222, 3); return true;
    // src/battle/load_battlebg.asm:680 JSL MEMCPY16
    case 0xC2DA69: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:680 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2DA68.
    case 0xC2DA6B: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/battle/load_battlebg.asm:681 LDY @LOCAL09
    case 0xC2DA6D: cpu.execute_instruction<0xA4>(0x00002C, 2); return true;
    // src/battle/load_battlebg.asm:681 LDY @LOCAL09
    // Overlapping static entry reached from 0xC2DA6B.
    case 0xC2DA6E: cpu.execute_instruction<0x2C>(0x008598, 3); return true;
    // src/battle/load_battlebg.asm:682 TYA
    case 0xC2DA6F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA70: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2DA6E.
    case 0xC2DA71: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA72: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA73: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA75: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA76: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg.asm:683 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2DA78: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg.asm:684 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA7A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA7C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA7E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA80: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg.asm:685 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2DA82: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg.asm:686 LDX #32
    case 0xC2DA84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg.asm:686 LDX #32
    // Overlapping static entry reached from 0xC2DA84.
    case 0xC2DA86: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg.asm:687 STX @LOCAL05
    case 0xC2DA87: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:688 LDX @VIRTUAL02
    case 0xC2DA89: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg.asm:689 LDA __BSS_START__,X
    case 0xC2DA8B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:690 LDX @LOCAL05
    case 0xC2DA8E: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:691 JSL MEMCPY16
    case 0xC2DA90: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/load_battlebg.asm:692 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:693 LDA #4
    case 0xC2DA96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x00A604, 3); return true;
    // src/battle/load_battlebg.asm:694 LDX @VIRTUAL04
    case 0xC2DA98: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/load_battlebg.asm:694 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2DA96.
    case 0xC2DA99: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/load_battlebg.asm:695 STA __BSS_START__,X
    case 0xC2DA9A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg.asm:695 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2DA99.
    case 0xC2DA9B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg.asm:696 BRA @UNKNOWN22
    case 0xC2DA9D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/load_battlebg.asm:698 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA9F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:699 STZ LOADED_BG_DATA_LAYER2 + loaded_bg_data::target_layer
    case 0xC2DAA1: cpu.execute_instruction<0x9C>(0x00AE4B, 3); return true;
    // src/battle/load_battlebg.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC2DAA4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:702 LDA #$0817
    case 0xC2DAA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000817, 3); return true;
    // src/battle/load_battlebg.asm:702 LDA #$0817
    // Overlapping static entry reached from 0xC2DAA6.
    case 0xC2DAA8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg.asm:703 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2DAA9: cpu.execute_instruction<0x8D>(0x00ADAE, 3); return true;
    // src/battle/load_battlebg.asm:704 LDA #$0013
    case 0xC2DAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/battle/load_battlebg.asm:704 LDA #$0013
    // Overlapping static entry reached from 0xC2DAAC.
    case 0xC2DAAE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:705 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2DAAF: cpu.execute_instruction<0x8D>(0x00ADB0, 3); return true;
    // src/battle/load_battlebg.asm:707 REP #PROC_FLAGS::ACCUM8
    case 0xC2DAB2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg.asm:708 STZ DISTORT_30FPS
    case 0xC2DAB4: cpu.execute_instruction<0x9C>(0x00ADAC, 3); return true;
    // src/battle/load_battlebg.asm:709 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DAB7: cpu.execute_instruction<0xAD>(0x00AE4B, 3); return true;
    // src/battle/load_battlebg.asm:710 AND #$00FF
    case 0xC2DABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:710 AND #$00FF
    // Overlapping static entry reached from 0xC2DABA.
    case 0xC2DABC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg.asm:711 BEQ @UNKNOWN24
    case 0xC2DABD: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/load_battlebg.asm:712 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::distortion_styles
    case 0xC2DABF: cpu.execute_instruction<0xAD>(0x00AEAC, 3); return true;
    // src/battle/load_battlebg.asm:713 AND #$00FF
    case 0xC2DAC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg.asm:713 AND #$00FF
    // Overlapping static entry reached from 0xC2DAC2.
    case 0xC2DAC4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg.asm:714 BEQ @UNKNOWN24
    case 0xC2DAC5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/load_battlebg.asm:715 LDA #1
    case 0xC2DAC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/load_battlebg.asm:715 LDA #1
    // Overlapping static entry reached from 0xC2DAC7.
    case 0xC2DAC9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg.asm:716 STA DISTORT_30FPS
    case 0xC2DACA: cpu.execute_instruction<0x8D>(0x00ADAC, 3); return true;
    // src/battle/load_battlebg.asm:718 JSL UNKNOWN_C2D0AC
    case 0xC2DACD: cpu.execute_instruction<0x22>(0xC2D0AC, 4); return true;
    // src/battle/load_battlebg.asm:719 LDA LETTERBOX_TOP_END
    case 0xC2DAD1: cpu.execute_instruction<0xAD>(0x00ADB2, 3); return true;
    // src/battle/load_battlebg.asm:720 BEQ @UNKNOWN25
    case 0xC2DAD4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/load_battlebg.asm:721 LDA #2
    case 0xC2DAD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/load_battlebg.asm:721 LDA #2
    // Overlapping static entry reached from 0xC2DAD6.
    case 0xC2DAD8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg.asm:722 JSL UNKNOWN_C429E8
    case 0xC2DAD9: cpu.execute_instruction<0x22>(0xC429E8, 4); return true;
    // src/battle/load_battlebg.asm:724 JSL UNKNOWN_C2E9ED
    case 0xC2DADD: cpu.execute_instruction<0x22>(0xC2E9ED, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battlebg.asm:725 END_C_FUNCTION
    case 0xC2DAE1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_battlebg.asm:725 END_C_FUNCTION
    case 0xC2DAE2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_battlebg_movement.asm (source_named).
bool execute_battle_load_battlebg_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/battle/load_battlebg_movement.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A977: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/battle/load_battlebg_movement.asm:4 PHA
    case 0xC0A97B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/load_battlebg_movement.asm:5 STY $94
    case 0xC0A97C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/battle/load_battlebg_movement.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A97E: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/battle/load_battlebg_movement.asm:7 TAX
    case 0xC0A982: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg_movement.asm:8 STY $94
    case 0xC0A983: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/battle/load_battlebg_movement.asm:9 PLA
    case 0xC0A985: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg_movement.asm:10 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC0A986: cpu.execute_instruction<0x22>(0xC47370, 4); return true;
    // src/battle/load_battlebg_movement.asm:11 RTL
    case 0xC0A98A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_enemy_battle_sprites.asm (source_named).
bool execute_battle_load_enemy_battle_sprites_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C8C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C8CC.
    case 0xC2C8CE: cpu.execute_instruction<0xFF>(0x09A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:7 LDA #9
    case 0xC2C8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:7 LDA #9
    // Overlapping static entry reached from 0xC2C8D0.
    case 0xC2C8D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:8 JSL UNKNOWN_C08D79
    case 0xC2C8D3: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:9 LDY #$0000
    case 0xC2C8D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:9 LDY #$0000
    // Overlapping static entry reached from 0xC2C8D7.
    case 0xC2C8D9: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:10 LDX #$5800
    case 0xC2C8DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:10 LDX #$5800
    // Overlapping static entry reached from 0xC2C8DA.
    case 0xC2C8DC: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:11 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8DD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:12 JSL SET_BG1_VRAM_LOCATION
    case 0xC2C8DE: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:13 LDY #$1000
    case 0xC2C8E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:13 LDY #$1000
    // Overlapping static entry reached from 0xC2C8E2.
    case 0xC2C8E4: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    case 0xC2C8E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    // Overlapping static entry reached from 0xC2C8E4.
    case 0xC2C8E6: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    // Overlapping static entry reached from 0xC2C8E5.
    case 0xC2C8E7: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:15 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:15 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2C8E8.
    case 0xC2C8EA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:16 JSL SET_BG2_VRAM_LOCATION
    case 0xC2C8EB: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:17 LDY #$6000
    case 0xC2C8EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:17 LDY #$6000
    // Overlapping static entry reached from 0xC2C8EF.
    case 0xC2C8F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:18 LDX #$7C00
    case 0xC2C8F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:18 LDX #$7C00
    // Overlapping static entry reached from 0xC2C8F2.
    case 0xC2C8F4: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2C8F5.
    case 0xC2C8F7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:20 JSL SET_BG3_VRAM_LOCATION
    case 0xC2C8F8: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:21 LDA #$0061
    case 0xC2C8FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x000061, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:21 LDA #$0061
    // Overlapping static entry reached from 0xC2C8FC.
    case 0xC2C8FE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:22 JSL SET_OAM_SIZE
    case 0xC2C8FF: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C903: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C903.
    case 0xC2C905: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C906: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C908.
    case 0xC2C90A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C90B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C90D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:25 LDA #0
    case 0xC2C90F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:26 STA [@VIRTUAL06]
    case 0xC2C911: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:26 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2C90F.
    case 0xC2C912: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2C913: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:27 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C912.
    case 0xC2C914: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C915: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C917: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C919: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C91B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C91D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C91D.
    case 0xC2C91F: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C920: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C920.
    case 0xC2C922: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C923: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C927: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C925.
    case 0xC2C928: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C928.
    case 0xC2C92A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:29 END_C_FUNCTION
    case 0xC2C92B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:29 END_C_FUNCTION
    case 0xC2C92C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/lose_hp_status.asm (source_named).
bool execute_battle_lose_hp_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/lose_hp_status.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BCE6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BCE8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BCE9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BCEA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BCEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BCEB.
    case 0xC2BCED: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BCEE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BCEF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:9 STX @VIRTUAL02
    case 0xC2BCF0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/lose_hp_status.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2BCED.
    case 0xC2BCF1: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/lose_hp_status.asm:10 TAY
    case 0xC2BCF2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:11 LDA a:battler::hp_target,Y
    case 0xC2BCF3: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/lose_hp_status.asm:12 STA @LOCAL00
    case 0xC2BCF6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/lose_hp_status.asm:13 STA @VIRTUAL04
    case 0xC2BCF8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/lose_hp_status.asm:14 LDA @VIRTUAL02
    case 0xC2BCFA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/lose_hp_status.asm:15 CMP @VIRTUAL04
    case 0xC2BCFC: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/lose_hp_status.asm:16 BLTEQ @UNKNOWN0
    case 0xC2BCFE: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/lose_hp_status.asm:16 BLTEQ @UNKNOWN0
    case 0xC2BD00: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/lose_hp_status.asm:17 LDA #0
    case 0xC2BD02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/lose_hp_status.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2BD02.
    case 0xC2BD04: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/lose_hp_status.asm:18 BRA @UNKNOWN1
    case 0xC2BD05: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/lose_hp_status.asm:20 LDA @LOCAL00
    case 0xC2BD07: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/lose_hp_status.asm:21 SEC
    case 0xC2BD09: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:22 SBC @VIRTUAL02
    case 0xC2BD0A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/lose_hp_status.asm:24 TAX
    case 0xC2BD0C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:25 TYA
    case 0xC2BD0D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:26 JSR SET_HP
    case 0xC2BD0E: cpu.execute_instruction<0x20>(0x007126, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/lose_hp_status.asm:27 END_C_FUNCTION
    case 0xC2BD11: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/lose_hp_status.asm:27 END_C_FUNCTION
    case 0xC2BD12: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
