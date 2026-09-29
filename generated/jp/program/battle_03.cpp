// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/battle/choose_target.asm (source_named).
bool execute_battle_choose_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/choose_target.asm:2 BEGIN_C_FUNCTION_FAR
    case 0xC24344: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24346: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24347: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24348: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC24349.
    case 0xC2434B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2434C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2434D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/choose_target.asm:7 STA $02
    case 0xC2434E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/choose_target.asm:7 STA $02
    // Overlapping static entry reached from 0xC2434B.
    case 0xC2434F: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/battle/choose_target.asm:8 LDX #$0000
    case 0xC24350: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/choose_target.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC24350.
    case 0xC24352: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/choose_target.asm:9 STX $0E
    case 0xC24353: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:10 BRA @UNKNOWN1
    case 0xC24355: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/choose_target.asm:12 LDA FRONT_ROW_BATTLERS,X
    case 0xC24357: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/battle/choose_target.asm:13 AND #$00FF
    case 0xC2435A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC2435A.
    case 0xC2435C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/choose_target.asm:14 JSL CHECK_IF_VALID_TARGET
    case 0xC2435D: cpu.execute_instruction<0x22>(0xC47662, 4); return true;
    // src/battle/choose_target.asm:15 CMP #$0000
    case 0xC24361: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:15 CMP #$0000
    // Overlapping static entry reached from 0xC24361.
    case 0xC24363: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:16 BNE @UNKNOWN4
    case 0xC24364: cpu.execute_instruction<0xD0>(0x00002E, 2); return true;
    // src/battle/choose_target.asm:17 LDX $0E
    case 0xC24366: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:18 INX
    case 0xC24368: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:19 STX $0E
    case 0xC24369: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:21 CPX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2436B: cpu.execute_instruction<0xEC>(0x00AF2B, 3); return true;
    // src/battle/choose_target.asm:22 BCC @UNKNOWN0
    case 0xC2436E: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/choose_target.asm:23 LDX #$0000
    case 0xC24370: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/choose_target.asm:23 LDX #$0000
    // Overlapping static entry reached from 0xC24370.
    case 0xC24372: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/choose_target.asm:24 STX $0E
    case 0xC24373: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:25 BRA @UNKNOWN3
    case 0xC24375: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/choose_target.asm:27 LDA BACK_ROW_BATTLERS,X
    case 0xC24377: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/battle/choose_target.asm:28 AND #$00FF
    case 0xC2437A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC2437A.
    case 0xC2437C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/choose_target.asm:29 JSL CHECK_IF_VALID_TARGET
    case 0xC2437D: cpu.execute_instruction<0x22>(0xC47662, 4); return true;
    // src/battle/choose_target.asm:30 CMP #$0000
    case 0xC24381: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:30 CMP #$0000
    // Overlapping static entry reached from 0xC24381.
    case 0xC24383: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:31 BNE @UNKNOWN4
    case 0xC24384: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:32 LDX $0E
    case 0xC24386: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:33 INX
    case 0xC24388: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:34 STX $0E
    case 0xC24389: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:36 CPX NUM_BATTLERS_IN_BACK_ROW
    case 0xC2438B: cpu.execute_instruction<0xEC>(0x00AF2D, 3); return true;
    // src/battle/choose_target.asm:37 BCC @UNKNOWN2
    case 0xC2438E: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/choose_target.asm:38 JSL UNKNOWN_C2F917
    case 0xC24390: cpu.execute_instruction<0x22>(0xC2F830, 4); return true;
    // src/battle/choose_target.asm:40 LDX $02
    case 0xC24394: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:41 LDA a:battler::current_action,X
    case 0xC24396: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC24399: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:43 TAX
    case 0xC243A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:44 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC243A1: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/choose_target.asm:45 AND #$00FF
    case 0xC243A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC243A5.
    case 0xC243A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:46 BNE @UNKNOWN6
    case 0xC243A8: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/battle/choose_target.asm:47 LDX $02
    case 0xC243AA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:48 LDA a:battler::ally_or_enemy,X
    case 0xC243AC: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:49 AND #$00FF
    case 0xC243AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC243AF.
    case 0xC243B1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:50 CMP #$0001
    case 0xC243B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:50 CMP #$0001
    // Overlapping static entry reached from 0xC243B2.
    case 0xC243B4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:51 BNE @UNKNOWN5
    case 0xC243B5: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/choose_target.asm:52 LDX $02
    case 0xC243B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC243B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:54 STZ a:battler::action_targetting,X
    case 0xC243BB: cpu.execute_instruction<0x9E>(0x000009, 3); return true;
    // src/battle/choose_target.asm:55 BRA @UNKNOWN8
    case 0xC243BE: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/battle/choose_target.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC243C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:58 LDA #$0010
    case 0xC243C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00A610, 3); return true;
    // src/battle/choose_target.asm:59 LDX $02
    case 0xC243C4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:59 LDX $02
    // Overlapping static entry reached from 0xC243C2.
    case 0xC243C5: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:60 STA a:battler::action_targetting,X
    case 0xC243C6: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/choose_target.asm:61 BRA @UNKNOWN8
    case 0xC243C9: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/battle/choose_target.asm:64 LDX $02
    case 0xC243CB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:65 LDA a:battler::ally_or_enemy,X
    case 0xC243CD: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:66 AND #$00FF
    case 0xC243D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC243D0.
    case 0xC243D2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:67 CMP #$0001
    case 0xC243D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:67 CMP #$0001
    // Overlapping static entry reached from 0xC243D3.
    case 0xC243D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:68 BNE @UNKNOWN7
    case 0xC243D6: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC243D8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:70 LDA #$0010
    case 0xC243DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00A610, 3); return true;
    // src/battle/choose_target.asm:71 LDX $02
    case 0xC243DC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:71 LDX $02
    // Overlapping static entry reached from 0xC243DA.
    case 0xC243DD: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:72 STA a:battler::action_targetting,X
    case 0xC243DE: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/choose_target.asm:73 BRA @UNKNOWN8
    case 0xC243E1: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/choose_target.asm:75 LDX $02
    case 0xC243E3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC243E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:77 STZ a:battler::action_targetting,X
    case 0xC243E7: cpu.execute_instruction<0x9E>(0x000009, 3); return true;
    // src/battle/choose_target.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC243EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    // Overlapping static entry reached from 0xC243EC.
    case 0xC243EE: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    // Overlapping static entry reached from 0xC243F1.
    case 0xC243F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/choose_target.asm:81 LDX $02
    case 0xC243F6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:82 INX
    case 0xC243F8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:83 INX
    case 0xC243F9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:84 INX
    case 0xC243FA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:85 INX
    case 0xC243FB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:86 STX $0E
    case 0xC243FC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:87 LDA __BSS_START__,X ;battler.current_action
    case 0xC243FE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24401: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24403: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24404: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24406: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24407: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:89 INC
    case 0xC24408: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC24409: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2440B: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2440D: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2440F: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/choose_target.asm:91 CLC
    case 0xC24411: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:92 ADC $0A
    case 0xC24412: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/choose_target.asm:93 STA $0A
    case 0xC24414: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/choose_target.asm:94 LDA [$0A]
    case 0xC24416: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/choose_target.asm:95 AND #$00FF
    case 0xC24418: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC24418.
    case 0xC2441A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:96 BEQ @UNKNOWN11
    case 0xC2441B: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/choose_target.asm:97 CMP #$0001
    case 0xC2441D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:97 CMP #$0001
    // Overlapping static entry reached from 0xC2441D.
    case 0xC2441F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:98 BEQ @UNKNOWN13
    case 0xC24420: cpu.execute_instruction<0xF0>(0x000067, 2); return true;
    // src/battle/choose_target.asm:99 CMP #$0002
    case 0xC24422: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/choose_target.asm:99 CMP #$0002
    // Overlapping static entry reached from 0xC24422.
    case 0xC24424: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:100 BEQ @UNKNOWN13
    case 0xC24425: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/battle/choose_target.asm:101 CMP #$0003
    case 0xC24427: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/choose_target.asm:101 CMP #$0003
    // Overlapping static entry reached from 0xC24427.
    case 0xC24429: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/choose_target.asm:102 BEQL @UNKNOWN22
    case 0xC2442A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/choose_target.asm:102 BEQL @UNKNOWN22
    case 0xC2442C: cpu.execute_instruction<0x4C>(0x004559, 3); return true;
    // src/battle/choose_target.asm:103 CMP #$0004
    case 0xC2442F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/choose_target.asm:103 CMP #$0004
    // Overlapping static entry reached from 0xC2442F.
    case 0xC24431: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/choose_target.asm:104 BEQL @UNKNOWN26
    case 0xC24432: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/choose_target.asm:104 BEQL @UNKNOWN26
    case 0xC24434: cpu.execute_instruction<0x4C>(0x0045B4, 3); return true;
    // src/battle/choose_target.asm:105 JMP @UNKNOWN27
    case 0xC24437: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:107 LDA $02
    case 0xC2443A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:108 CLC
    case 0xC2443C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:109 ADC #battler::action_targetting
    case 0xC2443D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:109 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2443D.
    case 0xC2443F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/choose_target.asm:110 TAX
    case 0xC24440: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC24441: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:112 LDA __BSS_START__,X
    case 0xC24443: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/choose_target.asm:113 ORA #$0001
    case 0xC24446: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x009D01, 3); return true;
    // src/battle/choose_target.asm:114 STA __BSS_START__,X
    case 0xC24448: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/choose_target.asm:114 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC24446.
    case 0xC24449: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:115 LDX $02
    case 0xC2444B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC2444D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:117 LDA a:battler::ally_or_enemy,X
    case 0xC2444F: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:118 AND #$00FF
    case 0xC24452: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC24452.
    case 0xC24454: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:119 CMP #$0001
    case 0xC24455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:119 CMP #$0001
    // Overlapping static entry reached from 0xC24455.
    case 0xC24457: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:120 BNE @UNKNOWN12
    case 0xC24458: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/battle/choose_target.asm:121 LDY #.SIZEOF(battler)
    case 0xC2445A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/choose_target.asm:121 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2445A.
    case 0xC2445C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/choose_target.asm:122 LDA $02
    case 0xC2445D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:123 SEC
    case 0xC2445F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/choose_target.asm:124 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC24460: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AE, 2); else cpu.execute_instruction<0xE9>(0x00A1AE, 3); return true;
    // src/battle/choose_target.asm:124 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24460.
    case 0xC24462: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/choose_target.asm:125 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC24463: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/battle/choose_target.asm:125 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC24462.
    case 0xC24464: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/battle/choose_target.asm:126 TAX
    case 0xC24467: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:127 LDA $02
    case 0xC24468: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:128 JSL UNKNOWN_C4A228
    case 0xC2446A: cpu.execute_instruction<0x22>(0xC47695, 4); return true;
    // src/battle/choose_target.asm:129 JMP @UNKNOWN27
    case 0xC2446E: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:131 LDY #.SIZEOF(battler)
    case 0xC24471: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/choose_target.asm:131 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24471.
    case 0xC24473: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/choose_target.asm:132 LDA $02
    case 0xC24474: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:133 SEC
    case 0xC24476: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/choose_target.asm:134 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC24477: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AE, 2); else cpu.execute_instruction<0xE9>(0x00A1AE, 3); return true;
    // src/battle/choose_target.asm:134 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24477.
    case 0xC24479: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/choose_target.asm:135 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2447A: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/battle/choose_target.asm:135 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC24479.
    case 0xC2447B: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/battle/choose_target.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC2447E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:137 INC
    case 0xC24480: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:138 LDX $02
    case 0xC24481: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:139 STA a:battler::current_target,X
    case 0xC24483: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:140 JMP @UNKNOWN27
    case 0xC24486: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:143 LDA $02
    case 0xC24489: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:144 CLC
    case 0xC2448B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:145 ADC #battler::action_targetting
    case 0xC2448C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:145 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2448C.
    case 0xC2448E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/choose_target.asm:146 TAY
    case 0xC2448F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC24490: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:148 LDA __BSS_START__,Y
    case 0xC24492: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:149 ORA #$0001
    case 0xC24495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x009901, 3); return true;
    // src/battle/choose_target.asm:150 STA __BSS_START__,Y
    case 0xC24497: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/choose_target.asm:150 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC24495.
    case 0xC24498: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:151 LDX $02
    case 0xC2449A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC2449C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:153 LDA a:battler::ally_or_enemy,X
    case 0xC2449E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:154 AND #$00FF
    case 0xC244A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC244A1.
    case 0xC244A3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:155 CMP #$0001
    case 0xC244A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:155 CMP #$0001
    // Overlapping static entry reached from 0xC244A4.
    case 0xC244A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:156 BNE @UNKNOWN18
    case 0xC244A7: cpu.execute_instruction<0xD0>(0x000064, 2); return true;
    // src/battle/choose_target.asm:157 LDX $0E
    case 0xC244A9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:158 LDA __BSS_START__,X ;battler.current_action
    case 0xC244AB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244AE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:160 CLC
    case 0xC244B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:161 ADC $06
    case 0xC244B6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/choose_target.asm:162 STA $06
    case 0xC244B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/choose_target.asm:163 LDA [$06]
    case 0xC244BA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/choose_target.asm:164 AND #$00FF
    case 0xC244BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC244BC.
    case 0xC244BE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:165 BNE @UNKNOWN16
    case 0xC244BF: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/choose_target.asm:166 JSL FIND_TARGETTABLE_NPC
    case 0xC244C1: cpu.execute_instruction<0x22>(0xC23E1C, 4); return true;
    // src/battle/choose_target.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC244C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:168 LDX $02
    case 0xC244C7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:169 STA a:battler::current_target,X
    case 0xC244C9: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:170 REP #PROC_FLAGS::ACCUM8
    case 0xC244CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:171 AND #$00FF
    case 0xC244CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC244CE.
    case 0xC244D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:172 BNEL @UNKNOWN27
    case 0xC244D1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:172 BNEL @UNKNOWN27
    case 0xC244D3: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:174 JSL RAND
    case 0xC244D6: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/choose_target.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC244DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:176 AND #$0007
    case 0xC244DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x001A07, 3); return true;
    // src/battle/choose_target.asm:177 INC
    case 0xC244DE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:178 LDX $02
    case 0xC244DF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:179 STA a:battler::current_target,X
    case 0xC244E1: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:180 REP #PROC_FLAGS::ACCUM8
    case 0xC244E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:181 AND #$00FF
    case 0xC244E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC244E6.
    case 0xC244E8: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/choose_target.asm:182 DEC
    case 0xC244E9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:183 JSL CHECK_IF_VALID_TARGET
    case 0xC244EA: cpu.execute_instruction<0x22>(0xC47662, 4); return true;
    // src/battle/choose_target.asm:184 CMP #$0000
    case 0xC244EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:184 CMP #$0000
    // Overlapping static entry reached from 0xC244EE.
    case 0xC244F0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:185 BNEL @UNKNOWN27
    case 0xC244F1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:185 BNEL @UNKNOWN27
    case 0xC244F3: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:186 BRA @UNKNOWN14
    case 0xC244F6: cpu.execute_instruction<0x80>(0x0000DE, 2); return true;
    // src/battle/choose_target.asm:188 LDA $02
    case 0xC244F8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:189 JSL UNKNOWN_C24434
    case 0xC244FA: cpu.execute_instruction<0x22>(0xC24301, 4); return true;
    // src/battle/choose_target.asm:190 TAX
    case 0xC244FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:191 JSL CHECK_IF_VALID_TARGET
    case 0xC244FF: cpu.execute_instruction<0x22>(0xC47662, 4); return true;
    // src/battle/choose_target.asm:192 CMP #$0000
    case 0xC24503: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:192 CMP #$0000
    // Overlapping static entry reached from 0xC24503.
    case 0xC24505: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:193 BNEL @UNKNOWN27
    case 0xC24506: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:193 BNEL @UNKNOWN27
    case 0xC24508: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:194 BRA @UNKNOWN16
    case 0xC2450B: cpu.execute_instruction<0x80>(0x0000EB, 2); return true;
    // src/battle/choose_target.asm:196 LDX $0E
    case 0xC2450D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:197 LDA __BSS_START__,X ;battler.current_action
    case 0xC2450F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24512: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24514: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24515: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24517: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24518: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:199 CLC
    case 0xC24519: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:200 ADC $06
    case 0xC2451A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/choose_target.asm:201 STA $06
    case 0xC2451C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/choose_target.asm:202 LDA [$06]
    case 0xC2451E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/choose_target.asm:203 AND #$00FF
    case 0xC24520: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC24520.
    case 0xC24522: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:204 BNE @UNKNOWN21
    case 0xC24523: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/choose_target.asm:206 LDA $02
    case 0xC24525: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:207 JSL UNKNOWN_C24434
    case 0xC24527: cpu.execute_instruction<0x22>(0xC24301, 4); return true;
    // src/battle/choose_target.asm:208 TAX
    case 0xC2452B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:209 JSL CHECK_IF_VALID_TARGET
    case 0xC2452C: cpu.execute_instruction<0x22>(0xC47662, 4); return true;
    // src/battle/choose_target.asm:210 CMP #$0000
    case 0xC24530: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:210 CMP #$0000
    // Overlapping static entry reached from 0xC24530.
    case 0xC24532: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:211 BNEL @UNKNOWN27
    case 0xC24533: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:211 BNEL @UNKNOWN27
    case 0xC24535: cpu.execute_instruction<0x4C>(0x0045CC, 3); return true;
    // src/battle/choose_target.asm:212 BRA @UNKNOWN19
    case 0xC24538: cpu.execute_instruction<0x80>(0x0000EB, 2); return true;
    // src/battle/choose_target.asm:214 JSL RAND
    case 0xC2453A: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/choose_target.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC2453E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:216 AND #$0007
    case 0xC24540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x001A07, 3); return true;
    // src/battle/choose_target.asm:217 INC
    case 0xC24542: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:218 LDX $02
    case 0xC24543: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:219 STA a:battler::current_target,X
    case 0xC24545: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC24548: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:221 AND #$00FF
    case 0xC2454A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC2454A.
    case 0xC2454C: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/choose_target.asm:222 DEC
    case 0xC2454D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:223 JSL CHECK_IF_VALID_TARGET
    case 0xC2454E: cpu.execute_instruction<0x22>(0xC47662, 4); return true;
    // src/battle/choose_target.asm:224 CMP #$0000
    case 0xC24552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:224 CMP #$0000
    // Overlapping static entry reached from 0xC24552.
    case 0xC24554: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:225 BEQ @UNKNOWN21
    case 0xC24555: cpu.execute_instruction<0xF0>(0x0000E3, 2); return true;
    // src/battle/choose_target.asm:226 BRA @UNKNOWN27
    case 0xC24557: cpu.execute_instruction<0x80>(0x000073, 2); return true;
    // src/battle/choose_target.asm:228 LDA $02
    case 0xC24559: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:229 CLC
    case 0xC2455B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:230 ADC #battler::action_targetting
    case 0xC2455C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:230 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2455C.
    case 0xC2455E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/choose_target.asm:231 TAX
    case 0xC2455F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC24560: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:233 LDA __BSS_START__,X
    case 0xC24562: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/choose_target.asm:234 ORA #$0002
    case 0xC24565: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x009D02, 3); return true;
    // src/battle/choose_target.asm:235 STA __BSS_START__,X
    case 0xC24567: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/choose_target.asm:235 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC24565.
    case 0xC24568: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:236 LDX $02
    case 0xC2456A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC2456C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:238 LDA a:battler::ally_or_enemy,X
    case 0xC2456E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:239 AND #$00FF
    case 0xC24571: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC24571.
    case 0xC24573: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:240 CMP #$0001
    case 0xC24574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:240 CMP #$0001
    // Overlapping static entry reached from 0xC24574.
    case 0xC24576: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:241 BNE @UNKNOWN23
    case 0xC24577: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC24579: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:243 LDA #$0001
    case 0xC2457B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/choose_target.asm:244 LDX $02
    case 0xC2457D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:244 LDX $02
    // Overlapping static entry reached from 0xC2457B.
    case 0xC2457E: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:245 STA a:battler::current_target,X
    case 0xC2457F: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:246 BRA @UNKNOWN27
    case 0xC24582: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/battle/choose_target.asm:248 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24584: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/battle/choose_target.asm:249 BNE @UNKNOWN24
    case 0xC24587: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC24589: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:251 LDA #$0002
    case 0xC2458B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00A602, 3); return true;
    // src/battle/choose_target.asm:252 LDX $02
    case 0xC2458D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:252 LDX $02
    // Overlapping static entry reached from 0xC2458B.
    case 0xC2458E: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:253 STA a:battler::current_target,X
    case 0xC2458F: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:254 BRA @UNKNOWN27
    case 0xC24592: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/battle/choose_target.asm:256 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC24594: cpu.execute_instruction<0xAD>(0x00AF2D, 3); return true;
    // src/battle/choose_target.asm:257 BNE @UNKNOWN25
    case 0xC24597: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC24599: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:259 LDA #$0001
    case 0xC2459B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/choose_target.asm:260 LDX $02
    case 0xC2459D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:260 LDX $02
    // Overlapping static entry reached from 0xC2459B.
    case 0xC2459E: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:261 STA a:battler::current_target,X
    case 0xC2459F: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:262 BRA @UNKNOWN27
    case 0xC245A2: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/choose_target.asm:264 JSL RAND
    case 0xC245A4: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/choose_target.asm:265 SEP #PROC_FLAGS::ACCUM8
    case 0xC245A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:266 AND #$0001
    case 0xC245AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x001A01, 3); return true;
    // src/battle/choose_target.asm:267 INC
    case 0xC245AC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:268 LDX $02
    case 0xC245AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:269 STA a:battler::current_target,X
    case 0xC245AF: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:270 BRA @UNKNOWN27
    case 0xC245B2: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/choose_target.asm:273 LDA $02
    case 0xC245B4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:274 CLC
    case 0xC245B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:275 ADC #battler::action_targetting
    case 0xC245B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:275 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC245B7.
    case 0xC245B9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/choose_target.asm:276 TAX
    case 0xC245BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC245BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:278 LDA __BSS_START__,X
    case 0xC245BD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/choose_target.asm:279 ORA #$0004
    case 0xC245C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x009D04, 3); return true;
    // src/battle/choose_target.asm:280 STA __BSS_START__,X
    case 0xC245C2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/choose_target.asm:280 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC245C0.
    case 0xC245C3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:281 LDA #$0001
    case 0xC245C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/choose_target.asm:282 LDX $02
    case 0xC245C7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:282 LDX $02
    // Overlapping static entry reached from 0xC245C5.
    case 0xC245C8: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:283 STA a:battler::current_target,X
    case 0xC245C9: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC245CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/choose_target.asm:286 END_C_FUNCTION
    case 0xC245CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/choose_target.asm:286 END_C_FUNCTION
    case 0xC245CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/copy_mirror_data.asm (source_named).
bool execute_battle_copy_mirror_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/copy_mirror_data.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AED3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AED5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AED6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AED7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00FFAE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AED7.
    case 0xC2AED9: cpu.execute_instruction<0xFF>(0x64A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AEDA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEDB: cpu.execute_instruction<0xA5>(0x000064, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEDF: cpu.execute_instruction<0xA5>(0x000066, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEE1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE5: cpu.execute_instruction<0x85>(0x00004E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE9: cpu.execute_instruction<0x85>(0x000050, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEEB: cpu.execute_instruction<0xA5>(0x000060, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEEF: cpu.execute_instruction<0xA5>(0x000062, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEF1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF5: cpu.execute_instruction<0x85>(0x00004A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF9: cpu.execute_instruction<0x85>(0x00004C, 2); return true;
    // src/battle/copy_mirror_data.asm:33 LDA #battler::hp
    case 0xC2AEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/battle/copy_mirror_data.asm:33 LDA #battler::hp
    // Overlapping static entry reached from 0xC2AEFB.
    case 0xC2AEFD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/copy_mirror_data.asm:34 CLC
    case 0xC2AEFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:35 ADC @VIRTUAL06
    case 0xC2AEFF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:36 STA @VIRTUAL06
    case 0xC2AF01: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:37 STA @LOCAL12
    case 0xC2AF03: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/battle/copy_mirror_data.asm:38 LDA @VIRTUAL06+2
    case 0xC2AF05: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:39 STA @LOCAL12+2
    case 0xC2AF07: cpu.execute_instruction<0x85>(0x000048, 2); return true;
    // src/battle/copy_mirror_data.asm:40 LDA [@LOCAL12]
    case 0xC2AF09: cpu.execute_instruction<0xA7>(0x000046, 2); return true;
    // src/battle/copy_mirror_data.asm:41 STA @LOCAL11
    case 0xC2AF0B: cpu.execute_instruction<0x85>(0x000044, 2); return true;
    // src/battle/copy_mirror_data.asm:42 LDA #battler::pp
    case 0xC2AF0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/battle/copy_mirror_data.asm:42 LDA #battler::pp
    // Overlapping static entry reached from 0xC2AF0D.
    case 0xC2AF0F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF10: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF12: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF14: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF16: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:44 CLC
    case 0xC2AF18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:45 ADC @VIRTUAL06
    case 0xC2AF19: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:46 STA @VIRTUAL06
    case 0xC2AF1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:47 STA @LOCAL10
    case 0xC2AF1D: cpu.execute_instruction<0x85>(0x000040, 2); return true;
    // src/battle/copy_mirror_data.asm:48 LDA @VIRTUAL06+2
    case 0xC2AF1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:49 STA @LOCAL10+2
    case 0xC2AF21: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/battle/copy_mirror_data.asm:50 LDA [@LOCAL10]
    case 0xC2AF23: cpu.execute_instruction<0xA7>(0x000040, 2); return true;
    // src/battle/copy_mirror_data.asm:51 STA @LOCAL0F
    case 0xC2AF25: cpu.execute_instruction<0x85>(0x00003E, 2); return true;
    // src/battle/copy_mirror_data.asm:52 LDA #battler::hp_target
    case 0xC2AF27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/battle/copy_mirror_data.asm:52 LDA #battler::hp_target
    // Overlapping static entry reached from 0xC2AF27.
    case 0xC2AF29: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF2A: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF2C: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF2E: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF30: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:54 CLC
    case 0xC2AF32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:55 ADC @VIRTUAL06
    case 0xC2AF33: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:56 STA @VIRTUAL06
    case 0xC2AF35: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:57 STA @LOCAL0E
    case 0xC2AF37: cpu.execute_instruction<0x85>(0x00003A, 2); return true;
    // src/battle/copy_mirror_data.asm:58 LDA @VIRTUAL06+2
    case 0xC2AF39: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:59 STA @LOCAL0E+2
    case 0xC2AF3B: cpu.execute_instruction<0x85>(0x00003C, 2); return true;
    // src/battle/copy_mirror_data.asm:60 LDA [@LOCAL0E]
    case 0xC2AF3D: cpu.execute_instruction<0xA7>(0x00003A, 2); return true;
    // src/battle/copy_mirror_data.asm:61 STA @LOCAL0D
    case 0xC2AF3F: cpu.execute_instruction<0x85>(0x000038, 2); return true;
    // src/battle/copy_mirror_data.asm:62 LDA #battler::pp_target
    case 0xC2AF41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/battle/copy_mirror_data.asm:62 LDA #battler::pp_target
    // Overlapping static entry reached from 0xC2AF41.
    case 0xC2AF43: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF44: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF46: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF48: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF4A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:64 CLC
    case 0xC2AF4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:65 ADC @VIRTUAL06
    case 0xC2AF4D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:66 STA @VIRTUAL06
    case 0xC2AF4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:67 STA @LOCAL0C
    case 0xC2AF51: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // src/battle/copy_mirror_data.asm:68 LDA @VIRTUAL06+2
    case 0xC2AF53: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:69 STA @LOCAL0C+2
    case 0xC2AF55: cpu.execute_instruction<0x85>(0x000036, 2); return true;
    // src/battle/copy_mirror_data.asm:70 LDA [@LOCAL0C]
    case 0xC2AF57: cpu.execute_instruction<0xA7>(0x000034, 2); return true;
    // src/battle/copy_mirror_data.asm:71 STA @LOCAL0B
    case 0xC2AF59: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/battle/copy_mirror_data.asm:72 LDA #battler::hp_max
    case 0xC2AF5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/copy_mirror_data.asm:72 LDA #battler::hp_max
    // Overlapping static entry reached from 0xC2AF5B.
    case 0xC2AF5D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF5E: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF60: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF62: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF64: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:74 CLC
    case 0xC2AF66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:75 ADC @VIRTUAL06
    case 0xC2AF67: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:76 STA @VIRTUAL06
    case 0xC2AF69: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:77 STA @LOCAL0A
    case 0xC2AF6B: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/copy_mirror_data.asm:78 LDA @VIRTUAL06+2
    case 0xC2AF6D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:79 STA @LOCAL0A+2
    case 0xC2AF6F: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/copy_mirror_data.asm:80 LDA [@LOCAL0A]
    case 0xC2AF71: cpu.execute_instruction<0xA7>(0x00002E, 2); return true;
    // src/battle/copy_mirror_data.asm:81 STA @LOCAL09
    case 0xC2AF73: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/battle/copy_mirror_data.asm:82 LDA #battler::pp_max
    case 0xC2AF75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/battle/copy_mirror_data.asm:82 LDA #battler::pp_max
    // Overlapping static entry reached from 0xC2AF75.
    case 0xC2AF77: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF78: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7C: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:84 CLC
    case 0xC2AF80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:85 ADC @VIRTUAL06
    case 0xC2AF81: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:86 STA @VIRTUAL06
    case 0xC2AF83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:87 STA @LOCAL08
    case 0xC2AF85: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/copy_mirror_data.asm:88 LDA @VIRTUAL06+2
    case 0xC2AF87: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:89 STA @LOCAL08+2
    case 0xC2AF89: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/battle/copy_mirror_data.asm:90 LDA [@LOCAL08]
    case 0xC2AF8B: cpu.execute_instruction<0xA7>(0x000028, 2); return true;
    // src/battle/copy_mirror_data.asm:91 STA @LOCAL07
    case 0xC2AF8D: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/copy_mirror_data.asm:92 LDA #battler::ally_or_enemy
    case 0xC2AF8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/battle/copy_mirror_data.asm:92 LDA #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2AF8F.
    case 0xC2AF91: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF92: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF94: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF96: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF98: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:94 CLC
    case 0xC2AF9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:95 ADC @VIRTUAL06
    case 0xC2AF9B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:96 STA @VIRTUAL06
    case 0xC2AF9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:97 STA @LOCAL06
    case 0xC2AF9F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:98 LDA @VIRTUAL06+2
    case 0xC2AFA1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:99 STA @LOCAL06+2
    case 0xC2AFA3: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/copy_mirror_data.asm:100 LDA [@LOCAL06]
    case 0xC2AFA5: cpu.execute_instruction<0xA7>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:101 AND #$00FF
    case 0xC2AFA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/copy_mirror_data.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2AFA7.
    case 0xC2AFA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/copy_mirror_data.asm:102 STA @VIRTUAL04
    case 0xC2AFAA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/copy_mirror_data.asm:103 LDA #battler::row
    case 0xC2AFAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/copy_mirror_data.asm:103 LDA #battler::row
    // Overlapping static entry reached from 0xC2AFAC.
    case 0xC2AFAE: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFAF: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB1: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB3: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB5: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:105 CLC
    case 0xC2AFB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:106 ADC @VIRTUAL06
    case 0xC2AFB8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:107 STA @VIRTUAL06
    case 0xC2AFBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:108 STA @LOCAL05
    case 0xC2AFBC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/copy_mirror_data.asm:109 LDA @VIRTUAL06+2
    case 0xC2AFBE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:110 STA @LOCAL05+2
    case 0xC2AFC0: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:111 LDA [@LOCAL05]
    case 0xC2AFC2: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/battle/copy_mirror_data.asm:112 AND #$00FF
    case 0xC2AFC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/copy_mirror_data.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC2AFC4.
    case 0xC2AFC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/copy_mirror_data.asm:113 STA @VIRTUAL02
    case 0xC2AFC7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFC9: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFCB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFCD: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFCF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD3: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/copy_mirror_data.asm:116 LDA [@LOCAL04]
    case 0xC2AFD9: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/battle/copy_mirror_data.asm:117 TAY
    case 0xC2AFDB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:118 STY @LOCAL03
    case 0xC2AFDC: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/copy_mirror_data.asm:119 LDA #battler::has_taken_turn
    case 0xC2AFDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/battle/copy_mirror_data.asm:119 LDA #battler::has_taken_turn
    // Overlapping static entry reached from 0xC2AFDE.
    case 0xC2AFE0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE1: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE3: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE5: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE7: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFE9: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFEB: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFED: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFEF: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/copy_mirror_data.asm:122 CLC
    case 0xC2AFF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:123 ADC @VIRTUAL0A
    case 0xC2AFF2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:124 STA @VIRTUAL0A
    case 0xC2AFF4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:125 LDA [@VIRTUAL0A]
    case 0xC2AFF6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:126 AND #$00FF
    case 0xC2AFF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/copy_mirror_data.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC2AFF8.
    case 0xC2AFFA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/copy_mirror_data.asm:127 TAX
    case 0xC2AFFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:128 STX @LOCAL02
    case 0xC2AFFC: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AFFE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B000: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B002: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B004: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B006: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B008: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B00A: cpu.execute_instruction<0xA5>(0x000050, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B00C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B00E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B010: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B012: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B014: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/copy_mirror_data.asm:132 LDA #.SIZEOF(battler)
    case 0xC2B016: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00004E, 3); return true;
    // src/battle/copy_mirror_data.asm:132 LDA #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B016.
    case 0xC2B018: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:133 JSL MEMCPY24
    case 0xC2B019: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/battle/copy_mirror_data.asm:134 LDA @LOCAL11
    case 0xC2B01D: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // src/battle/copy_mirror_data.asm:135 STA [@LOCAL12]
    case 0xC2B01F: cpu.execute_instruction<0x87>(0x000046, 2); return true;
    // src/battle/copy_mirror_data.asm:136 LDA @LOCAL0F
    case 0xC2B021: cpu.execute_instruction<0xA5>(0x00003E, 2); return true;
    // src/battle/copy_mirror_data.asm:137 STA [@LOCAL10]
    case 0xC2B023: cpu.execute_instruction<0x87>(0x000040, 2); return true;
    // src/battle/copy_mirror_data.asm:138 LDA @LOCAL0D
    case 0xC2B025: cpu.execute_instruction<0xA5>(0x000038, 2); return true;
    // src/battle/copy_mirror_data.asm:139 STA [@LOCAL0E]
    case 0xC2B027: cpu.execute_instruction<0x87>(0x00003A, 2); return true;
    // src/battle/copy_mirror_data.asm:140 LDA @LOCAL0B
    case 0xC2B029: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/battle/copy_mirror_data.asm:141 STA [@LOCAL0C]
    case 0xC2B02B: cpu.execute_instruction<0x87>(0x000034, 2); return true;
    // src/battle/copy_mirror_data.asm:142 LDA @LOCAL09
    case 0xC2B02D: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/battle/copy_mirror_data.asm:143 STA [@LOCAL0A]
    case 0xC2B02F: cpu.execute_instruction<0x87>(0x00002E, 2); return true;
    // src/battle/copy_mirror_data.asm:144 LDA @LOCAL07
    case 0xC2B031: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/copy_mirror_data.asm:145 STA [@LOCAL08]
    case 0xC2B033: cpu.execute_instruction<0x87>(0x000028, 2); return true;
    // src/battle/copy_mirror_data.asm:146 LDA @VIRTUAL04
    case 0xC2B035: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/copy_mirror_data.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B037: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:148 STA [@LOCAL06]
    case 0xC2B039: cpu.execute_instruction<0x87>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC2B03B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:150 LDA @VIRTUAL02
    case 0xC2B03D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/copy_mirror_data.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B03F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:152 STA [@LOCAL05]
    case 0xC2B041: cpu.execute_instruction<0x87>(0x00001E, 2); return true;
    // src/battle/copy_mirror_data.asm:153 LDY @LOCAL03
    case 0xC2B043: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/copy_mirror_data.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC2B045: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:155 TYA
    case 0xC2B047: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:156 STA [@LOCAL04]
    case 0xC2B048: cpu.execute_instruction<0x87>(0x00001A, 2); return true;
    // src/battle/copy_mirror_data.asm:157 LDX @LOCAL02
    case 0xC2B04A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/copy_mirror_data.asm:158 TXA
    case 0xC2B04C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B04D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:160 STA [@VIRTUAL0A]
    case 0xC2B04F: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC2B051: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:162 PLD
    case 0xC2B053: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:163 RTL
    case 0xC2B054: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/count_chars.asm (source_named).
bool execute_battle_count_chars_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/count_chars.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BA70: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BA72: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BA73: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BA74: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BA75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BA75.
    case 0xC2BA77: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BA78: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BA79: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/count_chars.asm:8 STA @VIRTUAL04
    case 0xC2BA7A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/count_chars.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2BA77.
    case 0xC2BA7B: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/battle/count_chars.asm:9 LDA #$0000
    case 0xC2BA7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/count_chars.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC2BA7B.
    case 0xC2BA7D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/count_chars.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC2BA7C.
    case 0xC2BA7E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/count_chars.asm:10 STA @VIRTUAL02
    case 0xC2BA7F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/count_chars.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2BA81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/count_chars.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BA81.
    case 0xC2BA83: cpu.execute_instruction<0xA1>(0x0000A8, 2); return true;
    // src/battle/count_chars.asm:12 TAY
    case 0xC2BA84: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/count_chars.asm:13 BRA @UNKNOWN2
    case 0xC2BA85: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/count_chars.asm:15 LDA a:battler::consciousness,X
    case 0xC2BA87: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/count_chars.asm:16 AND #$00FF
    case 0xC2BA8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2BA8A.
    case 0xC2BA8C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/count_chars.asm:17 BEQ @UNKNOWN1
    case 0xC2BA8D: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/count_chars.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2BA8F: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/count_chars.asm:19 AND #$00FF
    case 0xC2BA92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2BA92.
    case 0xC2BA94: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/count_chars.asm:20 CMP @VIRTUAL04
    case 0xC2BA95: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/count_chars.asm:21 BNE @UNKNOWN1
    case 0xC2BA97: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/count_chars.asm:22 LDA a:battler::npc_id,X
    case 0xC2BA99: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/count_chars.asm:23 AND #$00FF
    case 0xC2BA9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BA9C.
    case 0xC2BA9E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/count_chars.asm:24 BNE @UNKNOWN1
    case 0xC2BA9F: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/count_chars.asm:25 LDA a:battler::afflictions,X
    case 0xC2BAA1: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/count_chars.asm:26 AND #$00FF
    case 0xC2BAA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BAA4.
    case 0xC2BAA6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/count_chars.asm:27 CMP #$0001
    case 0xC2BAA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/count_chars.asm:27 CMP #$0001
    // Overlapping static entry reached from 0xC2BAA7.
    case 0xC2BAA9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/count_chars.asm:28 BEQ @UNKNOWN1
    case 0xC2BAAA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/count_chars.asm:29 CMP #$0002
    case 0xC2BAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/count_chars.asm:29 CMP #$0002
    // Overlapping static entry reached from 0xC2BAAC.
    case 0xC2BAAE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/count_chars.asm:30 BEQ @UNKNOWN1
    case 0xC2BAAF: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/count_chars.asm:31 INC @VIRTUAL02
    case 0xC2BAB1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/count_chars.asm:33 TXA
    case 0xC2BAB3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/count_chars.asm:34 CLC
    case 0xC2BAB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/count_chars.asm:35 ADC #.SIZEOF(battler)
    case 0xC2BAB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/count_chars.asm:35 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BAB5.
    case 0xC2BAB7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/count_chars.asm:36 TAX
    case 0xC2BAB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/count_chars.asm:37 INY
    case 0xC2BAB9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/count_chars.asm:39 CPY #$0020
    case 0xC2BABA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/count_chars.asm:39 CPY #$0020
    // Overlapping static entry reached from 0xC2BABA.
    case 0xC2BABC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/count_chars.asm:40 BCC @UNKNOWN0
    case 0xC2BABD: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/battle/count_chars.asm:41 LDA @VIRTUAL02
    case 0xC2BABF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/count_chars.asm:42 END_C_FUNCTION
    case 0xC2BAC1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/count_chars.asm:42 END_C_FUNCTION
    case 0xC2BAC2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/decrease_defense_16th.asm (source_named).
bool execute_battle_decrease_defense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/decrease_defense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27DCA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27DCC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27DCD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27DCE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27DCF.
    case 0xC27DD1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27DD2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27DD3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:9 STA @VIRTUAL02
    case 0xC27DD4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27DD1.
    case 0xC27DD5: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/decrease_defense_16th.asm:10 CLC
    case 0xC27DD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:11 ADC #battler::defense
    case 0xC27DD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/decrease_defense_16th.asm:11 ADC #battler::defense
    // Overlapping static entry reached from 0xC27DD7.
    case 0xC27DD9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/decrease_defense_16th.asm:12 TAY
    case 0xC27DDA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27DDB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:14 LSR
    case 0xC27DDE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:15 LSR
    case 0xC27DDF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:16 LSR
    case 0xC27DE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:17 LSR
    case 0xC27DE1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27DE2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/decrease_defense_16th.asm:19 TAX
    case 0xC27DE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27DE5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/decrease_defense_16th.asm:22 LDX #1
    case 0xC27DE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/decrease_defense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27DE7.
    case 0xC27DE9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/decrease_defense_16th.asm:24 STX @VIRTUAL04
    case 0xC27DEA: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/decrease_defense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27DEC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:26 SEC
    case 0xC27DEF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:27 SBC @VIRTUAL04
    case 0xC27DF0: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/decrease_defense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27DF2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27DF5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:30 CLC
    case 0xC27DF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:31 ADC #battler::defense
    case 0xC27DF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/decrease_defense_16th.asm:31 ADC #battler::defense
    // Overlapping static entry reached from 0xC27DF8.
    case 0xC27DFA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/decrease_defense_16th.asm:32 TAX
    case 0xC27DFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:33 STX @LOCAL01
    case 0xC27DFC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/decrease_defense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27DFE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:35 LDA a:battler::base_defense,X
    case 0xC27E00: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/decrease_defense_16th.asm:36 AND #$00FF
    case 0xC27E03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/decrease_defense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27E03.
    case 0xC27E05: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/battle/decrease_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E06: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/battle/decrease_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/battle/decrease_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E09: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/decrease_defense_16th.asm:38 LSR
    case 0xC27E0B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:39 LSR
    case 0xC27E0C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:40 STA @LOCAL00
    case 0xC27E0D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/decrease_defense_16th.asm:41 STA @VIRTUAL02
    case 0xC27E0F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:42 LDX @LOCAL01
    case 0xC27E11: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/decrease_defense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27E13: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27E16: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:45 BCS @UNKNOWN2
    case 0xC27E18: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/decrease_defense_16th.asm:46 LDA @LOCAL00
    case 0xC27E1A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/decrease_defense_16th.asm:47 STA __BSS_START__,X
    case 0xC27E1C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/decrease_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27E1F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/decrease_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27E20: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/decrease_offense_16th.asm (source_named).
bool execute_battle_decrease_offense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/decrease_offense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27D73: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D75: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D76: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D77: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D78.
    case 0xC27D7A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D7B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D7C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:9 STA @VIRTUAL02
    case 0xC27D7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27D7A.
    case 0xC27D7E: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/decrease_offense_16th.asm:10 CLC
    case 0xC27D7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:11 ADC #battler::offense
    case 0xC27D80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/decrease_offense_16th.asm:11 ADC #battler::offense
    // Overlapping static entry reached from 0xC27D80.
    case 0xC27D82: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/decrease_offense_16th.asm:12 TAY
    case 0xC27D83: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27D84: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:14 LSR
    case 0xC27D87: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:15 LSR
    case 0xC27D88: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:16 LSR
    case 0xC27D89: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:17 LSR
    case 0xC27D8A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27D8B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/decrease_offense_16th.asm:19 TAX
    case 0xC27D8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27D8E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/decrease_offense_16th.asm:22 LDX #1
    case 0xC27D90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/decrease_offense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27D90.
    case 0xC27D92: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/decrease_offense_16th.asm:24 STX @VIRTUAL04
    case 0xC27D93: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/decrease_offense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27D95: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:26 SEC
    case 0xC27D98: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:27 SBC @VIRTUAL04
    case 0xC27D99: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/decrease_offense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27D9B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27D9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:30 CLC
    case 0xC27DA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:31 ADC #battler::offense
    case 0xC27DA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/decrease_offense_16th.asm:31 ADC #battler::offense
    // Overlapping static entry reached from 0xC27DA1.
    case 0xC27DA3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/decrease_offense_16th.asm:32 TAX
    case 0xC27DA4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:33 STX @LOCAL01
    case 0xC27DA5: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/decrease_offense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27DA7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:35 LDA a:battler::base_offense,X
    case 0xC27DA9: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/decrease_offense_16th.asm:36 AND #$00FF
    case 0xC27DAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/decrease_offense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27DAC.
    case 0xC27DAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27DAF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27DB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27DB2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/decrease_offense_16th.asm:38 LSR
    case 0xC27DB4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:39 LSR
    case 0xC27DB5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:40 STA @LOCAL00
    case 0xC27DB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/decrease_offense_16th.asm:41 STA @VIRTUAL02
    case 0xC27DB8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:42 LDX @LOCAL01
    case 0xC27DBA: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/decrease_offense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27DBC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27DBF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:45 BCS @UNKNOWN2
    case 0xC27DC1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/decrease_offense_16th.asm:46 LDA @LOCAL00
    case 0xC27DC3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/decrease_offense_16th.asm:47 STA __BSS_START__,X
    case 0xC27DC5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/decrease_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27DC8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/decrease_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27DC9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/determine_dodge.asm (source_named).
bool execute_battle_determine_dodge_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_dodge.asm:3 BEGIN_C_FUNCTION
    case 0xC28454: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC28456: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC28457: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC28458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC28458.
    case 0xC2845A: cpu.execute_instruction<0xFF>(0x74AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC2845B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:8 LDX CURRENT_TARGET
    case 0xC2845C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/determine_dodge.asm:8 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2845A.
    case 0xC2845E: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2845F: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/determine_dodge.asm:10 AND #$00FF
    case 0xC28462: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_dodge.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC28462.
    case 0xC28464: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/determine_dodge.asm:11 CMP #STATUS_0::PARALYZED
    case 0xC28465: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_dodge.asm:11 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC28465.
    case 0xC28467: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:12 BNE @UNKNOWN0
    case 0xC28468: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:13 LDA #0
    case 0xC2846A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:13 LDA #0
    // Overlapping static entry reached from 0xC2846A.
    case 0xC2846C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:14 BRA @UNKNOWN8
    case 0xC2846D: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/battle/determine_dodge.asm:16 LDX CURRENT_TARGET
    case 0xC2846F: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/determine_dodge.asm:17 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC28472: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/determine_dodge.asm:18 AND #$00FF
    case 0xC28475: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_dodge.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC28475.
    case 0xC28477: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/determine_dodge.asm:19 CMP #STATUS_2::ASLEEP
    case 0xC28478: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_dodge.asm:19 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC28478.
    case 0xC2847A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:20 BNE @UNKNOWN1
    case 0xC2847B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:21 LDA #0
    case 0xC2847D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:21 LDA #0
    // Overlapping static entry reached from 0xC2847D.
    case 0xC2847F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:22 BRA @UNKNOWN8
    case 0xC28480: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/battle/determine_dodge.asm:24 CMP #STATUS_2::IMMOBILIZED
    case 0xC28482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_dodge.asm:24 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC28482.
    case 0xC28484: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:25 BNE @UNKNOWN2
    case 0xC28485: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:26 LDA #0
    case 0xC28487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:26 LDA #0
    // Overlapping static entry reached from 0xC28487.
    case 0xC28489: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:27 BRA @UNKNOWN8
    case 0xC2848A: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/battle/determine_dodge.asm:29 CMP #STATUS_2::SOLIDIFIED
    case 0xC2848C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/determine_dodge.asm:29 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2848C.
    case 0xC2848E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:30 BNE @UNKNOWN3
    case 0xC2848F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:31 LDA #0
    case 0xC28491: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:31 LDA #0
    // Overlapping static entry reached from 0xC28491.
    case 0xC28493: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:32 BRA @UNKNOWN8
    case 0xC28494: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/battle/determine_dodge.asm:34 LDX CURRENT_TARGET
    case 0xC28496: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/determine_dodge.asm:35 LDA a:battler::speed,X
    case 0xC28499: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/determine_dodge.asm:36 ASL
    case 0xC2849C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:37 LDX CURRENT_ATTACKER
    case 0xC2849D: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/determine_dodge.asm:38 SEC
    case 0xC284A0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:39 SBC a:battler::speed,X
    case 0xC284A1: cpu.execute_instruction<0xFD>(0x00002A, 3); return true;
    // src/battle/determine_dodge.asm:40 STA @LOCAL00
    case 0xC284A4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/determine_dodge.asm:41 STA @VIRTUAL02
    case 0xC284A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/determine_dodge.asm:42 LDA #0
    case 0xC284A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:42 LDA #0
    // Overlapping static entry reached from 0xC284A8.
    case 0xC284AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/determine_dodge.asm:43 CLC
    case 0xC284AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:44 SBC @VIRTUAL02
    case 0xC284AC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC284AE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC284B0: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC284B2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC284B4: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/battle/determine_dodge.asm:46 LDA @LOCAL00
    case 0xC284B6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/determine_dodge.asm:47 JSR SUCCESS_500
    case 0xC284B8: cpu.execute_instruction<0x20>(0x006B1A, 3); return true;
    // src/battle/determine_dodge.asm:48 CMP #0
    case 0xC284BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:48 CMP #0
    // Overlapping static entry reached from 0xC284BB.
    case 0xC284BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:49 BNE @UNKNOWN7
    case 0xC284BE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:51 LDA #0
    case 0xC284C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:51 LDA #0
    // Overlapping static entry reached from 0xC284C0.
    case 0xC284C2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:52 BRA @UNKNOWN8
    case 0xC284C3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/determine_dodge.asm:54 LDA #1
    case 0xC284C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/determine_dodge.asm:54 LDA #1
    // Overlapping static entry reached from 0xC284C5.
    case 0xC284C7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_dodge.asm:56 END_C_FUNCTION
    case 0xC284C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_dodge.asm:56 END_C_FUNCTION
    case 0xC284C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/determine_targetting.asm (source_named).
bool execute_battle_determine_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC1AC70: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC72: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC73: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC74: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AC75.
    case 0xC1AC77: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC78: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1AC79: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:12 TXY
    case 0xC1AC7A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:13 TAX
    case 0xC1AC7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AC7C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:15 LDA #$00FF
    case 0xC1AC7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    case 0xC1AC80: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1AC7E.
    case 0xC1AC81: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC1AC82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AC81.
    case 0xC1AC83: cpu.execute_instruction<0x20>(0x001EA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AC84.
    case 0xC1AC86: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AC89.
    case 0xC1AC8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1AC8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/determine_targetting.asm:19 TXA
    case 0xC1AC8E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC8F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC92: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1AC95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:21 STA @LOCAL03
    case 0xC1AC96: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/battle/determine_targetting.asm:22 PHA
    case 0xC1AC98: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC99: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC9B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC9D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1AC9F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/determine_targetting.asm:24 PLA
    case 0xC1ACA1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:25 CLC
    case 0xC1ACA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:26 ADC @VIRTUAL0A
    case 0xC1ACA3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:27 STA @VIRTUAL0A
    case 0xC1ACA5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:28 LDA [@VIRTUAL0A]
    case 0xC1ACA7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:29 AND #$00FF
    case 0xC1ACA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1ACA9.
    case 0xC1ACAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:30 BEQ @ENEMY_TARGETTING_PSI
    case 0xC1ACAC: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    case 0xC1ACAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    // Overlapping static entry reached from 0xC1ACAE.
    case 0xC1ACB0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ACB1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ACB3: cpu.execute_instruction<0x4C>(0x00AD55, 3); return true;
    // src/battle/determine_targetting.asm:33 JMP @RETURN
    case 0xC1ACB6: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACB9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:36 LDA #TARGETTED::ENEMIES
    case 0xC1ACBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008510, 3); return true;
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    case 0xC1ACBD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ACBB.
    case 0xC1ACBE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC1ACBF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:39 LDA @LOCAL03
    case 0xC1ACC1: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/battle/determine_targetting.asm:40 INC
    case 0xC1ACC3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:41 CLC
    case 0xC1ACC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:42 ADC @VIRTUAL06
    case 0xC1ACC5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:43 STA @VIRTUAL06
    case 0xC1ACC7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:44 LDA [@VIRTUAL06]
    case 0xC1ACC9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:45 AND #$00FF
    case 0xC1ACCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC1ACCB.
    case 0xC1ACCD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:46 BEQ @ENEMY_NONE
    case 0xC1ACCE: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    case 0xC1ACD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1ACD0.
    case 0xC1ACD2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:48 BEQ @ENEMY_SINGLE
    case 0xC1ACD3: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    case 0xC1ACD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1ACD5.
    case 0xC1ACD7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:50 BEQ @ENEMY_SINGLE_RANDOM
    case 0xC1ACD8: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    case 0xC1ACDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1ACDA.
    case 0xC1ACDC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:52 BEQ @ENEMY_ROW
    case 0xC1ACDD: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    case 0xC1ACDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1ACDF.
    case 0xC1ACE1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:54 BEQ @ENEMY_ALL
    case 0xC1ACE2: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/determine_targetting.asm:55 BRA @ENEMY_ALL
    case 0xC1ACE4: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/battle/determine_targetting.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACE6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:58 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1ACE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    case 0xC1ACEA: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ACE8.
    case 0xC1ACEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:60 STA @LOCAL02
    case 0xC1ACEC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:61 SEP #PROC_FLAGS::INDEX8
    case 0xC1ACEE: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:62 STY @VIRTUAL01
    case 0xC1ACF0: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:63 JMP @RETURN
    case 0xC1ACF2: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:67 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1ACF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    case 0xC1ACF9: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ACF7.
    case 0xC1ACFA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:69 STA @LOCAL02
    case 0xC1ACFB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:70 TXY
    case 0xC1ACFD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:71 LDX #1
    case 0xC1ACFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:71 LDX #1
    // Overlapping static entry reached from 0xC1ACFE.
    case 0xC1AD00: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:73 LDA #0
    case 0xC1AD03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_targetting.asm:73 LDA #0
    // Overlapping static entry reached from 0xC1AD03.
    case 0xC1AD05: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:74 JSR UNKNOWN_C1242E
    case 0xC1AD06: cpu.execute_instruction<0x20>(0x002B0F, 3); return true;
    // src/battle/determine_targetting.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:76 STA @VIRTUAL01
    case 0xC1AD0B: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:77 JMP @RETURN
    case 0xC1AD0D: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:80 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AD12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    case 0xC1AD14: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD12.
    case 0xC1AD15: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:82 STA @LOCAL02
    case 0xC1AD16: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD18: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:84 LDA #1
    case 0xC1AD1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:84 LDA #1
    // Overlapping static entry reached from 0xC1AD1A.
    case 0xC1AD1C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/determine_targetting.asm:85 JSL COUNT_CHARS
    case 0xC1AD1D: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/determine_targetting.asm:86 DEC
    case 0xC1AD21: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:87 JSL RAND_MOD
    case 0xC1AD22: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/battle/determine_targetting.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:89 STA @VIRTUAL01
    case 0xC1AD28: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:90 INC @VIRTUAL01
    case 0xC1AD2A: cpu.execute_instruction<0xE6>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:91 JMP @RETURN
    case 0xC1AD2C: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:94 LDA #TARGETTED::ENEMIES | TARGETTED::ROW
    case 0xC1AD31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x008512, 3); return true;
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    case 0xC1AD33: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD31.
    case 0xC1AD34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:96 STA @LOCAL02
    case 0xC1AD35: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:97 TXY
    case 0xC1AD37: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:98 LDX #1
    case 0xC1AD38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:98 LDX #1
    // Overlapping static entry reached from 0xC1AD38.
    case 0xC1AD3A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD3B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:100 TXA
    case 0xC1AD3D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:101 JSR UNKNOWN_C1242E
    case 0xC1AD3E: cpu.execute_instruction<0x20>(0x002B0F, 3); return true;
    // src/battle/determine_targetting.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:103 STA @VIRTUAL01
    case 0xC1AD43: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:104 JMP @RETURN
    case 0xC1AD45: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD48: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:107 LDA @VIRTUAL00
    case 0xC1AD4A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:108 ORA #TARGETTED::ALL
    case 0xC1AD4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x008504, 3); return true;
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    case 0xC1AD4E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD4C.
    case 0xC1AD4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:110 STA @LOCAL02
    case 0xC1AD50: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:111 JMP @RETURN
    case 0xC1AD52: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:114 LDA #TARGETTED::ALLIES
    case 0xC1AD57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    case 0xC1AD59: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD57.
    case 0xC1AD5A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC1AD5B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:117 LDA @LOCAL03
    case 0xC1AD5D: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/battle/determine_targetting.asm:118 INC
    case 0xC1AD5F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:119 CLC
    case 0xC1AD60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:120 ADC @VIRTUAL06
    case 0xC1AD61: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:121 STA @VIRTUAL06
    case 0xC1AD63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:122 LDA [@VIRTUAL06]
    case 0xC1AD65: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:123 AND #$00FF
    case 0xC1AD67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC1AD67.
    case 0xC1AD69: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:124 BEQ @ALLY_NONE
    case 0xC1AD6A: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    case 0xC1AD6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1AD6C.
    case 0xC1AD6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:126 BEQ @ALLY_SINGLE
    case 0xC1AD6F: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    case 0xC1AD71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1AD71.
    case 0xC1AD73: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:128 BEQ @ALLY_SINGLE_RANDOM
    case 0xC1AD74: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    case 0xC1AD76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1AD76.
    case 0xC1AD78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AD79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AD7B: cpu.execute_instruction<0x4C>(0x00AE07, 3); return true;
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    case 0xC1AD7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1AD7E.
    case 0xC1AD80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AD81: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AD83: cpu.execute_instruction<0x4C>(0x00AE07, 3); return true;
    // src/battle/determine_targetting.asm:133 JMP @ALLY_ALL
    case 0xC1AD86: cpu.execute_instruction<0x4C>(0x00AE07, 3); return true;
    // src/battle/determine_targetting.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD89: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:136 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AD8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    case 0xC1AD8D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD8B.
    case 0xC1AD8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:138 STA @LOCAL02
    case 0xC1AD8F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:139 SEP #PROC_FLAGS::INDEX8
    case 0xC1AD91: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:140 STY @VIRTUAL01
    case 0xC1AD93: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:142 JMP @RETURN
    case 0xC1AD95: cpu.execute_instruction<0x4C>(0x00AE11, 3); return true;
    // src/battle/determine_targetting.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD98: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:148 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AD9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    case 0xC1AD9C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AD9A.
    case 0xC1AD9D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:150 STA @LOCAL02
    case 0xC1AD9E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:151 REP #PROC_FLAGS::ACCUM8
    case 0xC1ADA0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:152 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1ADA2: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/battle/determine_targetting.asm:153 AND #$00FF
    case 0xC1ADA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC1ADA5.
    case 0xC1ADA7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/determine_targetting.asm:154 CMP #1
    case 0xC1ADA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:154 CMP #1
    // Overlapping static entry reached from 0xC1ADA8.
    case 0xC1ADAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:155 BEQ @ONLY_ONE_ALLY
    case 0xC1ADAB: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/determine_targetting.asm:156 LDA #3
    case 0xC1ADAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/determine_targetting.asm:156 LDA #3
    // Overlapping static entry reached from 0xC1ADAD.
    case 0xC1ADAF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:157 JSR UNKNOWN_C193E7
    case 0xC1ADB0: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADB3.
    case 0xC1ADB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADB6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADB8.
    case 0xC1ADBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1ADBB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADBD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADBF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADC1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ADC3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADC5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADC7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADC9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ADCB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/determine_targetting.asm:162 LDX #1
    case 0xC1ADCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:162 LDX #1
    // Overlapping static entry reached from 0xC1ADCD.
    case 0xC1ADCF: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/determine_targetting.asm:163 TXA
    case 0xC1ADD0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:164 JSR CHAR_SELECT_PROMPT
    case 0xC1ADD1: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/battle/determine_targetting.asm:165 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADD4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:166 STA @VIRTUAL01
    case 0xC1ADD6: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:167 JSR UNKNOWN_C19437
    case 0xC1ADD8: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/battle/determine_targetting.asm:168 BRA @RETURN
    case 0xC1ADDB: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/battle/determine_targetting.asm:170 SEP #PROC_FLAGS::INDEX8
    case 0xC1ADDD: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:171 STY @VIRTUAL01
    case 0xC1ADDF: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:172 BRA @RETURN
    case 0xC1ADE1: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/battle/determine_targetting.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:175 LDA #TARGETTED::ALLIES | TARGETTED::SINGLE
    case 0xC1ADE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    case 0xC1ADE7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ADE5.
    case 0xC1ADE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:177 STA @LOCAL02
    case 0xC1ADE9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC1ADEB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:179 LDA #0
    case 0xC1ADED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_targetting.asm:179 LDA #0
    // Overlapping static entry reached from 0xC1ADED.
    case 0xC1ADEF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/determine_targetting.asm:180 JSL COUNT_CHARS
    case 0xC1ADF0: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/determine_targetting.asm:181 DEC
    case 0xC1ADF4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:182 JSL RAND_MOD
    case 0xC1ADF5: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // include/macros.asm:1302 CLC
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1303 ADC #.LOWORD(struct)
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // include/macros.asm:1303 ADC #.LOWORD(struct)
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    // Overlapping static entry reached from 0xC1ADFA.
    case 0xC1ADFC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:1304 TAX
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1305 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1ADFE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1306 LDA a:field,X
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AE00: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/battle/determine_targetting.asm:184 STA @VIRTUAL01
    case 0xC1AE03: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:185 BRA @RETURN
    case 0xC1AE05: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE07: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:188 LDA @VIRTUAL00
    case 0xC1AE09: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:189 ORA #TARGETTED::ALL
    case 0xC1AE0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x008504, 3); return true;
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    case 0xC1AE0D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE0B.
    case 0xC1AE0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:191 STA @LOCAL02
    case 0xC1AE0F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE11: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:194 LDA @VIRTUAL01
    case 0xC1AE13: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:195 AND #$00FF
    case 0xC1AE15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC1AE15.
    case 0xC1AE17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:196 STA @VIRTUAL02
    case 0xC1AE18: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/determine_targetting.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC1AE1A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:198 LDY #8
    case 0xC1AE1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE1E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AE1C.
    case 0xC1AE1F: cpu.execute_instruction<0x20>(0x0016A5, 3); return true;
    // src/battle/determine_targetting.asm:200 LDA @LOCAL02
    case 0xC1AE20: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:201 STA @VIRTUAL00
    case 0xC1AE22: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:202 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE24: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:203 LDA @VIRTUAL00
    case 0xC1AE26: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:204 AND #$00FF
    case 0xC1AE28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC1AE28.
    case 0xC1AE2A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/determine_targetting.asm:205 JSL ASL16_ENTRY2
    case 0xC1AE2B: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/battle/determine_targetting.asm:206 ORA @VIRTUAL02
    case 0xC1AE2F: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/battle/determine_targetting.asm:207 REP #PROC_FLAGS::INDEX8
    case 0xC1AE31: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AE33: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AE34: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/eat_food.asm (source_named).
bool execute_battle_eat_food_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/eat_food.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B232: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B234: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B235: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B236: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B236.
    case 0xC2B238: cpu.execute_instruction<0xFF>(0x74AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B239: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    case 0xC2B23A: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B238.
    case 0xC2B23C: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    case 0xC2B23D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:18 TAX
    case 0xC2B240: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:19 STX @LOCAL03
    case 0xC2B241: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/eat_food.asm:20 TXA
    case 0xC2B243: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:21 DEC
    case 0xC2B244: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    case 0xC2B245: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B245.
    case 0xC2B247: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:23 JSL MULT168
    case 0xC2B248: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/eat_food.asm:24 TAX
    case 0xC2B24C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:25 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC2B24D: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/battle/eat_food.asm:26 AND #$00FF
    case 0xC2B250: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2B250.
    case 0xC2B252: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2B253: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2B253.
    case 0xC2B255: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/eat_food.asm:28 BNE @UNKNOWN0
    case 0xC2B256: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B258: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B258.
    case 0xC2B25A: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B25B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B25D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B25D.
    case 0xC2B25F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B260: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B262: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/eat_food.asm:30 JMP @UNKNOWN36
    case 0xC2B266: cpu.execute_instruction<0x4C>(0x00B5AB, 3); return true;
    // src/battle/eat_food.asm:32 JSR APPLY_CONDIMENT
    case 0xC2B269: cpu.execute_instruction<0x20>(0x00B126, 3); return true;
    // src/battle/eat_food.asm:36 LDX @LOCAL03
    case 0xC2B26C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:37 CPX #4
    case 0xC2B26E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/eat_food.asm:37 CPX #4
    // Overlapping static entry reached from 0xC2B26E.
    case 0xC2B270: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/eat_food.asm:38 BNE @UNKNOWN1
    case 0xC2B271: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/eat_food.asm:39 LDA #2
    case 0xC2B273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/eat_food.asm:39 LDA #2
    // Overlapping static entry reached from 0xC2B273.
    case 0xC2B275: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/eat_food.asm:40 BRA @UNKNOWN2
    case 0xC2B276: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:42 LDA #1
    case 0xC2B278: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:42 LDA #1
    // Overlapping static entry reached from 0xC2B278.
    case 0xC2B27A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B27B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B27D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B27F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B281: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/eat_food.asm:45 CLC
    case 0xC2B283: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:46 ADC @VIRTUAL0A
    case 0xC2B284: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:47 STA @VIRTUAL0A
    case 0xC2B286: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:48 LDA [@VIRTUAL0A]
    case 0xC2B288: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:49 AND #$00FF
    case 0xC2B28A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2B28A.
    case 0xC2B28C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/eat_food.asm:50 TAY
    case 0xC2B28D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/eat_food.asm:51 STY @LOCAL02
    case 0xC2B28E: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B290: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B292: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B294: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B296: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/eat_food.asm:53 LDA [@VIRTUAL0A]
    case 0xC2B298: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:54 AND #$00FF
    case 0xC2B29A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2B29A.
    case 0xC2B29C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:55 BEQ @UNKNOWN12
    case 0xC2B29D: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/battle/eat_food.asm:56 CMP #1
    case 0xC2B29F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:56 CMP #1
    // Overlapping static entry reached from 0xC2B29F.
    case 0xC2B2A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:57 BEQ @UNKNOWN15
    case 0xC2B2A2: cpu.execute_instruction<0xF0>(0x000069, 2); return true;
    // src/battle/eat_food.asm:58 CMP #2
    case 0xC2B2A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/eat_food.asm:58 CMP #2
    // Overlapping static entry reached from 0xC2B2A4.
    case 0xC2B2A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2A7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2A9: cpu.execute_instruction<0x4C>(0x00B325, 3); return true;
    // src/battle/eat_food.asm:60 CMP #3
    case 0xC2B2AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/eat_food.asm:60 CMP #3
    // Overlapping static entry reached from 0xC2B2AC.
    case 0xC2B2AE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B2AF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B2B1: cpu.execute_instruction<0x4C>(0x00B357, 3); return true;
    // src/battle/eat_food.asm:62 CMP #4
    case 0xC2B2B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/eat_food.asm:62 CMP #4
    // Overlapping static entry reached from 0xC2B2B4.
    case 0xC2B2B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B2B7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B2B9: cpu.execute_instruction<0x4C>(0x00B385, 3); return true;
    // src/battle/eat_food.asm:64 CMP #5
    case 0xC2B2BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/eat_food.asm:64 CMP #5
    // Overlapping static entry reached from 0xC2B2BC.
    case 0xC2B2BE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B2BF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B2C1: cpu.execute_instruction<0x4C>(0x00B3EC, 3); return true;
    // src/battle/eat_food.asm:66 CMP #6
    case 0xC2B2C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/eat_food.asm:66 CMP #6
    // Overlapping static entry reached from 0xC2B2C4.
    case 0xC2B2C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B2C7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B2C9: cpu.execute_instruction<0x4C>(0x00B453, 3); return true;
    // src/battle/eat_food.asm:68 CMP #7
    case 0xC2B2CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/eat_food.asm:68 CMP #7
    // Overlapping static entry reached from 0xC2B2CC.
    case 0xC2B2CE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B2CF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B2D1: cpu.execute_instruction<0x4C>(0x00B4BA, 3); return true;
    // src/battle/eat_food.asm:70 CMP #8
    case 0xC2B2D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/eat_food.asm:70 CMP #8
    // Overlapping static entry reached from 0xC2B2D4.
    case 0xC2B2D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B2D7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B2D9: cpu.execute_instruction<0x4C>(0x00B520, 3); return true;
    // src/battle/eat_food.asm:72 CMP #9
    case 0xC2B2DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/battle/eat_food.asm:72 CMP #9
    // Overlapping static entry reached from 0xC2B2DC.
    case 0xC2B2DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B2DF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B2E1: cpu.execute_instruction<0x4C>(0x00B586, 3); return true;
    // src/battle/eat_food.asm:74 CMP #10
    case 0xC2B2E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/battle/eat_food.asm:74 CMP #10
    // Overlapping static entry reached from 0xC2B2E4.
    case 0xC2B2E6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B2E7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B2E9: cpu.execute_instruction<0x4C>(0x00B58C, 3); return true;
    // src/battle/eat_food.asm:76 JMP @UNKNOWN35
    case 0xC2B2EC: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:78 CPY #0
    case 0xC2B2EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/eat_food.asm:78 CPY #0
    // Overlapping static entry reached from 0xC2B2EF.
    case 0xC2B2F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:79 BEQ @UNKNOWN13
    case 0xC2B2F2: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/eat_food.asm:80 TYA
    case 0xC2B2F4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2F8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:82 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B2FB: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/eat_food.asm:83 TAX
    case 0xC2B2FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:84 BRA @UNKNOWN14
    case 0xC2B2FF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:86 LDX #30000
    case 0xC2B301: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:86 LDX #30000
    // Overlapping static entry reached from 0xC2B301.
    case 0xC2B303: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    case 0xC2B304: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B303.
    case 0xC2B305: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/eat_food.asm:89 JSR RECOVER_HP
    case 0xC2B307: cpu.execute_instruction<0x20>(0x0071D7, 3); return true;
    // src/battle/eat_food.asm:90 JMP @UNKNOWN35
    case 0xC2B30A: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:92 CPY #0
    case 0xC2B30D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/eat_food.asm:92 CPY #0
    // Overlapping static entry reached from 0xC2B30D.
    case 0xC2B30F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:93 BEQ @UNKNOWN16
    case 0xC2B310: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/eat_food.asm:94 TYA
    case 0xC2B312: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/eat_food.asm:95 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B313: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/eat_food.asm:96 TAX
    case 0xC2B316: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:97 BRA @UNKNOWN17
    case 0xC2B317: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:99 LDX #30000
    case 0xC2B319: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:99 LDX #30000
    // Overlapping static entry reached from 0xC2B319.
    case 0xC2B31B: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    case 0xC2B31C: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B31B.
    case 0xC2B31D: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/eat_food.asm:102 JSR RECOVER_PP
    case 0xC2B31F: cpu.execute_instruction<0x20>(0x00725B, 3); return true;
    // src/battle/eat_food.asm:103 JMP @UNKNOWN35
    case 0xC2B322: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:105 CPY #0
    case 0xC2B325: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/eat_food.asm:105 CPY #0
    // Overlapping static entry reached from 0xC2B325.
    case 0xC2B327: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:106 BEQ @UNKNOWN19
    case 0xC2B328: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/eat_food.asm:107 TYA
    case 0xC2B32A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B32B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B32D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B32E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B330: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:109 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B331: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/eat_food.asm:110 TAX
    case 0xC2B334: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:111 BRA @UNKNOWN20
    case 0xC2B335: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:113 LDX #30000
    case 0xC2B337: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:113 LDX #30000
    // Overlapping static entry reached from 0xC2B337.
    case 0xC2B339: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    case 0xC2B33A: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B339.
    case 0xC2B33B: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/eat_food.asm:116 JSR RECOVER_HP
    case 0xC2B33D: cpu.execute_instruction<0x20>(0x0071D7, 3); return true;
    // src/battle/eat_food.asm:117 LDY @LOCAL02
    case 0xC2B340: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:118 BEQ @UNKNOWN21
    case 0xC2B342: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/eat_food.asm:119 TYA
    case 0xC2B344: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/eat_food.asm:120 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B345: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/eat_food.asm:121 TAX
    case 0xC2B348: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:122 BRA @UNKNOWN22
    case 0xC2B349: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:124 LDX #$7530
    case 0xC2B34B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:124 LDX #$7530
    // Overlapping static entry reached from 0xC2B34B.
    case 0xC2B34D: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    case 0xC2B34E: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B34D.
    case 0xC2B34F: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/eat_food.asm:127 JSR RECOVER_PP
    case 0xC2B351: cpu.execute_instruction<0x20>(0x00725B, 3); return true;
    // src/battle/eat_food.asm:128 JMP @UNKNOWN35
    case 0xC2B354: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:130 LDA #$0004
    case 0xC2B357: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/eat_food.asm:130 LDA #$0004
    // Overlapping static entry reached from 0xC2B357.
    case 0xC2B359: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/eat_food.asm:131 JSR RAND_LIMIT
    case 0xC2B35A: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/eat_food.asm:132 CMP #0
    case 0xC2B35D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/eat_food.asm:132 CMP #0
    // Overlapping static entry reached from 0xC2B35D.
    case 0xC2B35F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:133 BEQ @UNKNOWN28
    case 0xC2B360: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/eat_food.asm:134 CMP #1
    case 0xC2B362: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:134 CMP #1
    // Overlapping static entry reached from 0xC2B362.
    case 0xC2B364: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B365: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B367: cpu.execute_instruction<0x4C>(0x00B3EC, 3); return true;
    // src/battle/eat_food.asm:136 CMP #2
    case 0xC2B36A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/eat_food.asm:136 CMP #2
    // Overlapping static entry reached from 0xC2B36A.
    case 0xC2B36C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B36D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B36F: cpu.execute_instruction<0x4C>(0x00B453, 3); return true;
    // src/battle/eat_food.asm:138 CMP #3
    case 0xC2B372: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/eat_food.asm:138 CMP #3
    // Overlapping static entry reached from 0xC2B372.
    case 0xC2B374: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B375: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B377: cpu.execute_instruction<0x4C>(0x00B4BA, 3); return true;
    // src/battle/eat_food.asm:140 CMP #4
    case 0xC2B37A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/eat_food.asm:140 CMP #4
    // Overlapping static entry reached from 0xC2B37A.
    case 0xC2B37C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B37D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B37F: cpu.execute_instruction<0x4C>(0x00B520, 3); return true;
    // src/battle/eat_food.asm:142 JMP @UNKNOWN35
    case 0xC2B382: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:144 LDA CURRENT_TARGET
    case 0xC2B385: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:145 CLC
    case 0xC2B388: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:146 ADC #battler::iq
    case 0xC2B389: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x000031, 3); return true;
    // src/battle/eat_food.asm:146 ADC #battler::iq
    // Overlapping static entry reached from 0xC2B389.
    case 0xC2B38B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/eat_food.asm:147 LDY @LOCAL02
    case 0xC2B38C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:148 SEP #PROC_FLAGS::INDEX8
    case 0xC2B38E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:149 STY @VIRTUAL00
    case 0xC2B390: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:150 PHA
    case 0xC2B392: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:151 REP #PROC_FLAGS::INDEX8
    case 0xC2B393: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:152 TAX
    case 0xC2B395: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B396: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:154 LDA __BSS_START__,X
    case 0xC2B398: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:155 CLC
    case 0xC2B39B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:156 ADC @VIRTUAL00
    case 0xC2B39C: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:157 PLX
    case 0xC2B39E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:158 STA __BSS_START__,X
    case 0xC2B39F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:159 LDX @LOCAL03
    case 0xC2B3A2: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:161 TXA
    case 0xC2B3A6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:162 DEC
    case 0xC2B3A7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC2B3A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B5CC.
    case 0xC2B3A9: cpu.execute_instruction<0x5E>(0x002200, 3); return true;
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B3A8.
    case 0xC2B3AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:164 JSL MULT168
    case 0xC2B3AB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/eat_food.asm:164 JSL MULT168
    // Overlapping static entry reached from 0xC2B3A9.
    case 0xC2B3AC: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/battle/eat_food.asm:165 CLC
    case 0xC2B3AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    case 0xC2B3B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x009CD8, 3); return true;
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    // Overlapping static entry reached from 0xC2B3B0.
    case 0xC2B3B2: cpu.execute_instruction<0x9C>(0x00AA48, 3); return true;
    // src/battle/eat_food.asm:167 PHA
    case 0xC2B3B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:168 TAX
    case 0xC2B3B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B3B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:170 LDA __BSS_START__,X
    case 0xC2B3B7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:171 CLC
    case 0xC2B3BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:172 ADC @VIRTUAL00
    case 0xC2B3BB: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:173 PLX
    case 0xC2B3BD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:174 STA __BSS_START__,X
    case 0xC2B3BE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:175 LDX @LOCAL03
    case 0xC2B3C1: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3C3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:177 TXA
    case 0xC2B3C5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:178 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC2B3C6: cpu.execute_instruction<0x22>(0xC21C12, 4); return true;
    // src/battle/eat_food.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00367D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B3CC.
    case 0xC2B3CE: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B3CE.
    case 0xC2B3D0: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B3D1.
    case 0xC2B3D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3D4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:181 LDY @LOCAL02
    case 0xC2B3D6: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:182 TYA
    case 0xC2B3D8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B3D9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B3DB: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3DD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3DF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3E1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3E3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:185 JSL DISPLAY_TEXT_WAIT
    case 0xC2B3E5: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/eat_food.asm:186 JMP @UNKNOWN35
    case 0xC2B3E9: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:188 LDA CURRENT_TARGET
    case 0xC2B3EC: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:189 CLC
    case 0xC2B3EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:190 ADC #battler::guts
    case 0xC2B3F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002C, 2); else cpu.execute_instruction<0x69>(0x00002C, 3); return true;
    // src/battle/eat_food.asm:190 ADC #battler::guts
    // Overlapping static entry reached from 0xC2B3F0.
    case 0xC2B3F2: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/eat_food.asm:191 PHA
    case 0xC2B3F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:192 LDY @LOCAL02
    case 0xC2B3F4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:193 STY @VIRTUAL02
    case 0xC2B3F6: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/eat_food.asm:194 TAX
    case 0xC2B3F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:195 LDA __BSS_START__,X
    case 0xC2B3F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:196 CLC
    case 0xC2B3FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:197 ADC @VIRTUAL02
    case 0xC2B3FD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/eat_food.asm:198 PLX
    case 0xC2B3FF: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:199 STA __BSS_START__,X
    case 0xC2B400: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:200 LDX @LOCAL03
    case 0xC2B403: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:201 TXA
    case 0xC2B405: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:202 DEC
    case 0xC2B406: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    case 0xC2B407: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B407.
    case 0xC2B409: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:204 JSL MULT168
    case 0xC2B40A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/eat_food.asm:205 CLC
    case 0xC2B40E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    case 0xC2B40F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x009CD6, 3); return true;
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    // Overlapping static entry reached from 0xC2B40F.
    case 0xC2B411: cpu.execute_instruction<0x9C>(0x00A448, 3); return true;
    // src/battle/eat_food.asm:207 PHA
    case 0xC2B412: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:208 LDY @LOCAL02
    case 0xC2B413: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:208 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2B411.
    case 0xC2B414: cpu.execute_instruction<0x16>(0x0000E2, 2); return true;
    // src/battle/eat_food.asm:209 SEP #PROC_FLAGS::INDEX8
    case 0xC2B415: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:209 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2B414.
    case 0xC2B416: cpu.execute_instruction<0x10>(0x000084, 2); return true;
    // src/battle/eat_food.asm:210 STY @VIRTUAL00
    case 0xC2B417: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:210 STY @VIRTUAL00
    // Overlapping static entry reached from 0xC2B416.
    case 0xC2B418: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/eat_food.asm:211 REP #PROC_FLAGS::INDEX8
    case 0xC2B419: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:212 TAX
    case 0xC2B41B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:213 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B41C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:214 LDA __BSS_START__,X
    case 0xC2B41E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:215 CLC
    case 0xC2B421: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:216 ADC @VIRTUAL00
    case 0xC2B422: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:217 PLX
    case 0xC2B424: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:218 STA __BSS_START__,X
    case 0xC2B425: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:219 LDX @LOCAL03
    case 0xC2B428: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2B42A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:221 TXA
    case 0xC2B42C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:222 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC2B42D: cpu.execute_instruction<0x22>(0xC21A48, 4); return true;
    // src/battle/eat_food.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC2B431: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B433: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x003694, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B433.
    case 0xC2B435: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B436: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B435.
    case 0xC2B437: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B438: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B438.
    case 0xC2B43A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B43B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:225 LDY @LOCAL02
    case 0xC2B43D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:226 TYA
    case 0xC2B43F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B440: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B442: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B444: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B446: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B448: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B44A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:229 JSL DISPLAY_TEXT_WAIT
    case 0xC2B44C: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/eat_food.asm:230 JMP @UNKNOWN35
    case 0xC2B450: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:232 LDA CURRENT_TARGET
    case 0xC2B453: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:233 CLC
    case 0xC2B456: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:234 ADC #battler::speed
    case 0xC2B457: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002A, 2); else cpu.execute_instruction<0x69>(0x00002A, 3); return true;
    // src/battle/eat_food.asm:234 ADC #battler::speed
    // Overlapping static entry reached from 0xC2B457.
    case 0xC2B459: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/eat_food.asm:235 PHA
    case 0xC2B45A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:236 LDY @LOCAL02
    case 0xC2B45B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:237 STY @VIRTUAL02
    case 0xC2B45D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/eat_food.asm:238 TAX
    case 0xC2B45F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:239 LDA __BSS_START__,X
    case 0xC2B460: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:240 CLC
    case 0xC2B463: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:241 ADC @VIRTUAL02
    case 0xC2B464: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/eat_food.asm:242 PLX
    case 0xC2B466: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:243 STA __BSS_START__,X
    case 0xC2B467: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:244 LDX @LOCAL03
    case 0xC2B46A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:245 TXA
    case 0xC2B46C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:246 DEC
    case 0xC2B46D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    case 0xC2B46E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B46E.
    case 0xC2B470: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:248 JSL MULT168
    case 0xC2B471: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/eat_food.asm:249 CLC
    case 0xC2B475: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    case 0xC2B476: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D5, 2); else cpu.execute_instruction<0x69>(0x009CD5, 3); return true;
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    // Overlapping static entry reached from 0xC2B476.
    case 0xC2B478: cpu.execute_instruction<0x9C>(0x00A448, 3); return true;
    // src/battle/eat_food.asm:251 PHA
    case 0xC2B479: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:252 LDY @LOCAL02
    case 0xC2B47A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:252 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2B478.
    case 0xC2B47B: cpu.execute_instruction<0x16>(0x0000E2, 2); return true;
    // src/battle/eat_food.asm:253 SEP #PROC_FLAGS::INDEX8
    case 0xC2B47C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:253 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2B47B.
    case 0xC2B47D: cpu.execute_instruction<0x10>(0x000084, 2); return true;
    // src/battle/eat_food.asm:254 STY @VIRTUAL00
    case 0xC2B47E: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:254 STY @VIRTUAL00
    // Overlapping static entry reached from 0xC2B47D.
    case 0xC2B47F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/eat_food.asm:255 REP #PROC_FLAGS::INDEX8
    case 0xC2B480: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:256 TAX
    case 0xC2B482: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:257 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B483: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:258 LDA __BSS_START__,X
    case 0xC2B485: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:259 CLC
    case 0xC2B488: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:260 ADC @VIRTUAL00
    case 0xC2B489: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:261 PLX
    case 0xC2B48B: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:262 STA __BSS_START__,X
    case 0xC2B48C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:263 LDX @LOCAL03
    case 0xC2B48F: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC2B491: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:265 TXA
    case 0xC2B493: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:266 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC2B494: cpu.execute_instruction<0x22>(0xC21996, 4); return true;
    // src/battle/eat_food.asm:267 REP #PROC_FLAGS::ACCUM8
    case 0xC2B498: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B49A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x0036DF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B49A.
    case 0xC2B49C: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B49D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B49C.
    case 0xC2B49E: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B49F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B49F.
    case 0xC2B4A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4A2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:269 LDY @LOCAL02
    case 0xC2B4A4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:270 TYA
    case 0xC2B4A6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4A9: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4AB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4AD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4AF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4B1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:273 JSL DISPLAY_TEXT_WAIT
    case 0xC2B4B3: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/eat_food.asm:274 JMP @UNKNOWN35
    case 0xC2B4B7: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/battle/eat_food.asm:276 LDA CURRENT_TARGET
    case 0xC2B4BA: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:277 CLC
    case 0xC2B4BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    case 0xC2B4BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    // Overlapping static entry reached from 0xC2B4BE.
    case 0xC2B4C0: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/eat_food.asm:279 LDY @LOCAL02
    case 0xC2B4C1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:280 SEP #PROC_FLAGS::INDEX8
    case 0xC2B4C3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:281 STY @VIRTUAL00
    case 0xC2B4C5: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:282 PHA
    case 0xC2B4C7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:283 REP #PROC_FLAGS::INDEX8
    case 0xC2B4C8: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:284 TAX
    case 0xC2B4CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:285 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B4CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:286 LDA __BSS_START__,X
    case 0xC2B4CD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:287 CLC
    case 0xC2B4D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:288 ADC @VIRTUAL00
    case 0xC2B4D1: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:289 PLX
    case 0xC2B4D3: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:290 STA __BSS_START__,X
    case 0xC2B4D4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:291 LDX @LOCAL03
    case 0xC2B4D7: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:292 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4D9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:293 TXA
    case 0xC2B4DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:294 DEC
    case 0xC2B4DC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    case 0xC2B4DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B4DD.
    case 0xC2B4DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:296 JSL MULT168
    case 0xC2B4E0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/eat_food.asm:297 CLC
    case 0xC2B4E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC2B4E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D7, 2); else cpu.execute_instruction<0x69>(0x009CD7, 3); return true;
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC2B4E5.
    case 0xC2B4E7: cpu.execute_instruction<0x9C>(0x00AA48, 3); return true;
    // src/battle/eat_food.asm:299 PHA
    case 0xC2B4E8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:300 TAX
    case 0xC2B4E9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:301 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B4EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:302 LDA __BSS_START__,X
    case 0xC2B4EC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:303 CLC
    case 0xC2B4EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:304 ADC @VIRTUAL00
    case 0xC2B4F0: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:305 PLX
    case 0xC2B4F2: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:306 STA __BSS_START__,X
    case 0xC2B4F3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:307 LDX @LOCAL03
    case 0xC2B4F6: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:309 TXA
    case 0xC2B4FA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:310 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC2B4FB: cpu.execute_instruction<0x22>(0xC21BFA, 4); return true;
    // src/battle/eat_food.asm:311 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x0036F8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B501.
    case 0xC2B503: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B504: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B503.
    case 0xC2B505: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B506: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B506.
    case 0xC2B508: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B509: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:313 LDY @LOCAL02
    case 0xC2B50B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:314 TYA
    case 0xC2B50D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B50E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B510: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B512: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B514: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B516: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B518: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:317 JSL DISPLAY_TEXT_WAIT
    case 0xC2B51A: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/eat_food.asm:318 BRA @UNKNOWN35
    case 0xC2B51E: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/battle/eat_food.asm:320 LDA CURRENT_TARGET
    case 0xC2B520: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/eat_food.asm:321 CLC
    case 0xC2B523: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:322 ADC #battler::luck
    case 0xC2B524: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002E, 2); else cpu.execute_instruction<0x69>(0x00002E, 3); return true;
    // src/battle/eat_food.asm:322 ADC #battler::luck
    // Overlapping static entry reached from 0xC2B524.
    case 0xC2B526: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/eat_food.asm:323 PHA
    case 0xC2B527: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:324 LDY @LOCAL02
    case 0xC2B528: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:325 STY @VIRTUAL02
    case 0xC2B52A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/eat_food.asm:326 TAX
    case 0xC2B52C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:327 LDA __BSS_START__,X
    case 0xC2B52D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:328 CLC
    case 0xC2B530: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:329 ADC @VIRTUAL02
    case 0xC2B531: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/eat_food.asm:330 PLX
    case 0xC2B533: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:331 STA __BSS_START__,X
    case 0xC2B534: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:332 LDX @LOCAL03
    case 0xC2B537: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:333 TXA
    case 0xC2B539: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:334 DEC
    case 0xC2B53A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    case 0xC2B53B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B53B.
    case 0xC2B53D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:336 JSL MULT168
    case 0xC2B53E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/eat_food.asm:337 CLC
    case 0xC2B542: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC2B543: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D9, 2); else cpu.execute_instruction<0x69>(0x009CD9, 3); return true;
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC2B543.
    case 0xC2B545: cpu.execute_instruction<0x9C>(0x00A448, 3); return true;
    // src/battle/eat_food.asm:339 PHA
    case 0xC2B546: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:340 LDY @LOCAL02
    case 0xC2B547: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:340 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2B545.
    case 0xC2B548: cpu.execute_instruction<0x16>(0x0000E2, 2); return true;
    // src/battle/eat_food.asm:341 SEP #PROC_FLAGS::INDEX8
    case 0xC2B549: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:341 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2B548.
    case 0xC2B54A: cpu.execute_instruction<0x10>(0x000084, 2); return true;
    // src/battle/eat_food.asm:342 STY @VIRTUAL00
    case 0xC2B54B: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:342 STY @VIRTUAL00
    // Overlapping static entry reached from 0xC2B54A.
    case 0xC2B54C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/eat_food.asm:343 REP #PROC_FLAGS::INDEX8
    case 0xC2B54D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:344 TAX
    case 0xC2B54F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B550: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:346 LDA __BSS_START__,X
    case 0xC2B552: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:347 CLC
    case 0xC2B555: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:348 ADC @VIRTUAL00
    case 0xC2B556: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:349 PLX
    case 0xC2B558: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:350 STA __BSS_START__,X
    case 0xC2B559: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:351 LDX @LOCAL03
    case 0xC2B55C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/eat_food.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2B55E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:353 TXA
    case 0xC2B560: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:354 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC2B561: cpu.execute_instruction<0x22>(0xC21AFA, 4); return true;
    // src/battle/eat_food.asm:355 REP #PROC_FLAGS::ACCUM8
    case 0xC2B565: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B567: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x003713, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B567.
    case 0xC2B569: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B56A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B569.
    case 0xC2B56B: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B56C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B56C.
    case 0xC2B56E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B56F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:357 LDY @LOCAL02
    case 0xC2B571: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:358 TYA
    case 0xC2B573: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B574: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B576: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B578: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B57A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B57C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B57E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:361 JSL DISPLAY_TEXT_WAIT
    case 0xC2B580: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/eat_food.asm:362 BRA @UNKNOWN35
    case 0xC2B584: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:364 JSL BTLACT_HEALING_A
    case 0xC2B586: cpu.execute_instruction<0x22>(0xC29A93, 4); return true;
    // src/battle/eat_food.asm:365 BRA @UNKNOWN35
    case 0xC2B58A: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/eat_food.asm:367 JSL HEAL_POISON
    case 0xC2B58C: cpu.execute_instruction<0x22>(0xC2A346, 4); return true;
    // src/battle/eat_food.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B590: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    case 0xC2B592: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    // Overlapping static entry reached from 0xC2B592.
    case 0xC2B594: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/eat_food.asm:374 LDA [@VIRTUAL06],Y
    case 0xC2B595: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/eat_food.asm:375 REP #PROC_FLAGS::ACCUM8
    case 0xC2B597: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:376 AND #$00FF
    case 0xC2B599: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC2B599.
    case 0xC2B59B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:377 BEQ @UNKNOWN36
    case 0xC2B59C: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/eat_food.asm:378 AND #$00FF
    case 0xC2B59E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:378 AND #$00FF
    // Overlapping static entry reached from 0xC2B59E.
    case 0xC2B5A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:380 JSL UNKNOWN_C076C8
    case 0xC2B5A7: cpu.execute_instruction<0x22>(0xC07915, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B5AB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B5AC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/enemy_flashing_off.asm (source_named).
bool execute_battle_enemy_flashing_off_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_off.asm:6 BEGIN_C_FUNCTION
    case 0xC10DA0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/enemy_flashing_off.asm:8 LDA CURRENT_FLASHING_ENEMY
    case 0xC10DA2: cpu.execute_instruction<0xAD>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    case 0xC10DA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    // Overlapping static entry reached from 0xC10DA5.
    case 0xC10DA7: cpu.execute_instruction<0xFF>(0xAD45F0, 4); return true;
    // src/battle/enemy_flashing_off.asm:10 BEQ @UNKNOWN2
    case 0xC10DA8: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    case 0xC10DAA: cpu.execute_instruction<0xAD>(0x008D10, 3); return true;
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xC10DA7.
    case 0xC10DAB: cpu.execute_instruction<0x10>(0x00008D, 2); return true;
    // src/battle/enemy_flashing_off.asm:12 BEQ @UNKNOWN0
    case 0xC10DAD: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/enemy_flashing_off.asm:13 LDX CURRENT_FLASHING_ENEMY
    case 0xC10DAF: cpu.execute_instruction<0xAE>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_off.asm:14 LDA BACK_ROW_BATTLERS,X
    case 0xC10DB2: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    case 0xC10DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC10DB5.
    case 0xC10DB7: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    case 0xC10DB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10DB8.
    case 0xC10DBA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_off.asm:17 JSL MULT168
    case 0xC10DBB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_flashing_off.asm:18 TAX
    case 0xC10DBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:20 STZ BATTLERS_TABLE+74,X
    case 0xC10DC2: cpu.execute_instruction<0x9E>(0x00A1F8, 3); return true;
    // src/battle/enemy_flashing_off.asm:21 BRA @UNKNOWN1
    case 0xC10DC5: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/enemy_flashing_off.asm:24 LDX CURRENT_FLASHING_ENEMY
    case 0xC10DC7: cpu.execute_instruction<0xAE>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_off.asm:25 LDA FRONT_ROW_BATTLERS,X
    case 0xC10DCA: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    case 0xC10DCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC10DCD.
    case 0xC10DCF: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    case 0xC10DD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10DD0.
    case 0xC10DD2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_off.asm:28 JSL MULT168
    case 0xC10DD3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_flashing_off.asm:29 TAX
    case 0xC10DD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DD8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:31 STZ BATTLERS_TABLE+74,X
    case 0xC10DDA: cpu.execute_instruction<0x9E>(0x00A1F8, 3); return true;
    // src/battle/enemy_flashing_off.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC10DDD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:34 STZ ENEMY_TARGETTING_FLASHING
    case 0xC10DDF: cpu.execute_instruction<0x9C>(0x00AF77, 3); return true;
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    case 0xC10DE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xC10DE2.
    case 0xC10DE4: cpu.execute_instruction<0xFF>(0x8D0E8D, 4); return true;
    // src/battle/enemy_flashing_off.asm:36 STA CURRENT_FLASHING_ENEMY
    case 0xC10DE5: cpu.execute_instruction<0x8D>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_off.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DE8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:38 LDA #$0001
    case 0xC10DEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    case 0xC10DEC: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10DEA.
    case 0xC10DED: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10DED.
    case 0xC10DEE: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/battle/enemy_flashing_off.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC10DEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/enemy_flashing_off.asm:42 END_C_FUNCTION
    case 0xC10DF1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/enemy_flashing_on.asm (source_named).
bool execute_battle_enemy_flashing_on_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_on.asm:6 BEGIN_C_FUNCTION
    case 0xC10DF2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC10DF7.
    case 0xC10DF9: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DFA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xC10DFB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    case 0xC10DFC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xC10DF9.
    case 0xC10DFD: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    case 0xC10DFE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xC10DFD.
    case 0xC10DFF: cpu.execute_instruction<0x0E>(0x000EAD, 3); return true;
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    case 0xC10E00: cpu.execute_instruction<0xAD>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xC10DFF.
    case 0xC10E02: cpu.execute_instruction<0x8D>(0x00FFC9, 3); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    case 0xC10E03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xC10E03.
    case 0xC10E05: cpu.execute_instruction<0xFF>(0x2003F0, 4); return true;
    // src/battle/enemy_flashing_on.asm:18 BEQ @UNKNOWN0
    case 0xC10E06: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/enemy_flashing_on.asm:22 JSR ENEMY_FLASHING_OFF
    case 0xC10E08: cpu.execute_instruction<0x20>(0x000DA0, 3); return true;
    // src/battle/enemy_flashing_on.asm:22 JSR ENEMY_FLASHING_OFF
    // Overlapping static entry reached from 0xC10E05.
    case 0xC10E09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00A60D, 3); return true;
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    case 0xC10E0B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    // Overlapping static entry reached from 0xC10E09.
    case 0xC10E0C: cpu.execute_instruction<0x10>(0x00008E, 2); return true;
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    case 0xC10E0D: cpu.execute_instruction<0x8E>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xC10E0C.
    case 0xC10E0E: cpu.execute_instruction<0x0E>(0x00A58D, 3); return true;
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    case 0xC10E10: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    // Overlapping static entry reached from 0xC10E0E.
    case 0xC10E11: cpu.execute_instruction<0x0E>(0x00108D, 3); return true;
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    case 0xC10E12: cpu.execute_instruction<0x8D>(0x008D10, 3); return true;
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xC10E11.
    case 0xC10E14: cpu.execute_instruction<0x8D>(0x001AF0, 3); return true;
    // src/battle/enemy_flashing_on.asm:29 BEQ @UNKNOWN1
    case 0xC10E15: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/enemy_flashing_on.asm:30 LDX CURRENT_FLASHING_ENEMY
    case 0xC10E17: cpu.execute_instruction<0xAE>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_on.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0xC10E1A: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    case 0xC10E1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC10E1D.
    case 0xC10E1F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    case 0xC10E20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10E20.
    case 0xC10E22: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_on.asm:34 JSL MULT168
    case 0xC10E23: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_flashing_on.asm:35 TAX
    case 0xC10E27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E28: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:37 LDA #1
    case 0xC10E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xC10E2C: cpu.execute_instruction<0x9D>(0x00A1F8, 3); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E2A.
    case 0xC10E2D: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E2D.
    case 0xC10E2E: cpu.execute_instruction<0xA1>(0x000080, 2); return true;
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    case 0xC10E2F: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC10E2E.
    case 0xC10E30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:42 LDX CURRENT_FLASHING_ENEMY
    case 0xC10E31: cpu.execute_instruction<0xAE>(0x008D0E, 3); return true;
    // src/battle/enemy_flashing_on.asm:43 LDA FRONT_ROW_BATTLERS,X
    case 0xC10E34: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    case 0xC10E37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC10E37.
    case 0xC10E39: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    case 0xC10E3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10E3A.
    case 0xC10E3C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_on.asm:46 JSL MULT168
    case 0xC10E3D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_flashing_on.asm:47 TAX
    case 0xC10E41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E42: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:49 LDA #1
    case 0xC10E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xC10E46: cpu.execute_instruction<0x9D>(0x00A1F8, 3); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E44.
    case 0xC10E47: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xC10E47.
    case 0xC10E48: cpu.execute_instruction<0xA1>(0x0000C2, 2); return true;
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC10E49: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC10E48.
    case 0xC10E4A: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    case 0xC10E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xC10E4B.
    case 0xC10E4D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/enemy_flashing_on.asm:54 STA ENEMY_TARGETTING_FLASHING
    case 0xC10E4E: cpu.execute_instruction<0x8D>(0x00AF77, 3); return true;
    // src/battle/enemy_flashing_on.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:56 STA REDRAW_ALL_WINDOWS
    case 0xC10E53: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/battle/enemy_flashing_on.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC10E56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xC10E58: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xC10E59: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/enemy_select_mode.asm (source_named).
bool execute_battle_enemy_select_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_select_mode.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DF69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DF6E.
    case 0xC1DF70: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF71: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1DF72: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    case 0xC1DF73: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1DF70.
    case 0xC1DF74: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    case 0xC1DF75: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1DF74.
    case 0xC1DF76: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    case 0xC1DF77: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1DF76.
    case 0xC1DF78: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    case 0xC1DF79: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    // Overlapping static entry reached from 0xC1DF78.
    case 0xC1DF7A: cpu.execute_instruction<0x22>(0x00F720, 4); return true;
    // src/battle/enemy_select_mode.asm:23 JSR SET_INSTANT_PRINTING
    case 0xC1DF7B: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1DF7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1DF7E.
    case 0xC1DF80: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1DF81: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/battle/enemy_select_mode.asm:25 LDA OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC1DF84: cpu.execute_instruction<0xAD>(0x008C42, 3); return true;
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC1DF87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1DF87.
    case 0xC1DF89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:27 JSL MULT168
    case 0xC1DF8A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_select_mode.asm:28 CLC
    case 0xC1DF8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1DF8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1DF8F.
    case 0xC1DF91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00BDAA, 3); return true;
    // src/battle/enemy_select_mode.asm:30 TAX
    case 0xC1DF92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:31 LDA a:window_stats::text_x,X
    case 0xC1DF93: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/enemy_select_mode.asm:31 LDA a:window_stats::text_x,X
    // Overlapping static entry reached from 0xC1DF91.
    case 0xC1DF94: cpu.execute_instruction<0x0E>(0x008500, 3); return true;
    // src/battle/enemy_select_mode.asm:32 STA @LOCAL08
    case 0xC1DF96: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:32 STA @LOCAL08
    // Overlapping static entry reached from 0xC1DF94.
    case 0xC1DF97: cpu.execute_instruction<0x20>(0x0010BD, 3); return true;
    // src/battle/enemy_select_mode.asm:33 LDA a:window_stats::text_y,X
    case 0xC1DF98: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/enemy_select_mode.asm:33 LDA a:window_stats::text_y,X
    // Overlapping static entry reached from 0xC1DF97.
    case 0xC1DF9A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:34 STA @LOCAL07
    case 0xC1DF9B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/enemy_select_mode.asm:35 LDA #1
    case 0xC1DF9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:35 LDA #1
    // Overlapping static entry reached from 0xC1DF9D.
    case 0xC1DF9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:36 STA @LOCAL06
    case 0xC1DFA0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:37 STA @LOCAL05
    case 0xC1DFA2: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:39 JSR SET_INSTANT_PRINTING
    case 0xC1DFA4: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/battle/enemy_select_mode.asm:40 LDX @LOCAL07
    case 0xC1DFA7: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/enemy_select_mode.asm:41 LDA @LOCAL08
    case 0xC1DFA9: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:42 JSR UNKNOWN_C438A5
    case 0xC1DFAB: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/battle/enemy_select_mode.asm:43 LDA @LOCAL0A
    case 0xC1DFAE: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:44 STA @VIRTUAL04
    case 0xC1DFB0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1DFB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1DFB4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFB6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFBA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DFBC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/enemy_select_mode.asm:47 JSR UNKNOWN_C10D7C
    case 0xC1DFBE: cpu.execute_instruction<0x20>(0x0012CA, 3); return true;
    // src/battle/enemy_select_mode.asm:48 STA @VIRTUAL02
    case 0xC1DFC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:49 LDA #7
    case 0xC1DFC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/enemy_select_mode.asm:49 LDA #7
    // Overlapping static entry reached from 0xC1DFC3.
    case 0xC1DFC5: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/enemy_select_mode.asm:50 SEC
    case 0xC1DFC6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:51 SBC @VIRTUAL02
    case 0xC1DFC7: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:52 CLC
    case 0xC1DFC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC1DFCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000098, 2); else cpu.execute_instruction<0x69>(0x008C98, 3); return true;
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1DFCA.
    case 0xC1DFCC: cpu.execute_instruction<0x8C>(0x0084A8, 3); return true;
    // src/battle/enemy_select_mode.asm:54 TAY
    case 0xC1DFCD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    case 0xC1DFCE: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DFCC.
    case 0xC1DFCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:56 LDX #3
    case 0xC1DFD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/enemy_select_mode.asm:56 LDX #3
    // Overlapping static entry reached from 0xC1DFD0.
    case 0xC1DFD2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/enemy_select_mode.asm:57 STX @LOCAL03
    case 0xC1DFD3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:58 BRA @UNKNOWN4
    case 0xC1DFD5: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:60 CPX @LOCAL06
    case 0xC1DFD7: cpu.execute_instruction<0xE4>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:61 BNE @UNKNOWN2
    case 0xC1DFD9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1DFDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1DFDB.
    case 0xC1DFDD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/enemy_select_mode.asm:67 BRA @UNKNOWN3
    case 0xC1DFDE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    case 0xC1DFE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1DFE0.
    case 0xC1DFE2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:75 JSR PRINT_LETTER
    case 0xC1DFE3: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/battle/enemy_select_mode.asm:76 LDX @LOCAL03
    case 0xC1DFE6: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:77 DEX
    case 0xC1DFE8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:78 STX @LOCAL03
    case 0xC1DFE9: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:80 TXA
    case 0xC1DFEB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:81 CMP @VIRTUAL02
    case 0xC1DFEC: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1DFEE: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1DFF0: cpu.execute_instruction<0xB0>(0x0000E5, 2); return true;
    // src/battle/enemy_select_mode.asm:83 BRA @UNKNOWN9
    case 0xC1DFF2: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:85 CPX @LOCAL06
    case 0xC1DFF4: cpu.execute_instruction<0xE4>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:86 BNE @UNKNOWN7
    case 0xC1DFF6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1DFF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1DFF8.
    case 0xC1DFFA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/enemy_select_mode.asm:92 BRA @UNKNOWN8
    case 0xC1DFFB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    case 0xC1DFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1DFFD.
    case 0xC1DFFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:100 STA @VIRTUAL02
    case 0xC1E000: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:101 LDY @LOCAL04
    case 0xC1E002: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:102 LDA __BSS_START__,Y
    case 0xC1E004: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    case 0xC1E007: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1E007.
    case 0xC1E009: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:104 CLC
    case 0xC1E00A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:105 ADC @VIRTUAL02
    case 0xC1E00B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:106 INY
    case 0xC1E00D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:107 STY @LOCAL04
    case 0xC1E00E: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:108 JSR PRINT_LETTER
    case 0xC1E010: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/battle/enemy_select_mode.asm:109 LDX @LOCAL03
    case 0xC1E013: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:110 DEX
    case 0xC1E015: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:111 STX @LOCAL03
    case 0xC1E016: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:113 CPX #0
    case 0xC1E018: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:113 CPX #0
    // Overlapping static entry reached from 0xC1E018.
    case 0xC1E01A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/enemy_select_mode.asm:114 BNE @UNKNOWN6
    case 0xC1E01B: cpu.execute_instruction<0xD0>(0x0000D7, 2); return true;
    // src/battle/enemy_select_mode.asm:115 JSR CLEAR_INSTANT_PRINTING
    case 0xC1E01D: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/battle/enemy_select_mode.asm:116 JSL WINDOW_TICK
    case 0xC1E020: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/enemy_select_mode.asm:118 JSL WINDOW_TICK
    case 0xC1E024: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/enemy_select_mode.asm:119 LDA PAD_PRESS
    case 0xC1E028: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    case 0xC1E02B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E02B.
    case 0xC1E02D: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:121 BEQ @UNKNOWN11
    case 0xC1E02E: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/enemy_select_mode.asm:122 LDA @LOCAL06
    case 0xC1E030: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:123 CMP #3
    case 0xC1E032: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/enemy_select_mode.asm:123 CMP #3
    // Overlapping static entry reached from 0xC1E032.
    case 0xC1E034: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/enemy_select_mode.asm:124 BCS @UNKNOWN11
    case 0xC1E035: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/battle/enemy_select_mode.asm:125 INC @LOCAL06
    case 0xC1E037: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:126 LDA @LOCAL05
    case 0xC1E039: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E03F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E041: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:128 STA @LOCAL05
    case 0xC1E042: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:129 JMP @UNKNOWN0
    case 0xC1E044: cpu.execute_instruction<0x4C>(0x00DFA4, 3); return true;
    // src/battle/enemy_select_mode.asm:131 LDA PAD_PRESS
    case 0xC1E047: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    case 0xC1E04A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E04A.
    case 0xC1E04C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    case 0xC1E04D: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    // Overlapping static entry reached from 0xC1E04C.
    case 0xC1E04E: cpu.execute_instruction<0x26>(0x0000A5, 2); return true;
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    case 0xC1E04F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1E04E.
    case 0xC1E050: cpu.execute_instruction<0x1C>(0x0001C9, 3); return true;
    // src/battle/enemy_select_mode.asm:135 CMP #1
    case 0xC1E051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:135 CMP #1
    // Overlapping static entry reached from 0xC1E051.
    case 0xC1E053: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E054: cpu.execute_instruction<0x90>(0x00001F, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E056: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/enemy_select_mode.asm:137 DEC @LOCAL06
    case 0xC1E058: cpu.execute_instruction<0xC6>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E05A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E05A.
    case 0xC1E05C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E05D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E05F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E05F.
    case 0xC1E061: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E062: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E064: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E066: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E068: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:140 JSL DIVISION32
    case 0xC1E06A: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/battle/enemy_select_mode.asm:141 LDA @VIRTUAL06
    case 0xC1E06E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:142 STA @LOCAL05
    case 0xC1E070: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:143 JMP @UNKNOWN0
    case 0xC1E072: cpu.execute_instruction<0x4C>(0x00DFA4, 3); return true;
    // src/battle/enemy_select_mode.asm:145 LDA PAD_HELD
    case 0xC1E075: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    case 0xC1E078: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E078.
    case 0xC1E07A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:147 BEQ @UNKNOWN15
    case 0xC1E07B: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E07D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E07D.
    case 0xC1E07F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E080: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E082: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E082.
    case 0xC1E084: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E085: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:149 LDY @LOCAL05
    case 0xC1E087: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:150 LDA @VIRTUAL04
    case 0xC1E089: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:151 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E08B: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E08F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E091: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:153 JSL MODULUS32S
    case 0xC1E093: cpu.execute_instruction<0x22>(0xC091E8, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E097: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E097.
    case 0xC1E099: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E09A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E09C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E09C.
    case 0xC1E09E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E09F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0A9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:156 BEQ @UNKNOWN14
    case 0xC1E0AB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:157 LDA @VIRTUAL04
    case 0xC1E0AD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:158 CLC
    case 0xC1E0AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:159 ADC @LOCAL05
    case 0xC1E0B0: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:160 STA @VIRTUAL04
    case 0xC1E0B2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:161 STA @LOCAL0A
    case 0xC1E0B4: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:162 JMP @UNKNOWN21
    case 0xC1E0B6: cpu.execute_instruction<0x4C>(0x00E14E, 3); return true;
    // src/battle/enemy_select_mode.asm:164 LDA @LOCAL05
    case 0xC1E0B9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E0C0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:166 STA @VIRTUAL02
    case 0xC1E0C2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:167 LDA @LOCAL0A
    case 0xC1E0C4: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:168 STA @VIRTUAL04
    case 0xC1E0C6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:169 SEC
    case 0xC1E0C8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:170 SBC @VIRTUAL02
    case 0xC1E0C9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:171 STA @VIRTUAL04
    case 0xC1E0CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:172 STA @LOCAL0A
    case 0xC1E0CD: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:173 JMP @UNKNOWN21
    case 0xC1E0CF: cpu.execute_instruction<0x4C>(0x00E14E, 3); return true;
    // src/battle/enemy_select_mode.asm:175 LDA PAD_HELD
    case 0xC1E0D2: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    case 0xC1E0D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E0D5.
    case 0xC1E0D7: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    case 0xC1E0D8: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC1E0D7.
    case 0xC1E0D9: cpu.execute_instruction<0x53>(0x0000A9, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0D9.
    case 0xC1E0DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0DA.
    case 0xC1E0DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0DD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0DF.
    case 0xC1E0E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E0E2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:179 LDY @LOCAL05
    case 0xC1E0E4: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:180 LDA @VIRTUAL04
    case 0xC1E0E6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:181 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E0E8: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E0EC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E0EE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:183 JSL MODULUS32S
    case 0xC1E0F0: cpu.execute_instruction<0x22>(0xC091E8, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0F4.
    case 0xC1E0F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0F7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E0F9.
    case 0xC1E0FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E0FC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E0FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E100: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E102: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E104: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E106: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:186 BEQ @UNKNOWN17
    case 0xC1E108: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/enemy_select_mode.asm:187 LDA @VIRTUAL04
    case 0xC1E10A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:188 SEC
    case 0xC1E10C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:189 SBC @LOCAL05
    case 0xC1E10D: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:190 STA @VIRTUAL04
    case 0xC1E10F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:191 STA @LOCAL0A
    case 0xC1E111: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:192 BRA @UNKNOWN21
    case 0xC1E113: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/battle/enemy_select_mode.asm:194 LDA @LOCAL05
    case 0xC1E115: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E117: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E119: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E11A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E11B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E11C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:196 STA @VIRTUAL02
    case 0xC1E11E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:197 LDA @LOCAL0A
    case 0xC1E120: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:198 STA @VIRTUAL04
    case 0xC1E122: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:199 CLC
    case 0xC1E124: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:200 ADC @VIRTUAL02
    case 0xC1E125: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:201 STA @VIRTUAL04
    case 0xC1E127: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:202 STA @LOCAL0A
    case 0xC1E129: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:203 BRA @UNKNOWN21
    case 0xC1E12B: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/battle/enemy_select_mode.asm:205 LDA PAD_PRESS
    case 0xC1E12D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E130: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E130.
    case 0xC1E132: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:207 BEQ @UNKNOWN19
    case 0xC1E133: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/enemy_select_mode.asm:208 LDX @VIRTUAL04
    case 0xC1E135: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:209 STX @LOCAL03
    case 0xC1E137: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:210 JMP @UNKNOWN31
    case 0xC1E139: cpu.execute_instruction<0x4C>(0x00E241, 3); return true;
    // src/battle/enemy_select_mode.asm:212 LDA PAD_PRESS
    case 0xC1E13C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E13F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E13F.
    case 0xC1E141: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E142: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E141.
    case 0xC1E143: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E144: cpu.execute_instruction<0x4C>(0x00E024, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E143.
    case 0xC1E145: cpu.execute_instruction<0x24>(0x0000E0, 2); return true;
    // src/battle/enemy_select_mode.asm:215 LDX @LOCAL09
    case 0xC1E147: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:216 STX @LOCAL03
    case 0xC1E149: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:217 JMP @UNKNOWN31
    case 0xC1E14B: cpu.execute_instruction<0x4C>(0x00E241, 3); return true;
    // src/battle/enemy_select_mode.asm:219 LDA @VIRTUAL04
    case 0xC1E14E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E150: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E152: cpu.execute_instruction<0x4C>(0x00DFA4, 3); return true;
    // src/battle/enemy_select_mode.asm:221 LDA @VIRTUAL04
    case 0xC1E155: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E157: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E2, 2); else cpu.execute_instruction<0xC9>(0x0001E2, 3); return true;
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E157.
    case 0xC1E159: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E15A: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E159.
    case 0xC1E15B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000F0, 2); else cpu.execute_instruction<0x09>(0x0007F0, 3); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E15C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E15B.
    case 0xC1E15D: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E15E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x0001E2, 3); return true;
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E15D.
    case 0xC1E15F: cpu.execute_instruction<0xE2>(0x000001, 2); return true;
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E15E.
    case 0xC1E160: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    case 0xC1E161: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E160.
    case 0xC1E162: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    case 0xC1E163: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1E162.
    case 0xC1E164: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    case 0xC1E165: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E164.
    case 0xC1E166: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    case 0xC1E167: cpu.execute_instruction<0x8D>(0x004E12, 3); return true;
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC1E166.
    case 0xC1E168: cpu.execute_instruction<0x12>(0x00004E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E16A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E16A.
    case 0xC1E16C: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E16D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E16C.
    case 0xC1E16E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E16F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E16F.
    case 0xC1E171: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E172: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:231 LDA @VIRTUAL04
    case 0xC1E174: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E176: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E177: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E178: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:233 CLC
    case 0xC1E179: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:234 ADC @VIRTUAL0A
    case 0xC1E17A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:235 STA @VIRTUAL0A
    case 0xC1E17C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    case 0xC1E17E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    // Overlapping static entry reached from 0xC1E17E.
    case 0xC1E180: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/enemy_select_mode.asm:237 LDA [@VIRTUAL0A],Y
    case 0xC1E181: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:238 TAY
    case 0xC1E183: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:239 LDA [@VIRTUAL0A]
    case 0xC1E184: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:240 STA @VIRTUAL06
    case 0xC1E186: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:241 STY @VIRTUAL06+2
    case 0xC1E188: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:242 STZ ENEMIES_IN_BATTLE
    case 0xC1E18A: cpu.execute_instruction<0x9C>(0x00A18C, 3); return true;
    // src/battle/enemy_select_mode.asm:243 BRA @UNKNOWN26
    case 0xC1E18D: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/battle/enemy_select_mode.asm:245 LDA ENEMIES_IN_BATTLE
    case 0xC1E18F: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/battle/enemy_select_mode.asm:246 ASL
    case 0xC1E192: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:247 TAX
    case 0xC1E193: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    case 0xC1E194: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC1E194.
    case 0xC1E196: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/enemy_select_mode.asm:249 LDA [@VIRTUAL06],Y
    case 0xC1E197: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:250 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E199: cpu.execute_instruction<0x9D>(0x00A18E, 3); return true;
    // src/battle/enemy_select_mode.asm:251 INC ENEMIES_IN_BATTLE
    case 0xC1E19C: cpu.execute_instruction<0xEE>(0x00A18C, 3); return true;
    // src/battle/enemy_select_mode.asm:253 LDX @LOCAL02
    case 0xC1E19F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:254 TXY
    case 0xC1E1A1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:255 DEX
    case 0xC1E1A2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:256 STX @LOCAL02
    case 0xC1E1A3: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:257 CPY #0
    case 0xC1E1A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:257 CPY #0
    // Overlapping static entry reached from 0xC1E1A5.
    case 0xC1E1A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/enemy_select_mode.asm:258 BNE @UNKNOWN24
    case 0xC1E1A8: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    case 0xC1E1AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    // Overlapping static entry reached from 0xC1E1AA.
    case 0xC1E1AC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:260 CLC
    case 0xC1E1AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:261 ADC @VIRTUAL06
    case 0xC1E1AE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:262 STA @VIRTUAL06
    case 0xC1E1B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E1B8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:265 LDA [@VIRTUAL0A]
    case 0xC1E1BA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    case 0xC1E1BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    // Overlapping static entry reached from 0xC1E1BC.
    case 0xC1E1BE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/enemy_select_mode.asm:267 TAX
    case 0xC1E1BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:268 STX @LOCAL02
    case 0xC1E1C0: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    case 0xC1E1C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    // Overlapping static entry reached from 0xC1E1C2.
    case 0xC1E1C4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/enemy_select_mode.asm:270 BNE @UNKNOWN25
    case 0xC1E1C5: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // src/battle/enemy_select_mode.asm:271 JSL UNKNOWN_C08726
    case 0xC1E1C7: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/battle/enemy_select_mode.asm:272 JSL UNKNOWN_C2EEE7
    case 0xC1E1CB: cpu.execute_instruction<0x22>(0xC2EE00, 4); return true;
    // src/battle/enemy_select_mode.asm:273 LDY #8
    case 0xC1E1CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/enemy_select_mode.asm:273 LDY #8
    // Overlapping static entry reached from 0xC1E1CF.
    case 0xC1E1D1: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/enemy_select_mode.asm:274 STY @LOCAL03
    case 0xC1E1D2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:275 BRA @UNKNOWN28
    case 0xC1E1D4: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/battle/enemy_select_mode.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E1D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    case 0xC1E1D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    case 0xC1E1DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1E1D8.
    case 0xC1E1DB: cpu.execute_instruction<0x0E>(0x004EA2, 3); return true;
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    case 0xC1E1DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E1DC.
    case 0xC1E1DE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/enemy_select_mode.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC1E1DF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:281 TYA
    case 0xC1E1E1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:282 TXY
    case 0xC1E1E2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:283 JSL MULT168
    case 0xC1E1E3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_select_mode.asm:284 CLC
    case 0xC1E1E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC1E1E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1E1E8.
    case 0xC1E1EA: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    case 0xC1E1EB: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    // Overlapping static entry reached from 0xC1E1EA.
    case 0xC1E1EC: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/battle/enemy_select_mode.asm:287 LDY @LOCAL03
    case 0xC1E1EF: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:288 INY
    case 0xC1E1F1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:289 STY @LOCAL03
    case 0xC1E1F2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    case 0xC1E1F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC1E1F4.
    case 0xC1E1F6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/enemy_select_mode.asm:292 BCC @UNKNOWN27
    case 0xC1E1F7: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/battle/enemy_select_mode.asm:293 LDY #0
    case 0xC1E1F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:293 LDY #0
    // Overlapping static entry reached from 0xC1E1F9.
    case 0xC1E1FB: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/enemy_select_mode.asm:294 STY @LOCAL04
    case 0xC1E1FC: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:295 BRA @UNKNOWN30
    case 0xC1E1FE: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:297 TYA
    case 0xC1E200: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    case 0xC1E201: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E201.
    case 0xC1E203: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:299 JSL MULT168
    case 0xC1E204: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/enemy_select_mode.asm:300 CLC
    case 0xC1E208: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC1E209: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00A41E, 3); return true;
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC1E209.
    case 0xC1E20B: cpu.execute_instruction<0xA4>(0x0000AA, 2); return true;
    // src/battle/enemy_select_mode.asm:302 TAX
    case 0xC1E20C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:303 STX @LOCAL01
    case 0xC1E20D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/enemy_select_mode.asm:304 LDY @LOCAL04
    case 0xC1E20F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:305 TYA
    case 0xC1E211: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:306 ASL
    case 0xC1E212: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:307 TAX
    case 0xC1E213: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:308 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E214: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/enemy_select_mode.asm:309 LDX @LOCAL01
    case 0xC1E217: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/enemy_select_mode.asm:310 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC1E219: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/enemy_select_mode.asm:311 LDY @LOCAL04
    case 0xC1E21D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:312 INY
    case 0xC1E21F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:313 STY @LOCAL04
    case 0xC1E220: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:315 CPY ENEMIES_IN_BATTLE
    case 0xC1E222: cpu.execute_instruction<0xCC>(0x00A18C, 3); return true;
    // src/battle/enemy_select_mode.asm:316 BCC @UNKNOWN29
    case 0xC1E225: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/enemy_select_mode.asm:317 JSL UNKNOWN_C2F121
    case 0xC1E227: cpu.execute_instruction<0x22>(0xC2F03E, 4); return true;
    // src/battle/enemy_select_mode.asm:318 LDA #24
    case 0xC1E22B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/battle/enemy_select_mode.asm:318 LDA #24
    // Overlapping static entry reached from 0xC1E22B.
    case 0xC1E22D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:319 JSL UNKNOWN_C0856B
    case 0xC1E22E: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/battle/enemy_select_mode.asm:320 JSL UNKNOWN_C08744
    case 0xC1E232: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/battle/enemy_select_mode.asm:321 LDX #1
    case 0xC1E236: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:321 LDX #1
    // Overlapping static entry reached from 0xC1E236.
    case 0xC1E238: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/enemy_select_mode.asm:322 TXA
    case 0xC1E239: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:323 JSL FADE_IN
    case 0xC1E23A: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/battle/enemy_select_mode.asm:324 JMP @UNKNOWN0
    case 0xC1E23E: cpu.execute_instruction<0x4C>(0x00DFA4, 3); return true;
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    case 0xC1E241: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E241.
    case 0xC1E243: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:327 JSR SET_WINDOW_FOCUS
    case 0xC1E244: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/battle/enemy_select_mode.asm:328 JSR CLOSE_FOCUS_WINDOW
    case 0xC1E247: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/battle/enemy_select_mode.asm:329 LDX @LOCAL03
    case 0xC1E24A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:330 TXA
    case 0xC1E24C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E24D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E24E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/fail_attack_on_npcs.asm (source_named).
bool execute_battle_fail_attack_on_npcs_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/fail_attack_on_npcs.asm:3 BEGIN_C_FUNCTION
    case 0xC27C94: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27C96: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27C97: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27C98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC27C98.
    case 0xC27C9A: cpu.execute_instruction<0xFF>(0x74AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27C9B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/fail_attack_on_npcs.asm:8 LDX CURRENT_TARGET
    case 0xC27C9C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:8 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC27C9A.
    case 0xC27C9E: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    case 0xC27C9F: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:10 AND #$00FF
    case 0xC27CA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC27CA2.
    case 0xC27CA4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:11 BEQ @UNKNOWN0
    case 0xC27CA5: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27CA7.
    case 0xC27CA9: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27CAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27CAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27CAC.
    case 0xC27CAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27CAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27CB1: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/fail_attack_on_npcs.asm:13 LDA #1
    case 0xC27CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:13 LDA #1
    // Overlapping static entry reached from 0xC27CB5.
    case 0xC27CB7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:14 BRA @UNKNOWN1
    case 0xC27CB8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:16 LDA #0
    case 0xC27CBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:16 LDA #0
    // Overlapping static entry reached from 0xC27CBA.
    case 0xC27CBC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:18 END_C_FUNCTION
    case 0xC27CBD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/fail_attack_on_npcs.asm:18 END_C_FUNCTION
    case 0xC27CBE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/feeling_strange_retargetting.asm (source_named).
bool execute_battle_feeling_strange_retargetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/feeling_strange_retargetting.asm:3 BEGIN_C_FUNCTION
    case 0xC23EBD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EBF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EC0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC23EC1.
    case 0xC23EC3: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC23EC4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23EC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC23EC5.
    case 0xC23EC7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23EC8: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23ECB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC23ECB.
    case 0xC23ECD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC23ECE: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:8 LDX CURRENT_ATTACKER
    case 0xC23ED1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:9 LDA a:battler::action_targetting,X
    case 0xC23ED4: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    case 0xC23ED7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC23ED7.
    case 0xC23ED9: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    case 0xC23EDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    // Overlapping static entry reached from 0xC23EDA.
    case 0xC23EDC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    case 0xC23EDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC23EDD.
    case 0xC23EDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:13 BEQ @UNKNOWN0
    case 0xC23EE0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    case 0xC23EE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC23EE2.
    case 0xC23EE4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:15 BEQ @UNKNOWN1
    case 0xC23EE5: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    case 0xC23EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC23EE7.
    case 0xC23EE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:17 BEQ @UNKNOWN2
    case 0xC23EEA: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:18 BRA @UNKNOWN5
    case 0xC23EEC: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:20 JSL TARGET_ALL
    case 0xC23EEE: cpu.execute_instruction<0x22>(0xC26D3F, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EF2: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EF7: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC23EFA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23EFC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23EFE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23F00: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23F02: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:23 JSL RANDOM_TARGETTING
    case 0xC23F04: cpu.execute_instruction<0x22>(0xC26E37, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F08: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F0A: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F0D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC23F0F: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:25 BRA @UNKNOWN5
    case 0xC23F12: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:27 JSL RAND
    case 0xC23F14: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    case 0xC23F18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    // Overlapping static entry reached from 0xC23F18.
    case 0xC23F1A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:29 JSL MODULUS16
    case 0xC23F1B: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:30 JSL TARGET_ROW
    case 0xC23F1F: cpu.execute_instruction<0x22>(0xC26C43, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:31 BRA @UNKNOWN5
    case 0xC23F23: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:33 JSL RAND
    case 0xC23F25: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    case 0xC23F29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    // Overlapping static entry reached from 0xC23F29.
    case 0xC23F2B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:35 BEQ @UNKNOWN3
    case 0xC23F2C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:36 JSL TARGET_ALLIES
    case 0xC23F2E: cpu.execute_instruction<0x22>(0xC26B3A, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:37 BRA @UNKNOWN4
    case 0xC23F32: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:39 JSL TARGET_ALL_ENEMIES
    case 0xC23F34: cpu.execute_instruction<0x22>(0xC26BC1, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:41 LDX CURRENT_ATTACKER
    case 0xC23F38: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:42 LDA a:battler::current_action,X
    case 0xC23F3B: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:43 JSL GET_SHIELD_TARGETTING
    case 0xC23F3E: cpu.execute_instruction<0x22>(0xC23E9E, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    case 0xC23F42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    // Overlapping static entry reached from 0xC23F42.
    case 0xC23F44: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:45 BNE @UNKNOWN5
    case 0xC23F45: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:46 LDX CURRENT_ATTACKER
    case 0xC23F47: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:47 LDA a:battler::ally_or_enemy,X
    case 0xC23F4A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    case 0xC23F4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC23F4D.
    case 0xC23F4F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:49 BNE @UNKNOWN5
    case 0xC23F50: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:50 JSL REMOVE_NPC_TARGETTING
    case 0xC23F52: cpu.execute_instruction<0x22>(0xC26DB6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC23F56: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC23F57: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/find_stealable_items.asm (source_named).
bool execute_battle_find_stealable_items_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_stealable_items.asm:3 BEGIN_C_FUNCTION
    case 0xC24090: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24092: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24093: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24094: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC24094.
    case 0xC24096: cpu.execute_instruction<0xFF>(0x1A645B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24097: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:16 STZ @LOCAL05
    case 0xC24098: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/battle/find_stealable_items.asm:17 STZ @LOCAL04
    case 0xC2409A: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:18 JMP @UNKNOWN12
    case 0xC2409C: cpu.execute_instruction<0x4C>(0x0041C3, 3); return true;
    // src/battle/find_stealable_items.asm:21 LDA @LOCAL04
    case 0xC2409F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:22 CLC
    case 0xC240A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC240A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/find_stealable_items.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC240A2.
    case 0xC240A4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:24 TAX
    case 0xC240A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:25 LDA a:game_state::party_members,X
    case 0xC240A6: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    case 0xC240A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC240A9.
    case 0xC240AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:31 STA @LOCAL03
    case 0xC240AC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    case 0xC240AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    // Overlapping static entry reached from 0xC240AE.
    case 0xC240B0: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC240B1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC240B3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC240B5: cpu.execute_instruction<0x4C>(0x0041C1, 3); return true;
    // src/battle/find_stealable_items.asm:34 LDA @LOCAL03
    case 0xC240B8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    case 0xC240BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    // Overlapping static entry reached from 0xC240BA.
    case 0xC240BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC240BD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC240BF: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC240C1: cpu.execute_instruction<0x4C>(0x0041C1, 3); return true;
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    case 0xC240C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    // Overlapping static entry reached from 0xC240C4.
    case 0xC240C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:38 STA @LOCAL02
    case 0xC240C7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:39 BRA @UNKNOWN5
    case 0xC240C9: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    case 0xC240CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC240CB.
    case 0xC240CD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_stealable_items.asm:42 JSL MULT168
    case 0xC240CE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/find_stealable_items.asm:43 TAX
    case 0xC240D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:44 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC240D3: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    case 0xC240D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC240D6.
    case 0xC240D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/find_stealable_items.asm:46 BEQ @UNKNOWN4
    case 0xC240D9: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/find_stealable_items.asm:47 LDA BATTLERS_TABLE,X
    case 0xC240DB: cpu.execute_instruction<0xBD>(0x00A1AE, 3); return true;
    // src/battle/find_stealable_items.asm:48 CMP @LOCAL03
    case 0xC240DE: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:49 BNE @UNKNOWN4
    case 0xC240E0: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:50 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC240E2: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    case 0xC240E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC240E5.
    case 0xC240E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/find_stealable_items.asm:52 BNE @UNKNOWN4
    case 0xC240E8: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/find_stealable_items.asm:53 LDA BATTLERS_TABLE+battler::action_item_slot,X
    case 0xC240EA: cpu.execute_instruction<0xBD>(0x00A1B5, 3); return true;
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    case 0xC240ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC240ED.
    case 0xC240EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:55 STA @LOCAL01
    case 0xC240F0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/find_stealable_items.asm:57 LDA @LOCAL02
    case 0xC240F2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:58 INC
    case 0xC240F4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:59 STA @LOCAL02
    case 0xC240F5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    case 0xC240F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC240F7.
    case 0xC240F9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_stealable_items.asm:62 BCC @UNKNOWN3
    case 0xC240FA: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/battle/find_stealable_items.asm:63 STZ @LOCAL00
    case 0xC240FC: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:64 JMP @UNKNOWN10
    case 0xC240FE: cpu.execute_instruction<0x4C>(0x0041B5, 3); return true;
    // src/battle/find_stealable_items.asm:66 LDA @LOCAL00
    case 0xC24101: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:67 STA @VIRTUAL02
    case 0xC24103: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:68 INC @VIRTUAL02
    case 0xC24105: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:69 LDA @VIRTUAL02
    case 0xC24107: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:70 CMP @LOCAL01
    case 0xC24109: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC2410B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC2410D: cpu.execute_instruction<0x4C>(0x0041B3, 3); return true;
    // src/battle/find_stealable_items.asm:72 LDA @LOCAL03
    case 0xC24110: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:73 DEC
    case 0xC24112: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    case 0xC24113: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24113.
    case 0xC24115: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_stealable_items.asm:75 JSL MULT168
    case 0xC24116: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/find_stealable_items.asm:76 TAY
    case 0xC2411A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:78 CLC
    case 0xC2411B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:79 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC2411C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/find_stealable_items.asm:79 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC2411C.
    case 0xC2411E: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/find_stealable_items.asm:80 CLC
    case 0xC2411F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:81 ADC @LOCAL00
    case 0xC24120: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:81 ADC @LOCAL00
    // Overlapping static entry reached from 0xC2411E.
    case 0xC24121: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/battle/find_stealable_items.asm:82 TAX
    case 0xC24122: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:83 LDA __BSS_START__,X
    case 0xC24123: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/find_stealable_items.asm:84 AND #$00FF
    case 0xC24126: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC24126.
    case 0xC24128: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:85 STA @VIRTUAL04
    case 0xC24129: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/find_stealable_items.asm:86 STA @LOCALM2
    case 0xC2412B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:87 LDA @VIRTUAL04
    case 0xC2412D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC2412F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC24131: cpu.execute_instruction<0x4C>(0x0041B3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24134: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24134.
    case 0xC24136: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24137: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24136.
    case 0xC24138: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24139: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24138.
    case 0xC2413A: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24139.
    case 0xC2413B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2413C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/find_stealable_items.asm:102 LDA @VIRTUAL04
    case 0xC2413E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24140: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24142: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24143: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24145: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24146: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24147: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:105 TAX
    case 0xC24148: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:106 CLC
    case 0xC24149: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:107 ADC #item::cost
    case 0xC2414A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/battle/find_stealable_items.asm:107 ADC #item::cost
    // Overlapping static entry reached from 0xC2414A.
    case 0xC2414C: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/find_stealable_items.asm:108 PHA
    case 0xC2414D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2414E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC24150: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC24152: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC24154: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/find_stealable_items.asm:110 PLA
    case 0xC24156: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:119 CLC
    case 0xC24157: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:120 ADC @VIRTUAL0A
    case 0xC24158: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/find_stealable_items.asm:121 STA @VIRTUAL0A
    case 0xC2415A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/find_stealable_items.asm:122 LDA [@VIRTUAL0A]
    case 0xC2415C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/find_stealable_items.asm:123 BEQ @UNKNOWN9
    case 0xC2415E: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/battle/find_stealable_items.asm:124 CMP #290
    case 0xC24160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000122, 3); return true;
    // src/battle/find_stealable_items.asm:124 CMP #290
    // Overlapping static entry reached from 0xC24160.
    case 0xC24162: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    case 0xC24163: cpu.execute_instruction<0xB0>(0x00004E, 2); return true;
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC24162.
    case 0xC24164: cpu.execute_instruction<0x4E>(0x00188A, 3); return true;
    // src/battle/find_stealable_items.asm:126 TXA
    case 0xC24165: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:127 CLC
    case 0xC24166: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    case 0xC24167: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    // Overlapping static entry reached from 0xC24167.
    case 0xC24169: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:129 CLC
    case 0xC2416A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:130 ADC @VIRTUAL06
    case 0xC2416B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/find_stealable_items.asm:131 STA @VIRTUAL06
    case 0xC2416D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/find_stealable_items.asm:132 LDA [@VIRTUAL06]
    case 0xC2416F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    case 0xC24171: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC24171.
    case 0xC24173: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/find_stealable_items.asm:134 AND #$0030
    case 0xC24174: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/battle/find_stealable_items.asm:134 AND #$0030
    // Overlapping static entry reached from 0xC24174.
    case 0xC24176: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    case 0xC24177: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    // Overlapping static entry reached from 0xC24177.
    case 0xC24179: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/find_stealable_items.asm:136 BNE @UNKNOWN9
    case 0xC2417A: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/find_stealable_items.asm:140 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,Y
    case 0xC2417C: cpu.execute_instruction<0xB9>(0x009CAF, 3); return true;
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    case 0xC2417F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC2417F.
    case 0xC24181: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:142 CMP @VIRTUAL02
    case 0xC24182: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:143 BEQ @UNKNOWN9
    case 0xC24184: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/find_stealable_items.asm:144 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,Y
    case 0xC24186: cpu.execute_instruction<0xB9>(0x009CB0, 3); return true;
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    case 0xC24189: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC24189.
    case 0xC2418B: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:146 CMP @VIRTUAL02
    case 0xC2418C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:147 BEQ @UNKNOWN9
    case 0xC2418E: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/find_stealable_items.asm:148 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,Y
    case 0xC24190: cpu.execute_instruction<0xB9>(0x009CB1, 3); return true;
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    case 0xC24193: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC24193.
    case 0xC24195: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:150 CMP @VIRTUAL02
    case 0xC24196: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:151 BEQ @UNKNOWN9
    case 0xC24198: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/find_stealable_items.asm:152 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,Y
    case 0xC2419A: cpu.execute_instruction<0xB9>(0x009CB2, 3); return true;
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    case 0xC2419D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC2419D.
    case 0xC2419F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:154 CMP @VIRTUAL02
    case 0xC241A0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:155 BEQ @UNKNOWN9
    case 0xC241A2: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/find_stealable_items.asm:157 LDA @LOCALM2
    case 0xC241A4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:158 STA @VIRTUAL04
    case 0xC241A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/find_stealable_items.asm:162 SEP #PROC_FLAGS::ACCUM8
    case 0xC241A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    case 0xC241AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A9, 2); else cpu.execute_instruction<0xA0>(0x00ABA9, 3); return true;
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    // Overlapping static entry reached from 0xC241AA.
    case 0xC241AC: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:164 STA (@LOCAL05),Y
    case 0xC241AD: cpu.execute_instruction<0x91>(0x00001A, 2); return true;
    // src/battle/find_stealable_items.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC241AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/find_stealable_items.asm:166 INC @LOCAL05
    case 0xC241B1: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/battle/find_stealable_items.asm:168 INC @LOCAL00
    case 0xC241B3: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:170 LDA @LOCAL00
    case 0xC241B5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    case 0xC241B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC241B7.
    case 0xC241B9: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC241BA: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC241BC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC241BE: cpu.execute_instruction<0x4C>(0x004101, 3); return true;
    // src/battle/find_stealable_items.asm:174 INC @LOCAL04
    case 0xC241C1: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:176 LDA @LOCAL04
    case 0xC241C3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    case 0xC241C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC241C5.
    case 0xC241C7: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC241C8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC241CA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC241CC: cpu.execute_instruction<0x4C>(0x00409F, 3); return true;
    // src/battle/find_stealable_items.asm:179 LDA @LOCAL05
    case 0xC241CF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC241D1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC241D2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/find_targettable_npc.asm (source_named).
bool execute_battle_find_targettable_npc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_targettable_npc.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23E1C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E1E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC23E20.
    case 0xC23E22: cpu.execute_instruction<0xFF>(0x8B225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23E23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:9 JSL RAND
    case 0xC23E24: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/find_targettable_npc.asm:9 JSL RAND
    // Overlapping static entry reached from 0xC23E22.
    case 0xC23E26: cpu.execute_instruction<0x8E>(0x0029C0, 3); return true;
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    case 0xC23E28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    // Overlapping static entry reached from 0xC23E26.
    case 0xC23E29: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    // Overlapping static entry reached from 0xC23E28.
    case 0xC23E2A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/find_targettable_npc.asm:11 BNE @UNKNOWN0
    case 0xC23E2B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/find_targettable_npc.asm:12 LDA #$0000
    case 0xC23E2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC23E2D.
    case 0xC23E2F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/find_targettable_npc.asm:13 BRA @UNKNOWN7
    case 0xC23E30: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/battle/find_targettable_npc.asm:15 LDA #$0000
    case 0xC23E32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:15 LDA #$0000
    // Overlapping static entry reached from 0xC23E32.
    case 0xC23E34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_targettable_npc.asm:16 STA @LOCAL01
    case 0xC23E35: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:17 BRA @UNKNOWN6
    case 0xC23E37: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // include/macros.asm:1290 CLC
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1291 ADC #.LOWORD(struct)
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // include/macros.asm:1291 ADC #.LOWORD(struct)
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    // Overlapping static entry reached from 0xC23E3A.
    case 0xC23E3C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:1292 TAX
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E3D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1293 LDA a:field,X
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23E3E: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/find_targettable_npc.asm:20 AND #$00FF
    case 0xC23E41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC23E41.
    case 0xC23E43: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/find_targettable_npc.asm:21 TAY
    case 0xC23E44: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:22 STY @LOCAL00
    case 0xC23E45: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/find_targettable_npc.asm:23 CPY #PARTY_MEMBER::POKEY
    case 0xC23E47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/battle/find_targettable_npc.asm:23 CPY #PARTY_MEMBER::POKEY
    // Overlapping static entry reached from 0xC23E47.
    case 0xC23E49: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_targettable_npc.asm:24 BCC @INVALID_PARTY_TARGET
    case 0xC23E4A: cpu.execute_instruction<0x90>(0x000043, 2); return true;
    // src/battle/find_targettable_npc.asm:25 TYA
    case 0xC23E4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:26 ASL
    case 0xC23E4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:27 TAX
    case 0xC23E4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:28 LDA f:NPC_AI_TABLE,X
    case 0xC23E4F: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/battle/find_targettable_npc.asm:29 AND #$00FF
    case 0xC23E53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23E53.
    case 0xC23E55: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/find_targettable_npc.asm:30 AND #NPC_FLAGS::UNTARGETTABLE
    case 0xC23E56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/find_targettable_npc.asm:30 AND #NPC_FLAGS::UNTARGETTABLE
    // Overlapping static entry reached from 0xC23E56.
    case 0xC23E58: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/find_targettable_npc.asm:31 BEQ @INVALID_PARTY_TARGET
    case 0xC23E59: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/battle/find_targettable_npc.asm:32 LDA #$0000
    case 0xC23E5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:32 LDA #$0000
    // Overlapping static entry reached from 0xC23E5B.
    case 0xC23E5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_targettable_npc.asm:33 STA @LOCAL01
    case 0xC23E5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:34 BRA @UNKNOWN4
    case 0xC23E60: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/find_targettable_npc.asm:36 LDY #.SIZEOF(battler)
    case 0xC23E62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/find_targettable_npc.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23E62.
    case 0xC23E64: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_targettable_npc.asm:37 JSL MULT168
    case 0xC23E65: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/find_targettable_npc.asm:38 TAX
    case 0xC23E69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:39 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC23E6A: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/find_targettable_npc.asm:40 AND #$00FF
    case 0xC23E6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC23E6D.
    case 0xC23E6F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/find_targettable_npc.asm:41 BEQ @UNKNOWN3
    case 0xC23E70: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/find_targettable_npc.asm:42 LDY @LOCAL00
    case 0xC23E72: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/find_targettable_npc.asm:43 STY $02
    case 0xC23E74: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/find_targettable_npc.asm:44 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC23E76: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/find_targettable_npc.asm:45 AND #$00FF
    case 0xC23E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC23E79.
    case 0xC23E7B: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_targettable_npc.asm:46 CMP $02
    case 0xC23E7C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_targettable_npc.asm:47 BNE @UNKNOWN3
    case 0xC23E7E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/find_targettable_npc.asm:48 LDA @LOCAL01
    case 0xC23E80: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:49 INC
    case 0xC23E82: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:50 BRA @UNKNOWN7
    case 0xC23E83: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/find_targettable_npc.asm:52 LDA @LOCAL01
    case 0xC23E85: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:53 INC
    case 0xC23E87: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:54 STA @LOCAL01
    case 0xC23E88: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:56 CMP #.SIZEOF(game_state::party_members)
    case 0xC23E8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_targettable_npc.asm:56 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC23E8A.
    case 0xC23E8C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_targettable_npc.asm:57 BCC @UNKNOWN2
    case 0xC23E8D: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/battle/find_targettable_npc.asm:59 LDA @LOCAL01
    case 0xC23E8F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:60 INC
    case 0xC23E91: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:61 STA @LOCAL01
    case 0xC23E92: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:63 CMP #.SIZEOF(game_state::party_members)
    case 0xC23E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_targettable_npc.asm:63 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC23E94.
    case 0xC23E96: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_targettable_npc.asm:64 BCC @UNKNOWN1
    case 0xC23E97: cpu.execute_instruction<0x90>(0x0000A0, 2); return true;
    // src/battle/find_targettable_npc.asm:65 LDA #$0000
    case 0xC23E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:65 LDA #$0000
    // Overlapping static entry reached from 0xC23E99.
    case 0xC23E9B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_targettable_npc.asm:67 END_C_FUNCTION
    case 0xC23E9C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/find_targettable_npc.asm:67 END_C_FUNCTION
    case 0xC23E9D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/generate_psi_list.asm (source_named).
bool execute_battle_generate_psi_list_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/generate_psi_list.asm:3 BEGIN_C_FUNCTION
    case 0xC1C2B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C2BD.
    case 0xC1C2BF: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:18 TAX
    case 0xC1C2C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C2C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:20 LDA @PARAM02
    case 0xC1C2C5: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/generate_psi_list.asm:21 STA @LOCAL08
    case 0xC1C2C7: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:22 LDA @PARAM01
    case 0xC1C2C9: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/battle/generate_psi_list.asm:23 STA @VIRTUAL01
    case 0xC1C2CB: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C2CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:25 TXA
    case 0xC1C2CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:26 DEC
    case 0xC1C2D0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:27 STA @VIRTUAL04
    case 0xC1C2D1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:28 STA @LOCAL07
    case 0xC1C2D3: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/generate_psi_list.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1C2D5: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/battle/generate_psi_list.asm:30 JSR UNKNOWN_C11383
    case 0xC1C2D8: cpu.execute_instruction<0x20>(0x0019AB, 3); return true;
    // src/battle/generate_psi_list.asm:31 STZ @LOCAL06
    case 0xC1C2DB: cpu.execute_instruction<0x64>(0x00001F, 2); return true;
    // src/battle/generate_psi_list.asm:32 LDA @VIRTUAL04
    case 0xC1C2DD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C2DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C2DF.
    case 0xC1C2E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C2E2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C2E4: cpu.execute_instruction<0x4C>(0x00C407, 3); return true;
    // src/battle/generate_psi_list.asm:35 LDA @VIRTUAL01
    case 0xC1C2E7: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    case 0xC1C2E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1C2E9.
    case 0xC1C2EB: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    case 0xC1C2EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    // Overlapping static entry reached from 0xC1C2EC.
    case 0xC1C2EE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C2EF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C2F1: cpu.execute_instruction<0x4C>(0x00C407, 3); return true;
    // src/battle/generate_psi_list.asm:39 LDA @LOCAL08
    case 0xC1C2F4: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    case 0xC1C2F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1C2F6.
    case 0xC1C2F8: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    case 0xC1C2F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    // Overlapping static entry reached from 0xC1C2F9.
    case 0xC1C2FB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C2FC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C2FE: cpu.execute_instruction<0x4C>(0x00C407, 3); return true;
    // src/battle/generate_psi_list.asm:43 LDA GAME_STATE+game_state::party_psi
    case 0xC1C301: cpu.execute_instruction<0xAD>(0x009AEA, 3); return true;
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    case 0xC1C304: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1C304.
    case 0xC1C306: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    case 0xC1C307: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C307.
    case 0xC1C309: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C30A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C30C: cpu.execute_instruction<0x4C>(0x00C3A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x009B41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C30F.
    case 0xC1C311: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C312: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C314: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C314.
    case 0xC1C316: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C317: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C319: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C31B: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C31D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C31F: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    case 0xC1C321: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C321.
    case 0xC1C323: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C324: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C326: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C328: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C32A: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:51 CLC
    case 0xC1C32C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:52 ADC @VIRTUAL0A
    case 0xC1C32D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:53 STA @VIRTUAL0A
    case 0xC1C32F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:54 LDA [@VIRTUAL0A]
    case 0xC1C331: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    case 0xC1C333: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1C333.
    case 0xC1C335: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:56 TAX
    case 0xC1C336: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:57 LDA #0
    case 0xC1C337: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/generate_psi_list.asm:57 LDA #0
    // Overlapping static entry reached from 0xC1C337.
    case 0xC1C339: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:58 JSR UNKNOWN_C438A5
    case 0xC1C33A: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/battle/generate_psi_list.asm:59 LDA [@VIRTUAL06]
    case 0xC1C33D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    case 0xC1C33F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1C33F.
    case 0xC1C341: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:61 JSR GET_PSI_NAME
    case 0xC1C342: cpu.execute_instruction<0x20>(0x00C26D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C345: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C347: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C349: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C34B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C34D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    case 0xC1C34F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C34F.
    case 0xC1C351: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:65 LDA [@VIRTUAL06],Y
    case 0xC1C352: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC1C354: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    case 0xC1C356: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1C356.
    case 0xC1C358: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:68 DEC
    case 0xC1C359: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:69 ASL
    case 0xC1C35A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:70 PHA
    case 0xC1C35B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C35C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00EC91, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C35C.
    case 0xC1C35E: cpu.execute_instruction<0xEC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C35F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C361: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C361.
    case 0xC1C363: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C364: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:72 PLA
    case 0xC1C366: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:73 CLC
    case 0xC1C367: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:74 ADC @VIRTUAL06
    case 0xC1C368: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:75 STA @VIRTUAL06
    case 0xC1C36A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:76 STA @LOCAL00
    case 0xC1C36C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:77 LDA @VIRTUAL06+2
    case 0xC1C36E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:78 STA @LOCAL00+2
    case 0xC1C370: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C372: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C372.
    case 0xC1C374: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C375: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C377.
    case 0xC1C379: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C37A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:80 LDA [@VIRTUAL0A]
    case 0xC1C37C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    case 0xC1C37E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1C37E.
    case 0xC1C380: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:82 TAY
    case 0xC1C381: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:83 STY @LOCAL04
    case 0xC1C382: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C384: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C386: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C388: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C38A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C38C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    case 0xC1C38E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C38E.
    case 0xC1C390: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:87 LDA [@VIRTUAL06],Y
    case 0xC1C391: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC1C393: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    case 0xC1C395: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC1C395.
    case 0xC1C397: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:90 TAX
    case 0xC1C398: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    case 0xC1C399: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C399.
    case 0xC1C39B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:92 LDY @LOCAL04
    case 0xC1C39C: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:93 JSR UNKNOWN_C1153B
    case 0xC1C39E: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/battle/generate_psi_list.asm:95 LDA GAME_STATE+game_state::party_psi
    case 0xC1C3A1: cpu.execute_instruction<0xAD>(0x009AEA, 3); return true;
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    case 0xC1C3A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1C3A4.
    case 0xC1C3A6: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    case 0xC1C3A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C3A7.
    case 0xC1C3A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:98 BEQ @UNKNOWN5
    case 0xC1C3AA: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x009B50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C3AC.
    case 0xC1C3AE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C3B1.
    case 0xC1C3B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00EC91, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C3B6.
    case 0xC1C3B8: cpu.execute_instruction<0xEC>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3B9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C3BB.
    case 0xC1C3BD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3BE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C3C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    case 0xC1C3C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C3C2.
    case 0xC1C3C4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:107 LDA [@VIRTUAL06],Y
    case 0xC1C3C5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1C3C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    case 0xC1C3C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC1C3C9.
    case 0xC1C3CB: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:110 DEC
    case 0xC1C3CC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:111 ASL
    case 0xC1C3CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:113 CLC
    case 0xC1C3CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:114 ADC @VIRTUAL0A
    case 0xC1C3CF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:115 STA @VIRTUAL0A
    case 0xC1C3D1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:116 STA @LOCAL00
    case 0xC1C3D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:117 LDA @VIRTUAL0A+2
    case 0xC1C3D5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:118 STA @LOCAL00+2
    case 0xC1C3D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C3D9.
    case 0xC1C3DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3DC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C3DE.
    case 0xC1C3E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3E1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:133 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C3E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    case 0xC1C3E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C3E5.
    case 0xC1C3E7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:135 LDA [@VIRTUAL06],Y
    case 0xC1C3E8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC1C3EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    case 0xC1C3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    // Overlapping static entry reached from 0xC1C3EC.
    case 0xC1C3EE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:138 TAY
    case 0xC1C3EF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:139 STY @LOCAL04
    case 0xC1C3F0: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C3F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    case 0xC1C3F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C3F4.
    case 0xC1C3F6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:142 LDA [@VIRTUAL06],Y
    case 0xC1C3F7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC1C3F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    case 0xC1C3FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC1C3FB.
    case 0xC1C3FD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:145 TAX
    case 0xC1C3FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    case 0xC1C3FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C3FF.
    case 0xC1C401: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:147 LDY @LOCAL04
    case 0xC1C402: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:148 JSR UNKNOWN_C1153B
    case 0xC1C404: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/battle/generate_psi_list.asm:150 LDA #1
    case 0xC1C407: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:150 LDA #1
    // Overlapping static entry reached from 0xC1C407.
    case 0xC1C409: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/generate_psi_list.asm:151 STA @VIRTUAL02
    case 0xC1C40A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/generate_psi_list.asm:152 JMP @UNKNOWN17
    case 0xC1C40C: cpu.execute_instruction<0x4C>(0x00C523, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C40F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C411: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C413: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C415: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:158 LDA @LOCAL07
    case 0xC1C417: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/generate_psi_list.asm:159 STA @VIRTUAL04
    case 0xC1C419: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:160 BEQ @UNKNOWN7
    case 0xC1C41B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    case 0xC1C41D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    // Overlapping static entry reached from 0xC1C41D.
    case 0xC1C41F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:162 BEQ @UNKNOWN8
    case 0xC1C420: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C422: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C422.
    case 0xC1C424: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:164 BEQ @UNKNOWN9
    case 0xC1C425: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/battle/generate_psi_list.asm:165 BRA @UNKNOWN10
    case 0xC1C427: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/battle/generate_psi_list.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C429: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    case 0xC1C42B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    // Overlapping static entry reached from 0xC1C42B.
    case 0xC1C42D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:169 LDA [@VIRTUAL0A],Y
    case 0xC1C42E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:170 STA @VIRTUAL00
    case 0xC1C430: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:171 STA @LOCAL03
    case 0xC1C432: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:172 BRA @UNKNOWN10
    case 0xC1C434: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C436: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    case 0xC1C438: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    // Overlapping static entry reached from 0xC1C438.
    case 0xC1C43A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:176 LDA [@VIRTUAL0A],Y
    case 0xC1C43B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:177 STA @VIRTUAL00
    case 0xC1C43D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:178 STA @LOCAL03
    case 0xC1C43F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:179 BRA @UNKNOWN10
    case 0xC1C441: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/battle/generate_psi_list.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C443: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    case 0xC1C445: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    // Overlapping static entry reached from 0xC1C445.
    case 0xC1C447: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC1C448: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:184 STA @VIRTUAL00
    case 0xC1C44A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:185 STA @LOCAL03
    case 0xC1C44C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C44E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:188 LDA @LOCAL03
    case 0xC1C450: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:189 STA @VIRTUAL00
    case 0xC1C452: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC1C454: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:191 LDA @VIRTUAL00
    case 0xC1C456: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    case 0xC1C458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC1C458.
    case 0xC1C45A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C45B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C45D: cpu.execute_instruction<0x4C>(0x00C51F, 3); return true;
    // src/battle/generate_psi_list.asm:194 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C460: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    case 0xC1C462: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    // Overlapping static entry reached from 0xC1C462.
    case 0xC1C464: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:196 LDA [@VIRTUAL06],Y
    case 0xC1C465: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:197 AND @VIRTUAL01
    case 0xC1C467: cpu.execute_instruction<0x25>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:198 REP #PROC_FLAGS::ACCUM8
    case 0xC1C469: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    case 0xC1C46B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC1C46B.
    case 0xC1C46D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C46E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C470: cpu.execute_instruction<0x4C>(0x00C51F, 3); return true;
    // src/battle/generate_psi_list.asm:201 LDA @VIRTUAL04
    case 0xC1C473: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    case 0xC1C475: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C475.
    case 0xC1C477: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/generate_psi_list.asm:203 JSL MULT168
    case 0xC1C478: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/generate_psi_list.asm:204 TAX
    case 0xC1C47C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C47D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:206 LDA @VIRTUAL00
    case 0xC1C47F: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:207 CMP PARTY_CHARACTERS+char_struct::level,X
    case 0xC1C481: cpu.execute_instruction<0xDD>(0x009C83, 3); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C484: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C486: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C488: cpu.execute_instruction<0x4C>(0x00C51F, 3); return true;
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    case 0xC1C48B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    // Overlapping static entry reached from 0xC1C48B.
    case 0xC1C48D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:210 LDA [@VIRTUAL06],Y
    case 0xC1C48E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:211 AND @LOCAL08
    case 0xC1C490: cpu.execute_instruction<0x25>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:212 REP #PROC_FLAGS::ACCUM8
    case 0xC1C492: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    case 0xC1C494: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    // Overlapping static entry reached from 0xC1C494.
    case 0xC1C496: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C497: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C499: cpu.execute_instruction<0x4C>(0x00C51F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C49C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C49E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4A2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:216 LDA [@VIRTUAL0A]
    case 0xC1C4A4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    case 0xC1C4A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC1C4A6.
    case 0xC1C4A8: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/generate_psi_list.asm:218 CMP @LOCAL06
    case 0xC1C4A9: cpu.execute_instruction<0xC5>(0x00001F, 2); return true;
    // src/battle/generate_psi_list.asm:219 BEQ @UNKNOWN15
    case 0xC1C4AB: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/battle/generate_psi_list.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    case 0xC1C4AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C4AF.
    case 0xC1C4B1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:222 LDA [@VIRTUAL06],Y
    case 0xC1C4B2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC1C4B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    case 0xC1C4B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC1C4B6.
    case 0xC1C4B8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:225 TAX
    case 0xC1C4B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:226 LDA #0
    case 0xC1C4BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/generate_psi_list.asm:226 LDA #0
    // Overlapping static entry reached from 0xC1C4BA.
    case 0xC1C4BC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:227 JSR UNKNOWN_C438A5
    case 0xC1C4BD: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/battle/generate_psi_list.asm:228 LDA [@VIRTUAL0A]
    case 0xC1C4C0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    case 0xC1C4C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC1C4C2.
    case 0xC1C4C4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:230 JSR GET_PSI_NAME
    case 0xC1C4C5: cpu.execute_instruction<0x20>(0x00C26D, 3); return true;
    // src/battle/generate_psi_list.asm:231 LDA [@VIRTUAL0A]
    case 0xC1C4C8: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    case 0xC1C4CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1C4CA.
    case 0xC1C4CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/generate_psi_list.asm:233 STA @LOCAL06
    case 0xC1C4CD: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00EC91, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C4CF.
    case 0xC1C4D1: cpu.execute_instruction<0xEC>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C4D4.
    case 0xC1C4D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4D7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:238 LDY #psi_ability::level
    case 0xC1C4DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:238 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C4DB.
    case 0xC1C4DD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:239 LDA [@VIRTUAL06],Y
    case 0xC1C4DE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:240 REP #PROC_FLAGS::ACCUM8
    case 0xC1C4E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:241 AND #$00FF
    case 0xC1C4E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:241 AND #$00FF
    // Overlapping static entry reached from 0xC1C4E2.
    case 0xC1C4E4: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:242 DEC
    case 0xC1C4E5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:243 ASL
    case 0xC1C4E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:244 CLC
    case 0xC1C4E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:245 ADC @VIRTUAL0A
    case 0xC1C4E8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:246 STA @VIRTUAL0A
    case 0xC1C4EA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:247 STA @LOCAL00
    case 0xC1C4EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:248 LDA @VIRTUAL0A+2
    case 0xC1C4EE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:249 STA @LOCAL00+2
    case 0xC1C4F0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C4F2.
    case 0xC1C4F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4F5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C4F7.
    case 0xC1C4F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4FA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:271 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    case 0xC1C4FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C4FE.
    case 0xC1C500: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:273 LDA [@VIRTUAL06],Y
    case 0xC1C501: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:274 REP #PROC_FLAGS::ACCUM8
    case 0xC1C503: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    case 0xC1C505: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    // Overlapping static entry reached from 0xC1C505.
    case 0xC1C507: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:276 TAY
    case 0xC1C508: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:277 STY @LOCAL04
    case 0xC1C509: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C50B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    case 0xC1C50D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C50D.
    case 0xC1C50F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:280 LDA [@VIRTUAL06],Y
    case 0xC1C510: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:281 REP #PROC_FLAGS::ACCUM8
    case 0xC1C512: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    case 0xC1C514: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC1C514.
    case 0xC1C516: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:283 TAX
    case 0xC1C517: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:284 LDA @VIRTUAL02
    case 0xC1C518: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/generate_psi_list.asm:285 LDY @LOCAL04
    case 0xC1C51A: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:286 JSR UNKNOWN_C1153B
    case 0xC1C51C: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/battle/generate_psi_list.asm:288 REP #PROC_FLAGS::ACCUM8
    case 0xC1C51F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:289 INC @VIRTUAL02
    case 0xC1C521: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C523: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C523.
    case 0xC1C525: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C526: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C528: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C528.
    case 0xC1C52A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C52B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:292 LDA @VIRTUAL02
    case 0xC1C52D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C52F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C531: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C532: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C534: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C535: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C537: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C538: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C53A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C53C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C53E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C540: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:295 CLC
    case 0xC1C542: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:296 ADC @VIRTUAL0A
    case 0xC1C543: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:297 STA @VIRTUAL0A
    case 0xC1C545: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:298 LDA [@VIRTUAL0A]
    case 0xC1C547: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    case 0xC1C549: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC1C549.
    case 0xC1C54B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C54C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C54E: cpu.execute_instruction<0x4C>(0x00C40F, 3); return true;
    // src/battle/generate_psi_list.asm:301 LDA @LOCAL07
    case 0xC1C551: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/generate_psi_list.asm:302 STA @VIRTUAL04
    case 0xC1C553: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C555: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C557: cpu.execute_instruction<0x4C>(0x00C676, 3); return true;
    // src/battle/generate_psi_list.asm:304 LDA @VIRTUAL01
    case 0xC1C55A: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    case 0xC1C55C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    // Overlapping static entry reached from 0xC1C55C.
    case 0xC1C55E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    case 0xC1C55F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    // Overlapping static entry reached from 0xC1C55F.
    case 0xC1C561: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C562: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C564: cpu.execute_instruction<0x4C>(0x00C676, 3); return true;
    // src/battle/generate_psi_list.asm:308 LDA @LOCAL08
    case 0xC1C567: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    case 0xC1C569: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC1C569.
    case 0xC1C56B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    case 0xC1C56C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    // Overlapping static entry reached from 0xC1C56C.
    case 0xC1C56E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C56F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C571: cpu.execute_instruction<0x4C>(0x00C676, 3); return true;
    // src/battle/generate_psi_list.asm:312 LDA GAME_STATE+game_state::party_psi
    case 0xC1C574: cpu.execute_instruction<0xAD>(0x009AEA, 3); return true;
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    case 0xC1C577: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC1C577.
    case 0xC1C579: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    case 0xC1C57A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C57A.
    case 0xC1C57C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C57D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C57F: cpu.execute_instruction<0x4C>(0x00C610, 3); return true;
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    case 0xC1C582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0002FD, 3); return true;
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    // Overlapping static entry reached from 0xC1C582.
    case 0xC1C584: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:317 CLC
    case 0xC1C585: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:318 ADC @VIRTUAL06
    case 0xC1C586: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:319 STA @VIRTUAL06
    case 0xC1C588: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:320 STA @LOCAL05
    case 0xC1C58A: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/battle/generate_psi_list.asm:321 LDA @VIRTUAL06+2
    case 0xC1C58C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:322 STA @LOCAL05+2
    case 0xC1C58E: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    case 0xC1C590: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C590.
    case 0xC1C592: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C593: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C595: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C597: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C599: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:325 CLC
    case 0xC1C59B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:326 ADC @VIRTUAL0A
    case 0xC1C59C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:327 STA @VIRTUAL0A
    case 0xC1C59E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:328 LDA [@VIRTUAL0A]
    case 0xC1C5A0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    case 0xC1C5A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    // Overlapping static entry reached from 0xC1C5A2.
    case 0xC1C5A4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:330 TAX
    case 0xC1C5A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:331 LDA #0
    case 0xC1C5A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/generate_psi_list.asm:331 LDA #0
    // Overlapping static entry reached from 0xC1C5A6.
    case 0xC1C5A8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:332 JSR UNKNOWN_C438A5
    case 0xC1C5A9: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/battle/generate_psi_list.asm:333 LDA [@VIRTUAL06]
    case 0xC1C5AC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    case 0xC1C5AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC1C5AE.
    case 0xC1C5B0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:335 JSR GET_PSI_NAME
    case 0xC1C5B1: cpu.execute_instruction<0x20>(0x00C26D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5B4: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5B8: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5BA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:337 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    case 0xC1C5BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C5BE.
    case 0xC1C5C0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:339 LDA [@VIRTUAL06],Y
    case 0xC1C5C1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:340 REP #PROC_FLAGS::ACCUM8
    case 0xC1C5C3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    case 0xC1C5C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC1C5C5.
    case 0xC1C5C7: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:342 DEC
    case 0xC1C5C8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:343 ASL
    case 0xC1C5C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:344 PHA
    case 0xC1C5CA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00EC91, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C5CB.
    case 0xC1C5CD: cpu.execute_instruction<0xEC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C5D0.
    case 0xC1C5D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5D3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:346 PLA
    case 0xC1C5D5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:347 CLC
    case 0xC1C5D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:348 ADC @VIRTUAL06
    case 0xC1C5D7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:349 STA @VIRTUAL06
    case 0xC1C5D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:350 STA @LOCAL00
    case 0xC1C5DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:351 LDA @VIRTUAL06+2
    case 0xC1C5DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:352 STA @LOCAL00+2
    case 0xC1C5DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C5E1.
    case 0xC1C5E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C5E6.
    case 0xC1C5E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:354 LDA [@VIRTUAL0A]
    case 0xC1C5EB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    case 0xC1C5ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    // Overlapping static entry reached from 0xC1C5ED.
    case 0xC1C5EF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:356 TAY
    case 0xC1C5F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:357 STY @LOCAL02
    case 0xC1C5F1: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F3: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F7: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:359 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    case 0xC1C5FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C5FD.
    case 0xC1C5FF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:361 LDA [@VIRTUAL06],Y
    case 0xC1C600: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:362 REP #PROC_FLAGS::ACCUM8
    case 0xC1C602: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    case 0xC1C604: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    // Overlapping static entry reached from 0xC1C604.
    case 0xC1C606: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:364 TAX
    case 0xC1C607: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    case 0xC1C608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x000033, 3); return true;
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C608.
    case 0xC1C60A: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:366 LDY @LOCAL02
    case 0xC1C60B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/generate_psi_list.asm:367 JSR UNKNOWN_C1153B
    case 0xC1C60D: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/battle/generate_psi_list.asm:369 LDA GAME_STATE+game_state::party_psi
    case 0xC1C610: cpu.execute_instruction<0xAD>(0x009AEA, 3); return true;
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    case 0xC1C613: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC1C613.
    case 0xC1C615: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    case 0xC1C616: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C616.
    case 0xC1C618: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:372 BEQ @UNKNOWN24
    case 0xC1C619: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x009D12, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C61B.
    case 0xC1C61D: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C61E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C620: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C620.
    case 0xC1C622: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C623: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00EC91, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C625.
    case 0xC1C627: cpu.execute_instruction<0xEC>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C628: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C62A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C62A.
    case 0xC1C62C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C62D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:376 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C62F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:377 LDY #psi_ability::level
    case 0xC1C631: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:377 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C631.
    case 0xC1C633: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:378 LDA [@VIRTUAL06],Y
    case 0xC1C634: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:379 REP #PROC_FLAGS::ACCUM8
    case 0xC1C636: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:380 AND #$00FF
    case 0xC1C638: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:380 AND #$00FF
    // Overlapping static entry reached from 0xC1C638.
    case 0xC1C63A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:381 DEC
    case 0xC1C63B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:382 ASL
    case 0xC1C63C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:383 CLC
    case 0xC1C63D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:384 ADC @VIRTUAL0A
    case 0xC1C63E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:385 STA @VIRTUAL0A
    case 0xC1C640: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:386 STA @LOCAL00
    case 0xC1C642: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:387 LDA @VIRTUAL0A+2
    case 0xC1C644: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:388 STA @LOCAL00+2
    case 0xC1C646: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C648: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C648.
    case 0xC1C64A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C64B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C64D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C64D.
    case 0xC1C64F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C650: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C652: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    case 0xC1C654: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C654.
    case 0xC1C656: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:413 LDA [@VIRTUAL06],Y
    case 0xC1C657: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC1C659: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    case 0xC1C65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC1C65B.
    case 0xC1C65D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:416 TAY
    case 0xC1C65E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:417 STY @LOCAL04
    case 0xC1C65F: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C661: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    case 0xC1C663: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C663.
    case 0xC1C665: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:420 LDA [@VIRTUAL06],Y
    case 0xC1C666: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:421 REP #PROC_FLAGS::ACCUM8
    case 0xC1C668: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    case 0xC1C66A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC1C66A.
    case 0xC1C66C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:423 TAX
    case 0xC1C66D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    case 0xC1C66E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000034, 3); return true;
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C66E.
    case 0xC1C670: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:425 LDY @LOCAL04
    case 0xC1C671: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:426 JSR UNKNOWN_C1153B
    case 0xC1C673: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/battle/generate_psi_list.asm:428 JSR PRINT_MENU_ITEMS
    case 0xC1C676: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/battle/generate_psi_list.asm:429 JSR CLEAR_INSTANT_PRINTING
    case 0xC1C679: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C67C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C67D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_battle_action_type.asm (source_named).
bool execute_battle_get_battle_action_type_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_action_type.asm:3 BEGIN_C_FUNCTION
    case 0xC268CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC268CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC268CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC268CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC268CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC268CF.
    case 0xC268D1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC268D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC268D3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC268D4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    // Overlapping static entry reached from 0xC268D1.
    case 0xC268D5: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC268D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC268D7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC268D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC268DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:9 TAX
    case 0xC268DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:10 INX
    case 0xC268DC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:11 INX
    case 0xC268DD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:12 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC268DE: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/get_battle_action_type.asm:13 AND #$00FF
    case 0xC268E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_battle_action_type.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC268E2.
    case 0xC268E4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_action_type.asm:14 END_C_FUNCTION
    case 0xC268E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_action_type.asm:14 END_C_FUNCTION
    case 0xC268E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_battle_sprite_height.asm (source_named).
bool execute_battle_get_battle_sprite_height_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_height.asm:3 BEGIN_C_FUNCTION
    case 0xC2EF6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF6D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF6E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF6F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EF70.
    case 0xC2EF72: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF73: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF74: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:8 DEC
    case 0xC2EF75: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF76: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF7A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/get_battle_sprite_height.asm:10 TAX
    case 0xC2EF7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:11 INX
    case 0xC2EF7D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:12 INX
    case 0xC2EF7E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:13 INX
    case 0xC2EF7F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:14 INX
    case 0xC2EF80: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2EF81: cpu.execute_instruction<0xBF>(0xCE62EE, 4); return true;
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    case 0xC2EF85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2EF85.
    case 0xC2EF87: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    case 0xC2EF88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2EF88.
    case 0xC2EF8A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:18 BEQ @UNKNOWN0
    case 0xC2EF8B: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    case 0xC2EF8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    // Overlapping static entry reached from 0xC2EF8D.
    case 0xC2EF8F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:20 BEQ @UNKNOWN0
    case 0xC2EF90: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    case 0xC2EF92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    // Overlapping static entry reached from 0xC2EF92.
    case 0xC2EF94: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:22 BEQ @UNKNOWN1
    case 0xC2EF95: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    case 0xC2EF97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2EF97.
    case 0xC2EF99: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:24 BEQ @UNKNOWN1
    case 0xC2EF9A: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    case 0xC2EF9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2EF9C.
    case 0xC2EF9E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:26 BEQ @UNKNOWN1
    case 0xC2EF9F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    case 0xC2EFA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2EFA1.
    case 0xC2EFA3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:28 BEQ @UNKNOWN2
    case 0xC2EFA4: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/get_battle_sprite_height.asm:29 BRA @UNKNOWN3
    case 0xC2EFA6: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    case 0xC2EFA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2EFA8.
    case 0xC2EFAA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_height.asm:32 BRA @UNKNOWN4
    case 0xC2EFAB: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    case 0xC2EFAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2EFAD.
    case 0xC2EFAF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_height.asm:35 BRA @UNKNOWN4
    case 0xC2EFB0: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    case 0xC2EFB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2EFB2.
    case 0xC2EFB4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_height.asm:38 BRA @UNKNOWN4
    case 0xC2EFB5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    case 0xC2EFB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2EFB7.
    case 0xC2EFB9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2EFBA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2EFBB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_battle_sprite_width.asm (source_named).
bool execute_battle_get_battle_sprite_width_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_width.asm:3 BEGIN_C_FUNCTION
    case 0xC2EF1A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EF1C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EF1D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EF1E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EF1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EF1F.
    case 0xC2EF21: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EF22: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EF23: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:8 DEC
    case 0xC2EF24: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF25: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF29: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/get_battle_sprite_width.asm:10 TAX
    case 0xC2EF2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:11 INX
    case 0xC2EF2C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:12 INX
    case 0xC2EF2D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:13 INX
    case 0xC2EF2E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:14 INX
    case 0xC2EF2F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2EF30: cpu.execute_instruction<0xBF>(0xCE62EE, 4); return true;
    // src/battle/get_battle_sprite_width.asm:16 AND #$00FF
    case 0xC2EF34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_battle_sprite_width.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2EF34.
    case 0xC2EF36: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/get_battle_sprite_width.asm:17 CMP #$0001
    case 0xC2EF37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/get_battle_sprite_width.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2EF37.
    case 0xC2EF39: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:18 BEQ @UNKNOWN0
    case 0xC2EF3A: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/get_battle_sprite_width.asm:19 CMP #$0003
    case 0xC2EF3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/get_battle_sprite_width.asm:19 CMP #$0003
    // Overlapping static entry reached from 0xC2EF3C.
    case 0xC2EF3E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:20 BEQ @UNKNOWN0
    case 0xC2EF3F: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_width.asm:21 CMP #$0002
    case 0xC2EF41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/get_battle_sprite_width.asm:21 CMP #$0002
    // Overlapping static entry reached from 0xC2EF41.
    case 0xC2EF43: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:22 BEQ @UNKNOWN1
    case 0xC2EF44: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_width.asm:23 CMP #$0004
    case 0xC2EF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_width.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2EF46.
    case 0xC2EF48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:24 BEQ @UNKNOWN1
    case 0xC2EF49: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/get_battle_sprite_width.asm:25 CMP #$0005
    case 0xC2EF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/get_battle_sprite_width.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2EF4B.
    case 0xC2EF4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:26 BEQ @UNKNOWN2
    case 0xC2EF4E: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/get_battle_sprite_width.asm:27 CMP #$0006
    case 0xC2EF50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/get_battle_sprite_width.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2EF50.
    case 0xC2EF52: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:28 BEQ @UNKNOWN2
    case 0xC2EF53: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/get_battle_sprite_width.asm:29 BRA @UNKNOWN3
    case 0xC2EF55: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/get_battle_sprite_width.asm:31 LDA #$0004
    case 0xC2EF57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_width.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2EF57.
    case 0xC2EF59: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_width.asm:32 BRA @UNKNOWN4
    case 0xC2EF5A: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/get_battle_sprite_width.asm:34 LDA #$0008
    case 0xC2EF5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/get_battle_sprite_width.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2EF5C.
    case 0xC2EF5E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_width.asm:35 BRA @UNKNOWN4
    case 0xC2EF5F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/get_battle_sprite_width.asm:37 LDA #$0010
    case 0xC2EF61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/get_battle_sprite_width.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2EF61.
    case 0xC2EF63: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_width.asm:38 BRA @UNKNOWN4
    case 0xC2EF64: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/get_battle_sprite_width.asm:40 LDA #$0000
    case 0xC2EF66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/get_battle_sprite_width.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2EF66.
    case 0xC2EF68: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_width.asm:42 END_C_FUNCTION
    case 0xC2EF69: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_width.asm:42 END_C_FUNCTION
    case 0xC2EF6A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_enemy_type.asm (source_named).
bool execute_battle_get_enemy_type_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_enemy_type.asm:3 BEGIN_C_FUNCTION
    case 0xC268E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/get_enemy_type.asm:7 LDY #.SIZEOF(enemy_data)
    case 0xC268E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/get_enemy_type.asm:7 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC268E9.
    case 0xC268EB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/get_enemy_type.asm:8 JSL MULT168
    case 0xC268EC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/get_enemy_type.asm:9 CLC
    case 0xC268F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/get_enemy_type.asm:10 ADC #enemy_data::type
    case 0xC268F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/battle/get_enemy_type.asm:10 ADC #enemy_data::type
    // Overlapping static entry reached from 0xC268F1.
    case 0xC268F3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/get_enemy_type.asm:11 TAX
    case 0xC268F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_enemy_type.asm:12 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC268F5: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/get_enemy_type.asm:13 AND #$00FF
    case 0xC268F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_enemy_type.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC268F9.
    case 0xC268FB: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_enemy_type.asm:14 END_C_FUNCTION
    case 0xC268FC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_shield_targetting.asm (source_named).
bool execute_battle_get_shield_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_shield_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23E9E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/get_shield_targetting.asm:7 CMP #BATTLE_ACTIONS::PSI_SHIELD_SIGMA
    case 0xC23EA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002A, 2); else cpu.execute_instruction<0xC9>(0x00002A, 3); return true;
    // src/battle/get_shield_targetting.asm:7 CMP #BATTLE_ACTIONS::PSI_SHIELD_SIGMA
    // Overlapping static entry reached from 0xC23EA0.
    case 0xC23EA2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_shield_targetting.asm:8 BEQ @SINGLETARGET
    case 0xC23EA3: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/get_shield_targetting.asm:9 CMP #BATTLE_ACTIONS::PSI_SHIELD_OMEGA
    case 0xC23EA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002B, 2); else cpu.execute_instruction<0xC9>(0x00002B, 3); return true;
    // src/battle/get_shield_targetting.asm:9 CMP #BATTLE_ACTIONS::PSI_SHIELD_OMEGA
    // Overlapping static entry reached from 0xC23EA5.
    case 0xC23EA7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_shield_targetting.asm:10 BEQ @SINGLETARGET
    case 0xC23EA8: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/get_shield_targetting.asm:11 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_SIGMA
    case 0xC23EAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002E, 2); else cpu.execute_instruction<0xC9>(0x00002E, 3); return true;
    // src/battle/get_shield_targetting.asm:11 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_SIGMA
    // Overlapping static entry reached from 0xC23EAA.
    case 0xC23EAC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_shield_targetting.asm:12 BEQ @SINGLETARGET
    case 0xC23EAD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/get_shield_targetting.asm:13 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_OMEGA
    case 0xC23EAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/battle/get_shield_targetting.asm:13 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_OMEGA
    // Overlapping static entry reached from 0xC23EAF.
    case 0xC23EB1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/get_shield_targetting.asm:14 BNE @MULTITARGET
    case 0xC23EB2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/get_shield_targetting.asm:16 LDA #1
    case 0xC23EB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/get_shield_targetting.asm:16 LDA #1
    // Overlapping static entry reached from 0xC23EB4.
    case 0xC23EB6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_shield_targetting.asm:17 BRA @RETURN
    case 0xC23EB7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/get_shield_targetting.asm:19 LDA #0
    case 0xC23EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/get_shield_targetting.asm:19 LDA #0
    // Overlapping static entry reached from 0xC23EB9.
    case 0xC23EBB: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/get_shield_targetting.asm:21 END_C_FUNCTION
    case 0xC23EBC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/giygas_hurt_prayer.asm (source_named).
bool execute_battle_giygas_hurt_prayer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/giygas_hurt_prayer.asm:3 BEGIN_C_FUNCTION
    case 0xC2C39C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C39E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C39F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C3A1.
    case 0xC2C3A3: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/giygas_hurt_prayer.asm:8 TAX
    case 0xC2C3A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/giygas_hurt_prayer.asm:9 STX @LOCAL00
    case 0xC2C3A7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:10 LDA #1*SECOND
    case 0xC2C3A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:10 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3A9.
    case 0xC2C3AB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:11 JSR WAIT
    case 0xC2C3AC: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:12 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C3AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A41E, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:12 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C3AF.
    case 0xC2C3B1: cpu.execute_instruction<0xA4>(0x00008D, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    case 0xC2C3B2: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C3B1.
    case 0xC2C3B3: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:14 JSL FIX_TARGET_NAME
    case 0xC2C3B5: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    case 0xC2C3B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3B9.
    case 0xC2C3BB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:16 STA GREEN_FLASH_DURATION
    case 0xC2C3BC: cpu.execute_instruction<0x8D>(0x00AF73, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    case 0xC2C3BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    // Overlapping static entry reached from 0xC2C3BF.
    case 0xC2C3C1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:18 STA IS_SMAAAAASH_ATTACK
    case 0xC2C3C2: cpu.execute_instruction<0x8D>(0x00AC63, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:19 LDX @LOCAL00
    case 0xC2C3C5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:20 TXA
    case 0xC2C3C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/giygas_hurt_prayer.asm:21 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2C3C8: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:22 LDX #$00FF
    case 0xC2C3CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:22 LDX #$00FF
    // Overlapping static entry reached from 0xC2C3CB.
    case 0xC2C3CD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:23 JSR CALC_RESIST_DAMAGE
    case 0xC2C3CE: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:24 LDA #1*SECOND
    case 0xC2C3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:24 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3D1.
    case 0xC2C3D3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:25 JSR WAIT
    case 0xC2C3D4: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:26 END_C_FUNCTION
    case 0xC2C3D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/giygas_hurt_prayer.asm:26 END_C_FUNCTION
    case 0xC2C3D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/heal_strangeness.asm (source_named).
bool execute_battle_heal_strangeness_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/heal_strangeness.asm:3 BEGIN_C_FUNCTION
    case 0xC28512: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC28514: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC28515: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC28516: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28516.
    case 0xC28518: cpu.execute_instruction<0xFF>(0x74AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC28519: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:7 LDA CURRENT_TARGET
    case 0xC2851A: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/heal_strangeness.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC28518.
    case 0xC2851C: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:8 CLC
    case 0xC2851D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    case 0xC2851E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC2851E.
    case 0xC28520: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/heal_strangeness.asm:10 TAX
    case 0xC28521: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:11 LDA __BSS_START__,X
    case 0xC28522: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/heal_strangeness.asm:12 AND #$00FF
    case 0xC28525: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/heal_strangeness.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC28525.
    case 0xC28527: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/heal_strangeness.asm:13 CMP #1
    case 0xC28528: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/heal_strangeness.asm:13 CMP #1
    // Overlapping static entry reached from 0xC28528.
    case 0xC2852A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/heal_strangeness.asm:14 BNE @RETURN
    case 0xC2852B: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/battle/heal_strangeness.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC2852D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/heal_strangeness.asm:16 LDA #0
    case 0xC2852F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/heal_strangeness.asm:17 STA __BSS_START__,X
    case 0xC28531: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/heal_strangeness.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2852F.
    case 0xC28532: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/heal_strangeness.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC28534: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28536: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003400, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC28536.
    case 0xC28538: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28539: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC28538.
    case 0xC2853A: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC2853B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC2853B.
    case 0xC2853D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC2853E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28540: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/heal_strangeness.asm:21 END_C_FUNCTION
    case 0xC28544: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/heal_strangeness.asm:21 END_C_FUNCTION
    case 0xC28545: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/increase_defense_16th.asm (source_named).
bool execute_battle_increase_defense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/increase_defense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27D19: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D1E.
    case 0xC27D20: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D21: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D22: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:9 STA @VIRTUAL02
    case 0xC27D23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27D20.
    case 0xC27D24: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/increase_defense_16th.asm:10 CLC
    case 0xC27D25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:11 ADC #battler::defense
    case 0xC27D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/increase_defense_16th.asm:11 ADC #battler::defense
    // Overlapping static entry reached from 0xC27D26.
    case 0xC27D28: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/increase_defense_16th.asm:12 TAY
    case 0xC27D29: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27D2A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:14 LSR
    case 0xC27D2D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:15 LSR
    case 0xC27D2E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:16 LSR
    case 0xC27D2F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:17 LSR
    case 0xC27D30: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27D31: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/increase_defense_16th.asm:19 TAX
    case 0xC27D33: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27D34: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/increase_defense_16th.asm:22 LDX #$0001
    case 0xC27D36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/increase_defense_16th.asm:22 LDX #$0001
    // Overlapping static entry reached from 0xC27D36.
    case 0xC27D38: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/increase_defense_16th.asm:24 STX @VIRTUAL04
    case 0xC27D39: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/increase_defense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27D3B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:26 CLC
    case 0xC27D3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:27 ADC @VIRTUAL04
    case 0xC27D3F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_defense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27D41: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27D44: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:30 CLC
    case 0xC27D46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:31 ADC #battler::defense
    case 0xC27D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/increase_defense_16th.asm:31 ADC #battler::defense
    // Overlapping static entry reached from 0xC27D47.
    case 0xC27D49: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/increase_defense_16th.asm:32 TAX
    case 0xC27D4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:33 STX @LOCAL01
    case 0xC27D4B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/increase_defense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27D4D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:35 LDA a:battler::base_defense,X
    case 0xC27D4F: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/increase_defense_16th.asm:36 AND #$00FF
    case 0xC27D52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/increase_defense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27D52.
    case 0xC27D54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D55: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D59: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_defense_16th.asm:38 LSR
    case 0xC27D5B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:39 LSR
    case 0xC27D5C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:40 STA @LOCAL00
    case 0xC27D5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/increase_defense_16th.asm:41 STA @VIRTUAL02
    case 0xC27D5F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:42 LDX @LOCAL01
    case 0xC27D61: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/increase_defense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27D63: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27D66: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/increase_defense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D68: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/increase_defense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D6A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/increase_defense_16th.asm:46 LDA @LOCAL00
    case 0xC27D6C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/increase_defense_16th.asm:47 STA __BSS_START__,X
    case 0xC27D6E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/increase_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27D71: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/increase_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27D72: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/increase_offense_16th.asm (source_named).
bool execute_battle_increase_offense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/increase_offense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27CBF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27CC1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27CC2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27CC3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27CC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27CC4.
    case 0xC27CC6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27CC7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27CC8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:9 STA @VIRTUAL02
    case 0xC27CC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27CC6.
    case 0xC27CCA: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/increase_offense_16th.asm:10 CLC
    case 0xC27CCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:11 ADC #battler::offense
    case 0xC27CCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/increase_offense_16th.asm:11 ADC #battler::offense
    // Overlapping static entry reached from 0xC27CCC.
    case 0xC27CCE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/increase_offense_16th.asm:12 TAY
    case 0xC27CCF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27CD0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:14 LSR
    case 0xC27CD3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:15 LSR
    case 0xC27CD4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:16 LSR
    case 0xC27CD5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:17 LSR
    case 0xC27CD6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27CD7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/increase_offense_16th.asm:19 TAX
    case 0xC27CD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27CDA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/increase_offense_16th.asm:22 LDX #1
    case 0xC27CDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/increase_offense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27CDC.
    case 0xC27CDE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/increase_offense_16th.asm:24 STX @VIRTUAL04
    case 0xC27CDF: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/increase_offense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27CE1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:26 CLC
    case 0xC27CE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:27 ADC @VIRTUAL04
    case 0xC27CE5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_offense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27CE7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27CEA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:30 CLC
    case 0xC27CEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:31 ADC #battler::offense
    case 0xC27CED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/increase_offense_16th.asm:31 ADC #battler::offense
    // Overlapping static entry reached from 0xC27CED.
    case 0xC27CEF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/increase_offense_16th.asm:32 TAX
    case 0xC27CF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:33 STX @LOCAL01
    case 0xC27CF1: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/increase_offense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27CF3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:35 LDA a:battler::base_offense,X
    case 0xC27CF5: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/increase_offense_16th.asm:36 AND #$00FF
    case 0xC27CF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/increase_offense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27CF8.
    case 0xC27CFA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27CFB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27CFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27CFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27CFF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_offense_16th.asm:38 LSR
    case 0xC27D01: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:39 LSR
    case 0xC27D02: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:40 STA @LOCAL00
    case 0xC27D03: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/increase_offense_16th.asm:41 STA @VIRTUAL02
    case 0xC27D05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:42 LDX @LOCAL01
    case 0xC27D07: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/increase_offense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27D09: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27D0C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/increase_offense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D0E: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/increase_offense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D10: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/increase_offense_16th.asm:46 LDA @LOCAL00
    case 0xC27D12: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/increase_offense_16th.asm:47 STA __BSS_START__,X
    case 0xC27D14: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/increase_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27D17: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/increase_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27D18: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/inflict_status.asm (source_named).
bool execute_battle_inflict_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/inflict_status.asm:3 BEGIN_C_FUNCTION
    case 0xC2718D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC2718F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27190: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27191: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27192: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC27192.
    case 0xC27194: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27195: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27196: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:11 STX @VIRTUAL02
    case 0xC27197: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/inflict_status.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC27194.
    case 0xC27198: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/inflict_status.asm:12 TAX
    case 0xC27199: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:13 STX @LOCAL00
    case 0xC2719A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/inflict_status.asm:14 LDA a:battler::npc_id,X
    case 0xC2719C: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/inflict_status.asm:15 AND #$00FF
    case 0xC2719F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/inflict_status.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2719F.
    case 0xC271A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/inflict_status.asm:16 BEQ @UNKNOWN0
    case 0xC271A2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/inflict_status.asm:17 LDA #0
    case 0xC271A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/inflict_status.asm:17 LDA #0
    // Overlapping static entry reached from 0xC271A4.
    case 0xC271A6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/inflict_status.asm:18 BRA @UNKNOWN3
    case 0xC271A7: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/battle/inflict_status.asm:20 TXA
    case 0xC271A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:21 CLC
    case 0xC271AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:22 ADC @VIRTUAL02
    case 0xC271AB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/inflict_status.asm:23 TAX
    case 0xC271AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:24 LDA a:battler::afflictions,X
    case 0xC271AE: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/inflict_status.asm:25 AND #$00FF
    case 0xC271B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/inflict_status.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC271B1.
    case 0xC271B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/inflict_status.asm:26 BEQ @UNKNOWN1
    case 0xC271B4: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/inflict_status.asm:27 STY @VIRTUAL04
    case 0xC271B6: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/inflict_status.asm:28 CMP @VIRTUAL04
    case 0xC271B8: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/inflict_status.asm:29 BLTEQ @UNKNOWN2
    case 0xC271BA: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/inflict_status.asm:29 BLTEQ @UNKNOWN2
    case 0xC271BC: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/inflict_status.asm:31 LDX @LOCAL00
    case 0xC271BE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/inflict_status.asm:32 TXA
    case 0xC271C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:33 CLC
    case 0xC271C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:34 ADC @VIRTUAL02
    case 0xC271C2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/inflict_status.asm:35 TAX
    case 0xC271C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:36 TYA
    case 0xC271C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC271C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/inflict_status.asm:38 STA a:battler::afflictions,X
    case 0xC271C8: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/inflict_status.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC271CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/inflict_status.asm:40 LDA #1
    case 0xC271CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/inflict_status.asm:40 LDA #1
    // Overlapping static entry reached from 0xC271CD.
    case 0xC271CF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/inflict_status.asm:41 BRA @UNKNOWN3
    case 0xC271D0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/inflict_status.asm:43 LDA #0
    case 0xC271D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/inflict_status.asm:43 LDA #0
    // Overlapping static entry reached from 0xC271D2.
    case 0xC271D4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/inflict_status.asm:45 END_C_FUNCTION
    case 0xC271D5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/inflict_status.asm:45 END_C_FUNCTION
    case 0xC271D6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_common.asm (source_named).
bool execute_battle_init_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_common.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC054CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC054D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC054D2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC054D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC054D3.
    case 0xC054D5: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC054D6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/init_common.asm:8 LDY #0
    case 0xC054D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/init_common.asm:8 LDY #0
    // Overlapping static entry reached from 0xC054D7.
    case 0xC054D9: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/init_common.asm:9 LDX #1
    case 0xC054DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_common.asm:9 LDX #1
    // Overlapping static entry reached from 0xC054DA.
    case 0xC054DC: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/init_common.asm:10 TXA
    case 0xC054DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_common.asm:11 JSL FADE_OUT_WITH_MOSAIC
    case 0xC054DE: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/battle/init_common.asm:12 JSL BATTLE_ROUTINE
    case 0xC054E2: cpu.execute_instruction<0x22>(0xC246EE, 4); return true;
    // src/battle/init_common.asm:13 STA @LOCAL00
    case 0xC054E6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_common.asm:14 JSL UPDATE_PARTY
    case 0xC054E8: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // src/battle/init_common.asm:15 LDA #1
    case 0xC054EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/init_common.asm:15 LDA #1
    // Overlapping static entry reached from 0xC054EC.
    case 0xC054EE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/init_common.asm:16 STA PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC054EF: cpu.execute_instruction<0x8D>(0x00514A, 3); return true;
    // src/battle/init_common.asm:17 STZ BATTLE_MODE
    case 0xC054F2: cpu.execute_instruction<0x9C>(0x005148, 3); return true;
    // src/battle/init_common.asm:18 LDA @LOCAL00
    case 0xC054F5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_common.asm:19 END_C_FUNCTION
    case 0xC054F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_common.asm:19 END_C_FUNCTION
    case 0xC054F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_enemy_stats.asm (source_named).
bool execute_battle_init_enemy_stats_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_enemy_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B692: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B694: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B695: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B696: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B697: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B697.
    case 0xC2B699: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B69A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B69B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:10 STX @VIRTUAL02
    case 0xC2B69C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B699.
    case 0xC2B69D: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/init_enemy_stats.asm:11 TAY
    case 0xC2B69E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:12 STY @LOCAL01
    case 0xC2B69F: cpu.execute_instruction<0x84>(0x00000F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6A1.
    case 0xC2B6A3: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6A3.
    case 0xC2B6A5: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6A5.
    case 0xC2B6A7: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6A6.
    case 0xC2B6A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/init_enemy_stats.asm:14 TYA
    case 0xC2B6AB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:15 LDY #.SIZEOF(enemy_data)
    case 0xC2B6AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/init_enemy_stats.asm:15 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2B6AC.
    case 0xC2B6AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/init_enemy_stats.asm:16 JSL MULT168
    case 0xC2B6AF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/init_enemy_stats.asm:17 CLC
    case 0xC2B6B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:18 ADC @VIRTUAL06
    case 0xC2B6B4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:19 STA @VIRTUAL06
    case 0xC2B6B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B6B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/init_enemy_stats.asm:21 STZ_BADOPT @LOCAL00
    case 0xC2B6BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/init_enemy_stats.asm:21 STZ_BADOPT @LOCAL00
    case 0xC2B6BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/init_enemy_stats.asm:21 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC2B6BA.
    case 0xC2B6BD: cpu.execute_instruction<0x0E>(0x004EA2, 3); return true;
    // src/battle/init_enemy_stats.asm:22 LDX #.SIZEOF(battler)
    case 0xC2B6BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/init_enemy_stats.asm:22 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B6BE.
    case 0xC2B6C0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/init_enemy_stats.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC2B6C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:24 LDA @VIRTUAL02
    case 0xC2B6C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:25 JSL MEMSET16
    case 0xC2B6C5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/init_enemy_stats.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B6C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:27 LDY #enemy_data::level
    case 0xC2B6CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000025, 2); else cpu.execute_instruction<0xA0>(0x000025, 3); return true;
    // src/battle/init_enemy_stats.asm:27 LDY #enemy_data::level
    // Overlapping static entry reached from 0xC2B6CB.
    case 0xC2B6CD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:28 LDA [@VIRTUAL06],Y
    case 0xC2B6CE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2B6D0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:30 AND #$00FF
    case 0xC2B6D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2B6D2.
    case 0xC2B6D4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/init_enemy_stats.asm:31 TAX
    case 0xC2B6D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:32 CPX HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2B6D6: cpu.execute_instruction<0xEC>(0x00ABE1, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/init_enemy_stats.asm:33 BLTEQ @UNKNOWN0
    case 0xC2B6D9: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/init_enemy_stats.asm:33 BLTEQ @UNKNOWN0
    case 0xC2B6DB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/init_enemy_stats.asm:34 STX HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2B6DD: cpu.execute_instruction<0x8E>(0x00ABE1, 3); return true;
    // src/battle/init_enemy_stats.asm:36 LDY @LOCAL01
    case 0xC2B6E0: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/battle/init_enemy_stats.asm:37 TYA
    case 0xC2B6E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:38 LDX @VIRTUAL02
    case 0xC2B6E3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:39 STA a:battler::id,X
    case 0xC2B6E5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/init_enemy_stats.asm:40 TYA
    case 0xC2B6E8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:41 LDX @VIRTUAL02
    case 0xC2B6E9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:42 STA a:battler::unknown76,X
    case 0xC2B6EB: cpu.execute_instruction<0x9D>(0x00004C, 3); return true;
    // src/battle/init_enemy_stats.asm:43 LDY #enemy_data::battle_sprite
    case 0xC2B6EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00000B, 3); return true;
    // src/battle/init_enemy_stats.asm:43 LDY #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2B6EE.
    case 0xC2B6F0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:44 LDA [@VIRTUAL06],Y
    case 0xC2B6F1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:45 LDX @VIRTUAL02
    case 0xC2B6F3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:46 STA a:battler::sprite,X
    case 0xC2B6F5: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:47 LDY @LOCAL01
    case 0xC2B6F8: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/battle/init_enemy_stats.asm:48 TYA
    case 0xC2B6FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:49 JSL UNKNOWN_C2B66A
    case 0xC2B6FB: cpu.execute_instruction<0x22>(0xC2B60F, 4); return true;
    // src/battle/init_enemy_stats.asm:51 LDX @VIRTUAL02
    case 0xC2B6FF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:52 STA a:battler::the_flag,X
    case 0xC2B701: cpu.execute_instruction<0x9D>(0x00000B, 3); return true;
    // src/battle/init_enemy_stats.asm:53 LDA #1
    case 0xC2B704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/init_enemy_stats.asm:54 LDX @VIRTUAL02
    case 0xC2B706: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:54 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B704.
    case 0xC2B707: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:55 STA a:battler::consciousness,X
    case 0xC2B708: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/battle/init_enemy_stats.asm:56 LDX @VIRTUAL02
    case 0xC2B70B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:57 STA a:battler::ally_or_enemy,X
    case 0xC2B70D: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/battle/init_enemy_stats.asm:58 LDX @VIRTUAL02
    case 0xC2B710: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:59 STZ a:battler::npc_id,X
    case 0xC2B712: cpu.execute_instruction<0x9E>(0x00000F, 3); return true;
    // src/battle/init_enemy_stats.asm:60 LDY #enemy_data::row
    case 0xC2B715: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004A, 2); else cpu.execute_instruction<0xA0>(0x00004A, 3); return true;
    // src/battle/init_enemy_stats.asm:60 LDY #enemy_data::row
    // Overlapping static entry reached from 0xC2B715.
    case 0xC2B717: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:61 LDA [@VIRTUAL06],Y
    case 0xC2B718: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:62 LDX @VIRTUAL02
    case 0xC2B71A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:63 STA a:battler::row,X
    case 0xC2B71C: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // src/battle/init_enemy_stats.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC2B71F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:65 LDY #enemy_data::hp
    case 0xC2B721: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/battle/init_enemy_stats.asm:65 LDY #enemy_data::hp
    // Overlapping static entry reached from 0xC2B721.
    case 0xC2B723: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:66 LDA [@VIRTUAL06],Y
    case 0xC2B724: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:67 LDX @VIRTUAL02
    case 0xC2B726: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:68 STA a:battler::hp_max,X
    case 0xC2B728: cpu.execute_instruction<0x9D>(0x000015, 3); return true;
    // src/battle/init_enemy_stats.asm:69 LDX @VIRTUAL02
    case 0xC2B72B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:70 STA a:battler::hp_target,X
    case 0xC2B72D: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/init_enemy_stats.asm:71 LDX @VIRTUAL02
    case 0xC2B730: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:72 STA a:battler::hp,X
    case 0xC2B732: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/init_enemy_stats.asm:73 LDY #enemy_data::pp
    case 0xC2B735: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/init_enemy_stats.asm:73 LDY #enemy_data::pp
    // Overlapping static entry reached from 0xC2B735.
    case 0xC2B737: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:74 LDA [@VIRTUAL06],Y
    case 0xC2B738: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:75 LDX @VIRTUAL02
    case 0xC2B73A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:76 STA a:battler::pp_max,X
    case 0xC2B73C: cpu.execute_instruction<0x9D>(0x00001B, 3); return true;
    // src/battle/init_enemy_stats.asm:77 LDX @VIRTUAL02
    case 0xC2B73F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:78 STA a:battler::pp_target,X
    case 0xC2B741: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // src/battle/init_enemy_stats.asm:79 LDX @VIRTUAL02
    case 0xC2B744: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:80 STA a:battler::pp,X
    case 0xC2B746: cpu.execute_instruction<0x9D>(0x000017, 3); return true;
    // src/battle/init_enemy_stats.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B749: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:82 LDY #enemy_data::offense
    case 0xC2B74B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/battle/init_enemy_stats.asm:82 LDY #enemy_data::offense
    // Overlapping static entry reached from 0xC2B74B.
    case 0xC2B74D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:83 LDA [@VIRTUAL06],Y
    case 0xC2B74E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:84 LDX @VIRTUAL02
    case 0xC2B750: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:85 STA a:battler::base_offense,X
    case 0xC2B752: cpu.execute_instruction<0x9D>(0x000032, 3); return true;
    // src/battle/init_enemy_stats.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC2B755: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:87 AND #$00FF
    case 0xC2B757: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC2B757.
    case 0xC2B759: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:88 LDX @VIRTUAL02
    case 0xC2B75A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:89 STA a:battler::offense,X
    case 0xC2B75C: cpu.execute_instruction<0x9D>(0x000026, 3); return true;
    // src/battle/init_enemy_stats.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B75F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:91 LDY #enemy_data::defense
    case 0xC2B761: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000029, 2); else cpu.execute_instruction<0xA0>(0x000029, 3); return true;
    // src/battle/init_enemy_stats.asm:91 LDY #enemy_data::defense
    // Overlapping static entry reached from 0xC2B761.
    case 0xC2B763: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:92 LDA [@VIRTUAL06],Y
    case 0xC2B764: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:93 LDX @VIRTUAL02
    case 0xC2B766: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:94 STA a:battler::base_defense,X
    case 0xC2B768: cpu.execute_instruction<0x9D>(0x000033, 3); return true;
    // src/battle/init_enemy_stats.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC2B76B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:96 AND #$00FF
    case 0xC2B76D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC2B76D.
    case 0xC2B76F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:97 LDX @VIRTUAL02
    case 0xC2B770: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:98 STA a:battler::defense,X
    case 0xC2B772: cpu.execute_instruction<0x9D>(0x000028, 3); return true;
    // src/battle/init_enemy_stats.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B775: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:100 LDY #enemy_data::speed
    case 0xC2B777: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/battle/init_enemy_stats.asm:100 LDY #enemy_data::speed
    // Overlapping static entry reached from 0xC2B777.
    case 0xC2B779: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:101 LDA [@VIRTUAL06],Y
    case 0xC2B77A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:102 LDX @VIRTUAL02
    case 0xC2B77C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:103 STA a:battler::base_speed,X
    case 0xC2B77E: cpu.execute_instruction<0x9D>(0x000034, 3); return true;
    // src/battle/init_enemy_stats.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC2B781: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:105 AND #$00FF
    case 0xC2B783: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC2B783.
    case 0xC2B785: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:106 LDX @VIRTUAL02
    case 0xC2B786: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:107 STA a:battler::speed,X
    case 0xC2B788: cpu.execute_instruction<0x9D>(0x00002A, 3); return true;
    // src/battle/init_enemy_stats.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B78B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:109 LDY #enemy_data::guts
    case 0xC2B78D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002C, 2); else cpu.execute_instruction<0xA0>(0x00002C, 3); return true;
    // src/battle/init_enemy_stats.asm:109 LDY #enemy_data::guts
    // Overlapping static entry reached from 0xC2B78D.
    case 0xC2B78F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:110 LDA [@VIRTUAL06],Y
    case 0xC2B790: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:111 LDX @VIRTUAL02
    case 0xC2B792: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:112 STA a:battler::base_guts,X
    case 0xC2B794: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/battle/init_enemy_stats.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC2B797: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:114 AND #$00FF
    case 0xC2B799: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC2B799.
    case 0xC2B79B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:115 LDX @VIRTUAL02
    case 0xC2B79C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:116 STA a:battler::guts,X
    case 0xC2B79E: cpu.execute_instruction<0x9D>(0x00002C, 3); return true;
    // src/battle/init_enemy_stats.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:118 LDY #enemy_data::luck
    case 0xC2B7A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/battle/init_enemy_stats.asm:118 LDY #enemy_data::luck
    // Overlapping static entry reached from 0xC2B7A3.
    case 0xC2B7A5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:119 LDA [@VIRTUAL06],Y
    case 0xC2B7A6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:120 LDX @VIRTUAL02
    case 0xC2B7A8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:121 STA a:battler::base_luck,X
    case 0xC2B7AA: cpu.execute_instruction<0x9D>(0x000036, 3); return true;
    // src/battle/init_enemy_stats.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:123 AND #$00FF
    case 0xC2B7AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC2B7AF.
    case 0xC2B7B1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:124 LDX @VIRTUAL02
    case 0xC2B7B2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:125 STA a:battler::luck,X
    case 0xC2B7B4: cpu.execute_instruction<0x9D>(0x00002E, 3); return true;
    // src/battle/init_enemy_stats.asm:126 LDX @VIRTUAL02
    case 0xC2B7B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:128 STZ a:battler::vitality,X
    case 0xC2B7BB: cpu.execute_instruction<0x9E>(0x000030, 3); return true;
    // src/battle/init_enemy_stats.asm:129 LDY #enemy_data::iq
    case 0xC2B7BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/battle/init_enemy_stats.asm:129 LDY #enemy_data::iq
    // Overlapping static entry reached from 0xC2B7BE.
    case 0xC2B7C0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:130 LDA [@VIRTUAL06],Y
    case 0xC2B7C1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:131 LDX @VIRTUAL02
    case 0xC2B7C3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:132 STA a:battler::iq,X
    case 0xC2B7C5: cpu.execute_instruction<0x9D>(0x000031, 3); return true;
    // src/battle/init_enemy_stats.asm:133 LDY #enemy_data::fire_vulnerability
    case 0xC2B7C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002E, 2); else cpu.execute_instruction<0xA0>(0x00002E, 3); return true;
    // src/battle/init_enemy_stats.asm:133 LDY #enemy_data::fire_vulnerability
    // Overlapping static entry reached from 0xC2B7C8.
    case 0xC2B7CA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:134 LDA [@VIRTUAL06],Y
    case 0xC2B7CB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:135 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2B7CD: cpu.execute_instruction<0x22>(0xC2B5AD, 4); return true;
    // src/battle/init_enemy_stats.asm:136 LDX @VIRTUAL02
    case 0xC2B7D1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:137 STA a:battler::fire_resist,X
    case 0xC2B7D3: cpu.execute_instruction<0x9D>(0x00003A, 3); return true;
    // src/battle/init_enemy_stats.asm:138 LDY #enemy_data::freeze_vulnerability
    case 0xC2B7D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002F, 2); else cpu.execute_instruction<0xA0>(0x00002F, 3); return true;
    // src/battle/init_enemy_stats.asm:138 LDY #enemy_data::freeze_vulnerability
    // Overlapping static entry reached from 0xC2B7D6.
    case 0xC2B7D8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:139 LDA [@VIRTUAL06],Y
    case 0xC2B7D9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:140 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2B7DB: cpu.execute_instruction<0x22>(0xC2B5AD, 4); return true;
    // src/battle/init_enemy_stats.asm:141 LDX @VIRTUAL02
    case 0xC2B7DF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:142 STA a:battler::freeze_resist,X
    case 0xC2B7E1: cpu.execute_instruction<0x9D>(0x000038, 3); return true;
    // src/battle/init_enemy_stats.asm:143 LDY #enemy_data::flash_vulnerability
    case 0xC2B7E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000030, 2); else cpu.execute_instruction<0xA0>(0x000030, 3); return true;
    // src/battle/init_enemy_stats.asm:143 LDY #enemy_data::flash_vulnerability
    // Overlapping static entry reached from 0xC2B7E4.
    case 0xC2B7E6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:144 LDA [@VIRTUAL06],Y
    case 0xC2B7E7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:145 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B7E9: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_enemy_stats.asm:146 LDX @VIRTUAL02
    case 0xC2B7ED: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:147 STA a:battler::flash_resist,X
    case 0xC2B7EF: cpu.execute_instruction<0x9D>(0x000039, 3); return true;
    // src/battle/init_enemy_stats.asm:148 LDY #enemy_data::paralysis_vulnerability
    case 0xC2B7F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x000031, 3); return true;
    // src/battle/init_enemy_stats.asm:148 LDY #enemy_data::paralysis_vulnerability
    // Overlapping static entry reached from 0xC2B7F2.
    case 0xC2B7F4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:149 LDA [@VIRTUAL06],Y
    case 0xC2B7F5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:150 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B7F7: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_enemy_stats.asm:151 LDX @VIRTUAL02
    case 0xC2B7FB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:152 STA a:battler::paralysis_resist,X
    case 0xC2B7FD: cpu.execute_instruction<0x9D>(0x000037, 3); return true;
    // src/battle/init_enemy_stats.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC2B800: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:154 LDA #enemy_data::hypnosis_brainshock_vulnerability
    case 0xC2B802: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/battle/init_enemy_stats.asm:154 LDA #enemy_data::hypnosis_brainshock_vulnerability
    // Overlapping static entry reached from 0xC2B802.
    case 0xC2B804: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B805: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B807: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B809: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B80B: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/init_enemy_stats.asm:156 CLC
    case 0xC2B80D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:157 ADC @VIRTUAL0A
    case 0xC2B80E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:158 STA @VIRTUAL0A
    case 0xC2B810: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B812: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:160 LDA [@VIRTUAL0A]
    case 0xC2B814: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:161 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B816: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_enemy_stats.asm:162 LDX @VIRTUAL02
    case 0xC2B81A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:163 STA a:battler::hypnosis_resist,X
    case 0xC2B81C: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/battle/init_enemy_stats.asm:164 LDA [@VIRTUAL0A]
    case 0xC2B81F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:165 STA @VIRTUAL00
    case 0xC2B821: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/init_enemy_stats.asm:166 LDA #3
    case 0xC2B823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003803, 3); return true;
    // src/battle/init_enemy_stats.asm:167 SEC
    case 0xC2B825: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:168 SBC @VIRTUAL00
    case 0xC2B826: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/battle/init_enemy_stats.asm:169 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B828: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_enemy_stats.asm:170 LDX @VIRTUAL02
    case 0xC2B82C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:171 STA a:battler::brainshock_resist,X
    case 0xC2B82E: cpu.execute_instruction<0x9D>(0x00003B, 3); return true;
    // src/battle/init_enemy_stats.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC2B831: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:173 LDY #enemy_data::money
    case 0xC2B833: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/battle/init_enemy_stats.asm:173 LDY #enemy_data::money
    // Overlapping static entry reached from 0xC2B833.
    case 0xC2B835: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:174 LDA [@VIRTUAL06],Y
    case 0xC2B836: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:175 LDX @VIRTUAL02
    case 0xC2B838: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:176 STA a:battler::money,X
    case 0xC2B83A: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // src/battle/init_enemy_stats.asm:177 LDY #enemy_data::exp
    case 0xC2B83D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000014, 2); else cpu.execute_instruction<0xA0>(0x000014, 3); return true;
    // src/battle/init_enemy_stats.asm:177 LDY #enemy_data::exp
    // Overlapping static entry reached from 0xC2B83D.
    case 0xC2B83F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:178 LDA [@VIRTUAL06],Y
    case 0xC2B840: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:179 PHA
    case 0xC2B842: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:180 INY
    case 0xC2B843: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:181 INY
    case 0xC2B844: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:182 LDA [@VIRTUAL06],Y
    case 0xC2B845: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:183 STA @VIRTUAL0A+2
    case 0xC2B847: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/init_enemy_stats.asm:184 PLA
    case 0xC2B849: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:185 STA @VIRTUAL0A
    case 0xC2B84A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:186 LDA @VIRTUAL02
    case 0xC2B84C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:187 CLC
    case 0xC2B84E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:188 ADC #battler::exp
    case 0xC2B84F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003F, 2); else cpu.execute_instruction<0x69>(0x00003F, 3); return true;
    // src/battle/init_enemy_stats.asm:188 ADC #battler::exp
    // Overlapping static entry reached from 0xC2B84F.
    case 0xC2B851: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/init_enemy_stats.asm:189 TAY
    case 0xC2B852: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B853: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B855: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B858: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B85A: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:191 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B85D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:192 LDY #enemy_data::initial_status
    case 0xC2B85F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/battle/init_enemy_stats.asm:192 LDY #enemy_data::initial_status
    // Overlapping static entry reached from 0xC2B85F.
    case 0xC2B861: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:193 LDA [@VIRTUAL06],Y
    case 0xC2B862: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:194 REP #PROC_FLAGS::ACCUM8
    case 0xC2B864: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:195 AND #$00FF
    case 0xC2B866: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC2B866.
    case 0xC2B868: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/init_enemy_stats.asm:196 CMP #INITIAL_STATUS::PSI_SHIELD
    case 0xC2B869: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/init_enemy_stats.asm:196 CMP #INITIAL_STATUS::PSI_SHIELD
    // Overlapping static entry reached from 0xC2B869.
    case 0xC2B86B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:197 BEQ @UNKNOWN1
    case 0xC2B86C: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:198 CMP #INITIAL_STATUS::PSI_SHIELD_POWER
    case 0xC2B86E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:198 CMP #INITIAL_STATUS::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2B86E.
    case 0xC2B870: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:199 BEQ @UNKNOWN2
    case 0xC2B871: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/battle/init_enemy_stats.asm:200 CMP #INITIAL_STATUS::SHIELD
    case 0xC2B873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/init_enemy_stats.asm:200 CMP #INITIAL_STATUS::SHIELD
    // Overlapping static entry reached from 0xC2B873.
    case 0xC2B875: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:201 BEQ @UNKNOWN3
    case 0xC2B876: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/init_enemy_stats.asm:202 CMP #INITIAL_STATUS::SHIELD_POWER
    case 0xC2B878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/init_enemy_stats.asm:202 CMP #INITIAL_STATUS::SHIELD_POWER
    // Overlapping static entry reached from 0xC2B878.
    case 0xC2B87A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:203 BEQ @UNKNOWN4
    case 0xC2B87B: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/init_enemy_stats.asm:204 CMP #INITIAL_STATUS::ASLEEP
    case 0xC2B87D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/init_enemy_stats.asm:204 CMP #INITIAL_STATUS::ASLEEP
    // Overlapping static entry reached from 0xC2B87D.
    case 0xC2B87F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:205 BEQ @UNKNOWN5
    case 0xC2B880: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/battle/init_enemy_stats.asm:206 CMP #INITIAL_STATUS::CANT_CONCENTRATE
    case 0xC2B882: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/init_enemy_stats.asm:206 CMP #INITIAL_STATUS::CANT_CONCENTRATE
    // Overlapping static entry reached from 0xC2B882.
    case 0xC2B884: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:207 BEQ @UNKNOWN6
    case 0xC2B885: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/init_enemy_stats.asm:208 CMP #INITIAL_STATUS::STRANGE
    case 0xC2B887: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/init_enemy_stats.asm:208 CMP #INITIAL_STATUS::STRANGE
    // Overlapping static entry reached from 0xC2B887.
    case 0xC2B889: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:209 BEQ @UNKNOWN7
    case 0xC2B88A: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/init_enemy_stats.asm:210 BRA @UNKNOWN8
    case 0xC2B88C: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/init_enemy_stats.asm:212 LDX #STATUS_6::PSI_SHIELD
    case 0xC2B88E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:212 LDX #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC2B88E.
    case 0xC2B890: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:213 LDA @VIRTUAL02
    case 0xC2B891: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:214 JSR SHIELDS_COMMON
    case 0xC2B893: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/init_enemy_stats.asm:215 BRA @UNKNOWN8
    case 0xC2B896: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/battle/init_enemy_stats.asm:217 LDX #STATUS_6::PSI_SHIELD_POWER
    case 0xC2B898: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_enemy_stats.asm:217 LDX #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2B898.
    case 0xC2B89A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:218 LDA @VIRTUAL02
    case 0xC2B89B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:219 JSR SHIELDS_COMMON
    case 0xC2B89D: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/init_enemy_stats.asm:220 BRA @UNKNOWN8
    case 0xC2B8A0: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/init_enemy_stats.asm:222 LDX #STATUS_6::SHIELD
    case 0xC2B8A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/init_enemy_stats.asm:222 LDX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC2B8A2.
    case 0xC2B8A4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:223 LDA @VIRTUAL02
    case 0xC2B8A5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:224 JSR SHIELDS_COMMON
    case 0xC2B8A7: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/init_enemy_stats.asm:225 BRA @UNKNOWN8
    case 0xC2B8AA: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/init_enemy_stats.asm:227 LDX #STATUS_6::SHIELD_POWER
    case 0xC2B8AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/init_enemy_stats.asm:227 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8AC.
    case 0xC2B8AE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:228 LDA @VIRTUAL02
    case 0xC2B8AF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:229 JSR SHIELDS_COMMON
    case 0xC2B8B1: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/init_enemy_stats.asm:230 BRA @UNKNOWN8
    case 0xC2B8B4: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/battle/init_enemy_stats.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8B6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:233 LDA #STATUS_2::ASLEEP
    case 0xC2B8B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/init_enemy_stats.asm:234 LDX @VIRTUAL02
    case 0xC2B8BA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:234 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B8B8.
    case 0xC2B8BB: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:235 STA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC2B8BC: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/battle/init_enemy_stats.asm:236 BRA @UNKNOWN8
    case 0xC2B8BF: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/init_enemy_stats.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:239 LDA #STATUS_4::CANT_CONCENTRATE4
    case 0xC2B8C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x00A604, 3); return true;
    // src/battle/init_enemy_stats.asm:240 LDX @VIRTUAL02
    case 0xC2B8C5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:240 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B8C3.
    case 0xC2B8C6: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:241 STA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC2B8C7: cpu.execute_instruction<0x9D>(0x000021, 3); return true;
    // src/battle/init_enemy_stats.asm:242 BRA @UNKNOWN8
    case 0xC2B8CA: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/battle/init_enemy_stats.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:245 LDA #STATUS_3::STRANGE
    case 0xC2B8CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/init_enemy_stats.asm:246 LDX @VIRTUAL02
    case 0xC2B8D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:246 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B8CE.
    case 0xC2B8D1: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:247 STA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC2B8D2: cpu.execute_instruction<0x9D>(0x000020, 3); return true;
    // src/battle/init_enemy_stats.asm:249 REP #PROC_FLAGS::ACCUM8
    case 0xC2B8D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_enemy_stats.asm:250 END_C_FUNCTION
    case 0xC2B8D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_enemy_stats.asm:250 END_C_FUNCTION
    case 0xC2B8D8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_overworld.asm (source_named).
bool execute_battle_init_overworld_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_overworld.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B717: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B719: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B71A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B71B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B71B.
    case 0xC0B71D: cpu.execute_instruction<0xFF>(0x48AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B71E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    case 0xC0B71F: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0B71D.
    case 0xC0B721: cpu.execute_instruction<0x51>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B722: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    // Overlapping static entry reached from 0xC0B721.
    case 0xC0B723: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B724: cpu.execute_instruction<0x4C>(0x00B7BC, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    // Overlapping static entry reached from 0xC0B723.
    case 0xC0B725: cpu.execute_instruction<0xBC>(0x00ADB7, 3); return true;
    // src/battle/init_overworld.asm:10 LDA DEBUG
    case 0xC0B727: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/battle/init_overworld.asm:10 LDA DEBUG
    // Overlapping static entry reached from 0xC0B725.
    case 0xC0B728: cpu.execute_instruction<0xF2>(0x000046, 2); return true;
    // src/battle/init_overworld.asm:11 BEQ @UNKNOWN1
    case 0xC0B72A: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/init_overworld.asm:12 JSL UNKNOWN_EFE708
    case 0xC0B72C: cpu.execute_instruction<0x22>(0xEFD02B, 4); return true;
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    case 0xC0B730: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC0B730.
    case 0xC0B732: cpu.execute_instruction<0xFF>(0x2249F0, 4); return true;
    // src/battle/init_overworld.asm:14 BEQ @UNKNOWN5
    case 0xC0B733: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    case 0xC0B735: cpu.execute_instruction<0x22>(0xC2656D, 4); return true;
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    // Overlapping static entry reached from 0xC0B732.
    case 0xC0B736: cpu.execute_instruction<0x6D>(0x00C265, 3); return true;
    // src/battle/init_overworld.asm:17 CMP #0
    case 0xC0B739: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:17 CMP #0
    // Overlapping static entry reached from 0xC0B739.
    case 0xC0B73B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_overworld.asm:18 BEQ @UNKNOWN2
    case 0xC0B73C: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/init_overworld.asm:19 JSL INSTANT_WIN_HANDLER
    case 0xC0B73E: cpu.execute_instruction<0x22>(0xC260E9, 4); return true;
    // src/battle/init_overworld.asm:20 STZ BATTLE_MODE
    case 0xC0B742: cpu.execute_instruction<0x9C>(0x005148, 3); return true;
    // src/battle/init_overworld.asm:21 BRA @UNKNOWN5
    case 0xC0B745: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/battle/init_overworld.asm:23 JSL INIT_BATTLE_COMMON
    case 0xC0B747: cpu.execute_instruction<0x22>(0xC054CF, 4); return true;
    // src/battle/init_overworld.asm:24 TAX
    case 0xC0B74B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:25 STX @LOCAL01
    case 0xC0B74C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/init_overworld.asm:26 JSL UNKNOWN_C07B52
    case 0xC0B74E: cpu.execute_instruction<0x22>(0xC07DA2, 4); return true;
    // src/battle/init_overworld.asm:27 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B752: cpu.execute_instruction<0x9C>(0x00611E, 3); return true;
    // src/battle/init_overworld.asm:28 LDA PSI_TELEPORT_DESTINATION
    case 0xC0B755: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/battle/init_overworld.asm:29 BNE @UNKNOWN4
    case 0xC0B758: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/init_overworld.asm:30 LDX @LOCAL01
    case 0xC0B75A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/init_overworld.asm:31 BEQ @UNKNOWN3
    case 0xC0B75C: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:32 LDA DEBUG
    case 0xC0B75E: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/battle/init_overworld.asm:33 BEQ @UNKNOWN8
    case 0xC0B761: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/battle/init_overworld.asm:34 JSL DEBUG_CHECK_VIEW_CHARACTER_MODE
    case 0xC0B763: cpu.execute_instruction<0x22>(0xEFD069, 4); return true;
    // src/battle/init_overworld.asm:35 CMP #0
    case 0xC0B767: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:35 CMP #0
    // Overlapping static entry reached from 0xC0B767.
    case 0xC0B769: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_overworld.asm:36 BNE @UNKNOWN8
    case 0xC0B76A: cpu.execute_instruction<0xD0>(0x000050, 2); return true;
    // src/battle/init_overworld.asm:38 JSL RELOAD_MAP
    case 0xC0B76C: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/battle/init_overworld.asm:39 LDX #1
    case 0xC0B770: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_overworld.asm:39 LDX #1
    // Overlapping static entry reached from 0xC0B770.
    case 0xC0B772: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/init_overworld.asm:40 TXA
    case 0xC0B773: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:41 JSL FADE_IN
    case 0xC0B774: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/battle/init_overworld.asm:42 BRA @UNKNOWN5
    case 0xC0B778: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/init_overworld.asm:44 JSL TELEPORT_MAINLOOP
    case 0xC0B77A: cpu.execute_instruction<0x22>(0xC0EA63, 4); return true;
    // src/battle/init_overworld.asm:46 LDA #0
    case 0xC0B77E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:46 LDA #0
    // Overlapping static entry reached from 0xC0B77E.
    case 0xC0B780: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/init_overworld.asm:47 STA @LOCAL00
    case 0xC0B781: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:48 BRA @UNKNOWN7
    case 0xC0B783: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/battle/init_overworld.asm:50 ASL
    case 0xC0B785: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:51 TAX
    case 0xC0B786: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0B787: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0B787.
    case 0xC0B789: cpu.execute_instruction<0xFF>(0x2C9C9D, 4); return true;
    // src/battle/init_overworld.asm:53 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0B78A: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/battle/init_overworld.asm:54 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0B78D: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/battle/init_overworld.asm:54 STZ ENTITY_PATHFINDING_STATES,X
    // Overlapping static entry reached from 0xC0B7C8.
    case 0xC0B78E: cpu.execute_instruction<0x5C>(0x188A30, 4); return true;
    // src/battle/init_overworld.asm:55 TXA
    case 0xC0B790: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:56 CLC
    case 0xC0B791: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0B792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0B792.
    case 0xC0B794: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/battle/init_overworld.asm:58 TAX
    case 0xC0B795: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:59 LDA __BSS_START__,X
    case 0xC0B796: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:60 AND #$7FFF
    case 0xC0B799: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/battle/init_overworld.asm:60 AND #$7FFF
    // Overlapping static entry reached from 0xC0B799.
    case 0xC0B79B: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/battle/init_overworld.asm:61 STA __BSS_START__,X
    case 0xC0B79C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:62 LDA @LOCAL00
    case 0xC0B79F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:63 INC
    case 0xC0B7A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:64 STA @LOCAL00
    case 0xC0B7A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:66 CMP #23
    case 0xC0B7A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/battle/init_overworld.asm:66 CMP #23
    // Overlapping static entry reached from 0xC0B7A4.
    case 0xC0B7A6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_overworld.asm:67 BNE @UNKNOWN6
    case 0xC0B7A7: cpu.execute_instruction<0xD0>(0x0000DC, 2); return true;
    // src/battle/init_overworld.asm:68 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B7A9: cpu.execute_instruction<0x9C>(0x00611E, 3); return true;
    // src/battle/init_overworld.asm:69 JSL UNKNOWN_C09451
    case 0xC0B7AC: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/battle/init_overworld.asm:70 LDA #120
    case 0xC0B7B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/init_overworld.asm:70 LDA #120
    // Overlapping static entry reached from 0xC0B7B0.
    case 0xC0B7B2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/init_overworld.asm:71 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0B7B3: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    case 0xC0B7B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    // Overlapping static entry reached from 0xC0B7B6.
    case 0xC0B7B8: cpu.execute_instruction<0xFF>(0x513C8D, 4); return true;
    // src/battle/init_overworld.asm:73 STA TOUCHED_ENEMY
    case 0xC0B7B9: cpu.execute_instruction<0x8D>(0x00513C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7BC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7BD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_player_stats.asm (source_named).
bool execute_battle_init_player_stats_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_player_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B8D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B8DE.
    case 0xC2B8E0: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:12 TXY
    case 0xC2B8E3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:13 STY @LOCAL03
    case 0xC2B8E4: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:14 STA @VIRTUAL04
    case 0xC2B8E6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/init_player_stats.asm:15 DEC
    case 0xC2B8E8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC2B8E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/init_player_stats.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B8E9.
    case 0xC2B8EB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/init_player_stats.asm:17 JSL MULT168
    case 0xC2B8EC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/init_player_stats.asm:18 CLC
    case 0xC2B8F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2B8F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/init_player_stats.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2B8F1.
    case 0xC2B8F3: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/battle/init_player_stats.asm:20 STA @VIRTUAL02
    case 0xC2B8F4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    case 0xC2B8F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    case 0xC2B8FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC2B8F8.
    case 0xC2B8FB: cpu.execute_instruction<0x0E>(0x004EA2, 3); return true;
    // src/battle/init_player_stats.asm:23 LDX #.SIZEOF(battler)
    case 0xC2B8FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/init_player_stats.asm:23 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B8FC.
    case 0xC2B8FE: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/init_player_stats.asm:24 LDY @LOCAL03
    case 0xC2B8FF: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC2B901: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:26 TYA
    case 0xC2B903: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:27 JSL MEMSET16
    case 0xC2B904: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/init_player_stats.asm:28 LDA @VIRTUAL04
    case 0xC2B908: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/init_player_stats.asm:29 LDY @LOCAL03
    case 0xC2B90A: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:30 STA a:battler::id,Y
    case 0xC2B90C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/init_player_stats.asm:31 TYX
    case 0xC2B90F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:32 STZ a:battler::sprite,X
    case 0xC2B910: cpu.execute_instruction<0x9E>(0x000002, 3); return true;
    // src/battle/init_player_stats.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B913: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:34 LDA #1
    case 0xC2B915: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/battle/init_player_stats.asm:35 STA a:battler::consciousness,Y
    case 0xC2B917: cpu.execute_instruction<0x99>(0x00000C, 3); return true;
    // src/battle/init_player_stats.asm:35 STA a:battler::consciousness,Y
    // Overlapping static entry reached from 0xC2B915.
    case 0xC2B918: cpu.execute_instruction<0x0C>(0x00BB00, 3); return true;
    // src/battle/init_player_stats.asm:36 TYX
    case 0xC2B91A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:37 STZ a:battler::ally_or_enemy,X
    case 0xC2B91B: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/battle/init_player_stats.asm:38 TYX
    case 0xC2B91E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:39 STZ a:battler::npc_id,X
    case 0xC2B91F: cpu.execute_instruction<0x9E>(0x00000F, 3); return true;
    // src/battle/init_player_stats.asm:40 LDX @VIRTUAL02
    case 0xC2B922: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC2B924: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:42 LDA a:char_struct::current_hp,X
    case 0xC2B926: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/init_player_stats.asm:43 STA a:battler::hp,Y
    case 0xC2B929: cpu.execute_instruction<0x99>(0x000011, 3); return true;
    // src/battle/init_player_stats.asm:44 LDX @VIRTUAL02
    case 0xC2B92C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:45 LDA a:char_struct::current_hp_target,X
    case 0xC2B92E: cpu.execute_instruction<0xBD>(0x000046, 3); return true;
    // src/battle/init_player_stats.asm:46 STA a:battler::hp_target,Y
    case 0xC2B931: cpu.execute_instruction<0x99>(0x000013, 3); return true;
    // src/battle/init_player_stats.asm:47 LDX @VIRTUAL02
    case 0xC2B934: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:48 LDA a:char_struct::max_hp,X
    case 0xC2B936: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // src/battle/init_player_stats.asm:49 STA a:battler::hp_max,Y
    case 0xC2B939: cpu.execute_instruction<0x99>(0x000015, 3); return true;
    // src/battle/init_player_stats.asm:50 LDX @VIRTUAL02
    case 0xC2B93C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:51 LDA a:char_struct::current_pp,X
    case 0xC2B93E: cpu.execute_instruction<0xBD>(0x00004A, 3); return true;
    // src/battle/init_player_stats.asm:52 STA a:battler::pp,Y
    case 0xC2B941: cpu.execute_instruction<0x99>(0x000017, 3); return true;
    // src/battle/init_player_stats.asm:53 LDX @VIRTUAL02
    case 0xC2B944: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:54 LDA a:char_struct::current_pp_target,X
    case 0xC2B946: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/battle/init_player_stats.asm:55 STA a:battler::pp_target,Y
    case 0xC2B949: cpu.execute_instruction<0x99>(0x000019, 3); return true;
    // src/battle/init_player_stats.asm:56 LDX @VIRTUAL02
    case 0xC2B94C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:57 LDA a:char_struct::max_pp,X
    case 0xC2B94E: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/battle/init_player_stats.asm:58 STA a:battler::pp_max,Y
    case 0xC2B951: cpu.execute_instruction<0x99>(0x00001B, 3); return true;
    // src/battle/init_player_stats.asm:59 TYA
    case 0xC2B954: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:60 CLC
    case 0xC2B955: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:61 ADC #battler::afflictions
    case 0xC2B956: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/battle/init_player_stats.asm:61 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC2B956.
    case 0xC2B958: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B959: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B961: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/init_player_stats.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC2B963: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B965: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B967: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B969: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B96B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/init_player_stats.asm:65 LDA @VIRTUAL02
    case 0xC2B96D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:66 CLC
    case 0xC2B96F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:67 ADC #char_struct::afflictions
    case 0xC2B970: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/battle/init_player_stats.asm:67 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2B970.
    case 0xC2B972: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B973: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B975: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B976: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B978: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B979: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B97B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/init_player_stats.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2B97D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B97F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B981: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B983: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B985: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/init_player_stats.asm:71 LDA #AFFLICTION_GROUP_COUNT
    case 0xC2B987: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/init_player_stats.asm:71 LDA #AFFLICTION_GROUP_COUNT
    // Overlapping static entry reached from 0xC2B987.
    case 0xC2B989: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/init_player_stats.asm:72 JSL MEMCPY24
    case 0xC2B98A: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/battle/init_player_stats.asm:73 LDX @VIRTUAL02
    case 0xC2B98E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B990: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:75 LDA a:char_struct::offense,X
    case 0xC2B992: cpu.execute_instruction<0xBD>(0x000014, 3); return true;
    // src/battle/init_player_stats.asm:76 LDY @LOCAL03
    case 0xC2B995: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:77 STA a:battler::base_offense,Y
    case 0xC2B997: cpu.execute_instruction<0x99>(0x000032, 3); return true;
    // src/battle/init_player_stats.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC2B99A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:79 AND #$00FF
    case 0xC2B99C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC2B99C.
    case 0xC2B99E: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:80 STA a:battler::offense,Y
    case 0xC2B99F: cpu.execute_instruction<0x99>(0x000026, 3); return true;
    // src/battle/init_player_stats.asm:81 LDX @VIRTUAL02
    case 0xC2B9A2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:83 LDA a:char_struct::defense,X
    case 0xC2B9A6: cpu.execute_instruction<0xBD>(0x000015, 3); return true;
    // src/battle/init_player_stats.asm:84 STA a:battler::base_defense,Y
    case 0xC2B9A9: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // src/battle/init_player_stats.asm:85 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:86 AND #$00FF
    case 0xC2B9AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC2B9AE.
    case 0xC2B9B0: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:87 STA a:battler::defense,Y
    case 0xC2B9B1: cpu.execute_instruction<0x99>(0x000028, 3); return true;
    // src/battle/init_player_stats.asm:88 LDX @VIRTUAL02
    case 0xC2B9B4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9B6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:90 LDA a:char_struct::speed,X
    case 0xC2B9B8: cpu.execute_instruction<0xBD>(0x000016, 3); return true;
    // src/battle/init_player_stats.asm:91 STA a:battler::base_speed,Y
    case 0xC2B9BB: cpu.execute_instruction<0x99>(0x000034, 3); return true;
    // src/battle/init_player_stats.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:93 AND #$00FF
    case 0xC2B9C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2B9C0.
    case 0xC2B9C2: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:94 STA a:battler::speed,Y
    case 0xC2B9C3: cpu.execute_instruction<0x99>(0x00002A, 3); return true;
    // src/battle/init_player_stats.asm:95 LDX @VIRTUAL02
    case 0xC2B9C6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:97 LDA a:char_struct::guts,X
    case 0xC2B9CA: cpu.execute_instruction<0xBD>(0x000017, 3); return true;
    // src/battle/init_player_stats.asm:98 STA a:battler::base_guts,Y
    case 0xC2B9CD: cpu.execute_instruction<0x99>(0x000035, 3); return true;
    // src/battle/init_player_stats.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9D0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:100 AND #$00FF
    case 0xC2B9D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC2B9D2.
    case 0xC2B9D4: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:101 STA a:battler::guts,Y
    case 0xC2B9D5: cpu.execute_instruction<0x99>(0x00002C, 3); return true;
    // src/battle/init_player_stats.asm:102 LDX @VIRTUAL02
    case 0xC2B9D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:104 LDA a:char_struct::luck,X
    case 0xC2B9DC: cpu.execute_instruction<0xBD>(0x000018, 3); return true;
    // src/battle/init_player_stats.asm:105 STA a:battler::base_luck,Y
    case 0xC2B9DF: cpu.execute_instruction<0x99>(0x000036, 3); return true;
    // src/battle/init_player_stats.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:107 AND #$00FF
    case 0xC2B9E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC2B9E4.
    case 0xC2B9E6: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:108 STA a:battler::luck,Y
    case 0xC2B9E7: cpu.execute_instruction<0x99>(0x00002E, 3); return true;
    // src/battle/init_player_stats.asm:109 LDX @VIRTUAL02
    case 0xC2B9EA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:110 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:111 LDA a:char_struct::vitality,X
    case 0xC2B9EE: cpu.execute_instruction<0xBD>(0x000019, 3); return true;
    // src/battle/init_player_stats.asm:112 STA a:battler::vitality,Y
    case 0xC2B9F1: cpu.execute_instruction<0x99>(0x000030, 3); return true;
    // src/battle/init_player_stats.asm:113 LDX @VIRTUAL02
    case 0xC2B9F4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:114 LDA a:char_struct::iq,X
    case 0xC2B9F6: cpu.execute_instruction<0xBD>(0x00001A, 3); return true;
    // src/battle/init_player_stats.asm:115 STA a:battler::iq,Y
    case 0xC2B9F9: cpu.execute_instruction<0x99>(0x000031, 3); return true;
    // src/battle/init_player_stats.asm:116 LDX @VIRTUAL02
    case 0xC2B9FC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:117 LDA a:char_struct::fire_resist,X
    case 0xC2B9FE: cpu.execute_instruction<0xBD>(0x000051, 3); return true;
    // src/battle/init_player_stats.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2BA01: cpu.execute_instruction<0x22>(0xC2B5AD, 4); return true;
    // src/battle/init_player_stats.asm:119 LDY @LOCAL03
    case 0xC2BA05: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:120 STA a:battler::fire_resist,Y
    case 0xC2BA07: cpu.execute_instruction<0x99>(0x00003A, 3); return true;
    // src/battle/init_player_stats.asm:121 LDX @VIRTUAL02
    case 0xC2BA0A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:122 LDA a:char_struct::freeze_resist,X
    case 0xC2BA0C: cpu.execute_instruction<0xBD>(0x000052, 3); return true;
    // src/battle/init_player_stats.asm:123 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2BA0F: cpu.execute_instruction<0x22>(0xC2B5AD, 4); return true;
    // src/battle/init_player_stats.asm:124 LDY @LOCAL03
    case 0xC2BA13: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:125 STA a:battler::freeze_resist,Y
    case 0xC2BA15: cpu.execute_instruction<0x99>(0x000038, 3); return true;
    // src/battle/init_player_stats.asm:126 LDX @VIRTUAL02
    case 0xC2BA18: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:127 LDA a:char_struct::flash_resist,X
    case 0xC2BA1A: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // src/battle/init_player_stats.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA1D: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_player_stats.asm:129 LDY @LOCAL03
    case 0xC2BA21: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:130 STA a:battler::flash_resist,Y
    case 0xC2BA23: cpu.execute_instruction<0x99>(0x000039, 3); return true;
    // src/battle/init_player_stats.asm:131 LDX @VIRTUAL02
    case 0xC2BA26: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:132 LDA a:char_struct::paralysis_resist,X
    case 0xC2BA28: cpu.execute_instruction<0xBD>(0x000054, 3); return true;
    // src/battle/init_player_stats.asm:133 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA2B: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_player_stats.asm:134 LDY @LOCAL03
    case 0xC2BA2F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:135 STA a:battler::paralysis_resist,Y
    case 0xC2BA31: cpu.execute_instruction<0x99>(0x000037, 3); return true;
    // src/battle/init_player_stats.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:137 LDA @VIRTUAL02
    case 0xC2BA36: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:138 CLC
    case 0xC2BA38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:139 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC2BA39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000055, 2); else cpu.execute_instruction<0x69>(0x000055, 3); return true;
    // src/battle/init_player_stats.asm:139 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC2BA39.
    case 0xC2BA3B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/init_player_stats.asm:140 TAX
    case 0xC2BA3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:141 STX @LOCAL02
    case 0xC2BA3D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/init_player_stats.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:143 LDA __BSS_START__,X
    case 0xC2BA41: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/init_player_stats.asm:144 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA44: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_player_stats.asm:145 LDY @LOCAL03
    case 0xC2BA48: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:146 STA a:battler::hypnosis_resist,Y
    case 0xC2BA4A: cpu.execute_instruction<0x99>(0x00003C, 3); return true;
    // src/battle/init_player_stats.asm:147 LDX @LOCAL02
    case 0xC2BA4D: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/init_player_stats.asm:148 LDA __BSS_START__,X
    case 0xC2BA4F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/init_player_stats.asm:149 STA @VIRTUAL00
    case 0xC2BA52: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/init_player_stats.asm:150 LDA #3
    case 0xC2BA54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003803, 3); return true;
    // src/battle/init_player_stats.asm:151 SEC
    case 0xC2BA56: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:152 SBC @VIRTUAL00
    case 0xC2BA57: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/battle/init_player_stats.asm:153 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA59: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/init_player_stats.asm:154 LDY @LOCAL03
    case 0xC2BA5D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:155 STA a:battler::brainshock_resist,Y
    case 0xC2BA5F: cpu.execute_instruction<0x99>(0x00003B, 3); return true;
    // src/battle/init_player_stats.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA62: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:157 LDA @VIRTUAL04
    case 0xC2BA64: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/init_player_stats.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:159 DEC
    case 0xC2BA68: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:160 STA a:battler::row,Y
    case 0xC2BA69: cpu.execute_instruction<0x99>(0x000010, 3); return true;
    // src/battle/init_player_stats.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA6C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_player_stats.asm:162 END_C_FUNCTION
    case 0xC2BA6E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_player_stats.asm:162 END_C_FUNCTION
    case 0xC2BA6F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_scripted.asm (source_named).
bool execute_battle_init_scripted_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_scripted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22E5D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E5F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E60: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E61: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC22E62.
    case 0xC22E64: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E65: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E66: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    case 0xC22E67: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC22E64.
    case 0xC22E68: cpu.execute_instruction<0x10>(0x00008D, 2); return true;
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    case 0xC22E69: cpu.execute_instruction<0x8D>(0x004E12, 3); return true;
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC22E68.
    case 0xC22E6A: cpu.execute_instruction<0x12>(0x00004E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22E6C.
    case 0xC22E6E: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E6F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22E6E.
    case 0xC22E70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22E71.
    case 0xC22E73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E74: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/init_scripted.asm:13 LDA @LOCAL01
    case 0xC22E76: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:14 ASL
    case 0xC22E78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:15 ASL
    case 0xC22E79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:16 ASL
    case 0xC22E7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:17 CLC
    case 0xC22E7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:18 ADC @VIRTUAL0A
    case 0xC22E7C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/init_scripted.asm:19 STA @VIRTUAL0A
    case 0xC22E7E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC22E80.
    case 0xC22E82: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E83: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E85: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E86: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E88: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E8A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/battle/init_scripted.asm:21 STZ ENEMIES_IN_BATTLE
    case 0xC22E8C: cpu.execute_instruction<0x9C>(0x00A18C, 3); return true;
    // src/battle/init_scripted.asm:22 BRA @UNKNOWN2
    case 0xC22E8F: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/battle/init_scripted.asm:24 LDA ENEMIES_IN_BATTLE
    case 0xC22E91: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/battle/init_scripted.asm:25 ASL
    case 0xC22E94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:26 TAX
    case 0xC22E95: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:27 LDY #1
    case 0xC22E96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:27 LDY #1
    // Overlapping static entry reached from 0xC22E96.
    case 0xC22E98: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_scripted.asm:28 LDA [@VIRTUAL06],Y
    case 0xC22E99: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_scripted.asm:29 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC22E9B: cpu.execute_instruction<0x9D>(0x00A18E, 3); return true;
    // src/battle/init_scripted.asm:30 INC ENEMIES_IN_BATTLE
    case 0xC22E9E: cpu.execute_instruction<0xEE>(0x00A18C, 3); return true;
    // src/battle/init_scripted.asm:32 LDA @LOCAL00
    case 0xC22EA1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/init_scripted.asm:33 TAX
    case 0xC22EA3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:34 DEC
    case 0xC22EA4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:35 STA @LOCAL00
    case 0xC22EA5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_scripted.asm:36 CPX #0
    case 0xC22EA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:36 CPX #0
    // Overlapping static entry reached from 0xC22EA7.
    case 0xC22EA9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_scripted.asm:37 BNE @UNKNOWN0
    case 0xC22EAA: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/battle/init_scripted.asm:38 LDA #3
    case 0xC22EAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/init_scripted.asm:38 LDA #3
    // Overlapping static entry reached from 0xC22EAC.
    case 0xC22EAE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/init_scripted.asm:39 CLC
    case 0xC22EAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:40 ADC @VIRTUAL06
    case 0xC22EB0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/init_scripted.asm:41 STA @VIRTUAL06
    case 0xC22EB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EB4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EB6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EB8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EBA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/init_scripted.asm:44 LDA [@VIRTUAL0A]
    case 0xC22EBC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/init_scripted.asm:45 AND #$00FF
    case 0xC22EBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_scripted.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC22EBE.
    case 0xC22EC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/init_scripted.asm:46 STA @LOCAL00
    case 0xC22EC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_scripted.asm:47 CMP #$00FF
    case 0xC22EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/init_scripted.asm:47 CMP #$00FF
    // Overlapping static entry reached from 0xC22EC3.
    case 0xC22EC5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_scripted.asm:48 BNE @UNKNOWN1
    case 0xC22EC6: cpu.execute_instruction<0xD0>(0x0000D9, 2); return true;
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    case 0xC22EC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    // Overlapping static entry reached from 0xC22EC8.
    case 0xC22ECA: cpu.execute_instruction<0xFF>(0x51488D, 4); return true;
    // src/battle/init_scripted.asm:50 STA BATTLE_MODE
    case 0xC22ECB: cpu.execute_instruction<0x8D>(0x005148, 3); return true;
    // src/battle/init_scripted.asm:51 JSL BATTLE_SWIRL_SEQUENCE
    case 0xC22ECE: cpu.execute_instruction<0x22>(0xC2E7F9, 4); return true;
    // src/battle/init_scripted.asm:52 BRA @UNKNOWN4
    case 0xC22ED2: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/init_scripted.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC22ED4: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/battle/init_scripted.asm:55 JSL UNKNOWN_C4A7B0
    case 0xC22ED8: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/battle/init_scripted.asm:57 JSL UNKNOWN_C2E9C8
    case 0xC22EDC: cpu.execute_instruction<0x22>(0xC2E8E1, 4); return true;
    // src/battle/init_scripted.asm:58 CMP #0
    case 0xC22EE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:58 CMP #0
    // Overlapping static entry reached from 0xC22EE0.
    case 0xC22EE2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_scripted.asm:59 BNE @UNKNOWN3
    case 0xC22EE3: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // src/battle/init_scripted.asm:60 JSL INIT_BATTLE_COMMON
    case 0xC22EE5: cpu.execute_instruction<0x22>(0xC054CF, 4); return true;
    // src/battle/init_scripted.asm:61 TAX
    case 0xC22EE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:62 STX @LOCAL01
    case 0xC22EEA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:63 LDA PSI_TELEPORT_DESTINATION
    case 0xC22EEC: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/battle/init_scripted.asm:64 BNE @UNKNOWN6
    case 0xC22EEF: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/init_scripted.asm:65 CPX #0
    case 0xC22EF1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:65 CPX #0
    // Overlapping static entry reached from 0xC22EF1.
    case 0xC22EF3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_scripted.asm:66 BEQ @UNKNOWN5
    case 0xC22EF4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/init_scripted.asm:67 LDA #1
    case 0xC22EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:67 LDA #1
    // Overlapping static entry reached from 0xC22EF6.
    case 0xC22EF8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/init_scripted.asm:68 BRA @RETURN
    case 0xC22EF9: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/battle/init_scripted.asm:70 JSL RELOAD_MAP
    case 0xC22EFB: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/battle/init_scripted.asm:71 LDX #1
    case 0xC22EFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:71 LDX #1
    // Overlapping static entry reached from 0xC22EFF.
    case 0xC22F01: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/init_scripted.asm:72 TXA
    case 0xC22F02: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:73 JSL FADE_IN
    case 0xC22F03: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/battle/init_scripted.asm:74 BRA @UNKNOWN7
    case 0xC22F07: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/init_scripted.asm:76 JSL TELEPORT_MAINLOOP
    case 0xC22F09: cpu.execute_instruction<0x22>(0xC0EA63, 4); return true;
    // src/battle/init_scripted.asm:77 LDX @LOCAL01
    case 0xC22F0D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:78 BEQ @UNKNOWN7
    case 0xC22F0F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/init_scripted.asm:79 LDA #1
    case 0xC22F11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:79 LDA #1
    // Overlapping static entry reached from 0xC22F11.
    case 0xC22F13: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/init_scripted.asm:80 BRA @RETURN
    case 0xC22F14: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/init_scripted.asm:82 JSL UNKNOWN_C3EE4D
    case 0xC22F16: cpu.execute_instruction<0x22>(0xC3EA14, 4); return true;
    // src/battle/init_scripted.asm:83 LDA CURRENT_BATTLE_GROUP
    case 0xC22F1A: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    case 0xC22F1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0001C0, 3); return true;
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    // Overlapping static entry reached from 0xC22F1D.
    case 0xC22F1F: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    case 0xC22F20: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    // Overlapping static entry reached from 0xC22F1F.
    case 0xC22F21: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/battle/init_scripted.asm:86 LDA #120
    case 0xC22F22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22F21.
    case 0xC22F23: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22F22.
    case 0xC22F24: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/init_scripted.asm:87 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC22F25: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/battle/init_scripted.asm:89 LDA #0
    case 0xC22F28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:89 LDA #0
    // Overlapping static entry reached from 0xC22F28.
    case 0xC22F2A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC22F2B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC22F2C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/instant_win_check.asm (source_named).
bool execute_battle_instant_win_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2656D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC2656F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26570: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26571: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC26571.
    case 0xC26573: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26574: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:17 LDA BATTLE_INITIATIVE
    case 0xC26575: cpu.execute_instruction<0xAD>(0x005142, 3); return true;
    // src/battle/instant_win_check.asm:17 LDA BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC26573.
    case 0xC26577: cpu.execute_instruction<0x51>(0x0000C9, 2); return true;
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC26578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC26577.
    case 0xC26579: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC26578.
    case 0xC2657A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_check.asm:19 BNE @UNKNOWN0
    case 0xC2657B: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:20 LDA #0
    case 0xC2657D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:20 LDA #0
    // Overlapping static entry reached from 0xC2657D.
    case 0xC2657F: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:21 JMP @UNKNOWN37
    case 0xC26580: cpu.execute_instruction<0x4C>(0x0068C8, 3); return true;
    // src/battle/instant_win_check.asm:23 STZ @LOCAL09
    case 0xC26583: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:24 STZ @LOCAL08
    case 0xC26585: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:25 LDA #$FFFF
    case 0xC26587: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/instant_win_check.asm:25 LDA #$FFFF
    // Overlapping static entry reached from 0xC26587.
    case 0xC26589: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/battle/instant_win_check.asm:26 STA @VIRTUAL02
    case 0xC2658A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:27 STA @LOCAL07
    case 0xC2658C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:27 STA @LOCAL07
    // Overlapping static entry reached from 0xC26589.
    case 0xC2658D: cpu.execute_instruction<0x1E>(0x0002A5, 3); return true;
    // src/battle/instant_win_check.asm:28 LDA @VIRTUAL02
    case 0xC2658E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:29 STA @VIRTUAL04
    case 0xC26590: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:30 LDY #0
    case 0xC26592: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:30 LDY #0
    // Overlapping static entry reached from 0xC26592.
    case 0xC26594: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/instant_win_check.asm:31 STY @LOCAL06
    case 0xC26595: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:32 JMP @UNKNOWN7
    case 0xC26597: cpu.execute_instruction<0x4C>(0x00665F, 3); return true;
    // src/battle/instant_win_check.asm:35 TYA
    case 0xC2659A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:36 CLC
    case 0xC2659B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:37 ADC #.LOWORD(GAME_STATE)
    case 0xC2659C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/instant_win_check.asm:37 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2659C.
    case 0xC2659E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:38 TAX
    case 0xC2659F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:39 LDA a:game_state::party_members,X
    case 0xC265A0: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/instant_win_check.asm:43 AND #$00FF
    case 0xC265A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC265A3.
    case 0xC265A5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:44 TAX
    case 0xC265A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:45 STX @LOCAL05
    case 0xC265A7: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:46 CPX #1
    case 0xC265A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:46 CPX #1
    // Overlapping static entry reached from 0xC265A9.
    case 0xC265AB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC265AC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC265AE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC265B0: cpu.execute_instruction<0x4C>(0x00665A, 3); return true;
    // src/battle/instant_win_check.asm:48 CPX #4
    case 0xC265B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/instant_win_check.asm:48 CPX #4
    // Overlapping static entry reached from 0xC265B3.
    case 0xC265B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC265B6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC265B8: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC265BA: cpu.execute_instruction<0x4C>(0x00665A, 3); return true;
    // src/battle/instant_win_check.asm:50 TXA
    case 0xC265BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:51 DEC
    case 0xC265BE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC265BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC265BF.
    case 0xC265C1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:53 JSL MULT168
    case 0xC265C2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:54 TAX
    case 0xC265C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:55 LDA PARTY_CHARACTERS+char_struct::speed,X
    case 0xC265C7: cpu.execute_instruction<0xBD>(0x009C95, 3); return true;
    // src/battle/instant_win_check.asm:56 AND #$00FF
    case 0xC265CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC265CA.
    case 0xC265CC: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/instant_win_check.asm:57 CMP @VIRTUAL04
    case 0xC265CD: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:58 BCS @UNKNOWN4
    case 0xC265CF: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:59 STA @VIRTUAL04
    case 0xC265D1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:61 LDX @LOCAL05
    case 0xC265D3: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:62 TXA
    case 0xC265D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:63 DEC
    case 0xC265D6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC265D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC265D7.
    case 0xC265D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:65 JSL MULT168
    case 0xC265DA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:66 TAX
    case 0xC265DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:67 LDA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC265DF: cpu.execute_instruction<0xBD>(0x009C93, 3); return true;
    // src/battle/instant_win_check.asm:68 AND #$00FF
    case 0xC265E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC265E2.
    case 0xC265E4: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/instant_win_check.asm:69 CMP @VIRTUAL02
    case 0xC265E5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:70 BCS @UNKNOWN5
    case 0xC265E7: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:71 STA @VIRTUAL02
    case 0xC265E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:72 STA @LOCAL07
    case 0xC265EB: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:74 LDX @LOCAL05
    case 0xC265ED: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:75 TXA
    case 0xC265EF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:76 DEC
    case 0xC265F0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC265F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC265F1.
    case 0xC265F3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:78 JSL MULT168
    case 0xC265F4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:79 STA @LOCAL04
    case 0xC265F8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:80 CLC
    case 0xC265FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:81 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC265FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/battle/instant_win_check.asm:81 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC265FB.
    case 0xC265FD: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/battle/instant_win_check.asm:82 TAX
    case 0xC265FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:83 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC265FF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:83 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC265FD.
    case 0xC26600: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/instant_win_check.asm:84 AND #$00FF
    case 0xC26602: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC26602.
    case 0xC26604: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:85 STA @LOCAL03
    case 0xC26605: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:86 CMP #STATUS_0::UNCONSCIOUS
    case 0xC26607: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:86 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC26607.
    case 0xC26609: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:87 BEQ @UNKNOWN6
    case 0xC2660A: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/battle/instant_win_check.asm:88 LDA @LOCAL03
    case 0xC2660C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:89 CMP #STATUS_0::DIAMONDIZED
    case 0xC2660E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/instant_win_check.asm:89 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC2660E.
    case 0xC26610: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:90 BEQ @UNKNOWN6
    case 0xC26611: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/battle/instant_win_check.asm:91 LDA @LOCAL03
    case 0xC26613: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:92 CMP #STATUS_0::PARALYZED
    case 0xC26615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/instant_win_check.asm:92 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC26615.
    case 0xC26617: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:93 BEQ @UNKNOWN6
    case 0xC26618: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/instant_win_check.asm:94 LDA @LOCAL03
    case 0xC2661A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:95 CMP #STATUS_0::NAUSEOUS
    case 0xC2661C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/instant_win_check.asm:95 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC2661C.
    case 0xC2661E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:96 BEQ @UNKNOWN6
    case 0xC2661F: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/battle/instant_win_check.asm:97 LDA @LOCAL03
    case 0xC26621: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:98 CMP #STATUS_0::POISONED
    case 0xC26623: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/instant_win_check.asm:98 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC26623.
    case 0xC26625: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:99 BEQ @UNKNOWN6
    case 0xC26626: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/instant_win_check.asm:100 LDA @LOCAL03
    case 0xC26628: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:101 CMP #STATUS_0::SUNSTROKE
    case 0xC2662A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/instant_win_check.asm:101 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC2662A.
    case 0xC2662C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:102 BEQ @UNKNOWN6
    case 0xC2662D: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/battle/instant_win_check.asm:103 LDA @LOCAL03
    case 0xC2662F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:104 CMP #STATUS_0::COLD
    case 0xC26631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/instant_win_check.asm:104 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC26631.
    case 0xC26633: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:105 BEQ @UNKNOWN6
    case 0xC26634: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/instant_win_check.asm:106 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC26636: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:107 AND #$00FF
    case 0xC26639: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC26639.
    case 0xC2663B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:108 TAX
    case 0xC2663C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:109 CPX #STATUS_1::MUSHROOMIZED
    case 0xC2663D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:109 CPX #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC2663D.
    case 0xC2663F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:110 BEQ @UNKNOWN6
    case 0xC26640: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:111 CPX #STATUS_1::POSSESSED
    case 0xC26642: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/instant_win_check.asm:111 CPX #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC26642.
    case 0xC26644: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:112 BEQ @UNKNOWN6
    case 0xC26645: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/instant_win_check.asm:113 LDA @LOCAL08
    case 0xC26647: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:114 ASL
    case 0xC26649: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:115 PHA
    case 0xC2664A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:116 LDA @LOCAL04
    case 0xC2664B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:117 TAX
    case 0xC2664D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:118 LDA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC2664E: cpu.execute_instruction<0xBD>(0x009C93, 3); return true;
    // src/battle/instant_win_check.asm:119 AND #$00FF
    case 0xC26651: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC26651.
    case 0xC26653: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/battle/instant_win_check.asm:120 PLX
    case 0xC26654: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:121 STA INSTANT_WIN_SORTED_OFFENSE,X
    case 0xC26655: cpu.execute_instruction<0x9D>(0x00AC4B, 3); return true;
    // src/battle/instant_win_check.asm:122 INC @LOCAL08
    case 0xC26658: cpu.execute_instruction<0xE6>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:124 LDY @LOCAL06
    case 0xC2665A: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:125 INY
    case 0xC2665C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:126 STY @LOCAL06
    case 0xC2665D: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:128 CPY #6
    case 0xC2665F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/instant_win_check.asm:128 CPY #6
    // Overlapping static entry reached from 0xC2665F.
    case 0xC26661: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26662: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26664: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26666: cpu.execute_instruction<0x4C>(0x00659A, 3); return true;
    // src/battle/instant_win_check.asm:130 LDA ENEMIES_IN_BATTLE
    case 0xC26669: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:131 CMP @LOCAL08
    case 0xC2666C: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:132 BLTEQ @UNKNOWN9
    case 0xC2666E: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:132 BLTEQ @UNKNOWN9
    case 0xC26670: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:133 LDA #0
    case 0xC26672: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:133 LDA #0
    // Overlapping static entry reached from 0xC26672.
    case 0xC26674: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:134 JMP @UNKNOWN37
    case 0xC26675: cpu.execute_instruction<0x4C>(0x0068C8, 3); return true;
    // src/battle/instant_win_check.asm:136 LDA BATTLE_INITIATIVE
    case 0xC26678: cpu.execute_instruction<0xAD>(0x005142, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:137 BNEL @UNKNOWN18
    case 0xC2667B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:137 BNEL @UNKNOWN18
    case 0xC2667D: cpu.execute_instruction<0x4C>(0x00672B, 3); return true;
    // src/battle/instant_win_check.asm:138 LDA #0
    case 0xC26680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:138 LDA #0
    // Overlapping static entry reached from 0xC26680.
    case 0xC26682: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:139 STA @LOCAL05
    case 0xC26683: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:140 BRA @UNKNOWN13
    case 0xC26685: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/battle/instant_win_check.asm:142 ASL
    case 0xC26687: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:143 TAX
    case 0xC26688: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:144 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26689: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/instant_win_check.asm:145 LDY #.SIZEOF(enemy_data)
    case 0xC2668C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_check.asm:145 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2668C.
    case 0xC2668E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:146 JSL MULT168
    case 0xC2668F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:147 CLC
    case 0xC26693: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:148 ADC #enemy_data::speed
    case 0xC26694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/battle/instant_win_check.asm:148 ADC #enemy_data::speed
    // Overlapping static entry reached from 0xC26694.
    case 0xC26696: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:149 TAX
    case 0xC26697: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:150 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26698: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/instant_win_check.asm:151 AND #$00FF
    case 0xC2669C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2669C.
    case 0xC2669E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:152 TAX
    case 0xC2669F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:153 CPX @LOCAL09
    case 0xC266A0: cpu.execute_instruction<0xE4>(0x000022, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:154 BLTEQ @UNKNOWN12
    case 0xC266A2: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:154 BLTEQ @UNKNOWN12
    case 0xC266A4: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:155 STX @LOCAL09
    case 0xC266A6: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:157 LDA @LOCAL05
    case 0xC266A8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:158 INC
    case 0xC266AA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:159 STA @LOCAL05
    case 0xC266AB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:161 CMP ENEMIES_IN_BATTLE
    case 0xC266AD: cpu.execute_instruction<0xCD>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:162 BCC @UNKNOWN11
    case 0xC266B0: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/battle/instant_win_check.asm:163 LDA @VIRTUAL04
    case 0xC266B2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:164 CMP @LOCAL09
    case 0xC266B4: cpu.execute_instruction<0xC5>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:165 BCS @UNKNOWN14
    case 0xC266B6: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:166 LDA #0
    case 0xC266B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:166 LDA #0
    // Overlapping static entry reached from 0xC266B8.
    case 0xC266BA: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:167 JMP @UNKNOWN37
    case 0xC266BB: cpu.execute_instruction<0x4C>(0x0068C8, 3); return true;
    // src/battle/instant_win_check.asm:169 LDA #0
    case 0xC266BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:169 LDA #0
    // Overlapping static entry reached from 0xC266BE.
    case 0xC266C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:170 STA @LOCAL03
    case 0xC266C1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:171 BRA @UNKNOWN17
    case 0xC266C3: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC266C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC266C5.
    case 0xC266C7: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC266C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC266C7.
    case 0xC266C9: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC266CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC266C9.
    case 0xC266CB: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC266CA.
    case 0xC266CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC266CD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC266CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC266D1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC266D3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC266D5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/instant_win_check.asm:175 LDA @LOCAL03
    case 0xC266D7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:176 ASL
    case 0xC266D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:177 TAX
    case 0xC266DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:178 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC266DB: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/instant_win_check.asm:179 LDY #.SIZEOF(enemy_data)
    case 0xC266DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_check.asm:179 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC266DE.
    case 0xC266E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:180 JSL MULT168
    case 0xC266E1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:181 TAX
    case 0xC266E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:182 CLC
    case 0xC266E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:183 ADC #enemy_data::defense
    case 0xC266E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/battle/instant_win_check.asm:183 ADC #enemy_data::defense
    // Overlapping static entry reached from 0xC266E7.
    case 0xC266E9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:184 CLC
    case 0xC266EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:185 ADC @VIRTUAL06
    case 0xC266EB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:186 STA @VIRTUAL06
    case 0xC266ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:187 LDA [@VIRTUAL06]
    case 0xC266EF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:188 STA @VIRTUAL02
    case 0xC266F1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:189 TXA
    case 0xC266F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:190 CLC
    case 0xC266F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:191 ADC #enemy_data::hp
    case 0xC266F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/instant_win_check.asm:191 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC266F5.
    case 0xC266F7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC266F8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC266FA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC266FC: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC266FE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/instant_win_check.asm:193 CLC
    case 0xC26700: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:194 ADC @VIRTUAL06
    case 0xC26701: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:195 STA @VIRTUAL06
    case 0xC26703: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:196 LDA [@VIRTUAL06]
    case 0xC26705: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:197 CLC
    case 0xC26707: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:198 ADC @VIRTUAL02
    case 0xC26708: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:199 STA @VIRTUAL04
    case 0xC2670A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:200 LDA @LOCAL07
    case 0xC2670C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:201 STA @VIRTUAL02
    case 0xC2670E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:202 ASL
    case 0xC26710: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:203 CMP @VIRTUAL04
    case 0xC26711: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:204 BCS @UNKNOWN16
    case 0xC26713: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:205 LDA #0
    case 0xC26715: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:205 LDA #0
    // Overlapping static entry reached from 0xC26715.
    case 0xC26717: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:206 JMP @UNKNOWN37
    case 0xC26718: cpu.execute_instruction<0x4C>(0x0068C8, 3); return true;
    // src/battle/instant_win_check.asm:208 LDA @LOCAL03
    case 0xC2671B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:209 INC
    case 0xC2671D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:210 STA @LOCAL03
    case 0xC2671E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:212 CMP ENEMIES_IN_BATTLE
    case 0xC26720: cpu.execute_instruction<0xCD>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:213 BCC @UNKNOWN15
    case 0xC26723: cpu.execute_instruction<0x90>(0x0000A0, 2); return true;
    // src/battle/instant_win_check.asm:214 LDA #1
    case 0xC26725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:214 LDA #1
    // Overlapping static entry reached from 0xC26725.
    case 0xC26727: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:215 JMP @UNKNOWN37
    case 0xC26728: cpu.execute_instruction<0x4C>(0x0068C8, 3); return true;
    // src/battle/instant_win_check.asm:217 LDA #0
    case 0xC2672B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:217 LDA #0
    // Overlapping static entry reached from 0xC2672B.
    case 0xC2672D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:218 STA @LOCAL03
    case 0xC2672E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:219 BRA @UNKNOWN20
    case 0xC26730: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/battle/instant_win_check.asm:221 ASL
    case 0xC26732: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:222 TAY
    case 0xC26733: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:223 STY @LOCAL05
    case 0xC26734: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26736.
    case 0xC26738: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26739: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26738.
    case 0xC2673A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2673B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2673A.
    case 0xC2673C: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2673B.
    case 0xC2673D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2673E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_check.asm:225 TYA
    case 0xC26740: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:226 CLC
    case 0xC26741: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:227 ADC #.LOWORD(ENEMIES_IN_BATTLE_IDS)
    case 0xC26742: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008E, 2); else cpu.execute_instruction<0x69>(0x00A18E, 3); return true;
    // src/battle/instant_win_check.asm:227 ADC #.LOWORD(ENEMIES_IN_BATTLE_IDS)
    // Overlapping static entry reached from 0xC26742.
    case 0xC26744: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:228 TAX
    case 0xC26745: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:229 LDA __BSS_START__,X
    case 0xC26746: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:230 LDY #.SIZEOF(enemy_data)
    case 0xC26749: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_check.asm:230 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26749.
    case 0xC2674B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:231 JSL MULT168
    case 0xC2674C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:232 CLC
    case 0xC26750: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:233 ADC #enemy_data::hp
    case 0xC26751: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/instant_win_check.asm:233 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC26751.
    case 0xC26753: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26754: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26756: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26758: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2675A: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/instant_win_check.asm:235 CLC
    case 0xC2675C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:236 ADC @VIRTUAL0A
    case 0xC2675D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/instant_win_check.asm:237 STA @VIRTUAL0A
    case 0xC2675F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/instant_win_check.asm:238 LDA [@VIRTUAL0A]
    case 0xC26761: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/instant_win_check.asm:239 LDY @LOCAL05
    case 0xC26763: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:240 STA INSTANT_WIN_SORTED_HP,Y
    case 0xC26765: cpu.execute_instruction<0x99>(0x00AC53, 3); return true;
    // src/battle/instant_win_check.asm:241 LDA __BSS_START__,X
    case 0xC26768: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:242 LDY #.SIZEOF(enemy_data)
    case 0xC2676B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_check.asm:242 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2676B.
    case 0xC2676D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:243 JSL MULT168
    case 0xC2676E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_check.asm:244 CLC
    case 0xC26772: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:245 ADC #enemy_data::defense
    case 0xC26773: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/battle/instant_win_check.asm:245 ADC #enemy_data::defense
    // Overlapping static entry reached from 0xC26773.
    case 0xC26775: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:246 CLC
    case 0xC26776: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:247 ADC @VIRTUAL06
    case 0xC26777: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:248 STA @VIRTUAL06
    case 0xC26779: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:249 LDA [@VIRTUAL06]
    case 0xC2677B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:250 LDY @LOCAL05
    case 0xC2677D: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:251 STA INSTANT_WIN_SORTED_DEFENSE,Y
    case 0xC2677F: cpu.execute_instruction<0x99>(0x00AC5B, 3); return true;
    // src/battle/instant_win_check.asm:252 LDA @LOCAL03
    case 0xC26782: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:253 INC
    case 0xC26784: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:254 STA @LOCAL03
    case 0xC26785: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:256 CMP ENEMIES_IN_BATTLE
    case 0xC26787: cpu.execute_instruction<0xCD>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:257 BCC @UNKNOWN19
    case 0xC2678A: cpu.execute_instruction<0x90>(0x0000A6, 2); return true;
    // src/battle/instant_win_check.asm:259 LDY #1
    case 0xC2678C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:259 LDY #1
    // Overlapping static entry reached from 0xC2678C.
    case 0xC2678E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/instant_win_check.asm:260 LDX #0
    case 0xC2678F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:260 LDX #0
    // Overlapping static entry reached from 0xC2678F.
    case 0xC26791: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_check.asm:261 STX @LOCAL09
    case 0xC26792: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:262 BRA @UNKNOWN26
    case 0xC26794: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/battle/instant_win_check.asm:264 TXA
    case 0xC26796: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:265 INC
    case 0xC26797: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:266 STA @LOCAL06
    case 0xC26798: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:267 BRA @UNKNOWN25
    case 0xC2679A: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/battle/instant_win_check.asm:269 LDX @LOCAL09
    case 0xC2679C: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:270 TXA
    case 0xC2679E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:271 ASL
    case 0xC2679F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:272 CLC
    case 0xC267A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:273 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    case 0xC267A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004B, 2); else cpu.execute_instruction<0x69>(0x00AC4B, 3); return true;
    // src/battle/instant_win_check.asm:273 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    // Overlapping static entry reached from 0xC267A1.
    case 0xC267A3: cpu.execute_instruction<0xAC>(0x001E85, 3); return true;
    // src/battle/instant_win_check.asm:274 STA @LOCAL07
    case 0xC267A4: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:275 LDA (@LOCAL07)
    case 0xC267A6: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:276 STA @LOCAL01
    case 0xC267A8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/instant_win_check.asm:277 LDA @LOCAL06
    case 0xC267AA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:278 ASL
    case 0xC267AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:279 CLC
    case 0xC267AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:280 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    case 0xC267AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004B, 2); else cpu.execute_instruction<0x69>(0x00AC4B, 3); return true;
    // src/battle/instant_win_check.asm:280 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    // Overlapping static entry reached from 0xC267AE.
    case 0xC267B0: cpu.execute_instruction<0xAC>(0x000485, 3); return true;
    // src/battle/instant_win_check.asm:281 STA @VIRTUAL04
    case 0xC267B1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:282 LDX @VIRTUAL04
    case 0xC267B3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:283 LDA __BSS_START__,X
    case 0xC267B5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:284 STA @VIRTUAL02
    case 0xC267B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:285 CMP @LOCAL01
    case 0xC267BA: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:286 BLTEQ @UNKNOWN24
    case 0xC267BC: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:286 BLTEQ @UNKNOWN24
    case 0xC267BE: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/instant_win_check.asm:287 LDY #0
    case 0xC267C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:287 LDY #0
    // Overlapping static entry reached from 0xC267C0.
    case 0xC267C2: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/instant_win_check.asm:288 LDA @VIRTUAL02
    case 0xC267C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:289 STA (@LOCAL07)
    case 0xC267C5: cpu.execute_instruction<0x92>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:290 LDA @LOCAL01
    case 0xC267C7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/instant_win_check.asm:291 LDX @VIRTUAL04
    case 0xC267C9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:292 STA __BSS_START__,X
    case 0xC267CB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:294 LDA @LOCAL06
    case 0xC267CE: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:295 INC
    case 0xC267D0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:296 STA @LOCAL06
    case 0xC267D1: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:298 CMP @LOCAL08
    case 0xC267D3: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:299 BCC @UNKNOWN23
    case 0xC267D5: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/battle/instant_win_check.asm:300 LDX @LOCAL09
    case 0xC267D7: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:301 INX
    case 0xC267D9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:302 STX @LOCAL09
    case 0xC267DA: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:304 LDA @LOCAL08
    case 0xC267DC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:305 DEC
    case 0xC267DE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:306 STA @VIRTUAL02
    case 0xC267DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:307 TXA
    case 0xC267E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:308 CMP @VIRTUAL02
    case 0xC267E2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:309 BCC @UNKNOWN22
    case 0xC267E4: cpu.execute_instruction<0x90>(0x0000B0, 2); return true;
    // src/battle/instant_win_check.asm:310 CPY #0
    case 0xC267E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:310 CPY #0
    // Overlapping static entry reached from 0xC267E6.
    case 0xC267E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:311 BEQ @UNKNOWN21
    case 0xC267E9: cpu.execute_instruction<0xF0>(0x0000A1, 2); return true;
    // src/battle/instant_win_check.asm:313 LDA #1
    case 0xC267EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:313 LDA #1
    // Overlapping static entry reached from 0xC267EB.
    case 0xC267ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:314 STA @LOCAL07
    case 0xC267EE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:315 LDA #0
    case 0xC267F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:315 LDA #0
    // Overlapping static entry reached from 0xC267F0.
    case 0xC267F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:316 STA @VIRTUAL02
    case 0xC267F3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:317 BRA @UNKNOWN32
    case 0xC267F5: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/battle/instant_win_check.asm:319 LDY @VIRTUAL02
    case 0xC267F7: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:320 INY
    case 0xC267F9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:321 BRA @UNKNOWN31
    case 0xC267FA: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/battle/instant_win_check.asm:323 LDA @VIRTUAL02
    case 0xC267FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:324 ASL
    case 0xC267FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:325 TAX
    case 0xC267FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:326 CLC
    case 0xC26800: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:327 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC26801: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x00AC53, 3); return true;
    // src/battle/instant_win_check.asm:327 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC26801.
    case 0xC26803: cpu.execute_instruction<0xAC>(0x001A85, 3); return true;
    // src/battle/instant_win_check.asm:328 STA @LOCAL05
    case 0xC26804: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:329 LDA (@LOCAL05)
    case 0xC26806: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:330 STA @LOCAL00
    case 0xC26808: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/instant_win_check.asm:331 TYA
    case 0xC2680A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:332 ASL
    case 0xC2680B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:333 STA @LOCAL09
    case 0xC2680C: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:334 CLC
    case 0xC2680E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:335 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC2680F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x00AC53, 3); return true;
    // src/battle/instant_win_check.asm:335 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC2680F.
    case 0xC26811: cpu.execute_instruction<0xAC>(0x001685, 3); return true;
    // src/battle/instant_win_check.asm:336 STA @LOCAL03
    case 0xC26812: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:337 LDA (@LOCAL03)
    case 0xC26814: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:338 STA @VIRTUAL04
    case 0xC26816: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:339 CMP @LOCAL00
    case 0xC26818: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:340 BLTEQ @UNKNOWN30
    case 0xC2681A: cpu.execute_instruction<0x90>(0x000028, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:340 BLTEQ @UNKNOWN30
    case 0xC2681C: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/instant_win_check.asm:341 STZ @LOCAL07
    case 0xC2681E: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:342 LDA @VIRTUAL04
    case 0xC26820: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:343 STA (@LOCAL05)
    case 0xC26822: cpu.execute_instruction<0x92>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:344 LDA @LOCAL00
    case 0xC26824: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/instant_win_check.asm:345 STA (@LOCAL03)
    case 0xC26826: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:346 TXA
    case 0xC26828: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:347 CLC
    case 0xC26829: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:348 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC2682A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005B, 2); else cpu.execute_instruction<0x69>(0x00AC5B, 3); return true;
    // src/battle/instant_win_check.asm:348 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC2682A.
    case 0xC2682C: cpu.execute_instruction<0xAC>(0x001A85, 3); return true;
    // src/battle/instant_win_check.asm:349 STA @LOCAL05
    case 0xC2682D: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:350 LDA (@LOCAL05)
    case 0xC2682F: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:351 STA @VIRTUAL04
    case 0xC26831: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:352 LDA @LOCAL09
    case 0xC26833: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:353 CLC
    case 0xC26835: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:354 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC26836: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005B, 2); else cpu.execute_instruction<0x69>(0x00AC5B, 3); return true;
    // src/battle/instant_win_check.asm:354 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC26836.
    case 0xC26838: cpu.execute_instruction<0xAC>(0x00BDAA, 3); return true;
    // src/battle/instant_win_check.asm:355 TAX
    case 0xC26839: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:356 LDA __BSS_START__,X
    case 0xC2683A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:356 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC26838.
    case 0xC2683B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/instant_win_check.asm:357 STA (@LOCAL05)
    case 0xC2683D: cpu.execute_instruction<0x92>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:358 LDA @VIRTUAL04
    case 0xC2683F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:359 STA __BSS_START__,X
    case 0xC26841: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:361 INY
    case 0xC26844: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:363 CPY ENEMIES_IN_BATTLE
    case 0xC26845: cpu.execute_instruction<0xCC>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:364 BCC @UNKNOWN29
    case 0xC26848: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // src/battle/instant_win_check.asm:365 INC @VIRTUAL02
    case 0xC2684A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:367 LDA ENEMIES_IN_BATTLE
    case 0xC2684C: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:368 DEC
    case 0xC2684F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:369 STA @VIRTUAL04
    case 0xC26850: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:370 LDA @VIRTUAL02
    case 0xC26852: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:371 CMP @VIRTUAL04
    case 0xC26854: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:372 BCC @UNKNOWN28
    case 0xC26856: cpu.execute_instruction<0x90>(0x00009F, 2); return true;
    // src/battle/instant_win_check.asm:373 LDA @LOCAL07
    case 0xC26858: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:374 BEQ @UNKNOWN27
    case 0xC2685A: cpu.execute_instruction<0xF0>(0x00008F, 2); return true;
    // src/battle/instant_win_check.asm:375 LDX #0
    case 0xC2685C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:375 LDX #0
    // Overlapping static entry reached from 0xC2685C.
    case 0xC2685E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_check.asm:376 STX @LOCAL09
    case 0xC2685F: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:377 TXA
    case 0xC26861: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:378 STA @LOCAL06
    case 0xC26862: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:379 BRA @UNKNOWN36
    case 0xC26864: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/battle/instant_win_check.asm:381 ASL
    case 0xC26866: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:382 TAX
    case 0xC26867: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:383 LDA INSTANT_WIN_SORTED_OFFENSE,X
    case 0xC26868: cpu.execute_instruction<0xBD>(0x00AC4B, 3); return true;
    // src/battle/instant_win_check.asm:384 ASL
    case 0xC2686B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:385 STA @VIRTUAL04
    case 0xC2686C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:386 LDX @LOCAL09
    case 0xC2686E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:387 TXA
    case 0xC26870: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:388 ASL
    case 0xC26871: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:389 STA @LOCAL05
    case 0xC26872: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:390 CLC
    case 0xC26874: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:391 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC26875: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x00AC53, 3); return true;
    // src/battle/instant_win_check.asm:391 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC26875.
    case 0xC26877: cpu.execute_instruction<0xAC>(0x000285, 3); return true;
    // src/battle/instant_win_check.asm:392 STA @VIRTUAL02
    case 0xC26878: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:393 STA @LOCAL03
    case 0xC2687A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:394 LDX @VIRTUAL02
    case 0xC2687C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:395 LDA __BSS_START__,X
    case 0xC2687E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:396 TAY
    case 0xC26881: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:397 STY @LOCAL04
    case 0xC26882: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:398 LDY #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC26884: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005B, 2); else cpu.execute_instruction<0xA0>(0x00AC5B, 3); return true;
    // src/battle/instant_win_check.asm:398 LDY #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC26884.
    case 0xC26886: cpu.execute_instruction<0xAC>(0x001AB1, 3); return true;
    // src/battle/instant_win_check.asm:399 LDA (@LOCAL05),Y
    case 0xC26887: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:400 STA @LOCAL05
    case 0xC26889: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:401 LDY @LOCAL04
    case 0xC2688B: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:402 TYA
    case 0xC2688D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:403 CLC
    case 0xC2688E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:404 ADC @LOCAL05
    case 0xC2688F: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:405 STA @VIRTUAL02
    case 0xC26891: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:406 LDA @VIRTUAL04
    case 0xC26893: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:407 CMP @VIRTUAL02
    case 0xC26895: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:408 BCS @UNKNOWN34
    case 0xC26897: cpu.execute_instruction<0xB0>(0x000014, 2); return true;
    // src/battle/instant_win_check.asm:409 LDA @VIRTUAL04
    case 0xC26899: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:410 SEC
    case 0xC2689B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:411 SBC @LOCAL05
    case 0xC2689C: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:412 STA @VIRTUAL02
    case 0xC2689E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:413 TYA
    case 0xC268A0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:414 SEC
    case 0xC268A1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:415 SBC @VIRTUAL02
    case 0xC268A2: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:416 LDX @LOCAL03
    case 0xC268A4: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:417 STX @VIRTUAL02
    case 0xC268A6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:418 STA __BSS_START__,X
    case 0xC268A8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:419 BRA @UNKNOWN35
    case 0xC268AB: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/instant_win_check.asm:421 LDX @LOCAL09
    case 0xC268AD: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:422 INX
    case 0xC268AF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:423 STX @LOCAL09
    case 0xC268B0: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:424 CPX ENEMIES_IN_BATTLE
    case 0xC268B2: cpu.execute_instruction<0xEC>(0x00A18C, 3); return true;
    // src/battle/instant_win_check.asm:425 BCC @UNKNOWN35
    case 0xC268B5: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/battle/instant_win_check.asm:426 LDA #1
    case 0xC268B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:426 LDA #1
    // Overlapping static entry reached from 0xC268B7.
    case 0xC268B9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/instant_win_check.asm:427 BRA @UNKNOWN37
    case 0xC268BA: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/instant_win_check.asm:429 LDA @LOCAL06
    case 0xC268BC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:430 INC
    case 0xC268BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:431 STA @LOCAL06
    case 0xC268BF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:433 CMP @LOCAL08
    case 0xC268C1: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:434 BCC @UNKNOWN33
    case 0xC268C3: cpu.execute_instruction<0x90>(0x0000A1, 2); return true;
    // src/battle/instant_win_check.asm:435 LDA #0
    case 0xC268C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:435 LDA #0
    // Overlapping static entry reached from 0xC268C5.
    case 0xC268C7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_check.asm:437 END_C_FUNCTION
    case 0xC268C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_check.asm:437 END_C_FUNCTION
    case 0xC268C9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
