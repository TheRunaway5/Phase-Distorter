// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/battle/choose_target.asm (source_named).
bool execute_battle_choose_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/choose_target.asm:2 BEGIN_C_FUNCTION_FAR
    case 0xC24477: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24479: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2447A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2447B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2447C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2447C.
    case 0xC2447E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2447F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24480: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/choose_target.asm:7 STA $02
    case 0xC24481: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/choose_target.asm:7 STA $02
    // Overlapping static entry reached from 0xC2447E.
    case 0xC24482: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/battle/choose_target.asm:8 LDX #$0000
    case 0xC24483: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/choose_target.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC24483.
    case 0xC24485: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/choose_target.asm:9 STX $0E
    case 0xC24486: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:10 BRA @UNKNOWN1
    case 0xC24488: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/choose_target.asm:12 LDA FRONT_ROW_BATTLERS,X
    case 0xC2448A: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/battle/choose_target.asm:13 AND #$00FF
    case 0xC2448D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC2448D.
    case 0xC2448F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/choose_target.asm:14 JSL CHECK_IF_VALID_TARGET
    case 0xC24490: cpu.execute_instruction<0x22>(0xC4A1F5, 4); return true;
    // src/battle/choose_target.asm:15 CMP #$0000
    case 0xC24494: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:15 CMP #$0000
    // Overlapping static entry reached from 0xC24494.
    case 0xC24496: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:16 BNE @UNKNOWN4
    case 0xC24497: cpu.execute_instruction<0xD0>(0x00002E, 2); return true;
    // src/battle/choose_target.asm:17 LDX $0E
    case 0xC24499: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:18 INX
    case 0xC2449B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:19 STX $0E
    case 0xC2449C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:21 CPX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2449E: cpu.execute_instruction<0xEC>(0x00AD56, 3); return true;
    // src/battle/choose_target.asm:22 BCC @UNKNOWN0
    case 0xC244A1: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/choose_target.asm:23 LDX #$0000
    case 0xC244A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/choose_target.asm:23 LDX #$0000
    // Overlapping static entry reached from 0xC244A3.
    case 0xC244A5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/choose_target.asm:24 STX $0E
    case 0xC244A6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:25 BRA @UNKNOWN3
    case 0xC244A8: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/choose_target.asm:27 LDA BACK_ROW_BATTLERS,X
    case 0xC244AA: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/battle/choose_target.asm:28 AND #$00FF
    case 0xC244AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC244AD.
    case 0xC244AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/choose_target.asm:29 JSL CHECK_IF_VALID_TARGET
    case 0xC244B0: cpu.execute_instruction<0x22>(0xC4A1F5, 4); return true;
    // src/battle/choose_target.asm:30 CMP #$0000
    case 0xC244B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:30 CMP #$0000
    // Overlapping static entry reached from 0xC244B4.
    case 0xC244B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:31 BNE @UNKNOWN4
    case 0xC244B7: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:32 LDX $0E
    case 0xC244B9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:33 INX
    case 0xC244BB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:34 STX $0E
    case 0xC244BC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:36 CPX NUM_BATTLERS_IN_BACK_ROW
    case 0xC244BE: cpu.execute_instruction<0xEC>(0x00AD58, 3); return true;
    // src/battle/choose_target.asm:37 BCC @UNKNOWN2
    case 0xC244C1: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/choose_target.asm:38 JSL UNKNOWN_C2F917
    case 0xC244C3: cpu.execute_instruction<0x22>(0xC2F917, 4); return true;
    // src/battle/choose_target.asm:40 LDX $02
    case 0xC244C7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:41 LDA a:battler::current_action,X
    case 0xC244C9: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC244CC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC244CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC244CF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC244D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC244D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:43 TAX
    case 0xC244D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:44 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC244D4: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/choose_target.asm:45 AND #$00FF
    case 0xC244D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC244D8.
    case 0xC244DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:46 BNE @UNKNOWN6
    case 0xC244DB: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/battle/choose_target.asm:47 LDX $02
    case 0xC244DD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:48 LDA a:battler::ally_or_enemy,X
    case 0xC244DF: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:49 AND #$00FF
    case 0xC244E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC244E2.
    case 0xC244E4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:50 CMP #$0001
    case 0xC244E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:50 CMP #$0001
    // Overlapping static entry reached from 0xC244E5.
    case 0xC244E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:51 BNE @UNKNOWN5
    case 0xC244E8: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/choose_target.asm:52 LDX $02
    case 0xC244EA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC244EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:54 STZ a:battler::action_targetting,X
    case 0xC244EE: cpu.execute_instruction<0x9E>(0x000009, 3); return true;
    // src/battle/choose_target.asm:55 BRA @UNKNOWN8
    case 0xC244F1: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/battle/choose_target.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC244F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:58 LDA #$0010
    case 0xC244F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00A610, 3); return true;
    // src/battle/choose_target.asm:59 LDX $02
    case 0xC244F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:59 LDX $02
    // Overlapping static entry reached from 0xC244F5.
    case 0xC244F8: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:60 STA a:battler::action_targetting,X
    case 0xC244F9: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/choose_target.asm:61 BRA @UNKNOWN8
    case 0xC244FC: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/battle/choose_target.asm:64 LDX $02
    case 0xC244FE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:65 LDA a:battler::ally_or_enemy,X
    case 0xC24500: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:66 AND #$00FF
    case 0xC24503: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC24503.
    case 0xC24505: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:67 CMP #$0001
    case 0xC24506: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:67 CMP #$0001
    // Overlapping static entry reached from 0xC24506.
    case 0xC24508: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:68 BNE @UNKNOWN7
    case 0xC24509: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC2450B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:70 LDA #$0010
    case 0xC2450D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00A610, 3); return true;
    // src/battle/choose_target.asm:71 LDX $02
    case 0xC2450F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:71 LDX $02
    // Overlapping static entry reached from 0xC2450D.
    case 0xC24510: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:72 STA a:battler::action_targetting,X
    case 0xC24511: cpu.execute_instruction<0x9D>(0x000009, 3); return true;
    // src/battle/choose_target.asm:73 BRA @UNKNOWN8
    case 0xC24514: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/choose_target.asm:75 LDX $02
    case 0xC24516: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC24518: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:77 STZ a:battler::action_targetting,X
    case 0xC2451A: cpu.execute_instruction<0x9E>(0x000009, 3); return true;
    // src/battle/choose_target.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC2451D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC2451F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    // Overlapping static entry reached from 0xC2451F.
    case 0xC24521: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC24522: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC24524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    // Overlapping static entry reached from 0xC24524.
    case 0xC24526: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC24527: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/choose_target.asm:81 LDX $02
    case 0xC24529: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:82 INX
    case 0xC2452B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:83 INX
    case 0xC2452C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:84 INX
    case 0xC2452D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:85 INX
    case 0xC2452E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:86 STX $0E
    case 0xC2452F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:87 LDA __BSS_START__,X ;battler.current_action
    case 0xC24531: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24534: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24536: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24537: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24539: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC2453A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:89 INC
    case 0xC2453B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2453C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2453E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC24540: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC24542: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/choose_target.asm:91 CLC
    case 0xC24544: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:92 ADC $0A
    case 0xC24545: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/choose_target.asm:93 STA $0A
    case 0xC24547: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/choose_target.asm:94 LDA [$0A]
    case 0xC24549: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/choose_target.asm:95 AND #$00FF
    case 0xC2454B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC2454B.
    case 0xC2454D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:96 BEQ @UNKNOWN11
    case 0xC2454E: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/choose_target.asm:97 CMP #$0001
    case 0xC24550: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:97 CMP #$0001
    // Overlapping static entry reached from 0xC24550.
    case 0xC24552: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:98 BEQ @UNKNOWN13
    case 0xC24553: cpu.execute_instruction<0xF0>(0x000067, 2); return true;
    // src/battle/choose_target.asm:99 CMP #$0002
    case 0xC24555: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/choose_target.asm:99 CMP #$0002
    // Overlapping static entry reached from 0xC24555.
    case 0xC24557: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:100 BEQ @UNKNOWN13
    case 0xC24558: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/battle/choose_target.asm:101 CMP #$0003
    case 0xC2455A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/choose_target.asm:101 CMP #$0003
    // Overlapping static entry reached from 0xC2455A.
    case 0xC2455C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/choose_target.asm:102 BEQL @UNKNOWN22
    case 0xC2455D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/choose_target.asm:102 BEQL @UNKNOWN22
    case 0xC2455F: cpu.execute_instruction<0x4C>(0x00468C, 3); return true;
    // src/battle/choose_target.asm:103 CMP #$0004
    case 0xC24562: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/choose_target.asm:103 CMP #$0004
    // Overlapping static entry reached from 0xC24562.
    case 0xC24564: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/choose_target.asm:104 BEQL @UNKNOWN26
    case 0xC24565: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/choose_target.asm:104 BEQL @UNKNOWN26
    case 0xC24567: cpu.execute_instruction<0x4C>(0x0046E7, 3); return true;
    // src/battle/choose_target.asm:105 JMP @UNKNOWN27
    case 0xC2456A: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:107 LDA $02
    case 0xC2456D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:108 CLC
    case 0xC2456F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:109 ADC #battler::action_targetting
    case 0xC24570: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:109 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC24570.
    case 0xC24572: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/choose_target.asm:110 TAX
    case 0xC24573: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC24574: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:112 LDA __BSS_START__,X
    case 0xC24576: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/choose_target.asm:113 ORA #$0001
    case 0xC24579: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x009D01, 3); return true;
    // src/battle/choose_target.asm:114 STA __BSS_START__,X
    case 0xC2457B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/choose_target.asm:114 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC24579.
    case 0xC2457C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:115 LDX $02
    case 0xC2457E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC24580: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:117 LDA a:battler::ally_or_enemy,X
    case 0xC24582: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:118 AND #$00FF
    case 0xC24585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC24585.
    case 0xC24587: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:119 CMP #$0001
    case 0xC24588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:119 CMP #$0001
    // Overlapping static entry reached from 0xC24588.
    case 0xC2458A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:120 BNE @UNKNOWN12
    case 0xC2458B: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/battle/choose_target.asm:121 LDY #.SIZEOF(battler)
    case 0xC2458D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/choose_target.asm:121 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2458D.
    case 0xC2458F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/choose_target.asm:122 LDA $02
    case 0xC24590: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:123 SEC
    case 0xC24592: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/choose_target.asm:124 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC24593: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AC, 2); else cpu.execute_instruction<0xE9>(0x009FAC, 3); return true;
    // src/battle/choose_target.asm:124 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24593.
    case 0xC24595: cpu.execute_instruction<0x9F>(0x915B22, 4); return true;
    // src/battle/choose_target.asm:125 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC24596: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/battle/choose_target.asm:125 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC24595.
    case 0xC24599: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AA, 2); else cpu.execute_instruction<0xC0>(0x00A5AA, 3); return true;
    // src/battle/choose_target.asm:126 TAX
    case 0xC2459A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:127 LDA $02
    case 0xC2459B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:127 LDA $02
    // Overlapping static entry reached from 0xC24599.
    case 0xC2459C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/choose_target.asm:128 JSL UNKNOWN_C4A228
    case 0xC2459D: cpu.execute_instruction<0x22>(0xC4A228, 4); return true;
    // src/battle/choose_target.asm:129 JMP @UNKNOWN27
    case 0xC245A1: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:131 LDY #.SIZEOF(battler)
    case 0xC245A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/choose_target.asm:131 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC245A4.
    case 0xC245A6: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/choose_target.asm:132 LDA $02
    case 0xC245A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:133 SEC
    case 0xC245A9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/choose_target.asm:134 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC245AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000AC, 2); else cpu.execute_instruction<0xE9>(0x009FAC, 3); return true;
    // src/battle/choose_target.asm:134 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC245AA.
    case 0xC245AC: cpu.execute_instruction<0x9F>(0x915B22, 4); return true;
    // src/battle/choose_target.asm:135 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC245AD: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/battle/choose_target.asm:135 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC245AC.
    case 0xC245B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/battle/choose_target.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC245B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:136 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC245B0.
    case 0xC245B2: cpu.execute_instruction<0x20>(0x00A61A, 3); return true;
    // src/battle/choose_target.asm:137 INC
    case 0xC245B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:138 LDX $02
    case 0xC245B4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:138 LDX $02
    // Overlapping static entry reached from 0xC245B2.
    case 0xC245B5: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:139 STA a:battler::current_target,X
    case 0xC245B6: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:140 JMP @UNKNOWN27
    case 0xC245B9: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:143 LDA $02
    case 0xC245BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:144 CLC
    case 0xC245BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:145 ADC #battler::action_targetting
    case 0xC245BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:145 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC245BF.
    case 0xC245C1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/choose_target.asm:146 TAY
    case 0xC245C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/choose_target.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC245C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:148 LDA __BSS_START__,Y
    case 0xC245C5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:149 ORA #$0001
    case 0xC245C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x009901, 3); return true;
    // src/battle/choose_target.asm:150 STA __BSS_START__,Y
    case 0xC245CA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/choose_target.asm:150 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC245C8.
    case 0xC245CB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:151 LDX $02
    case 0xC245CD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC245CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:153 LDA a:battler::ally_or_enemy,X
    case 0xC245D1: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:154 AND #$00FF
    case 0xC245D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC245D4.
    case 0xC245D6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:155 CMP #$0001
    case 0xC245D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:155 CMP #$0001
    // Overlapping static entry reached from 0xC245D7.
    case 0xC245D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:156 BNE @UNKNOWN18
    case 0xC245DA: cpu.execute_instruction<0xD0>(0x000064, 2); return true;
    // src/battle/choose_target.asm:157 LDX $0E
    case 0xC245DC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:158 LDA __BSS_START__,X ;battler.current_action
    case 0xC245DE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC245E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC245E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC245E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC245E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC245E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:160 CLC
    case 0xC245E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:161 ADC $06
    case 0xC245E9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/choose_target.asm:162 STA $06
    case 0xC245EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/choose_target.asm:163 LDA [$06]
    case 0xC245ED: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/choose_target.asm:164 AND #$00FF
    case 0xC245EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC245EF.
    case 0xC245F1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:165 BNE @UNKNOWN16
    case 0xC245F2: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/choose_target.asm:166 JSL FIND_TARGETTABLE_NPC
    case 0xC245F4: cpu.execute_instruction<0x22>(0xC23F6C, 4); return true;
    // src/battle/choose_target.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC245F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:168 LDX $02
    case 0xC245FA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:169 STA a:battler::current_target,X
    case 0xC245FC: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:170 REP #PROC_FLAGS::ACCUM8
    case 0xC245FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:171 AND #$00FF
    case 0xC24601: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC24601.
    case 0xC24603: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:172 BNEL @UNKNOWN27
    case 0xC24604: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:172 BNEL @UNKNOWN27
    case 0xC24606: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:174 JSL RAND
    case 0xC24609: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/choose_target.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC2460D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:176 AND #$0007
    case 0xC2460F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x001A07, 3); return true;
    // src/battle/choose_target.asm:177 INC
    case 0xC24611: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:178 LDX $02
    case 0xC24612: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:179 STA a:battler::current_target,X
    case 0xC24614: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:180 REP #PROC_FLAGS::ACCUM8
    case 0xC24617: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:181 AND #$00FF
    case 0xC24619: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC24619.
    case 0xC2461B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/choose_target.asm:182 DEC
    case 0xC2461C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:183 JSL CHECK_IF_VALID_TARGET
    case 0xC2461D: cpu.execute_instruction<0x22>(0xC4A1F5, 4); return true;
    // src/battle/choose_target.asm:184 CMP #$0000
    case 0xC24621: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:184 CMP #$0000
    // Overlapping static entry reached from 0xC24621.
    case 0xC24623: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:185 BNEL @UNKNOWN27
    case 0xC24624: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:185 BNEL @UNKNOWN27
    case 0xC24626: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:186 BRA @UNKNOWN14
    case 0xC24629: cpu.execute_instruction<0x80>(0x0000DE, 2); return true;
    // src/battle/choose_target.asm:188 LDA $02
    case 0xC2462B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:189 JSL UNKNOWN_C24434
    case 0xC2462D: cpu.execute_instruction<0x22>(0xC24434, 4); return true;
    // src/battle/choose_target.asm:190 TAX
    case 0xC24631: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:191 JSL CHECK_IF_VALID_TARGET
    case 0xC24632: cpu.execute_instruction<0x22>(0xC4A1F5, 4); return true;
    // src/battle/choose_target.asm:192 CMP #$0000
    case 0xC24636: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:192 CMP #$0000
    // Overlapping static entry reached from 0xC24636.
    case 0xC24638: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:193 BNEL @UNKNOWN27
    case 0xC24639: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:193 BNEL @UNKNOWN27
    case 0xC2463B: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:194 BRA @UNKNOWN16
    case 0xC2463E: cpu.execute_instruction<0x80>(0x0000EB, 2); return true;
    // src/battle/choose_target.asm:196 LDX $0E
    case 0xC24640: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/choose_target.asm:197 LDA __BSS_START__,X ;battler.current_action
    case 0xC24642: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24645: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24647: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24648: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC2464A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC2464B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:199 CLC
    case 0xC2464C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:200 ADC $06
    case 0xC2464D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/choose_target.asm:201 STA $06
    case 0xC2464F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/choose_target.asm:202 LDA [$06]
    case 0xC24651: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/choose_target.asm:203 AND #$00FF
    case 0xC24653: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC24653.
    case 0xC24655: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:204 BNE @UNKNOWN21
    case 0xC24656: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/choose_target.asm:206 LDA $02
    case 0xC24658: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:207 JSL UNKNOWN_C24434
    case 0xC2465A: cpu.execute_instruction<0x22>(0xC24434, 4); return true;
    // src/battle/choose_target.asm:208 TAX
    case 0xC2465E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:209 JSL CHECK_IF_VALID_TARGET
    case 0xC2465F: cpu.execute_instruction<0x22>(0xC4A1F5, 4); return true;
    // src/battle/choose_target.asm:210 CMP #$0000
    case 0xC24663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:210 CMP #$0000
    // Overlapping static entry reached from 0xC24663.
    case 0xC24665: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:211 BNEL @UNKNOWN27
    case 0xC24666: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:211 BNEL @UNKNOWN27
    case 0xC24668: cpu.execute_instruction<0x4C>(0x0046FF, 3); return true;
    // src/battle/choose_target.asm:212 BRA @UNKNOWN19
    case 0xC2466B: cpu.execute_instruction<0x80>(0x0000EB, 2); return true;
    // src/battle/choose_target.asm:214 JSL RAND
    case 0xC2466D: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/choose_target.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC24671: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:216 AND #$0007
    case 0xC24673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x001A07, 3); return true;
    // src/battle/choose_target.asm:217 INC
    case 0xC24675: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:218 LDX $02
    case 0xC24676: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:219 STA a:battler::current_target,X
    case 0xC24678: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2467B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:221 AND #$00FF
    case 0xC2467D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC2467D.
    case 0xC2467F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/choose_target.asm:222 DEC
    case 0xC24680: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:223 JSL CHECK_IF_VALID_TARGET
    case 0xC24681: cpu.execute_instruction<0x22>(0xC4A1F5, 4); return true;
    // src/battle/choose_target.asm:224 CMP #$0000
    case 0xC24685: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/choose_target.asm:224 CMP #$0000
    // Overlapping static entry reached from 0xC24685.
    case 0xC24687: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/choose_target.asm:225 BEQ @UNKNOWN21
    case 0xC24688: cpu.execute_instruction<0xF0>(0x0000E3, 2); return true;
    // src/battle/choose_target.asm:226 BRA @UNKNOWN27
    case 0xC2468A: cpu.execute_instruction<0x80>(0x000073, 2); return true;
    // src/battle/choose_target.asm:228 LDA $02
    case 0xC2468C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:229 CLC
    case 0xC2468E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:230 ADC #battler::action_targetting
    case 0xC2468F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:230 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2468F.
    case 0xC24691: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/choose_target.asm:231 TAX
    case 0xC24692: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC24693: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:233 LDA __BSS_START__,X
    case 0xC24695: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/choose_target.asm:234 ORA #$0002
    case 0xC24698: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x009D02, 3); return true;
    // src/battle/choose_target.asm:235 STA __BSS_START__,X
    case 0xC2469A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/choose_target.asm:235 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC24698.
    case 0xC2469B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:236 LDX $02
    case 0xC2469D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC2469F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:238 LDA a:battler::ally_or_enemy,X
    case 0xC246A1: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/choose_target.asm:239 AND #$00FF
    case 0xC246A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/choose_target.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC246A4.
    case 0xC246A6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/choose_target.asm:240 CMP #$0001
    case 0xC246A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/choose_target.asm:240 CMP #$0001
    // Overlapping static entry reached from 0xC246A7.
    case 0xC246A9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/choose_target.asm:241 BNE @UNKNOWN23
    case 0xC246AA: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC246AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:243 LDA #$0001
    case 0xC246AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/choose_target.asm:244 LDX $02
    case 0xC246B0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:244 LDX $02
    // Overlapping static entry reached from 0xC246AE.
    case 0xC246B1: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:245 STA a:battler::current_target,X
    case 0xC246B2: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:246 BRA @UNKNOWN27
    case 0xC246B5: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/battle/choose_target.asm:248 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC246B7: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/battle/choose_target.asm:249 BNE @UNKNOWN24
    case 0xC246BA: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC246BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:251 LDA #$0002
    case 0xC246BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00A602, 3); return true;
    // src/battle/choose_target.asm:252 LDX $02
    case 0xC246C0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:252 LDX $02
    // Overlapping static entry reached from 0xC246BE.
    case 0xC246C1: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:253 STA a:battler::current_target,X
    case 0xC246C2: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:254 BRA @UNKNOWN27
    case 0xC246C5: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/battle/choose_target.asm:256 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC246C7: cpu.execute_instruction<0xAD>(0x00AD58, 3); return true;
    // src/battle/choose_target.asm:257 BNE @UNKNOWN25
    case 0xC246CA: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/choose_target.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC246CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:259 LDA #$0001
    case 0xC246CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/choose_target.asm:260 LDX $02
    case 0xC246D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:260 LDX $02
    // Overlapping static entry reached from 0xC246CE.
    case 0xC246D1: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:261 STA a:battler::current_target,X
    case 0xC246D2: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:262 BRA @UNKNOWN27
    case 0xC246D5: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/choose_target.asm:264 JSL RAND
    case 0xC246D7: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/choose_target.asm:265 SEP #PROC_FLAGS::ACCUM8
    case 0xC246DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:266 AND #$0001
    case 0xC246DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x001A01, 3); return true;
    // src/battle/choose_target.asm:267 INC
    case 0xC246DF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/choose_target.asm:268 LDX $02
    case 0xC246E0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:269 STA a:battler::current_target,X
    case 0xC246E2: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:270 BRA @UNKNOWN27
    case 0xC246E5: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/choose_target.asm:273 LDA $02
    case 0xC246E7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/choose_target.asm:274 CLC
    case 0xC246E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/choose_target.asm:275 ADC #battler::action_targetting
    case 0xC246EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/choose_target.asm:275 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC246EA.
    case 0xC246EC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/choose_target.asm:276 TAX
    case 0xC246ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/choose_target.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC246EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/choose_target.asm:278 LDA __BSS_START__,X
    case 0xC246F0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/choose_target.asm:279 ORA #$0004
    case 0xC246F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x009D04, 3); return true;
    // src/battle/choose_target.asm:280 STA __BSS_START__,X
    case 0xC246F5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/choose_target.asm:280 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC246F3.
    case 0xC246F6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/choose_target.asm:281 LDA #$0001
    case 0xC246F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/choose_target.asm:282 LDX $02
    case 0xC246FA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/choose_target.asm:282 LDX $02
    // Overlapping static entry reached from 0xC246F8.
    case 0xC246FB: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/choose_target.asm:283 STA a:battler::current_target,X
    case 0xC246FC: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/battle/choose_target.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC246FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/choose_target.asm:286 END_C_FUNCTION
    case 0xC24701: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/choose_target.asm:286 END_C_FUNCTION
    case 0xC24702: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/copy_mirror_data.asm (source_named).
bool execute_battle_copy_mirror_data_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/copy_mirror_data.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AF1F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AF21: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AF22: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AF23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00FFAE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AF23.
    case 0xC2AF25: cpu.execute_instruction<0xFF>(0x64A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AF26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AF27: cpu.execute_instruction<0xA5>(0x000064, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AF29: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AF2B: cpu.execute_instruction<0xA5>(0x000066, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AF2D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AF2F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AF31: cpu.execute_instruction<0x85>(0x00004E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AF33: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AF35: cpu.execute_instruction<0x85>(0x000050, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AF37: cpu.execute_instruction<0xA5>(0x000060, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AF39: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AF3B: cpu.execute_instruction<0xA5>(0x000062, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AF3D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AF3F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AF41: cpu.execute_instruction<0x85>(0x00004A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AF43: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AF45: cpu.execute_instruction<0x85>(0x00004C, 2); return true;
    // src/battle/copy_mirror_data.asm:33 LDA #battler::hp
    case 0xC2AF47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/battle/copy_mirror_data.asm:33 LDA #battler::hp
    // Overlapping static entry reached from 0xC2AF47.
    case 0xC2AF49: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/copy_mirror_data.asm:34 CLC
    case 0xC2AF4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:35 ADC @VIRTUAL06
    case 0xC2AF4B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:36 STA @VIRTUAL06
    case 0xC2AF4D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:37 STA @LOCAL12
    case 0xC2AF4F: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/battle/copy_mirror_data.asm:38 LDA @VIRTUAL06+2
    case 0xC2AF51: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:39 STA @LOCAL12+2
    case 0xC2AF53: cpu.execute_instruction<0x85>(0x000048, 2); return true;
    // src/battle/copy_mirror_data.asm:40 LDA [@LOCAL12]
    case 0xC2AF55: cpu.execute_instruction<0xA7>(0x000046, 2); return true;
    // src/battle/copy_mirror_data.asm:41 STA @LOCAL11
    case 0xC2AF57: cpu.execute_instruction<0x85>(0x000044, 2); return true;
    // src/battle/copy_mirror_data.asm:42 LDA #battler::pp
    case 0xC2AF59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/battle/copy_mirror_data.asm:42 LDA #battler::pp
    // Overlapping static entry reached from 0xC2AF59.
    case 0xC2AF5B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF5C: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF5E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF60: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF62: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:44 CLC
    case 0xC2AF64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:45 ADC @VIRTUAL06
    case 0xC2AF65: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:46 STA @VIRTUAL06
    case 0xC2AF67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:47 STA @LOCAL10
    case 0xC2AF69: cpu.execute_instruction<0x85>(0x000040, 2); return true;
    // src/battle/copy_mirror_data.asm:48 LDA @VIRTUAL06+2
    case 0xC2AF6B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:49 STA @LOCAL10+2
    case 0xC2AF6D: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/battle/copy_mirror_data.asm:50 LDA [@LOCAL10]
    case 0xC2AF6F: cpu.execute_instruction<0xA7>(0x000040, 2); return true;
    // src/battle/copy_mirror_data.asm:51 STA @LOCAL0F
    case 0xC2AF71: cpu.execute_instruction<0x85>(0x00003E, 2); return true;
    // src/battle/copy_mirror_data.asm:52 LDA #battler::hp_target
    case 0xC2AF73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/battle/copy_mirror_data.asm:52 LDA #battler::hp_target
    // Overlapping static entry reached from 0xC2AF73.
    case 0xC2AF75: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF76: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF78: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7A: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7C: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:54 CLC
    case 0xC2AF7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:55 ADC @VIRTUAL06
    case 0xC2AF7F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:56 STA @VIRTUAL06
    case 0xC2AF81: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:57 STA @LOCAL0E
    case 0xC2AF83: cpu.execute_instruction<0x85>(0x00003A, 2); return true;
    // src/battle/copy_mirror_data.asm:58 LDA @VIRTUAL06+2
    case 0xC2AF85: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:59 STA @LOCAL0E+2
    case 0xC2AF87: cpu.execute_instruction<0x85>(0x00003C, 2); return true;
    // src/battle/copy_mirror_data.asm:60 LDA [@LOCAL0E]
    case 0xC2AF89: cpu.execute_instruction<0xA7>(0x00003A, 2); return true;
    // src/battle/copy_mirror_data.asm:61 STA @LOCAL0D
    case 0xC2AF8B: cpu.execute_instruction<0x85>(0x000038, 2); return true;
    // src/battle/copy_mirror_data.asm:62 LDA #battler::pp_target
    case 0xC2AF8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/battle/copy_mirror_data.asm:62 LDA #battler::pp_target
    // Overlapping static entry reached from 0xC2AF8D.
    case 0xC2AF8F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF90: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF92: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF94: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF96: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:64 CLC
    case 0xC2AF98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:65 ADC @VIRTUAL06
    case 0xC2AF99: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:66 STA @VIRTUAL06
    case 0xC2AF9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:67 STA @LOCAL0C
    case 0xC2AF9D: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // src/battle/copy_mirror_data.asm:68 LDA @VIRTUAL06+2
    case 0xC2AF9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:69 STA @LOCAL0C+2
    case 0xC2AFA1: cpu.execute_instruction<0x85>(0x000036, 2); return true;
    // src/battle/copy_mirror_data.asm:70 LDA [@LOCAL0C]
    case 0xC2AFA3: cpu.execute_instruction<0xA7>(0x000034, 2); return true;
    // src/battle/copy_mirror_data.asm:71 STA @LOCAL0B
    case 0xC2AFA5: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/battle/copy_mirror_data.asm:72 LDA #battler::hp_max
    case 0xC2AFA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/copy_mirror_data.asm:72 LDA #battler::hp_max
    // Overlapping static entry reached from 0xC2AFA7.
    case 0xC2AFA9: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFAA: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFAC: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFAE: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB0: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:74 CLC
    case 0xC2AFB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:75 ADC @VIRTUAL06
    case 0xC2AFB3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:76 STA @VIRTUAL06
    case 0xC2AFB5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:77 STA @LOCAL0A
    case 0xC2AFB7: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/battle/copy_mirror_data.asm:78 LDA @VIRTUAL06+2
    case 0xC2AFB9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:79 STA @LOCAL0A+2
    case 0xC2AFBB: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/copy_mirror_data.asm:80 LDA [@LOCAL0A]
    case 0xC2AFBD: cpu.execute_instruction<0xA7>(0x00002E, 2); return true;
    // src/battle/copy_mirror_data.asm:81 STA @LOCAL09
    case 0xC2AFBF: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/battle/copy_mirror_data.asm:82 LDA #battler::pp_max
    case 0xC2AFC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/battle/copy_mirror_data.asm:82 LDA #battler::pp_max
    // Overlapping static entry reached from 0xC2AFC1.
    case 0xC2AFC3: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFC4: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFC6: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFC8: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFCA: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:84 CLC
    case 0xC2AFCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:85 ADC @VIRTUAL06
    case 0xC2AFCD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:86 STA @VIRTUAL06
    case 0xC2AFCF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:87 STA @LOCAL08
    case 0xC2AFD1: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/copy_mirror_data.asm:88 LDA @VIRTUAL06+2
    case 0xC2AFD3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:89 STA @LOCAL08+2
    case 0xC2AFD5: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/battle/copy_mirror_data.asm:90 LDA [@LOCAL08]
    case 0xC2AFD7: cpu.execute_instruction<0xA7>(0x000028, 2); return true;
    // src/battle/copy_mirror_data.asm:91 STA @LOCAL07
    case 0xC2AFD9: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/copy_mirror_data.asm:92 LDA #battler::ally_or_enemy
    case 0xC2AFDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/battle/copy_mirror_data.asm:92 LDA #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2AFDB.
    case 0xC2AFDD: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFDE: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE0: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE2: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE4: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:94 CLC
    case 0xC2AFE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:95 ADC @VIRTUAL06
    case 0xC2AFE7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:96 STA @VIRTUAL06
    case 0xC2AFE9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:97 STA @LOCAL06
    case 0xC2AFEB: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:98 LDA @VIRTUAL06+2
    case 0xC2AFED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:99 STA @LOCAL06+2
    case 0xC2AFEF: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/copy_mirror_data.asm:100 LDA [@LOCAL06]
    case 0xC2AFF1: cpu.execute_instruction<0xA7>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:101 AND #$00FF
    case 0xC2AFF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/copy_mirror_data.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2AFF3.
    case 0xC2AFF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/copy_mirror_data.asm:102 STA @VIRTUAL04
    case 0xC2AFF6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/copy_mirror_data.asm:103 LDA #battler::row
    case 0xC2AFF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/copy_mirror_data.asm:103 LDA #battler::row
    // Overlapping static entry reached from 0xC2AFF8.
    case 0xC2AFFA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFFB: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFFD: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFFF: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2B001: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:105 CLC
    case 0xC2B003: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:106 ADC @VIRTUAL06
    case 0xC2B004: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:107 STA @VIRTUAL06
    case 0xC2B006: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/copy_mirror_data.asm:108 STA @LOCAL05
    case 0xC2B008: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/copy_mirror_data.asm:109 LDA @VIRTUAL06+2
    case 0xC2B00A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/copy_mirror_data.asm:110 STA @LOCAL05+2
    case 0xC2B00C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:111 LDA [@LOCAL05]
    case 0xC2B00E: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/battle/copy_mirror_data.asm:112 AND #$00FF
    case 0xC2B010: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/copy_mirror_data.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC2B010.
    case 0xC2B012: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/copy_mirror_data.asm:113 STA @VIRTUAL02
    case 0xC2B013: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2B015: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2B017: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2B019: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2B01B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2B01D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2B01F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2B021: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2B023: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/copy_mirror_data.asm:116 LDA [@LOCAL04]
    case 0xC2B025: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/battle/copy_mirror_data.asm:117 TAY
    case 0xC2B027: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:118 STY @LOCAL03
    case 0xC2B028: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/copy_mirror_data.asm:119 LDA #battler::has_taken_turn
    case 0xC2B02A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/battle/copy_mirror_data.asm:119 LDA #battler::has_taken_turn
    // Overlapping static entry reached from 0xC2B02A.
    case 0xC2B02C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2B02D: cpu.execute_instruction<0xA6>(0x00004A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2B02F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2B031: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2B033: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B035: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B037: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B039: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B03B: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/copy_mirror_data.asm:122 CLC
    case 0xC2B03D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:123 ADC @VIRTUAL0A
    case 0xC2B03E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:124 STA @VIRTUAL0A
    case 0xC2B040: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:125 LDA [@VIRTUAL0A]
    case 0xC2B042: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:126 AND #$00FF
    case 0xC2B044: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/copy_mirror_data.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC2B044.
    case 0xC2B046: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/copy_mirror_data.asm:127 TAX
    case 0xC2B047: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:128 STX @LOCAL02
    case 0xC2B048: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B04A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B04C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B04E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B050: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B052: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B054: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B056: cpu.execute_instruction<0xA5>(0x000050, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B058: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B05A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B05C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B05E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B060: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/copy_mirror_data.asm:132 LDA #.SIZEOF(battler)
    case 0xC2B062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00004E, 3); return true;
    // src/battle/copy_mirror_data.asm:132 LDA #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B062.
    case 0xC2B064: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:133 JSL MEMCPY24
    case 0xC2B065: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/copy_mirror_data.asm:134 LDA @LOCAL11
    case 0xC2B069: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // src/battle/copy_mirror_data.asm:135 STA [@LOCAL12]
    case 0xC2B06B: cpu.execute_instruction<0x87>(0x000046, 2); return true;
    // src/battle/copy_mirror_data.asm:136 LDA @LOCAL0F
    case 0xC2B06D: cpu.execute_instruction<0xA5>(0x00003E, 2); return true;
    // src/battle/copy_mirror_data.asm:137 STA [@LOCAL10]
    case 0xC2B06F: cpu.execute_instruction<0x87>(0x000040, 2); return true;
    // src/battle/copy_mirror_data.asm:138 LDA @LOCAL0D
    case 0xC2B071: cpu.execute_instruction<0xA5>(0x000038, 2); return true;
    // src/battle/copy_mirror_data.asm:139 STA [@LOCAL0E]
    case 0xC2B073: cpu.execute_instruction<0x87>(0x00003A, 2); return true;
    // src/battle/copy_mirror_data.asm:140 LDA @LOCAL0B
    case 0xC2B075: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/battle/copy_mirror_data.asm:141 STA [@LOCAL0C]
    case 0xC2B077: cpu.execute_instruction<0x87>(0x000034, 2); return true;
    // src/battle/copy_mirror_data.asm:142 LDA @LOCAL09
    case 0xC2B079: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/battle/copy_mirror_data.asm:143 STA [@LOCAL0A]
    case 0xC2B07B: cpu.execute_instruction<0x87>(0x00002E, 2); return true;
    // src/battle/copy_mirror_data.asm:144 LDA @LOCAL07
    case 0xC2B07D: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/copy_mirror_data.asm:145 STA [@LOCAL08]
    case 0xC2B07F: cpu.execute_instruction<0x87>(0x000028, 2); return true;
    // src/battle/copy_mirror_data.asm:146 LDA @VIRTUAL04
    case 0xC2B081: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/copy_mirror_data.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B083: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:148 STA [@LOCAL06]
    case 0xC2B085: cpu.execute_instruction<0x87>(0x000022, 2); return true;
    // src/battle/copy_mirror_data.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC2B087: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:150 LDA @VIRTUAL02
    case 0xC2B089: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/copy_mirror_data.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B08B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:152 STA [@LOCAL05]
    case 0xC2B08D: cpu.execute_instruction<0x87>(0x00001E, 2); return true;
    // src/battle/copy_mirror_data.asm:153 LDY @LOCAL03
    case 0xC2B08F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/copy_mirror_data.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC2B091: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:155 TYA
    case 0xC2B093: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:156 STA [@LOCAL04]
    case 0xC2B094: cpu.execute_instruction<0x87>(0x00001A, 2); return true;
    // src/battle/copy_mirror_data.asm:157 LDX @LOCAL02
    case 0xC2B096: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/copy_mirror_data.asm:158 TXA
    case 0xC2B098: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B099: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:160 STA [@VIRTUAL0A]
    case 0xC2B09B: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/copy_mirror_data.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC2B09D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/copy_mirror_data.asm:162 PLD
    case 0xC2B09F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/battle/copy_mirror_data.asm:163 RTL
    case 0xC2B0A0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/count_chars.asm (source_named).
bool execute_battle_count_chars_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/count_chars.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BAC5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BAC7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BAC8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BAC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BACA.
    case 0xC2BACC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BACD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BACE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/count_chars.asm:8 STA @VIRTUAL04
    case 0xC2BACF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/count_chars.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2BACC.
    case 0xC2BAD0: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/battle/count_chars.asm:9 LDA #$0000
    case 0xC2BAD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/count_chars.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC2BAD0.
    case 0xC2BAD2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/count_chars.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC2BAD1.
    case 0xC2BAD3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/count_chars.asm:10 STA @VIRTUAL02
    case 0xC2BAD4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/count_chars.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2BAD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/count_chars.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BAD6.
    case 0xC2BAD8: cpu.execute_instruction<0x9F>(0x3380A8, 4); return true;
    // src/battle/count_chars.asm:12 TAY
    case 0xC2BAD9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/count_chars.asm:13 BRA @UNKNOWN2
    case 0xC2BADA: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/count_chars.asm:15 LDA a:battler::consciousness,X
    case 0xC2BADC: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/count_chars.asm:16 AND #$00FF
    case 0xC2BADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2BADF.
    case 0xC2BAE1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/count_chars.asm:17 BEQ @UNKNOWN1
    case 0xC2BAE2: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/count_chars.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2BAE4: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/count_chars.asm:19 AND #$00FF
    case 0xC2BAE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2BAE7.
    case 0xC2BAE9: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/count_chars.asm:20 CMP @VIRTUAL04
    case 0xC2BAEA: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/count_chars.asm:21 BNE @UNKNOWN1
    case 0xC2BAEC: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/count_chars.asm:22 LDA a:battler::npc_id,X
    case 0xC2BAEE: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/count_chars.asm:23 AND #$00FF
    case 0xC2BAF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BAF1.
    case 0xC2BAF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/count_chars.asm:24 BNE @UNKNOWN1
    case 0xC2BAF4: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/battle/count_chars.asm:25 LDA a:battler::afflictions,X
    case 0xC2BAF6: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/count_chars.asm:26 AND #$00FF
    case 0xC2BAF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/count_chars.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BAF9.
    case 0xC2BAFB: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/count_chars.asm:27 CMP #$0001
    case 0xC2BAFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/count_chars.asm:27 CMP #$0001
    // Overlapping static entry reached from 0xC2BAFC.
    case 0xC2BAFE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/count_chars.asm:28 BEQ @UNKNOWN1
    case 0xC2BAFF: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/count_chars.asm:29 CMP #$0002
    case 0xC2BB01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/count_chars.asm:29 CMP #$0002
    // Overlapping static entry reached from 0xC2BB01.
    case 0xC2BB03: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/count_chars.asm:30 BEQ @UNKNOWN1
    case 0xC2BB04: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/count_chars.asm:31 INC @VIRTUAL02
    case 0xC2BB06: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/count_chars.asm:33 TXA
    case 0xC2BB08: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/count_chars.asm:34 CLC
    case 0xC2BB09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/count_chars.asm:35 ADC #.SIZEOF(battler)
    case 0xC2BB0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/count_chars.asm:35 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BB0A.
    case 0xC2BB0C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/count_chars.asm:36 TAX
    case 0xC2BB0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/count_chars.asm:37 INY
    case 0xC2BB0E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/count_chars.asm:39 CPY #$0020
    case 0xC2BB0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/count_chars.asm:39 CPY #$0020
    // Overlapping static entry reached from 0xC2BB0F.
    case 0xC2BB11: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/count_chars.asm:40 BCC @UNKNOWN0
    case 0xC2BB12: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/battle/count_chars.asm:41 LDA @VIRTUAL02
    case 0xC2BB14: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/count_chars.asm:42 END_C_FUNCTION
    case 0xC2BB16: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/count_chars.asm:42 END_C_FUNCTION
    case 0xC2BB17: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/decrease_defense_16th.asm (source_named).
bool execute_battle_decrease_defense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/decrease_defense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27E33: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27E35: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27E36: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27E37: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27E38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27E38.
    case 0xC27E3A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27E3B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/decrease_defense_16th.asm:8 END_STACK_VARS
    case 0xC27E3C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:9 STA @VIRTUAL02
    case 0xC27E3D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27E3A.
    case 0xC27E3E: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/decrease_defense_16th.asm:10 CLC
    case 0xC27E3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:11 ADC #battler::defense
    case 0xC27E40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/decrease_defense_16th.asm:11 ADC #battler::defense
    // Overlapping static entry reached from 0xC27E40.
    case 0xC27E42: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/decrease_defense_16th.asm:12 TAY
    case 0xC27E43: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27E44: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:13 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC27E9B.
    case 0xC27E46: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/battle/decrease_defense_16th.asm:14 LSR
    case 0xC27E47: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:15 LSR
    case 0xC27E48: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:16 LSR
    case 0xC27E49: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:17 LSR
    case 0xC27E4A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27E4B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/decrease_defense_16th.asm:19 TAX
    case 0xC27E4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27E4E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/decrease_defense_16th.asm:22 LDX #1
    case 0xC27E50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/decrease_defense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27E50.
    case 0xC27E52: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/decrease_defense_16th.asm:24 STX @VIRTUAL04
    case 0xC27E53: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/decrease_defense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27E55: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:26 SEC
    case 0xC27E58: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:27 SBC @VIRTUAL04
    case 0xC27E59: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/decrease_defense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27E5B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27E5E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:30 CLC
    case 0xC27E60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:31 ADC #battler::defense
    case 0xC27E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/decrease_defense_16th.asm:31 ADC #battler::defense
    // Overlapping static entry reached from 0xC27E61.
    case 0xC27E63: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/decrease_defense_16th.asm:32 TAX
    case 0xC27E64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:33 STX @LOCAL01
    case 0xC27E65: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/decrease_defense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27E67: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:35 LDA a:battler::base_defense,X
    case 0xC27E69: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/decrease_defense_16th.asm:36 AND #$00FF
    case 0xC27E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/decrease_defense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27E6C.
    case 0xC27E6E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/battle/decrease_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E6F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/battle/decrease_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/battle/decrease_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/decrease_defense_16th.asm:38 LSR
    case 0xC27E74: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:39 LSR
    case 0xC27E75: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_defense_16th.asm:40 STA @LOCAL00
    case 0xC27E76: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/decrease_defense_16th.asm:41 STA @VIRTUAL02
    case 0xC27E78: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:42 LDX @LOCAL01
    case 0xC27E7A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/decrease_defense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27E7C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/decrease_defense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27E7F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/decrease_defense_16th.asm:45 BCS @UNKNOWN2
    case 0xC27E81: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/decrease_defense_16th.asm:46 LDA @LOCAL00
    case 0xC27E83: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/decrease_defense_16th.asm:47 STA __BSS_START__,X
    case 0xC27E85: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/decrease_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27E88: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/decrease_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27E89: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/decrease_offense_16th.asm (source_named).
bool execute_battle_decrease_offense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/decrease_offense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27DDC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27DDE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27DDF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27DE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27DE1.
    case 0xC27DE3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27DE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27DE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:9 STA @VIRTUAL02
    case 0xC27DE6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27DE3.
    case 0xC27DE7: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/decrease_offense_16th.asm:10 CLC
    case 0xC27DE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:11 ADC #battler::offense
    case 0xC27DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/decrease_offense_16th.asm:11 ADC #battler::offense
    // Overlapping static entry reached from 0xC27DE9.
    case 0xC27DEB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/decrease_offense_16th.asm:12 TAY
    case 0xC27DEC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27DED: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:14 LSR
    case 0xC27DF0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:15 LSR
    case 0xC27DF1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:16 LSR
    case 0xC27DF2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:17 LSR
    case 0xC27DF3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27DF4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/decrease_offense_16th.asm:19 TAX
    case 0xC27DF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27DF7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/decrease_offense_16th.asm:22 LDX #1
    case 0xC27DF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/decrease_offense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27DF9.
    case 0xC27DFB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/decrease_offense_16th.asm:24 STX @VIRTUAL04
    case 0xC27DFC: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/decrease_offense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27DFE: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:26 SEC
    case 0xC27E01: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:27 SBC @VIRTUAL04
    case 0xC27E02: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/decrease_offense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27E04: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27E07: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:30 CLC
    case 0xC27E09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:31 ADC #battler::offense
    case 0xC27E0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/decrease_offense_16th.asm:31 ADC #battler::offense
    // Overlapping static entry reached from 0xC27E0A.
    case 0xC27E0C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/decrease_offense_16th.asm:32 TAX
    case 0xC27E0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:33 STX @LOCAL01
    case 0xC27E0E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/decrease_offense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27E10: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:35 LDA a:battler::base_offense,X
    case 0xC27E12: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/decrease_offense_16th.asm:36 AND #$00FF
    case 0xC27E15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/decrease_offense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27E15.
    case 0xC27E17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E18: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27E1B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/decrease_offense_16th.asm:38 LSR
    case 0xC27E1D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:39 LSR
    case 0xC27E1E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/decrease_offense_16th.asm:40 STA @LOCAL00
    case 0xC27E1F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/decrease_offense_16th.asm:41 STA @VIRTUAL02
    case 0xC27E21: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:42 LDX @LOCAL01
    case 0xC27E23: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/decrease_offense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27E25: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/decrease_offense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27E28: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/decrease_offense_16th.asm:45 BCS @UNKNOWN2
    case 0xC27E2A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/decrease_offense_16th.asm:46 LDA @LOCAL00
    case 0xC27E2C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/decrease_offense_16th.asm:47 STA __BSS_START__,X
    case 0xC27E2E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/decrease_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27E31: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/decrease_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27E32: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/determine_dodge.asm (source_named).
bool execute_battle_determine_dodge_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_dodge.asm:3 BEGIN_C_FUNCTION
    case 0xC284AD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284AF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284B0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC284B1.
    case 0xC284B3: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_dodge.asm:7 END_STACK_VARS
    case 0xC284B4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:8 LDX CURRENT_TARGET
    case 0xC284B5: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/determine_dodge.asm:8 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC284B3.
    case 0xC284B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x001DBD, 3); return true;
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC284B8: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC284B7.
    case 0xC284B9: cpu.execute_instruction<0x1D>(0x002900, 3); return true;
    // src/battle/determine_dodge.asm:9 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC284B7.
    case 0xC284BA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/determine_dodge.asm:10 AND #$00FF
    case 0xC284BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_dodge.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC284B9.
    case 0xC284BC: cpu.execute_instruction<0xFF>(0x03C900, 4); return true;
    // src/battle/determine_dodge.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC284BB.
    case 0xC284BD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/determine_dodge.asm:11 CMP #STATUS_0::PARALYZED
    case 0xC284BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_dodge.asm:11 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC284BE.
    case 0xC284C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:12 BNE @UNKNOWN0
    case 0xC284C1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:13 LDA #0
    case 0xC284C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:13 LDA #0
    // Overlapping static entry reached from 0xC284C3.
    case 0xC284C5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:14 BRA @UNKNOWN8
    case 0xC284C6: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/battle/determine_dodge.asm:16 LDX CURRENT_TARGET
    case 0xC284C8: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/determine_dodge.asm:17 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC284CB: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/determine_dodge.asm:18 AND #$00FF
    case 0xC284CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_dodge.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC284CE.
    case 0xC284D0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/determine_dodge.asm:19 CMP #STATUS_2::ASLEEP
    case 0xC284D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_dodge.asm:19 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC284D1.
    case 0xC284D3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:20 BNE @UNKNOWN1
    case 0xC284D4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:21 LDA #0
    case 0xC284D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:21 LDA #0
    // Overlapping static entry reached from 0xC284D6.
    case 0xC284D8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:22 BRA @UNKNOWN8
    case 0xC284D9: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/battle/determine_dodge.asm:24 CMP #STATUS_2::IMMOBILIZED
    case 0xC284DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_dodge.asm:24 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC284DB.
    case 0xC284DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:25 BNE @UNKNOWN2
    case 0xC284DE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:26 LDA #0
    case 0xC284E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:26 LDA #0
    // Overlapping static entry reached from 0xC284E0.
    case 0xC284E2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:27 BRA @UNKNOWN8
    case 0xC284E3: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/battle/determine_dodge.asm:29 CMP #STATUS_2::SOLIDIFIED
    case 0xC284E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/determine_dodge.asm:29 CMP #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC284E5.
    case 0xC284E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:30 BNE @UNKNOWN3
    case 0xC284E8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:31 LDA #0
    case 0xC284EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:31 LDA #0
    // Overlapping static entry reached from 0xC284EA.
    case 0xC284EC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:32 BRA @UNKNOWN8
    case 0xC284ED: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/battle/determine_dodge.asm:34 LDX CURRENT_TARGET
    case 0xC284EF: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/determine_dodge.asm:35 LDA a:battler::speed,X
    case 0xC284F2: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/determine_dodge.asm:36 ASL
    case 0xC284F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:37 LDX CURRENT_ATTACKER
    case 0xC284F6: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/determine_dodge.asm:38 SEC
    case 0xC284F9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:39 SBC a:battler::speed,X
    case 0xC284FA: cpu.execute_instruction<0xFD>(0x00002A, 3); return true;
    // src/battle/determine_dodge.asm:40 STA @LOCAL00
    case 0xC284FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/determine_dodge.asm:41 STA @VIRTUAL02
    case 0xC284FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/determine_dodge.asm:42 LDA #0
    case 0xC28501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:42 LDA #0
    // Overlapping static entry reached from 0xC28501.
    case 0xC28503: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/determine_dodge.asm:43 CLC
    case 0xC28504: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_dodge.asm:44 SBC @VIRTUAL02
    case 0xC28505: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC28507: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC28509: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC2850B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/determine_dodge.asm:45 BRANCHGTS @UNKNOWN6
    case 0xC2850D: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/battle/determine_dodge.asm:46 LDA @LOCAL00
    case 0xC2850F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/determine_dodge.asm:47 JSR SUCCESS_500
    case 0xC28511: cpu.execute_instruction<0x20>(0x006BDB, 3); return true;
    // src/battle/determine_dodge.asm:48 CMP #0
    case 0xC28514: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:48 CMP #0
    // Overlapping static entry reached from 0xC28514.
    case 0xC28516: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/determine_dodge.asm:49 BNE @UNKNOWN7
    case 0xC28517: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/determine_dodge.asm:51 LDA #0
    case 0xC28519: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_dodge.asm:51 LDA #0
    // Overlapping static entry reached from 0xC28519.
    case 0xC2851B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/determine_dodge.asm:52 BRA @UNKNOWN8
    case 0xC2851C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/determine_dodge.asm:54 LDA #1
    case 0xC2851E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/determine_dodge.asm:54 LDA #1
    // Overlapping static entry reached from 0xC2851E.
    case 0xC28520: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_dodge.asm:56 END_C_FUNCTION
    case 0xC28521: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_dodge.asm:56 END_C_FUNCTION
    case 0xC28522: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/determine_targetting.asm (source_named).
bool execute_battle_determine_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/determine_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC1ADB4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ADB9.
    case 0xC1ADBB: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADBC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/determine_targetting.asm:11 END_STACK_VARS
    case 0xC1ADBD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:12 TXY
    case 0xC1ADBE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:13 TAX
    case 0xC1ADBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:15 LDA #$00FF
    case 0xC1ADC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    case 0xC1ADC4: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:16 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1ADC2.
    case 0xC1ADC5: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC1ADC6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:17 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1ADC5.
    case 0xC1ADC7: cpu.execute_instruction<0x20>(0x0068A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADC8.
    case 0xC1ADCA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADCB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ADCD.
    case 0xC1ADCF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/determine_targetting.asm:18 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1ADD0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/determine_targetting.asm:19 TXA
    case 0xC1ADD2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/determine_targetting.asm:20 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1ADD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:21 STA @LOCAL03
    case 0xC1ADDA: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/battle/determine_targetting.asm:22 PHA
    case 0xC1ADDC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADDD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADDF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADE1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1ADE3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/determine_targetting.asm:24 PLA
    case 0xC1ADE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:25 CLC
    case 0xC1ADE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:26 ADC @VIRTUAL0A
    case 0xC1ADE7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:27 STA @VIRTUAL0A
    case 0xC1ADE9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:28 LDA [@VIRTUAL0A]
    case 0xC1ADEB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:29 AND #$00FF
    case 0xC1ADED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1ADED.
    case 0xC1ADEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:30 BEQ @ENEMY_TARGETTING_PSI
    case 0xC1ADF0: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    case 0xC1ADF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:31 CMP #ACTION_DIRECTION::ENEMY
    // Overlapping static entry reached from 0xC1ADF2.
    case 0xC1ADF4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ADF5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:32 BEQL @ALLY_TARGETTING_PSI
    case 0xC1ADF7: cpu.execute_instruction<0x4C>(0x00AE99, 3); return true;
    // src/battle/determine_targetting.asm:33 JMP @RETURN
    case 0xC1ADFA: cpu.execute_instruction<0x4C>(0x00AF50, 3); return true;
    // src/battle/determine_targetting.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ADFD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:36 LDA #TARGETTED::ENEMIES
    case 0xC1ADFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008510, 3); return true;
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    case 0xC1AE01: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:37 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1ADFF.
    case 0xC1AE02: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE03: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:39 LDA @LOCAL03
    case 0xC1AE05: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/battle/determine_targetting.asm:40 INC
    case 0xC1AE07: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:41 CLC
    case 0xC1AE08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:42 ADC @VIRTUAL06
    case 0xC1AE09: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:43 STA @VIRTUAL06
    case 0xC1AE0B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:44 LDA [@VIRTUAL06]
    case 0xC1AE0D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:45 AND #$00FF
    case 0xC1AE0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC1AE0F.
    case 0xC1AE11: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:46 BEQ @ENEMY_NONE
    case 0xC1AE12: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    case 0xC1AE14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:47 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1AE14.
    case 0xC1AE16: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:48 BEQ @ENEMY_SINGLE
    case 0xC1AE17: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    case 0xC1AE19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/determine_targetting.asm:49 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1AE19.
    case 0xC1AE1B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:50 BEQ @ENEMY_SINGLE_RANDOM
    case 0xC1AE1C: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    case 0xC1AE1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_targetting.asm:51 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1AE1E.
    case 0xC1AE20: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:52 BEQ @ENEMY_ROW
    case 0xC1AE21: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    case 0xC1AE23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/determine_targetting.asm:53 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1AE23.
    case 0xC1AE25: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:54 BEQ @ENEMY_ALL
    case 0xC1AE26: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/battle/determine_targetting.asm:55 BRA @ENEMY_ALL
    case 0xC1AE28: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/battle/determine_targetting.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE2A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:58 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AE2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    case 0xC1AE2E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:59 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE2C.
    case 0xC1AE2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:60 STA @LOCAL02
    case 0xC1AE30: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:61 SEP #PROC_FLAGS::INDEX8
    case 0xC1AE32: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:62 STY @VIRTUAL01
    case 0xC1AE34: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:63 JMP @RETURN
    case 0xC1AE36: cpu.execute_instruction<0x4C>(0x00AF50, 3); return true;
    // src/battle/determine_targetting.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE39: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:67 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AE3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    case 0xC1AE3D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:68 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE3B.
    case 0xC1AE3E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:69 STA @LOCAL02
    case 0xC1AE3F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:70 TXY
    case 0xC1AE41: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:71 LDX #1
    case 0xC1AE42: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:71 LDX #1
    // Overlapping static entry reached from 0xC1AE42.
    case 0xC1AE44: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE45: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:73 LDA #0
    case 0xC1AE47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_targetting.asm:73 LDA #0
    // Overlapping static entry reached from 0xC1AE47.
    case 0xC1AE49: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:74 JSR UNKNOWN_C1242E
    case 0xC1AE4A: cpu.execute_instruction<0x20>(0x00242E, 3); return true;
    // src/battle/determine_targetting.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE4D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:76 STA @VIRTUAL01
    case 0xC1AE4F: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:77 JMP @RETURN
    case 0xC1AE51: cpu.execute_instruction<0x4C>(0x00AF50, 3); return true;
    // src/battle/determine_targetting.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:80 LDA #TARGETTED::ENEMIES | TARGETTED::SINGLE
    case 0xC1AE56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008511, 3); return true;
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    case 0xC1AE58: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:81 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE56.
    case 0xC1AE59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:82 STA @LOCAL02
    case 0xC1AE5A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE5C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:84 LDA #1
    case 0xC1AE5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:84 LDA #1
    // Overlapping static entry reached from 0xC1AE5E.
    case 0xC1AE60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/determine_targetting.asm:85 JSL COUNT_CHARS
    case 0xC1AE61: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/determine_targetting.asm:86 DEC
    case 0xC1AE65: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:87 JSL RAND_MOD
    case 0xC1AE66: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/battle/determine_targetting.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:89 STA @VIRTUAL01
    case 0xC1AE6C: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:90 INC @VIRTUAL01
    case 0xC1AE6E: cpu.execute_instruction<0xE6>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:91 JMP @RETURN
    case 0xC1AE70: cpu.execute_instruction<0x4C>(0x00AF50, 3); return true;
    // src/battle/determine_targetting.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE73: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:94 LDA #TARGETTED::ENEMIES | TARGETTED::ROW
    case 0xC1AE75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x008512, 3); return true;
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    case 0xC1AE77: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:95 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE75.
    case 0xC1AE78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:96 STA @LOCAL02
    case 0xC1AE79: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:97 TXY
    case 0xC1AE7B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:98 LDX #1
    case 0xC1AE7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:98 LDX #1
    // Overlapping static entry reached from 0xC1AE7C.
    case 0xC1AE7E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE7F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:100 TXA
    case 0xC1AE81: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:101 JSR UNKNOWN_C1242E
    case 0xC1AE82: cpu.execute_instruction<0x20>(0x00242E, 3); return true;
    // src/battle/determine_targetting.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:103 STA @VIRTUAL01
    case 0xC1AE87: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:104 JMP @RETURN
    case 0xC1AE89: cpu.execute_instruction<0x4C>(0x00AF50, 3); return true;
    // src/battle/determine_targetting.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE8C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:107 LDA @VIRTUAL00
    case 0xC1AE8E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:108 ORA #TARGETTED::ALL
    case 0xC1AE90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x008504, 3); return true;
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    case 0xC1AE92: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:109 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE90.
    case 0xC1AE93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:110 STA @LOCAL02
    case 0xC1AE94: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:111 JMP @RETURN
    case 0xC1AE96: cpu.execute_instruction<0x4C>(0x00AF50, 3); return true;
    // src/battle/determine_targetting.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE99: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:114 LDA #TARGETTED::ALLIES
    case 0xC1AE9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    case 0xC1AE9D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:115 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AE9B.
    case 0xC1AE9E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/determine_targetting.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:117 LDA @LOCAL03
    case 0xC1AEA1: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/battle/determine_targetting.asm:118 INC
    case 0xC1AEA3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:119 CLC
    case 0xC1AEA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:120 ADC @VIRTUAL06
    case 0xC1AEA5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:121 STA @VIRTUAL06
    case 0xC1AEA7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:122 LDA [@VIRTUAL06]
    case 0xC1AEA9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/determine_targetting.asm:123 AND #$00FF
    case 0xC1AEAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC1AEAB.
    case 0xC1AEAD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:124 BEQ @ALLY_NONE
    case 0xC1AEAE: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    case 0xC1AEB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:125 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC1AEB0.
    case 0xC1AEB2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:126 BEQ @ALLY_SINGLE
    case 0xC1AEB3: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    case 0xC1AEB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/determine_targetting.asm:127 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC1AEB5.
    case 0xC1AEB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:128 BEQ @ALLY_SINGLE_RANDOM
    case 0xC1AEB8: cpu.execute_instruction<0xF0>(0x00006C, 2); return true;
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    case 0xC1AEBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/determine_targetting.asm:129 CMP #ACTION_TARGET::ROW
    // Overlapping static entry reached from 0xC1AEBA.
    case 0xC1AEBC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AEBD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:130 BEQL @ALLY_ALL
    case 0xC1AEBF: cpu.execute_instruction<0x4C>(0x00AF46, 3); return true;
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    case 0xC1AEC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/determine_targetting.asm:131 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC1AEC2.
    case 0xC1AEC4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AEC5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/determine_targetting.asm:132 BEQL @ALLY_ALL
    case 0xC1AEC7: cpu.execute_instruction<0x4C>(0x00AF46, 3); return true;
    // src/battle/determine_targetting.asm:133 JMP @ALLY_ALL
    case 0xC1AECA: cpu.execute_instruction<0x4C>(0x00AF46, 3); return true;
    // src/battle/determine_targetting.asm:135 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AECD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:136 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AECF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    case 0xC1AED1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:137 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AECF.
    case 0xC1AED2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:138 STA @LOCAL02
    case 0xC1AED3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:139 SEP #PROC_FLAGS::INDEX8
    case 0xC1AED5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:140 STY @VIRTUAL01
    case 0xC1AED7: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:144 BRA @RETURN
    case 0xC1AED9: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/battle/determine_targetting.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AEDB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:148 LDA #TARGETTED::SINGLE | TARGETTED::ALLIES
    case 0xC1AEDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    case 0xC1AEDF: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:149 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AEDD.
    case 0xC1AEE0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:150 STA @LOCAL02
    case 0xC1AEE1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:151 REP #PROC_FLAGS::ACCUM8
    case 0xC1AEE3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:152 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1AEE5: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/battle/determine_targetting.asm:153 AND #$00FF
    case 0xC1AEE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC1AEE8.
    case 0xC1AEEA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/determine_targetting.asm:154 CMP #1
    case 0xC1AEEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:154 CMP #1
    // Overlapping static entry reached from 0xC1AEEB.
    case 0xC1AEED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/determine_targetting.asm:155 BEQ @ONLY_ONE_ALLY
    case 0xC1AEEE: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/determine_targetting.asm:156 LDA #3
    case 0xC1AEF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/determine_targetting.asm:156 LDA #3
    // Overlapping static entry reached from 0xC1AEF0.
    case 0xC1AEF2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:157 JSR UNKNOWN_C193E7
    case 0xC1AEF3: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF6.
    case 0xC1AEF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEF9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEFB.
    case 0xC1AEFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AEFE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF00: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF04: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:159 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AF06: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF08: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF0A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF0C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/determine_targetting.asm:160 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AF0E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/determine_targetting.asm:162 LDX #1
    case 0xC1AF10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/determine_targetting.asm:162 LDX #1
    // Overlapping static entry reached from 0xC1AF10.
    case 0xC1AF12: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/determine_targetting.asm:163 TXA
    case 0xC1AF13: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:164 JSR CHAR_SELECT_PROMPT
    case 0xC1AF14: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/battle/determine_targetting.asm:165 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:166 STA @VIRTUAL01
    case 0xC1AF19: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:167 JSR UNKNOWN_C19437
    case 0xC1AF1B: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/battle/determine_targetting.asm:168 BRA @RETURN
    case 0xC1AF1E: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/battle/determine_targetting.asm:170 SEP #PROC_FLAGS::INDEX8
    case 0xC1AF20: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:171 STY @VIRTUAL01
    case 0xC1AF22: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:172 BRA @RETURN
    case 0xC1AF24: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/battle/determine_targetting.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:175 LDA #TARGETTED::ALLIES | TARGETTED::SINGLE
    case 0xC1AF28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    case 0xC1AF2A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:176 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AF28.
    case 0xC1AF2B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:177 STA @LOCAL02
    case 0xC1AF2C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF2E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:179 LDA #0
    case 0xC1AF30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/determine_targetting.asm:179 LDA #0
    // Overlapping static entry reached from 0xC1AF30.
    case 0xC1AF32: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/determine_targetting.asm:180 JSL COUNT_CHARS
    case 0xC1AF33: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/determine_targetting.asm:181 DEC
    case 0xC1AF37: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/determine_targetting.asm:182 JSL RAND_MOD
    case 0xC1AF38: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/battle/determine_targetting.asm:182 JSL RAND_MOD
    // Overlapping static entry reached from 0xC1AFB4.
    case 0xC1AF3B: cpu.execute_instruction<0xC4>(0x0000AA, 2); return true;
    // include/macros.asm:1308 TAX
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AF3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1309 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AF3D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1310 LDA struct + field,X
    // Macro caller: src/battle/determine_targetting.asm:183 LDA8_STRUCT_MEMBER GAME_STATE, game_state::unknown96
    case 0xC1AF3F: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/battle/determine_targetting.asm:184 STA @VIRTUAL01
    case 0xC1AF42: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:185 BRA @RETURN
    case 0xC1AF44: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/determine_targetting.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF46: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:188 LDA @VIRTUAL00
    case 0xC1AF48: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:189 ORA #TARGETTED::ALL
    case 0xC1AF4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x008504, 3); return true;
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    case 0xC1AF4C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:190 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1AF4A.
    case 0xC1AF4D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:191 STA @LOCAL02
    case 0xC1AF4E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF50: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:194 LDA @VIRTUAL01
    case 0xC1AF52: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/battle/determine_targetting.asm:195 AND #$00FF
    case 0xC1AF54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC1AF54.
    case 0xC1AF56: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/determine_targetting.asm:196 STA @VIRTUAL02
    case 0xC1AF57: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/determine_targetting.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC1AF59: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/determine_targetting.asm:198 LDY #8
    case 0xC1AF5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:199 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AF5B.
    case 0xC1AF5E: cpu.execute_instruction<0x20>(0x0016A5, 3); return true;
    // src/battle/determine_targetting.asm:200 LDA @LOCAL02
    case 0xC1AF5F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/determine_targetting.asm:201 STA @VIRTUAL00
    case 0xC1AF61: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:202 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/determine_targetting.asm:203 LDA @VIRTUAL00
    case 0xC1AF65: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/determine_targetting.asm:204 AND #$00FF
    case 0xC1AF67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/determine_targetting.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC1AF67.
    case 0xC1AF69: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/determine_targetting.asm:205 JSL ASL16_ENTRY2
    case 0xC1AF6A: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/battle/determine_targetting.asm:206 ORA @VIRTUAL02
    case 0xC1AF6E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/battle/determine_targetting.asm:207 REP #PROC_FLAGS::INDEX8
    case 0xC1AF70: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AF72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/determine_targetting.asm:208 END_C_FUNCTION
    case 0xC1AF73: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/eat_food.asm (source_named).
bool execute_battle_eat_food_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/eat_food.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B27D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B27F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B280: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B281: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B281.
    case 0xC2B283: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B284: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    case 0xC2B285: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B283.
    case 0xC2B287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x0000BD, 3); return true;
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    case 0xC2B288: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC2B287.
    case 0xC2B289: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC2B287.
    case 0xC2B28A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/eat_food.asm:18 TAX
    case 0xC2B28B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:19 STX @LOCAL03
    case 0xC2B28C: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:20 TXA
    case 0xC2B28E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:21 DEC
    case 0xC2B28F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    case 0xC2B290: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B290.
    case 0xC2B292: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:23 JSL MULT168
    case 0xC2B293: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/eat_food.asm:24 TAX
    case 0xC2B297: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:25 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC2B298: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/battle/eat_food.asm:26 AND #$00FF
    case 0xC2B29B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2B29B.
    case 0xC2B29D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2B29E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2B29E.
    case 0xC2B2A0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/eat_food.asm:28 BNE @UNKNOWN0
    case 0xC2B2A1: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B2A3.
    case 0xC2B2A5: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B2A5.
    case 0xC2B2A7: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B2A8.
    case 0xC2B2AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2AD: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/eat_food.asm:30 JMP @UNKNOWN36
    case 0xC2B2B1: cpu.execute_instruction<0x4C>(0x00B606, 3); return true;
    // src/battle/eat_food.asm:32 JSR APPLY_CONDIMENT
    case 0xC2B2B4: cpu.execute_instruction<0x20>(0x00B172, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2B7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2B9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2BD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/eat_food.asm:36 LDX @LOCAL03
    case 0xC2B2BF: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:37 CPX #4
    case 0xC2B2C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/eat_food.asm:37 CPX #4
    // Overlapping static entry reached from 0xC2B2C1.
    case 0xC2B2C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/eat_food.asm:38 BNE @UNKNOWN1
    case 0xC2B2C4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/eat_food.asm:39 LDA #2
    case 0xC2B2C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/eat_food.asm:39 LDA #2
    // Overlapping static entry reached from 0xC2B2C6.
    case 0xC2B2C8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/eat_food.asm:40 BRA @UNKNOWN2
    case 0xC2B2C9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:42 LDA #1
    case 0xC2B2CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:42 LDA #1
    // Overlapping static entry reached from 0xC2B2CB.
    case 0xC2B2CD: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2CE: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2D0: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2D2: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2D4: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/eat_food.asm:45 CLC
    case 0xC2B2D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:46 ADC @VIRTUAL0A
    case 0xC2B2D7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:47 STA @VIRTUAL0A
    case 0xC2B2D9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:48 LDA [@VIRTUAL0A]
    case 0xC2B2DB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:49 AND #$00FF
    case 0xC2B2DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2B2DD.
    case 0xC2B2DF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/eat_food.asm:50 TAY
    case 0xC2B2E0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/eat_food.asm:51 STY @LOCAL02
    case 0xC2B2E1: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/eat_food.asm:53 LDA [@VIRTUAL0A]
    case 0xC2B2EB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:54 AND #$00FF
    case 0xC2B2ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2B2ED.
    case 0xC2B2EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:55 BEQ @UNKNOWN12
    case 0xC2B2F0: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/battle/eat_food.asm:56 CMP #1
    case 0xC2B2F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:56 CMP #1
    // Overlapping static entry reached from 0xC2B2F2.
    case 0xC2B2F4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:57 BEQ @UNKNOWN15
    case 0xC2B2F5: cpu.execute_instruction<0xF0>(0x000069, 2); return true;
    // src/battle/eat_food.asm:58 CMP #2
    case 0xC2B2F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/eat_food.asm:58 CMP #2
    // Overlapping static entry reached from 0xC2B2F7.
    case 0xC2B2F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2FA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2FC: cpu.execute_instruction<0x4C>(0x00B378, 3); return true;
    // src/battle/eat_food.asm:60 CMP #3
    case 0xC2B2FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/eat_food.asm:60 CMP #3
    // Overlapping static entry reached from 0xC2B2FF.
    case 0xC2B301: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B302: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B304: cpu.execute_instruction<0x4C>(0x00B3AA, 3); return true;
    // src/battle/eat_food.asm:62 CMP #4
    case 0xC2B307: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/eat_food.asm:62 CMP #4
    // Overlapping static entry reached from 0xC2B307.
    case 0xC2B309: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B30A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B30C: cpu.execute_instruction<0x4C>(0x00B3D8, 3); return true;
    // src/battle/eat_food.asm:64 CMP #5
    case 0xC2B30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/eat_food.asm:64 CMP #5
    // Overlapping static entry reached from 0xC2B30F.
    case 0xC2B311: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B312: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B314: cpu.execute_instruction<0x4C>(0x00B43F, 3); return true;
    // src/battle/eat_food.asm:66 CMP #6
    case 0xC2B317: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/eat_food.asm:66 CMP #6
    // Overlapping static entry reached from 0xC2B317.
    case 0xC2B319: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B31A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B31C: cpu.execute_instruction<0x4C>(0x00B4A6, 3); return true;
    // src/battle/eat_food.asm:68 CMP #7
    case 0xC2B31F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/eat_food.asm:68 CMP #7
    // Overlapping static entry reached from 0xC2B31F.
    case 0xC2B321: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B322: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B324: cpu.execute_instruction<0x4C>(0x00B50D, 3); return true;
    // src/battle/eat_food.asm:70 CMP #8
    case 0xC2B327: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/eat_food.asm:70 CMP #8
    // Overlapping static entry reached from 0xC2B327.
    case 0xC2B329: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B32A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B32C: cpu.execute_instruction<0x4C>(0x00B573, 3); return true;
    // src/battle/eat_food.asm:72 CMP #9
    case 0xC2B32F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/battle/eat_food.asm:72 CMP #9
    // Overlapping static entry reached from 0xC2B32F.
    case 0xC2B331: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B332: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B334: cpu.execute_instruction<0x4C>(0x00B5D9, 3); return true;
    // src/battle/eat_food.asm:74 CMP #10
    case 0xC2B337: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/battle/eat_food.asm:74 CMP #10
    // Overlapping static entry reached from 0xC2B337.
    case 0xC2B339: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B33A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B33C: cpu.execute_instruction<0x4C>(0x00B5DF, 3); return true;
    // src/battle/eat_food.asm:76 JMP @UNKNOWN35
    case 0xC2B33F: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:78 CPY #0
    case 0xC2B342: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/eat_food.asm:78 CPY #0
    // Overlapping static entry reached from 0xC2B342.
    case 0xC2B344: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:79 BEQ @UNKNOWN13
    case 0xC2B345: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/eat_food.asm:80 TYA
    case 0xC2B347: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B348: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B34A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B34B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B34D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:82 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B34E: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/eat_food.asm:83 TAX
    case 0xC2B351: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:84 BRA @UNKNOWN14
    case 0xC2B352: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:86 LDX #30000
    case 0xC2B354: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:86 LDX #30000
    // Overlapping static entry reached from 0xC2B354.
    case 0xC2B356: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    case 0xC2B357: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B356.
    case 0xC2B358: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/eat_food.asm:89 JSR RECOVER_HP
    case 0xC2B35A: cpu.execute_instruction<0x20>(0x007294, 3); return true;
    // src/battle/eat_food.asm:90 JMP @UNKNOWN35
    case 0xC2B35D: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:92 CPY #0
    case 0xC2B360: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/eat_food.asm:92 CPY #0
    // Overlapping static entry reached from 0xC2B360.
    case 0xC2B362: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:93 BEQ @UNKNOWN16
    case 0xC2B363: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/eat_food.asm:94 TYA
    case 0xC2B365: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/eat_food.asm:95 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B366: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/eat_food.asm:96 TAX
    case 0xC2B369: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:97 BRA @UNKNOWN17
    case 0xC2B36A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:99 LDX #30000
    case 0xC2B36C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:99 LDX #30000
    // Overlapping static entry reached from 0xC2B36C.
    case 0xC2B36E: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    case 0xC2B36F: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B36E.
    case 0xC2B370: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/eat_food.asm:102 JSR RECOVER_PP
    case 0xC2B372: cpu.execute_instruction<0x20>(0x007318, 3); return true;
    // src/battle/eat_food.asm:103 JMP @UNKNOWN35
    case 0xC2B375: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:105 CPY #0
    case 0xC2B378: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/eat_food.asm:105 CPY #0
    // Overlapping static entry reached from 0xC2B378.
    case 0xC2B37A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:106 BEQ @UNKNOWN19
    case 0xC2B37B: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/eat_food.asm:107 TYA
    case 0xC2B37D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B37E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B380: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B381: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B383: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:109 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B384: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/eat_food.asm:110 TAX
    case 0xC2B387: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:111 BRA @UNKNOWN20
    case 0xC2B388: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:113 LDX #30000
    case 0xC2B38A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:113 LDX #30000
    // Overlapping static entry reached from 0xC2B38A.
    case 0xC2B38C: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    case 0xC2B38D: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B38C.
    case 0xC2B38E: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/eat_food.asm:116 JSR RECOVER_HP
    case 0xC2B390: cpu.execute_instruction<0x20>(0x007294, 3); return true;
    // src/battle/eat_food.asm:117 LDY @LOCAL02
    case 0xC2B393: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:118 BEQ @UNKNOWN21
    case 0xC2B395: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/eat_food.asm:119 TYA
    case 0xC2B397: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/eat_food.asm:120 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B398: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/eat_food.asm:121 TAX
    case 0xC2B39B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:122 BRA @UNKNOWN22
    case 0xC2B39C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/eat_food.asm:124 LDX #$7530
    case 0xC2B39E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x007530, 3); return true;
    // src/battle/eat_food.asm:124 LDX #$7530
    // Overlapping static entry reached from 0xC2B39E.
    case 0xC2B3A0: cpu.execute_instruction<0x75>(0x0000AD, 2); return true;
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    case 0xC2B3A1: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B3A0.
    case 0xC2B3A2: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/eat_food.asm:127 JSR RECOVER_PP
    case 0xC2B3A4: cpu.execute_instruction<0x20>(0x007318, 3); return true;
    // src/battle/eat_food.asm:128 JMP @UNKNOWN35
    case 0xC2B3A7: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:128 JMP @UNKNOWN35
    // Overlapping static entry reached from 0xC2B627.
    case 0xC2B3A9: cpu.execute_instruction<0xB5>(0x0000A9, 2); return true;
    // src/battle/eat_food.asm:130 LDA #$0004
    case 0xC2B3AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/eat_food.asm:130 LDA #$0004
    // Overlapping static entry reached from 0xC2B3A9.
    case 0xC2B3AB: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/battle/eat_food.asm:130 LDA #$0004
    // Overlapping static entry reached from 0xC2B3AA.
    case 0xC2B3AC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/eat_food.asm:131 JSR RAND_LIMIT
    case 0xC2B3AD: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/eat_food.asm:132 CMP #0
    case 0xC2B3B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/eat_food.asm:132 CMP #0
    // Overlapping static entry reached from 0xC2B3B0.
    case 0xC2B3B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:133 BEQ @UNKNOWN28
    case 0xC2B3B3: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/eat_food.asm:134 CMP #1
    case 0xC2B3B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/eat_food.asm:134 CMP #1
    // Overlapping static entry reached from 0xC2B3B5.
    case 0xC2B3B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B3B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B3BA: cpu.execute_instruction<0x4C>(0x00B43F, 3); return true;
    // src/battle/eat_food.asm:136 CMP #2
    case 0xC2B3BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/eat_food.asm:136 CMP #2
    // Overlapping static entry reached from 0xC2B3BD.
    case 0xC2B3BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B3C0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B3C2: cpu.execute_instruction<0x4C>(0x00B4A6, 3); return true;
    // src/battle/eat_food.asm:138 CMP #3
    case 0xC2B3C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/eat_food.asm:138 CMP #3
    // Overlapping static entry reached from 0xC2B3C5.
    case 0xC2B3C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B3C8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B3CA: cpu.execute_instruction<0x4C>(0x00B50D, 3); return true;
    // src/battle/eat_food.asm:140 CMP #4
    case 0xC2B3CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/eat_food.asm:140 CMP #4
    // Overlapping static entry reached from 0xC2B3CD.
    case 0xC2B3CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B3D0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B3D2: cpu.execute_instruction<0x4C>(0x00B573, 3); return true;
    // src/battle/eat_food.asm:142 JMP @UNKNOWN35
    case 0xC2B3D5: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:144 LDA CURRENT_TARGET
    case 0xC2B3D8: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:145 CLC
    case 0xC2B3DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:146 ADC #battler::iq
    case 0xC2B3DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x000031, 3); return true;
    // src/battle/eat_food.asm:146 ADC #battler::iq
    // Overlapping static entry reached from 0xC2B3DC.
    case 0xC2B3DE: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/eat_food.asm:147 LDY @LOCAL02
    case 0xC2B3DF: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:148 SEP #PROC_FLAGS::INDEX8
    case 0xC2B3E1: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:149 STY @VIRTUAL00
    case 0xC2B3E3: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:150 PHA
    case 0xC2B3E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:151 REP #PROC_FLAGS::INDEX8
    case 0xC2B3E6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:152 TAX
    case 0xC2B3E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B3E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:154 LDA __BSS_START__,X
    case 0xC2B3EB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:155 CLC
    case 0xC2B3EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:156 ADC @VIRTUAL00
    case 0xC2B3EF: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:157 PLX
    case 0xC2B3F1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:158 STA __BSS_START__,X
    case 0xC2B3F2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:159 LDX @LOCAL03
    case 0xC2B3F5: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:161 TXA
    case 0xC2B3F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:162 DEC
    case 0xC2B3FA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC2B3FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B3FB.
    case 0xC2B3FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:164 JSL MULT168
    case 0xC2B3FE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/eat_food.asm:165 CLC
    case 0xC2B402: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    case 0xC2B403: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x009A28, 3); return true;
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    // Overlapping static entry reached from 0xC2B403.
    case 0xC2B405: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:167 PHA
    case 0xC2B406: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:168 TAX
    case 0xC2B407: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B408: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:170 LDA __BSS_START__,X
    case 0xC2B40A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:171 CLC
    case 0xC2B40D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:172 ADC @VIRTUAL00
    case 0xC2B40E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:173 PLX
    case 0xC2B410: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:174 STA __BSS_START__,X
    case 0xC2B411: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:175 LDX @LOCAL03
    case 0xC2B414: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC2B416: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:177 TXA
    case 0xC2B418: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:178 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC2B419: cpu.execute_instruction<0x22>(0xC21D7D, 4); return true;
    // src/battle/eat_food.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2B41D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B41F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x00F7B8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B41F.
    case 0xC2B421: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B422: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B421.
    case 0xC2B423: cpu.execute_instruction<0x0E>(0x00C8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B424: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B424.
    case 0xC2B426: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B427: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:181 LDY @LOCAL02
    case 0xC2B429: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:182 TYA
    case 0xC2B42B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B42C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B42E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B430: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B432: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B434: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B436: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:185 JSL DISPLAY_TEXT_WAIT
    case 0xC2B438: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/eat_food.asm:186 JMP @UNKNOWN35
    case 0xC2B43C: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:188 LDA CURRENT_TARGET
    case 0xC2B43F: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:189 CLC
    case 0xC2B442: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:190 ADC #battler::guts
    case 0xC2B443: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002C, 2); else cpu.execute_instruction<0x69>(0x00002C, 3); return true;
    // src/battle/eat_food.asm:190 ADC #battler::guts
    // Overlapping static entry reached from 0xC2B443.
    case 0xC2B445: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/eat_food.asm:191 PHA
    case 0xC2B446: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:192 LDY @LOCAL02
    case 0xC2B447: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:193 STY @VIRTUAL02
    case 0xC2B449: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/eat_food.asm:194 TAX
    case 0xC2B44B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:195 LDA __BSS_START__,X
    case 0xC2B44C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:196 CLC
    case 0xC2B44F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:197 ADC @VIRTUAL02
    case 0xC2B450: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/eat_food.asm:198 PLX
    case 0xC2B452: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:199 STA __BSS_START__,X
    case 0xC2B453: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:200 LDX @LOCAL03
    case 0xC2B456: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:201 TXA
    case 0xC2B458: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:202 DEC
    case 0xC2B459: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    case 0xC2B45A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B45A.
    case 0xC2B45C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:204 JSL MULT168
    case 0xC2B45D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/eat_food.asm:205 CLC
    case 0xC2B461: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    case 0xC2B462: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x009A26, 3); return true;
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    // Overlapping static entry reached from 0xC2B462.
    case 0xC2B464: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:207 PHA
    case 0xC2B465: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:208 LDY @LOCAL02
    case 0xC2B466: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:209 SEP #PROC_FLAGS::INDEX8
    case 0xC2B468: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:210 STY @VIRTUAL00
    case 0xC2B46A: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:211 REP #PROC_FLAGS::INDEX8
    case 0xC2B46C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:212 TAX
    case 0xC2B46E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:213 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B46F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:214 LDA __BSS_START__,X
    case 0xC2B471: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:215 CLC
    case 0xC2B474: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:216 ADC @VIRTUAL00
    case 0xC2B475: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:217 PLX
    case 0xC2B477: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:218 STA __BSS_START__,X
    case 0xC2B478: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:219 LDX @LOCAL03
    case 0xC2B47B: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2B47D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:221 TXA
    case 0xC2B47F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:222 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC2B480: cpu.execute_instruction<0x22>(0xC21BA4, 4); return true;
    // src/battle/eat_food.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC2B484: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D2, 2); else cpu.execute_instruction<0xA9>(0x00F7D2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B486.
    case 0xC2B488: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B489: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B488.
    case 0xC2B48A: cpu.execute_instruction<0x0E>(0x00C8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B48B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B48B.
    case 0xC2B48D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B48E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:225 LDY @LOCAL02
    case 0xC2B490: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:226 TYA
    case 0xC2B492: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B493: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B495: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B497: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B499: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B49B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B49D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:229 JSL DISPLAY_TEXT_WAIT
    case 0xC2B49F: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/eat_food.asm:230 JMP @UNKNOWN35
    case 0xC2B4A3: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:232 LDA CURRENT_TARGET
    case 0xC2B4A6: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:233 CLC
    case 0xC2B4A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:234 ADC #battler::speed
    case 0xC2B4AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002A, 2); else cpu.execute_instruction<0x69>(0x00002A, 3); return true;
    // src/battle/eat_food.asm:234 ADC #battler::speed
    // Overlapping static entry reached from 0xC2B4AA.
    case 0xC2B4AC: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/eat_food.asm:235 PHA
    case 0xC2B4AD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:236 LDY @LOCAL02
    case 0xC2B4AE: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:237 STY @VIRTUAL02
    case 0xC2B4B0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/eat_food.asm:238 TAX
    case 0xC2B4B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:239 LDA __BSS_START__,X
    case 0xC2B4B3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:240 CLC
    case 0xC2B4B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:241 ADC @VIRTUAL02
    case 0xC2B4B7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/eat_food.asm:242 PLX
    case 0xC2B4B9: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:243 STA __BSS_START__,X
    case 0xC2B4BA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:244 LDX @LOCAL03
    case 0xC2B4BD: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:245 TXA
    case 0xC2B4BF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:246 DEC
    case 0xC2B4C0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    case 0xC2B4C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B4C1.
    case 0xC2B4C3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:248 JSL MULT168
    case 0xC2B4C4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/eat_food.asm:249 CLC
    case 0xC2B4C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    case 0xC2B4C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x009A25, 3); return true;
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    // Overlapping static entry reached from 0xC2B4C9.
    case 0xC2B4CB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:251 PHA
    case 0xC2B4CC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:252 LDY @LOCAL02
    case 0xC2B4CD: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:253 SEP #PROC_FLAGS::INDEX8
    case 0xC2B4CF: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:254 STY @VIRTUAL00
    case 0xC2B4D1: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:255 REP #PROC_FLAGS::INDEX8
    case 0xC2B4D3: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:256 TAX
    case 0xC2B4D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:257 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B4D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:258 LDA __BSS_START__,X
    case 0xC2B4D8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:259 CLC
    case 0xC2B4DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:260 ADC @VIRTUAL00
    case 0xC2B4DC: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:261 PLX
    case 0xC2B4DE: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:262 STA __BSS_START__,X
    case 0xC2B4DF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:263 LDX @LOCAL03
    case 0xC2B4E2: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:265 TXA
    case 0xC2B4E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:266 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC2B4E7: cpu.execute_instruction<0x22>(0xC21AEB, 4); return true;
    // src/battle/eat_food.asm:267 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00F82F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B4ED.
    case 0xC2B4EF: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4F0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B4F2.
    case 0xC2B4F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4F5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:269 LDY @LOCAL02
    case 0xC2B4F7: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:270 TYA
    case 0xC2B4F9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4FC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B500: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B502: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B504: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:273 JSL DISPLAY_TEXT_WAIT
    case 0xC2B506: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/eat_food.asm:274 JMP @UNKNOWN35
    case 0xC2B50A: cpu.execute_instruction<0x4C>(0x00B5E3, 3); return true;
    // src/battle/eat_food.asm:276 LDA CURRENT_TARGET
    case 0xC2B50D: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:277 CLC
    case 0xC2B510: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    case 0xC2B511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    // Overlapping static entry reached from 0xC2B511.
    case 0xC2B513: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/eat_food.asm:279 LDY @LOCAL02
    case 0xC2B514: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:280 SEP #PROC_FLAGS::INDEX8
    case 0xC2B516: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:281 STY @VIRTUAL00
    case 0xC2B518: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:282 PHA
    case 0xC2B51A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:283 REP #PROC_FLAGS::INDEX8
    case 0xC2B51B: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:284 TAX
    case 0xC2B51D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:285 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B51E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:286 LDA __BSS_START__,X
    case 0xC2B520: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:287 CLC
    case 0xC2B523: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:288 ADC @VIRTUAL00
    case 0xC2B524: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:289 PLX
    case 0xC2B526: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:290 STA __BSS_START__,X
    case 0xC2B527: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:291 LDX @LOCAL03
    case 0xC2B52A: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:292 REP #PROC_FLAGS::ACCUM8
    case 0xC2B52C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:293 TXA
    case 0xC2B52E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:294 DEC
    case 0xC2B52F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    case 0xC2B530: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B530.
    case 0xC2B532: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:296 JSL MULT168
    case 0xC2B533: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/eat_food.asm:297 CLC
    case 0xC2B537: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC2B538: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000027, 2); else cpu.execute_instruction<0x69>(0x009A27, 3); return true;
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC2B538.
    case 0xC2B53A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:299 PHA
    case 0xC2B53B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:300 TAX
    case 0xC2B53C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:301 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B53D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:302 LDA __BSS_START__,X
    case 0xC2B53F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:303 CLC
    case 0xC2B542: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:304 ADC @VIRTUAL00
    case 0xC2B543: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:305 PLX
    case 0xC2B545: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:306 STA __BSS_START__,X
    case 0xC2B546: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:307 LDX @LOCAL03
    case 0xC2B549: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2B54B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:309 TXA
    case 0xC2B54D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:310 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC2B54E: cpu.execute_instruction<0x22>(0xC21D65, 4); return true;
    // src/battle/eat_food.asm:311 REP #PROC_FLAGS::ACCUM8
    case 0xC2B552: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B554: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00F84C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B554.
    case 0xC2B556: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B557: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B559: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B559.
    case 0xC2B55B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B55C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:313 LDY @LOCAL02
    case 0xC2B55E: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:314 TYA
    case 0xC2B560: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B561: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B563: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B565: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B567: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B569: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B56B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:317 JSL DISPLAY_TEXT_WAIT
    case 0xC2B56D: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/eat_food.asm:318 BRA @UNKNOWN35
    case 0xC2B571: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/battle/eat_food.asm:320 LDA CURRENT_TARGET
    case 0xC2B573: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/eat_food.asm:321 CLC
    case 0xC2B576: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:322 ADC #battler::luck
    case 0xC2B577: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002E, 2); else cpu.execute_instruction<0x69>(0x00002E, 3); return true;
    // src/battle/eat_food.asm:322 ADC #battler::luck
    // Overlapping static entry reached from 0xC2B577.
    case 0xC2B579: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/eat_food.asm:323 PHA
    case 0xC2B57A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:324 LDY @LOCAL02
    case 0xC2B57B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:325 STY @VIRTUAL02
    case 0xC2B57D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/eat_food.asm:326 TAX
    case 0xC2B57F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:327 LDA __BSS_START__,X
    case 0xC2B580: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:328 CLC
    case 0xC2B583: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:329 ADC @VIRTUAL02
    case 0xC2B584: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/eat_food.asm:330 PLX
    case 0xC2B586: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:331 STA __BSS_START__,X
    case 0xC2B587: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:332 LDX @LOCAL03
    case 0xC2B58A: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:333 TXA
    case 0xC2B58C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:334 DEC
    case 0xC2B58D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    case 0xC2B58E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B58E.
    case 0xC2B590: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/eat_food.asm:336 JSL MULT168
    case 0xC2B591: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/eat_food.asm:337 CLC
    case 0xC2B595: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC2B596: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x009A29, 3); return true;
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC2B596.
    case 0xC2B598: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:339 PHA
    case 0xC2B599: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/eat_food.asm:340 LDY @LOCAL02
    case 0xC2B59A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:341 SEP #PROC_FLAGS::INDEX8
    case 0xC2B59C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:342 STY @VIRTUAL00
    case 0xC2B59E: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/battle/eat_food.asm:343 REP #PROC_FLAGS::INDEX8
    case 0xC2B5A0: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/eat_food.asm:344 TAX
    case 0xC2B5A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:346 LDA __BSS_START__,X
    case 0xC2B5A5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/eat_food.asm:347 CLC
    case 0xC2B5A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/eat_food.asm:348 ADC @VIRTUAL00
    case 0xC2B5A9: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/eat_food.asm:349 PLX
    case 0xC2B5AB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/eat_food.asm:350 STA __BSS_START__,X
    case 0xC2B5AC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/eat_food.asm:351 LDX @LOCAL03
    case 0xC2B5AF: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/eat_food.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2B5B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:353 TXA
    case 0xC2B5B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:354 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC2B5B4: cpu.execute_instruction<0x22>(0xC21C5D, 4); return true;
    // src/battle/eat_food.asm:355 REP #PROC_FLAGS::ACCUM8
    case 0xC2B5B8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x00F86B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B5BA.
    case 0xC2B5BC: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B5BF.
    case 0xC2B5C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/eat_food.asm:357 LDY @LOCAL02
    case 0xC2B5C4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/eat_food.asm:358 TYA
    case 0xC2B5C6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B5C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B5C9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5CD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5D1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/eat_food.asm:361 JSL DISPLAY_TEXT_WAIT
    case 0xC2B5D3: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/eat_food.asm:362 BRA @UNKNOWN35
    case 0xC2B5D7: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/eat_food.asm:364 JSL BTLACT_HEALING_A
    case 0xC2B5D9: cpu.execute_instruction<0x22>(0xC29AEA, 4); return true;
    // src/battle/eat_food.asm:365 BRA @UNKNOWN35
    case 0xC2B5DD: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/eat_food.asm:367 JSL HEAL_POISON
    case 0xC2B5DF: cpu.execute_instruction<0x22>(0xC2A39D, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/eat_food.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    case 0xC2B5ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    // Overlapping static entry reached from 0xC2B5ED.
    case 0xC2B5EF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/eat_food.asm:374 LDA [@VIRTUAL06],Y
    case 0xC2B5F0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/eat_food.asm:375 REP #PROC_FLAGS::ACCUM8
    case 0xC2B5F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/eat_food.asm:376 AND #$00FF
    case 0xC2B5F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC2B5F4.
    case 0xC2B5F6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/eat_food.asm:377 BEQ @UNKNOWN36
    case 0xC2B5F7: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/eat_food.asm:378 AND #$00FF
    case 0xC2B5F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/eat_food.asm:378 AND #$00FF
    // Overlapping static entry reached from 0xC2B5F9.
    case 0xC2B5FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5FC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5FF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B601: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/eat_food.asm:380 JSL UNKNOWN_C076C8
    case 0xC2B602: cpu.execute_instruction<0x22>(0xC076C8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B606: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B607: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/enemy_flashing_off.asm (source_named).
bool execute_battle_enemy_flashing_off_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_off.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xEF0000: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/enemy_flashing_off.asm:8 LDA CURRENT_FLASHING_ENEMY
    case 0xEF0002: cpu.execute_instruction<0xAD>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    case 0xEF0005: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_off.asm:9 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0005.
    case 0xEF0007: cpu.execute_instruction<0xFF>(0xAD45F0, 4); return true;
    // src/battle/enemy_flashing_off.asm:10 BEQ @UNKNOWN2
    case 0xEF0008: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    case 0xEF000A: cpu.execute_instruction<0xAD>(0x0089D2, 3); return true;
    // src/battle/enemy_flashing_off.asm:11 LDA CURRENT_FLASHING_ENEMY_ROW
    // Overlapping static entry reached from 0xEF0007.
    case 0xEF000B: cpu.execute_instruction<0xD2>(0x000089, 2); return true;
    // src/battle/enemy_flashing_off.asm:12 BEQ @UNKNOWN0
    case 0xEF000D: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/enemy_flashing_off.asm:13 LDX CURRENT_FLASHING_ENEMY
    case 0xEF000F: cpu.execute_instruction<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:14 LDA BACK_ROW_BATTLERS,X
    case 0xEF0012: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    case 0xEF0015: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_off.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEF0015.
    case 0xEF0017: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    case 0xEF0018: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_off.asm:16 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0018.
    case 0xEF001A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_off.asm:17 JSL MULT168
    case 0xEF001B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_off.asm:18 TAX
    case 0xEF001F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0020: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:20 STZ BATTLERS_TABLE+74,X
    case 0xEF0022: cpu.execute_instruction<0x9E>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_off.asm:21 BRA @UNKNOWN1
    case 0xEF0025: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/enemy_flashing_off.asm:24 LDX CURRENT_FLASHING_ENEMY
    case 0xEF0027: cpu.execute_instruction<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:25 LDA FRONT_ROW_BATTLERS,X
    case 0xEF002A: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    case 0xEF002D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_off.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xEF002D.
    case 0xEF002F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    case 0xEF0030: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_off.asm:27 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0030.
    case 0xEF0032: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_off.asm:28 JSL MULT168
    case 0xEF0033: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_off.asm:29 TAX
    case 0xEF0037: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_off.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0038: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:31 STZ BATTLERS_TABLE+74,X
    case 0xEF003A: cpu.execute_instruction<0x9E>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_off.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xEF003D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:34 STZ ENEMY_TARGETTING_FLASHING
    case 0xEF003F: cpu.execute_instruction<0x9C>(0x00ADA2, 3); return true;
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    case 0xEF0042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_off.asm:35 LDA #$FFFF
    // Overlapping static entry reached from 0xEF0042.
    case 0xEF0044: cpu.execute_instruction<0xFF>(0x89D08D, 4); return true;
    // src/battle/enemy_flashing_off.asm:36 STA CURRENT_FLASHING_ENEMY
    case 0xEF0045: cpu.execute_instruction<0x8D>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_off.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0048: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_off.asm:38 LDA #$0001
    case 0xEF004A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    case 0xEF004C: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/battle/enemy_flashing_off.asm:39 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xEF004A.
    case 0xEF004D: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/battle/enemy_flashing_off.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xEF004F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_flashing_off.asm:42 END_C_FUNCTION
    case 0xEF0051: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/enemy_flashing_on.asm (source_named).
bool execute_battle_enemy_flashing_on_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_flashing_on.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xEF0052: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0054: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0055: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0056: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF0057: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0057.
    case 0xEF0059: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF005A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_flashing_on.asm:13 END_STACK_VARS
    case 0xEF005B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    case 0xEF005C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/enemy_flashing_on.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xEF0059.
    case 0xEF005D: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    case 0xEF005E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/enemy_flashing_on.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xEF005D.
    case 0xEF005F: cpu.execute_instruction<0x0E>(0x00D0AD, 3); return true;
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    case 0xEF0060: cpu.execute_instruction<0xAD>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:16 LDA CURRENT_FLASHING_ENEMY
    // Overlapping static entry reached from 0xEF005F.
    case 0xEF0062: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    case 0xEF0063: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0062.
    case 0xEF0064: cpu.execute_instruction<0xFF>(0x04F0FF, 4); return true;
    // src/battle/enemy_flashing_on.asm:17 CMP #$FFFF
    // Overlapping static entry reached from 0xEF0063.
    case 0xEF0065: cpu.execute_instruction<0xFF>(0x2204F0, 4); return true;
    // src/battle/enemy_flashing_on.asm:18 BEQ @UNKNOWN0
    case 0xEF0066: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/battle/enemy_flashing_on.asm:20 JSL ENEMY_FLASHING_OFF
    case 0xEF0068: cpu.execute_instruction<0x22>(0xEF0000, 4); return true;
    // src/battle/enemy_flashing_on.asm:20 JSL ENEMY_FLASHING_OFF
    // Overlapping static entry reached from 0xEF0065.
    case 0xEF0069: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/enemy_flashing_on.asm:25 LDX @LOCAL01
    case 0xEF006C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/enemy_flashing_on.asm:26 STX CURRENT_FLASHING_ENEMY
    case 0xEF006E: cpu.execute_instruction<0x8E>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:27 LDA @LOCAL00
    case 0xEF0071: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/enemy_flashing_on.asm:28 STA CURRENT_FLASHING_ENEMY_ROW
    case 0xEF0073: cpu.execute_instruction<0x8D>(0x0089D2, 3); return true;
    // src/battle/enemy_flashing_on.asm:29 BEQ @UNKNOWN1
    case 0xEF0076: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/enemy_flashing_on.asm:30 LDX CURRENT_FLASHING_ENEMY
    case 0xEF0078: cpu.execute_instruction<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0xEF007B: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    case 0xEF007E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_on.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xEF007E.
    case 0xEF0080: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    case 0xEF0081: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_on.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF0081.
    case 0xEF0083: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_on.asm:34 JSL MULT168
    case 0xEF0084: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_on.asm:35 TAX
    case 0xEF0088: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0089: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:37 LDA #1
    case 0xEF008B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xEF008D: cpu.execute_instruction<0x9D>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_on.asm:38 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF008B.
    case 0xEF008E: cpu.execute_instruction<0xF6>(0x00009F, 2); return true;
    // src/battle/enemy_flashing_on.asm:39 BRA @UNKNOWN2
    case 0xEF0090: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/enemy_flashing_on.asm:42 LDX CURRENT_FLASHING_ENEMY
    case 0xEF0092: cpu.execute_instruction<0xAE>(0x0089D0, 3); return true;
    // src/battle/enemy_flashing_on.asm:43 LDA FRONT_ROW_BATTLERS,X
    case 0xEF0095: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    case 0xEF0098: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_flashing_on.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xEF0098.
    case 0xEF009A: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    case 0xEF009B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_flashing_on.asm:45 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xEF009B.
    case 0xEF009D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_flashing_on.asm:46 JSL MULT168
    case 0xEF009E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_flashing_on.asm:47 TAX
    case 0xEF00A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_flashing_on.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xEF00A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:49 LDA #1
    case 0xEF00A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    case 0xEF00A7: cpu.execute_instruction<0x9D>(0x009FF6, 3); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF00A5.
    case 0xEF00A8: cpu.execute_instruction<0xF6>(0x00009F, 2); return true;
    // src/battle/enemy_flashing_on.asm:50 STA BATTLERS_TABLE+battler::unknown74,X
    // Overlapping static entry reached from 0xEF05E1.
    case 0xEF00A9: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/battle/enemy_flashing_on.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xEF00AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    case 0xEF00AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xEF00A9.
    case 0xEF00AD: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/enemy_flashing_on.asm:53 LDA #1
    // Overlapping static entry reached from 0xEF00AC.
    case 0xEF00AE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/enemy_flashing_on.asm:54 STA ENEMY_TARGETTING_FLASHING
    case 0xEF00AF: cpu.execute_instruction<0x8D>(0x00ADA2, 3); return true;
    // src/battle/enemy_flashing_on.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xEF00B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/enemy_flashing_on.asm:56 STA REDRAW_ALL_WINDOWS
    case 0xEF00B4: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/battle/enemy_flashing_on.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xEF00B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xEF00B9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_flashing_on.asm:58 END_C_FUNCTION
    case 0xEF00BA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/enemy_select_mode.asm (source_named).
bool execute_battle_enemy_select_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/enemy_select_mode.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1E1A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1A7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E1AA.
    case 0xC1E1AC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/enemy_select_mode.asm:18 END_STACK_VARS
    case 0xC1E1AE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    case 0xC1E1AF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:19 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E1AC.
    case 0xC1E1B0: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    case 0xC1E1B1: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:20 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1E1B0.
    case 0xC1E1B2: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    case 0xC1E1B3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:21 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E1B2.
    case 0xC1E1B4: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    case 0xC1E1B5: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:22 STA @LOCAL09
    // Overlapping static entry reached from 0xC1E1B4.
    case 0xC1E1B6: cpu.execute_instruction<0x22>(0xE4D422, 4); return true;
    // src/battle/enemy_select_mode.asm:23 JSR SET_INSTANT_PRINTING
    case 0xC1E1B7: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/battle/enemy_select_mode.asm:23 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E1B6.
    case 0xC1E1BA: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1E1BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E1BA.
    case 0xC1E1BC: cpu.execute_instruction<0x0E>(0x002000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E1BB.
    case 0xC1E1BD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1E1BE: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/enemy_select_mode.asm:24 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E1BC.
    case 0xC1E1BF: cpu.execute_instruction<0xEE>(0x00AD04, 3); return true;
    // src/battle/enemy_select_mode.asm:25 LDA OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC1E1C1: cpu.execute_instruction<0xAD>(0x008900, 3); return true;
    // src/battle/enemy_select_mode.asm:25 LDA OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    // Overlapping static entry reached from 0xC1E1BF.
    case 0xC1E1C2: cpu.execute_instruction<0x00>(0x000089, 2); return true;
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC1E1C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/battle/enemy_select_mode.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E1C4.
    case 0xC1E1C6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:27 JSL MULT168
    case 0xC1E1C7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_select_mode.asm:28 CLC
    case 0xC1E1CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E1CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/battle/enemy_select_mode.asm:29 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E1CC.
    case 0xC1E1CE: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/battle/enemy_select_mode.asm:30 TAX
    case 0xC1E1CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:31 LDA a:window_stats::text_x,X
    case 0xC1E1D0: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/enemy_select_mode.asm:32 STA @LOCAL08
    case 0xC1E1D3: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:33 LDA a:window_stats::text_y,X
    case 0xC1E1D5: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/enemy_select_mode.asm:34 STA @LOCAL07
    case 0xC1E1D8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/enemy_select_mode.asm:35 LDA #1
    case 0xC1E1DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:35 LDA #1
    // Overlapping static entry reached from 0xC1E1DA.
    case 0xC1E1DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:36 STA @LOCAL06
    case 0xC1E1DD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:37 STA @LOCAL05
    case 0xC1E1DF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:39 JSR SET_INSTANT_PRINTING
    case 0xC1E1E1: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/battle/enemy_select_mode.asm:40 LDX @LOCAL07
    case 0xC1E1E5: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/enemy_select_mode.asm:41 LDA @LOCAL08
    case 0xC1E1E7: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:42 JSR UNKNOWN_C438A5
    case 0xC1E1E9: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/battle/enemy_select_mode.asm:43 LDA @LOCAL0A
    case 0xC1E1ED: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:44 STA @VIRTUAL04
    case 0xC1E1EF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1E1F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1E1F3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E1FB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/enemy_select_mode.asm:47 JSR UNKNOWN_C10D7C
    case 0xC1E1FD: cpu.execute_instruction<0x20>(0x000D7C, 3); return true;
    // src/battle/enemy_select_mode.asm:48 STA @VIRTUAL02
    case 0xC1E200: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:49 LDA #7
    case 0xC1E202: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/enemy_select_mode.asm:49 LDA #7
    // Overlapping static entry reached from 0xC1E202.
    case 0xC1E204: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/enemy_select_mode.asm:50 SEC
    case 0xC1E205: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:51 SBC @VIRTUAL02
    case 0xC1E206: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:52 CLC
    case 0xC1E208: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC1E209: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005A, 2); else cpu.execute_instruction<0x69>(0x00895A, 3); return true;
    // src/battle/enemy_select_mode.asm:53 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1E209.
    case 0xC1E20B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/battle/enemy_select_mode.asm:54 TAY
    case 0xC1E20C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    case 0xC1E20D: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:55 STY @LOCAL04
    // Overlapping static entry reached from 0xC1E20B.
    case 0xC1E20E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:56 LDX #3
    case 0xC1E20F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/enemy_select_mode.asm:56 LDX #3
    // Overlapping static entry reached from 0xC1E20F.
    case 0xC1E211: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/enemy_select_mode.asm:57 STX @LOCAL03
    case 0xC1E212: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:58 BRA @UNKNOWN4
    case 0xC1E214: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:60 CPX @LOCAL06
    case 0xC1E216: cpu.execute_instruction<0xE4>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:61 BNE @UNKNOWN2
    case 0xC1E218: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1E21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/enemy_select_mode.asm:63 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1E21A.
    case 0xC1E21C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/enemy_select_mode.asm:67 BRA @UNKNOWN3
    case 0xC1E21D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    case 0xC1E21F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // src/battle/enemy_select_mode.asm:70 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1E21F.
    case 0xC1E221: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:75 JSR PRINT_LETTER
    case 0xC1E222: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/battle/enemy_select_mode.asm:76 LDX @LOCAL03
    case 0xC1E225: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:77 DEX
    case 0xC1E227: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:78 STX @LOCAL03
    case 0xC1E228: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:80 TXA
    case 0xC1E22A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:81 CMP @VIRTUAL02
    case 0xC1E22B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1E22D: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/enemy_select_mode.asm:82 BGT @UNKNOWN1
    case 0xC1E22F: cpu.execute_instruction<0xB0>(0x0000E5, 2); return true;
    // src/battle/enemy_select_mode.asm:83 BRA @UNKNOWN9
    case 0xC1E231: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:85 CPX @LOCAL06
    case 0xC1E233: cpu.execute_instruction<0xE4>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:86 BNE @UNKNOWN7
    case 0xC1E235: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    case 0xC1E237: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/enemy_select_mode.asm:88 LDA #CHAR::JZERO_UNDERLINED
    // Overlapping static entry reached from 0xC1E237.
    case 0xC1E239: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/enemy_select_mode.asm:92 BRA @UNKNOWN8
    case 0xC1E23A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    case 0xC1E23C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // src/battle/enemy_select_mode.asm:95 LDA #CHAR::JZERO
    // Overlapping static entry reached from 0xC1E23C.
    case 0xC1E23E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:100 STA @VIRTUAL02
    case 0xC1E23F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:101 LDY @LOCAL04
    case 0xC1E241: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:102 LDA __BSS_START__,Y
    case 0xC1E243: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    case 0xC1E246: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_select_mode.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1E246.
    case 0xC1E248: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:104 CLC
    case 0xC1E249: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:105 ADC @VIRTUAL02
    case 0xC1E24A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:106 INY
    case 0xC1E24C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:107 STY @LOCAL04
    case 0xC1E24D: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:108 JSR PRINT_LETTER
    case 0xC1E24F: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/battle/enemy_select_mode.asm:109 LDX @LOCAL03
    case 0xC1E252: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:110 DEX
    case 0xC1E254: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:111 STX @LOCAL03
    case 0xC1E255: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:113 CPX #0
    case 0xC1E257: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:113 CPX #0
    // Overlapping static entry reached from 0xC1E257.
    case 0xC1E259: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/enemy_select_mode.asm:114 BNE @UNKNOWN6
    case 0xC1E25A: cpu.execute_instruction<0xD0>(0x0000D7, 2); return true;
    // src/battle/enemy_select_mode.asm:115 JSR CLEAR_INSTANT_PRINTING
    case 0xC1E25C: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/battle/enemy_select_mode.asm:116 JSL WINDOW_TICK
    case 0xC1E260: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/enemy_select_mode.asm:118 JSL WINDOW_TICK
    case 0xC1E264: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/enemy_select_mode.asm:119 LDA PAD_PRESS
    case 0xC1E268: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    case 0xC1E26B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/battle/enemy_select_mode.asm:120 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E26B.
    case 0xC1E26D: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:121 BEQ @UNKNOWN11
    case 0xC1E26E: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/enemy_select_mode.asm:122 LDA @LOCAL06
    case 0xC1E270: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:123 CMP #3
    case 0xC1E272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/enemy_select_mode.asm:123 CMP #3
    // Overlapping static entry reached from 0xC1E272.
    case 0xC1E274: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/enemy_select_mode.asm:124 BCS @UNKNOWN11
    case 0xC1E275: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/battle/enemy_select_mode.asm:125 INC @LOCAL06
    case 0xC1E277: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:126 LDA @LOCAL05
    case 0xC1E279: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E27F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:127 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1E281: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:128 STA @LOCAL05
    case 0xC1E282: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:129 JMP @UNKNOWN0
    case 0xC1E284: cpu.execute_instruction<0x4C>(0x00E1E1, 3); return true;
    // src/battle/enemy_select_mode.asm:131 LDA PAD_PRESS
    case 0xC1E287: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    case 0xC1E28A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/battle/enemy_select_mode.asm:132 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E28A.
    case 0xC1E28C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    case 0xC1E28D: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/enemy_select_mode.asm:133 BEQ @UNKNOWN12
    // Overlapping static entry reached from 0xC1E28C.
    case 0xC1E28E: cpu.execute_instruction<0x26>(0x0000A5, 2); return true;
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    case 0xC1E28F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:134 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1E28E.
    case 0xC1E290: cpu.execute_instruction<0x1C>(0x0001C9, 3); return true;
    // src/battle/enemy_select_mode.asm:135 CMP #1
    case 0xC1E291: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:135 CMP #1
    // Overlapping static entry reached from 0xC1E291.
    case 0xC1E293: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E294: cpu.execute_instruction<0x90>(0x00001F, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:136 BLTEQ @UNKNOWN12
    case 0xC1E296: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/enemy_select_mode.asm:137 DEC @LOCAL06
    case 0xC1E298: cpu.execute_instruction<0xC6>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E29A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E29A.
    case 0xC1E29C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E29D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E29F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E29F.
    case 0xC1E2A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:138 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2A2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E2A4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E2A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:139 MOVE_INT1632 @LOCAL05, @VIRTUAL06
    case 0xC1E2A8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:140 JSL DIVISION32
    case 0xC1E2AA: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/battle/enemy_select_mode.asm:141 LDA @VIRTUAL06
    case 0xC1E2AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:142 STA @LOCAL05
    case 0xC1E2B0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:143 JMP @UNKNOWN0
    case 0xC1E2B2: cpu.execute_instruction<0x4C>(0x00E1E1, 3); return true;
    // src/battle/enemy_select_mode.asm:145 LDA PAD_HELD
    case 0xC1E2B5: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    case 0xC1E2B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/battle/enemy_select_mode.asm:146 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E2B8.
    case 0xC1E2BA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:147 BEQ @UNKNOWN15
    case 0xC1E2BB: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2BD.
    case 0xC1E2BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2C0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2C2.
    case 0xC1E2C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:148 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E2C5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:149 LDY @LOCAL05
    case 0xC1E2C7: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:150 LDA @VIRTUAL04
    case 0xC1E2C9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:151 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E2CB: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E2CF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:152 STORE_INT1632 @VIRTUAL06
    case 0xC1E2D1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:153 JSL MODULUS32S
    case 0xC1E2D3: cpu.execute_instruction<0x22>(0xC09206, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2D7.
    case 0xC1E2D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2DA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E2DC.
    case 0xC1E2DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:154 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1E2DF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:155 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E2E9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:156 BEQ @UNKNOWN14
    case 0xC1E2EB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:157 LDA @VIRTUAL04
    case 0xC1E2ED: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:158 CLC
    case 0xC1E2EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:159 ADC @LOCAL05
    case 0xC1E2F0: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:160 STA @VIRTUAL04
    case 0xC1E2F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:161 STA @LOCAL0A
    case 0xC1E2F4: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:162 JMP @UNKNOWN21
    case 0xC1E2F6: cpu.execute_instruction<0x4C>(0x00E38E, 3); return true;
    // src/battle/enemy_select_mode.asm:164 LDA @LOCAL05
    case 0xC1E2F9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E2FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:165 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E300: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:166 STA @VIRTUAL02
    case 0xC1E302: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:167 LDA @LOCAL0A
    case 0xC1E304: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:168 STA @VIRTUAL04
    case 0xC1E306: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:169 SEC
    case 0xC1E308: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:170 SBC @VIRTUAL02
    case 0xC1E309: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:171 STA @VIRTUAL04
    case 0xC1E30B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:172 STA @LOCAL0A
    case 0xC1E30D: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:173 JMP @UNKNOWN21
    case 0xC1E30F: cpu.execute_instruction<0x4C>(0x00E38E, 3); return true;
    // src/battle/enemy_select_mode.asm:175 LDA PAD_HELD
    case 0xC1E312: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    case 0xC1E315: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/battle/enemy_select_mode.asm:176 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E315.
    case 0xC1E317: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    case 0xC1E318: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/battle/enemy_select_mode.asm:177 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC1E317.
    case 0xC1E319: cpu.execute_instruction<0x53>(0x0000A9, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E31A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E319.
    case 0xC1E31B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E31A.
    case 0xC1E31C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E31D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E31F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E31F.
    case 0xC1E321: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:178 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1E322: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:179 LDY @LOCAL05
    case 0xC1E324: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:180 LDA @VIRTUAL04
    case 0xC1E326: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:181 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1E328: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E32C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:182 STORE_INT1632 @VIRTUAL06
    case 0xC1E32E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:183 JSL MODULUS32S
    case 0xC1E330: cpu.execute_instruction<0x22>(0xC09206, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E334.
    case 0xC1E336: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E337: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E339.
    case 0xC1E33B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:184 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1E33C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E33E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E340: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E342: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E344: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:185 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1E346: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:186 BEQ @UNKNOWN17
    case 0xC1E348: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/enemy_select_mode.asm:187 LDA @VIRTUAL04
    case 0xC1E34A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:188 SEC
    case 0xC1E34C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:189 SBC @LOCAL05
    case 0xC1E34D: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // src/battle/enemy_select_mode.asm:190 STA @VIRTUAL04
    case 0xC1E34F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:191 STA @LOCAL0A
    case 0xC1E351: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:192 BRA @UNKNOWN21
    case 0xC1E353: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/battle/enemy_select_mode.asm:194 LDA @LOCAL05
    case 0xC1E355: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E357: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E359: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E35A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E35B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/battle/enemy_select_mode.asm:195 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC1E35C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:196 STA @VIRTUAL02
    case 0xC1E35E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:197 LDA @LOCAL0A
    case 0xC1E360: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:198 STA @VIRTUAL04
    case 0xC1E362: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:199 CLC
    case 0xC1E364: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:200 ADC @VIRTUAL02
    case 0xC1E365: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/enemy_select_mode.asm:201 STA @VIRTUAL04
    case 0xC1E367: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:202 STA @LOCAL0A
    case 0xC1E369: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:203 BRA @UNKNOWN21
    case 0xC1E36B: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/battle/enemy_select_mode.asm:205 LDA PAD_PRESS
    case 0xC1E36D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E370: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/battle/enemy_select_mode.asm:206 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E370.
    case 0xC1E372: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/enemy_select_mode.asm:207 BEQ @UNKNOWN19
    case 0xC1E373: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/enemy_select_mode.asm:208 LDX @VIRTUAL04
    case 0xC1E375: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:209 STX @LOCAL03
    case 0xC1E377: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:210 JMP @UNKNOWN31
    case 0xC1E379: cpu.execute_instruction<0x4C>(0x00E47F, 3); return true;
    // src/battle/enemy_select_mode.asm:212 LDA PAD_PRESS
    case 0xC1E37C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/battle/enemy_select_mode.asm:213 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E37F.
    case 0xC1E381: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E382: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E381.
    case 0xC1E383: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    case 0xC1E384: cpu.execute_instruction<0x4C>(0x00E264, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:214 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1E383.
    case 0xC1E385: cpu.execute_instruction<0x64>(0x0000E2, 2); return true;
    // src/battle/enemy_select_mode.asm:215 LDX @LOCAL09
    case 0xC1E387: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:216 STX @LOCAL03
    case 0xC1E389: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:217 JMP @UNKNOWN31
    case 0xC1E38B: cpu.execute_instruction<0x4C>(0x00E47F, 3); return true;
    // src/battle/enemy_select_mode.asm:219 LDA @VIRTUAL04
    case 0xC1E38E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E390: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/enemy_select_mode.asm:220 BEQL @UNKNOWN0
    case 0xC1E392: cpu.execute_instruction<0x4C>(0x00E1E1, 3); return true;
    // src/battle/enemy_select_mode.asm:221 LDA @VIRTUAL04
    case 0xC1E395: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E397: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E2, 2); else cpu.execute_instruction<0xC9>(0x0001E2, 3); return true;
    // src/battle/enemy_select_mode.asm:222 CMP #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E397.
    case 0xC1E399: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E39A: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E399.
    case 0xC1E39B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000F0, 2); else cpu.execute_instruction<0x09>(0x0007F0, 3); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    case 0xC1E39C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/enemy_select_mode.asm:223 BLTEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC1E39B.
    case 0xC1E39D: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    case 0xC1E39E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x0001E2, 3); return true;
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E39D.
    case 0xC1E39F: cpu.execute_instruction<0xE2>(0x000001, 2); return true;
    // src/battle/enemy_select_mode.asm:224 LDA #ENEMY_GROUP::UNKNOWN_482
    // Overlapping static entry reached from 0xC1E39E.
    case 0xC1E3A0: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    case 0xC1E3A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:225 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E3A0.
    case 0xC1E3A2: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    case 0xC1E3A3: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/enemy_select_mode.asm:226 STA @LOCAL0A
    // Overlapping static entry reached from 0xC1E3A2.
    case 0xC1E3A4: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    case 0xC1E3A5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/enemy_select_mode.asm:228 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E3A4.
    case 0xC1E3A6: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    case 0xC1E3A7: cpu.execute_instruction<0x8D>(0x004A8C, 3); return true;
    // src/battle/enemy_select_mode.asm:229 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC1E3A6.
    case 0xC1E3A8: cpu.execute_instruction<0x8C>(0x00A94A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3A8.
    case 0xC1E3AB: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3AA.
    case 0xC1E3AC: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3AD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3AC.
    case 0xC1E3AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E3AF.
    case 0xC1E3B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/enemy_select_mode.asm:230 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC1E3B2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:231 LDA @VIRTUAL04
    case 0xC1E3B4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E3B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E3B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/enemy_select_mode.asm:232 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1E3B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:233 CLC
    case 0xC1E3B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:234 ADC @VIRTUAL0A
    case 0xC1E3BA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:235 STA @VIRTUAL0A
    case 0xC1E3BC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    case 0xC1E3BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/enemy_select_mode.asm:236 LDY #battle_entry_ptr_entry::pointer+2
    // Overlapping static entry reached from 0xC1E3BE.
    case 0xC1E3C0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/enemy_select_mode.asm:237 LDA [@VIRTUAL0A],Y
    case 0xC1E3C1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:238 TAY
    case 0xC1E3C3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:239 LDA [@VIRTUAL0A]
    case 0xC1E3C4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:240 STA @VIRTUAL06
    case 0xC1E3C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:241 STY @VIRTUAL06+2
    case 0xC1E3C8: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/battle/enemy_select_mode.asm:242 STZ ENEMIES_IN_BATTLE
    case 0xC1E3CA: cpu.execute_instruction<0x9C>(0x009F8A, 3); return true;
    // src/battle/enemy_select_mode.asm:243 BRA @UNKNOWN26
    case 0xC1E3CD: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/battle/enemy_select_mode.asm:245 LDA ENEMIES_IN_BATTLE
    case 0xC1E3CF: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/battle/enemy_select_mode.asm:246 ASL
    case 0xC1E3D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:247 TAX
    case 0xC1E3D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    case 0xC1E3D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:248 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC1E3D4.
    case 0xC1E3D6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/enemy_select_mode.asm:249 LDA [@VIRTUAL06],Y
    case 0xC1E3D7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:250 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E3D9: cpu.execute_instruction<0x9D>(0x009F8C, 3); return true;
    // src/battle/enemy_select_mode.asm:251 INC ENEMIES_IN_BATTLE
    case 0xC1E3DC: cpu.execute_instruction<0xEE>(0x009F8A, 3); return true;
    // src/battle/enemy_select_mode.asm:253 LDX @LOCAL02
    case 0xC1E3DF: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:254 TXY
    case 0xC1E3E1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:255 DEX
    case 0xC1E3E2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:256 STX @LOCAL02
    case 0xC1E3E3: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:257 CPY #0
    case 0xC1E3E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:257 CPY #0
    // Overlapping static entry reached from 0xC1E3E5.
    case 0xC1E3E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/enemy_select_mode.asm:258 BNE @UNKNOWN24
    case 0xC1E3E8: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    case 0xC1E3EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/enemy_select_mode.asm:259 LDA #.SIZEOF(battle_group_entry)
    // Overlapping static entry reached from 0xC1E3EA.
    case 0xC1E3EC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:260 CLC
    case 0xC1E3ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:261 ADC @VIRTUAL06
    case 0xC1E3EE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/enemy_select_mode.asm:262 STA @VIRTUAL06
    case 0xC1E3F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/enemy_select_mode.asm:264 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1E3F8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/enemy_select_mode.asm:265 LDA [@VIRTUAL0A]
    case 0xC1E3FA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    case 0xC1E3FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/enemy_select_mode.asm:266 AND #$00FF
    // Overlapping static entry reached from 0xC1E3FC.
    case 0xC1E3FE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/enemy_select_mode.asm:267 TAX
    case 0xC1E3FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:268 STX @LOCAL02
    case 0xC1E400: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    case 0xC1E402: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/battle/enemy_select_mode.asm:269 CPX #$00FF
    // Overlapping static entry reached from 0xC1E402.
    case 0xC1E404: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/enemy_select_mode.asm:270 BNE @UNKNOWN25
    case 0xC1E405: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // src/battle/enemy_select_mode.asm:271 JSL UNKNOWN_C08726
    case 0xC1E407: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/battle/enemy_select_mode.asm:272 JSL UNKNOWN_C2EEE7
    case 0xC1E40B: cpu.execute_instruction<0x22>(0xC2EEE7, 4); return true;
    // src/battle/enemy_select_mode.asm:273 LDY #8
    case 0xC1E40F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/enemy_select_mode.asm:273 LDY #8
    // Overlapping static entry reached from 0xC1E40F.
    case 0xC1E411: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/enemy_select_mode.asm:274 STY @LOCAL03
    case 0xC1E412: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:275 BRA @UNKNOWN28
    case 0xC1E414: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/enemy_select_mode.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E416: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/enemy_select_mode.asm:278 STZ_BADOPT @LOCAL00
    case 0xC1E418: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    case 0xC1E41A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/enemy_select_mode.asm:279 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E41A.
    case 0xC1E41C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/enemy_select_mode.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC1E41D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:281 TYA
    case 0xC1E41F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:282 TXY
    case 0xC1E420: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:283 JSL MULT168
    case 0xC1E421: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_select_mode.asm:284 CLC
    case 0xC1E425: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC1E426: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/enemy_select_mode.asm:285 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1E426.
    case 0xC1E428: cpu.execute_instruction<0x9F>(0x8EFC22, 4); return true;
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    case 0xC1E429: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/enemy_select_mode.asm:286 JSL MEMSET16
    // Overlapping static entry reached from 0xC1E428.
    case 0xC1E42C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0016A4, 3); return true;
    // src/battle/enemy_select_mode.asm:287 LDY @LOCAL03
    case 0xC1E42D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:287 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1E42C.
    case 0xC1E42E: cpu.execute_instruction<0x16>(0x0000C8, 2); return true;
    // src/battle/enemy_select_mode.asm:288 INY
    case 0xC1E42F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:289 STY @LOCAL03
    case 0xC1E430: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    case 0xC1E432: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/enemy_select_mode.asm:291 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC1E432.
    case 0xC1E434: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/enemy_select_mode.asm:292 BCC @UNKNOWN27
    case 0xC1E435: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/battle/enemy_select_mode.asm:293 LDY #0
    case 0xC1E437: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/enemy_select_mode.asm:293 LDY #0
    // Overlapping static entry reached from 0xC1E437.
    case 0xC1E439: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/enemy_select_mode.asm:294 STY @LOCAL04
    case 0xC1E43A: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:295 BRA @UNKNOWN30
    case 0xC1E43C: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:297 TYA
    case 0xC1E43E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    case 0xC1E43F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/enemy_select_mode.asm:298 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC1E43F.
    case 0xC1E441: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:299 JSL MULT168
    case 0xC1E442: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/enemy_select_mode.asm:300 CLC
    case 0xC1E446: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC1E447: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00A21C, 3); return true;
    // src/battle/enemy_select_mode.asm:301 ADC #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC1E447.
    case 0xC1E449: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AA, 2); else cpu.execute_instruction<0xA2>(0x0086AA, 3); return true;
    // src/battle/enemy_select_mode.asm:302 TAX
    case 0xC1E44A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:303 STX @LOCAL01
    case 0xC1E44B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/enemy_select_mode.asm:303 STX @LOCAL01
    // Overlapping static entry reached from 0xC1E449.
    case 0xC1E44C: cpu.execute_instruction<0x12>(0x0000A4, 2); return true;
    // src/battle/enemy_select_mode.asm:304 LDY @LOCAL04
    case 0xC1E44D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:304 LDY @LOCAL04
    // Overlapping static entry reached from 0xC1E44C.
    case 0xC1E44E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:305 TYA
    case 0xC1E44F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:306 ASL
    case 0xC1E450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:307 TAX
    case 0xC1E451: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:308 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC1E452: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/enemy_select_mode.asm:309 LDX @LOCAL01
    case 0xC1E455: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/enemy_select_mode.asm:310 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC1E457: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/enemy_select_mode.asm:311 LDY @LOCAL04
    case 0xC1E45B: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:312 INY
    case 0xC1E45D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:313 STY @LOCAL04
    case 0xC1E45E: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/enemy_select_mode.asm:315 CPY ENEMIES_IN_BATTLE
    case 0xC1E460: cpu.execute_instruction<0xCC>(0x009F8A, 3); return true;
    // src/battle/enemy_select_mode.asm:316 BCC @UNKNOWN29
    case 0xC1E463: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/enemy_select_mode.asm:317 JSL UNKNOWN_C2F121
    case 0xC1E465: cpu.execute_instruction<0x22>(0xC2F121, 4); return true;
    // src/battle/enemy_select_mode.asm:318 LDA #24
    case 0xC1E469: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/battle/enemy_select_mode.asm:318 LDA #24
    // Overlapping static entry reached from 0xC1E469.
    case 0xC1E46B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/enemy_select_mode.asm:319 JSL UNKNOWN_C0856B
    case 0xC1E46C: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/battle/enemy_select_mode.asm:320 JSL UNKNOWN_C08744
    case 0xC1E470: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/battle/enemy_select_mode.asm:321 LDX #1
    case 0xC1E474: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/enemy_select_mode.asm:321 LDX #1
    // Overlapping static entry reached from 0xC1E474.
    case 0xC1E476: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/enemy_select_mode.asm:322 TXA
    case 0xC1E477: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/enemy_select_mode.asm:323 JSL FADE_IN
    case 0xC1E478: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/battle/enemy_select_mode.asm:324 JMP @UNKNOWN0
    case 0xC1E47C: cpu.execute_instruction<0x4C>(0x00E1E1, 3); return true;
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    case 0xC1E47F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/battle/enemy_select_mode.asm:326 LDA #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1E47F.
    case 0xC1E481: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/enemy_select_mode.asm:327 JSR SET_WINDOW_FOCUS
    case 0xC1E482: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/battle/enemy_select_mode.asm:328 JSR CLOSE_FOCUS_WINDOW
    case 0xC1E485: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/battle/enemy_select_mode.asm:329 LDX @LOCAL03
    case 0xC1E488: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/enemy_select_mode.asm:330 TXA
    case 0xC1E48A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E48B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/enemy_select_mode.asm:331 END_C_FUNCTION
    case 0xC1E48C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/fail_attack_on_npcs.asm (source_named).
bool execute_battle_fail_attack_on_npcs_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/fail_attack_on_npcs.asm:3 BEGIN_C_FUNCTION
    case 0xC27CFD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27CFF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27D00: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27D01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D01.
    case 0xC27D03: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27D04: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/fail_attack_on_npcs.asm:8 LDX CURRENT_TARGET
    case 0xC27D05: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:8 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC27D03.
    case 0xC27D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x000FBD, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    case 0xC27D08: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    // Overlapping static entry reached from 0xC27D07.
    case 0xC27D09: cpu.execute_instruction<0x0F>(0xFF2900, 4); return true;
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    // Overlapping static entry reached from 0xC27D07.
    case 0xC27D0A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:10 AND #$00FF
    case 0xC27D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC27D0B.
    case 0xC27D0D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:11 BEQ @UNKNOWN0
    case 0xC27D0E: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27D10.
    case 0xC27D12: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27D12.
    case 0xC27D14: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27D15.
    case 0xC27D17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D18: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D1A: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/fail_attack_on_npcs.asm:13 LDA #1
    case 0xC27D1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:13 LDA #1
    // Overlapping static entry reached from 0xC27D1E.
    case 0xC27D20: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:14 BRA @UNKNOWN1
    case 0xC27D21: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/fail_attack_on_npcs.asm:16 LDA #0
    case 0xC27D23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/fail_attack_on_npcs.asm:16 LDA #0
    // Overlapping static entry reached from 0xC27D23.
    case 0xC27D25: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:18 END_C_FUNCTION
    case 0xC27D26: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/fail_attack_on_npcs.asm:18 END_C_FUNCTION
    case 0xC27D27: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/feeling_strange_retargetting.asm (source_named).
bool execute_battle_feeling_strange_retargetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/feeling_strange_retargetting.asm:3 BEGIN_C_FUNCTION
    case 0xC24009: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC2400B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC2400C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC2400D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2400D.
    case 0xC2400F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:6 END_STACK_VARS
    case 0xC24010: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24011: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24011.
    case 0xC24013: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24014: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24017.
    case 0xC24019: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2401A: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:8 LDX CURRENT_ATTACKER
    case 0xC2401D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:9 LDA a:battler::action_targetting,X
    case 0xC24020: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    case 0xC24023: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC24023.
    case 0xC24025: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    case 0xC24026: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:11 AND #$0007
    // Overlapping static entry reached from 0xC24026.
    case 0xC24028: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    case 0xC24029: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:12 CMP #ACTION_TARGET::ONE
    // Overlapping static entry reached from 0xC24029.
    case 0xC2402B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:13 BEQ @UNKNOWN0
    case 0xC2402C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    case 0xC2402E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:14 CMP #ACTION_TARGET::RANDOM
    // Overlapping static entry reached from 0xC2402E.
    case 0xC24030: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:15 BEQ @UNKNOWN1
    case 0xC24031: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    case 0xC24033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:16 CMP #ACTION_TARGET::ALL
    // Overlapping static entry reached from 0xC24033.
    case 0xC24035: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:17 BEQ @UNKNOWN2
    case 0xC24036: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:18 BRA @UNKNOWN5
    case 0xC24038: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:20 JSL TARGET_ALL
    case 0xC2403A: cpu.execute_instruction<0x22>(0xC26E00, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2403E: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC24041: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC24043: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:21 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC24046: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC24048: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2404A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2404C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2404E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:23 JSL RANDOM_TARGETTING
    case 0xC24050: cpu.execute_instruction<0x22>(0xC26EF8, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC24054: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC24056: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC24059: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/feeling_strange_retargetting.asm:24 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2405B: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:25 BRA @UNKNOWN5
    case 0xC2405E: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:27 JSL RAND
    case 0xC24060: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    case 0xC24064: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:28 LDY #3
    // Overlapping static entry reached from 0xC24064.
    case 0xC24066: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:29 JSL MODULUS16
    case 0xC24067: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:30 JSL TARGET_ROW
    case 0xC2406B: cpu.execute_instruction<0x22>(0xC26D04, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:31 BRA @UNKNOWN5
    case 0xC2406F: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:33 JSL RAND
    case 0xC24071: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    case 0xC24075: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:34 AND #$0001
    // Overlapping static entry reached from 0xC24075.
    case 0xC24077: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:35 BEQ @UNKNOWN3
    case 0xC24078: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:36 JSL TARGET_ALLIES
    case 0xC2407A: cpu.execute_instruction<0x22>(0xC26BFB, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:37 BRA @UNKNOWN4
    case 0xC2407E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:39 JSL TARGET_ALL_ENEMIES
    case 0xC24080: cpu.execute_instruction<0x22>(0xC26C82, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:41 LDX CURRENT_ATTACKER
    case 0xC24084: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:42 LDA a:battler::current_action,X
    case 0xC24087: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:43 JSL GET_SHIELD_TARGETTING
    case 0xC2408A: cpu.execute_instruction<0x22>(0xC23FEA, 4); return true;
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    case 0xC2408E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:44 CMP #0
    // Overlapping static entry reached from 0xC2408E.
    case 0xC24090: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:45 BNE @UNKNOWN5
    case 0xC24091: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:46 LDX CURRENT_ATTACKER
    case 0xC24093: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:47 LDA a:battler::ally_or_enemy,X
    case 0xC24096: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    case 0xC24099: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/feeling_strange_retargetting.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC24099.
    case 0xC2409B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:49 BNE @UNKNOWN5
    case 0xC2409C: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/feeling_strange_retargetting.asm:50 JSL REMOVE_NPC_TARGETTING
    case 0xC2409E: cpu.execute_instruction<0x22>(0xC26E77, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC240A2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/feeling_strange_retargetting.asm:52 END_C_FUNCTION
    case 0xC240A3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/find_stealable_items.asm (source_named).
bool execute_battle_find_stealable_items_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_stealable_items.asm:3 BEGIN_C_FUNCTION
    case 0xC241DC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241DE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241DF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC241E0.
    case 0xC241E2: cpu.execute_instruction<0xFF>(0x18645B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241E3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:16 STZ @LOCAL05
    case 0xC241E4: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:17 STZ @LOCAL04
    case 0xC241E6: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:18 JMP @UNKNOWN12
    case 0xC241E8: cpu.execute_instruction<0x4C>(0x004306, 3); return true;
    // src/battle/find_stealable_items.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC241EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/battle/find_stealable_items.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC241EB.
    case 0xC241ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:28 LDA (@LOCAL04),Y
    case 0xC241EE: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    case 0xC241F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC241F0.
    case 0xC241F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:31 STA @LOCAL03
    case 0xC241F3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    case 0xC241F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    // Overlapping static entry reached from 0xC241F5.
    case 0xC241F7: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC241F8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC241FA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC241FC: cpu.execute_instruction<0x4C>(0x004304, 3); return true;
    // src/battle/find_stealable_items.asm:34 LDA @LOCAL03
    case 0xC241FF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    case 0xC24201: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    // Overlapping static entry reached from 0xC24201.
    case 0xC24203: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC24204: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC24206: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC24208: cpu.execute_instruction<0x4C>(0x004304, 3); return true;
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    case 0xC2420B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    // Overlapping static entry reached from 0xC2420B.
    case 0xC2420D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:38 STA @LOCAL02
    case 0xC2420E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/find_stealable_items.asm:39 BRA @UNKNOWN5
    case 0xC24210: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    case 0xC24212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24212.
    case 0xC24214: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_stealable_items.asm:42 JSL MULT168
    case 0xC24215: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/find_stealable_items.asm:43 TAX
    case 0xC24219: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:44 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2421A: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    case 0xC2421D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC2421D.
    case 0xC2421F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/find_stealable_items.asm:46 BEQ @UNKNOWN4
    case 0xC24220: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/find_stealable_items.asm:47 LDA BATTLERS_TABLE,X
    case 0xC24222: cpu.execute_instruction<0xBD>(0x009FAC, 3); return true;
    // src/battle/find_stealable_items.asm:48 CMP @LOCAL03
    case 0xC24225: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:49 BNE @UNKNOWN4
    case 0xC24227: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:50 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC24229: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    case 0xC2422C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC2422C.
    case 0xC2422E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/find_stealable_items.asm:52 BNE @UNKNOWN4
    case 0xC2422F: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/find_stealable_items.asm:53 LDA BATTLERS_TABLE+battler::action_item_slot,X
    case 0xC24231: cpu.execute_instruction<0xBD>(0x009FB3, 3); return true;
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    case 0xC24234: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC24234.
    case 0xC24236: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:55 STA @LOCAL01
    case 0xC24237: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_stealable_items.asm:57 LDA @LOCAL02
    case 0xC24239: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/find_stealable_items.asm:58 INC
    case 0xC2423B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:59 STA @LOCAL02
    case 0xC2423C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    case 0xC2423E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2423E.
    case 0xC24240: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_stealable_items.asm:62 BCC @UNKNOWN3
    case 0xC24241: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/battle/find_stealable_items.asm:63 STZ @LOCAL00
    case 0xC24243: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:64 JMP @UNKNOWN10
    case 0xC24245: cpu.execute_instruction<0x4C>(0x0042F8, 3); return true;
    // src/battle/find_stealable_items.asm:66 LDA @LOCAL00
    case 0xC24248: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:67 STA @VIRTUAL02
    case 0xC2424A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:68 INC @VIRTUAL02
    case 0xC2424C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:69 LDA @VIRTUAL02
    case 0xC2424E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:70 CMP @LOCAL01
    case 0xC24250: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC24252: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC24254: cpu.execute_instruction<0x4C>(0x0042F6, 3); return true;
    // src/battle/find_stealable_items.asm:72 LDA @LOCAL03
    case 0xC24257: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/find_stealable_items.asm:73 DEC
    case 0xC24259: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    case 0xC2425A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2425A.
    case 0xC2425C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_stealable_items.asm:75 JSL MULT168
    case 0xC2425D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/find_stealable_items.asm:76 TAY
    case 0xC24261: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:89 STY @LOCAL02
    case 0xC24262: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/battle/find_stealable_items.asm:90 TYA
    case 0xC24264: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:91 CLC
    case 0xC24265: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:92 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC24266: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/find_stealable_items.asm:92 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC24266.
    case 0xC24268: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/find_stealable_items.asm:93 CLC
    case 0xC24269: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:94 ADC @LOCAL00
    case 0xC2426A: cpu.execute_instruction<0x65>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:94 ADC @LOCAL00
    // Overlapping static entry reached from 0xC24268.
    case 0xC2426B: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/battle/find_stealable_items.asm:95 TAX
    case 0xC2426C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:96 LDA __BSS_START__,X
    case 0xC2426D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/find_stealable_items.asm:96 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2426B.
    case 0xC2426E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/find_stealable_items.asm:97 AND #$00FF
    case 0xC24270: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC24270.
    case 0xC24272: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_stealable_items.asm:98 STA @VIRTUAL04
    case 0xC24273: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC24275: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC24277: cpu.execute_instruction<0x4C>(0x0042F6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2427A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427A.
    case 0xC2427C: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2427D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427C.
    case 0xC2427E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2427F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427E.
    case 0xC24280: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427F.
    case 0xC24281: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24282: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/find_stealable_items.asm:102 LDA @VIRTUAL04
    case 0xC24284: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/find_stealable_items.asm:112 LDY #.SIZEOF(item)
    case 0xC24286: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/battle/find_stealable_items.asm:112 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC24286.
    case 0xC24288: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_stealable_items.asm:113 JSL MULT168
    case 0xC24289: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/find_stealable_items.asm:114 TAX
    case 0xC2428D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:115 CLC
    case 0xC2428E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:116 ADC #item::cost
    case 0xC2428F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/battle/find_stealable_items.asm:116 ADC #item::cost
    // Overlapping static entry reached from 0xC2428F.
    case 0xC24291: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24292: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24294: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24296: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24298: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/find_stealable_items.asm:119 CLC
    case 0xC2429A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:120 ADC @VIRTUAL0A
    case 0xC2429B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/find_stealable_items.asm:121 STA @VIRTUAL0A
    case 0xC2429D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/find_stealable_items.asm:122 LDA [@VIRTUAL0A]
    case 0xC2429F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/find_stealable_items.asm:123 BEQ @UNKNOWN9
    case 0xC242A1: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/battle/find_stealable_items.asm:124 CMP #290
    case 0xC242A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000122, 3); return true;
    // src/battle/find_stealable_items.asm:124 CMP #290
    // Overlapping static entry reached from 0xC242A3.
    case 0xC242A5: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    case 0xC242A6: cpu.execute_instruction<0xB0>(0x00004E, 2); return true;
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC242A5.
    case 0xC242A7: cpu.execute_instruction<0x4E>(0x00188A, 3); return true;
    // src/battle/find_stealable_items.asm:126 TXA
    case 0xC242A8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:127 CLC
    case 0xC242A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    case 0xC242AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    // Overlapping static entry reached from 0xC242AA.
    case 0xC242AC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:129 CLC
    case 0xC242AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:130 ADC @VIRTUAL06
    case 0xC242AE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/find_stealable_items.asm:131 STA @VIRTUAL06
    case 0xC242B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/find_stealable_items.asm:132 LDA [@VIRTUAL06]
    case 0xC242B2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    case 0xC242B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC242B4.
    case 0xC242B6: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/find_stealable_items.asm:134 AND #$0030
    case 0xC242B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/battle/find_stealable_items.asm:134 AND #$0030
    // Overlapping static entry reached from 0xC242B7.
    case 0xC242B9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    case 0xC242BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    // Overlapping static entry reached from 0xC242BA.
    case 0xC242BC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/find_stealable_items.asm:136 BNE @UNKNOWN9
    case 0xC242BD: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/find_stealable_items.asm:138 LDY @LOCAL02
    case 0xC242BF: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/battle/find_stealable_items.asm:140 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,Y
    case 0xC242C1: cpu.execute_instruction<0xB9>(0x0099FF, 3); return true;
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    case 0xC242C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC242C4.
    case 0xC242C6: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:142 CMP @VIRTUAL02
    case 0xC242C7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:143 BEQ @UNKNOWN9
    case 0xC242C9: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/battle/find_stealable_items.asm:144 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,Y
    case 0xC242CB: cpu.execute_instruction<0xB9>(0x009A00, 3); return true;
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    case 0xC242CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC242CE.
    case 0xC242D0: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:146 CMP @VIRTUAL02
    case 0xC242D1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:147 BEQ @UNKNOWN9
    case 0xC242D3: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/find_stealable_items.asm:148 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,Y
    case 0xC242D5: cpu.execute_instruction<0xB9>(0x009A01, 3); return true;
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    case 0xC242D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC242D8.
    case 0xC242DA: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:150 CMP @VIRTUAL02
    case 0xC242DB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:151 BEQ @UNKNOWN9
    case 0xC242DD: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/find_stealable_items.asm:152 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,Y
    case 0xC242DF: cpu.execute_instruction<0xB9>(0x009A02, 3); return true;
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    case 0xC242E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC242E2.
    case 0xC242E4: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_stealable_items.asm:154 CMP @VIRTUAL02
    case 0xC242E5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_stealable_items.asm:155 BEQ @UNKNOWN9
    case 0xC242E7: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/find_stealable_items.asm:160 LDA @VIRTUAL04
    case 0xC242E9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/find_stealable_items.asm:162 SEP #PROC_FLAGS::ACCUM8
    case 0xC242EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    case 0xC242ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D4, 2); else cpu.execute_instruction<0xA0>(0x00A9D4, 3); return true;
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    // Overlapping static entry reached from 0xC242ED.
    case 0xC242EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x001891, 3); return true;
    // src/battle/find_stealable_items.asm:164 STA (@LOCAL05),Y
    case 0xC242F0: cpu.execute_instruction<0x91>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:164 STA (@LOCAL05),Y
    // Overlapping static entry reached from 0xC242EF.
    case 0xC242F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/find_stealable_items.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC242F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/find_stealable_items.asm:166 INC @LOCAL05
    case 0xC242F4: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/battle/find_stealable_items.asm:168 INC @LOCAL00
    case 0xC242F6: cpu.execute_instruction<0xE6>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:170 LDA @LOCAL00
    case 0xC242F8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    case 0xC242FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC242FA.
    case 0xC242FC: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC242FD: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC242FF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC24301: cpu.execute_instruction<0x4C>(0x004248, 3); return true;
    // src/battle/find_stealable_items.asm:174 INC @LOCAL04
    case 0xC24304: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:176 LDA @LOCAL04
    case 0xC24306: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    case 0xC24308: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC24308.
    case 0xC2430A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC2430B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC2430D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC2430F: cpu.execute_instruction<0x4C>(0x0041EB, 3); return true;
    // src/battle/find_stealable_items.asm:179 LDA @LOCAL05
    case 0xC24312: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC24314: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC24315: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/find_targettable_npc.asm (source_named).
bool execute_battle_find_targettable_npc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_targettable_npc.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23F6C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23F6E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23F6F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23F70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC23F70.
    case 0xC23F72: cpu.execute_instruction<0xFF>(0x9A225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_targettable_npc.asm:8 END_STACK_VARS
    case 0xC23F73: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:9 JSL RAND
    case 0xC23F74: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/find_targettable_npc.asm:9 JSL RAND
    // Overlapping static entry reached from 0xC23F72.
    case 0xC23F76: cpu.execute_instruction<0x8E>(0x0029C0, 3); return true;
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    case 0xC23F78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    // Overlapping static entry reached from 0xC23F76.
    case 0xC23F79: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/battle/find_targettable_npc.asm:10 AND #$0003
    // Overlapping static entry reached from 0xC23F78.
    case 0xC23F7A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/find_targettable_npc.asm:11 BNE @UNKNOWN0
    case 0xC23F7B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/find_targettable_npc.asm:12 LDA #$0000
    case 0xC23F7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC23F7D.
    case 0xC23F7F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/find_targettable_npc.asm:13 BRA @UNKNOWN7
    case 0xC23F80: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // src/battle/find_targettable_npc.asm:15 LDA #$0000
    case 0xC23F82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:15 LDA #$0000
    // Overlapping static entry reached from 0xC23F82.
    case 0xC23F84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_targettable_npc.asm:16 STA @LOCAL01
    case 0xC23F85: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:17 BRA @UNKNOWN6
    case 0xC23F87: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // include/macros.asm:1295 TAX
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23F89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1296 LDA struct + field,X
    // Macro caller: src/battle/find_targettable_npc.asm:19 LDA_STRUCT_MEMBER GAME_STATE, game_state::party_members
    case 0xC23F8A: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/find_targettable_npc.asm:20 AND #$00FF
    case 0xC23F8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC23F8D.
    case 0xC23F8F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/find_targettable_npc.asm:21 TAY
    case 0xC23F90: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:22 STY @LOCAL00
    case 0xC23F91: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/find_targettable_npc.asm:23 CPY #PARTY_MEMBER::POKEY
    case 0xC23F93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/battle/find_targettable_npc.asm:23 CPY #PARTY_MEMBER::POKEY
    // Overlapping static entry reached from 0xC23F93.
    case 0xC23F95: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_targettable_npc.asm:24 BCC @INVALID_PARTY_TARGET
    case 0xC23F96: cpu.execute_instruction<0x90>(0x000043, 2); return true;
    // src/battle/find_targettable_npc.asm:25 TYA
    case 0xC23F98: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:26 ASL
    case 0xC23F99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:27 TAX
    case 0xC23F9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:28 LDA f:NPC_AI_TABLE,X
    case 0xC23F9B: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/battle/find_targettable_npc.asm:29 AND #$00FF
    case 0xC23F9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23F9F.
    case 0xC23FA1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/find_targettable_npc.asm:30 AND #NPC_FLAGS::UNTARGETTABLE
    case 0xC23FA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/find_targettable_npc.asm:30 AND #NPC_FLAGS::UNTARGETTABLE
    // Overlapping static entry reached from 0xC23FA2.
    case 0xC23FA4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/find_targettable_npc.asm:31 BEQ @INVALID_PARTY_TARGET
    case 0xC23FA5: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/battle/find_targettable_npc.asm:32 LDA #$0000
    case 0xC23FA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:32 LDA #$0000
    // Overlapping static entry reached from 0xC23FA7.
    case 0xC23FA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/find_targettable_npc.asm:33 STA @LOCAL01
    case 0xC23FAA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:34 BRA @UNKNOWN4
    case 0xC23FAC: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/find_targettable_npc.asm:36 LDY #.SIZEOF(battler)
    case 0xC23FAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/find_targettable_npc.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC23FAE.
    case 0xC23FB0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/find_targettable_npc.asm:37 JSL MULT168
    case 0xC23FB1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/find_targettable_npc.asm:38 TAX
    case 0xC23FB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:39 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC23FB6: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/find_targettable_npc.asm:40 AND #$00FF
    case 0xC23FB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC23FB9.
    case 0xC23FBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/find_targettable_npc.asm:41 BEQ @UNKNOWN3
    case 0xC23FBC: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/find_targettable_npc.asm:42 LDY @LOCAL00
    case 0xC23FBE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/find_targettable_npc.asm:43 STY $02
    case 0xC23FC0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/find_targettable_npc.asm:44 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC23FC2: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/find_targettable_npc.asm:45 AND #$00FF
    case 0xC23FC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/find_targettable_npc.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC23FC5.
    case 0xC23FC7: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/find_targettable_npc.asm:46 CMP $02
    case 0xC23FC8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/find_targettable_npc.asm:47 BNE @UNKNOWN3
    case 0xC23FCA: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/find_targettable_npc.asm:48 LDA @LOCAL01
    case 0xC23FCC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:49 INC
    case 0xC23FCE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:50 BRA @UNKNOWN7
    case 0xC23FCF: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/find_targettable_npc.asm:52 LDA @LOCAL01
    case 0xC23FD1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:53 INC
    case 0xC23FD3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:54 STA @LOCAL01
    case 0xC23FD4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:56 CMP #.SIZEOF(game_state::party_members)
    case 0xC23FD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_targettable_npc.asm:56 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC23FD6.
    case 0xC23FD8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_targettable_npc.asm:57 BCC @UNKNOWN2
    case 0xC23FD9: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/battle/find_targettable_npc.asm:59 LDA @LOCAL01
    case 0xC23FDB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:60 INC
    case 0xC23FDD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/find_targettable_npc.asm:61 STA @LOCAL01
    case 0xC23FDE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/find_targettable_npc.asm:63 CMP #.SIZEOF(game_state::party_members)
    case 0xC23FE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/find_targettable_npc.asm:63 CMP #.SIZEOF(game_state::party_members)
    // Overlapping static entry reached from 0xC23FE0.
    case 0xC23FE2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/find_targettable_npc.asm:64 BCC @UNKNOWN1
    case 0xC23FE3: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // src/battle/find_targettable_npc.asm:65 LDA #$0000
    case 0xC23FE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/find_targettable_npc.asm:65 LDA #$0000
    // Overlapping static entry reached from 0xC23FE5.
    case 0xC23FE7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_targettable_npc.asm:67 END_C_FUNCTION
    case 0xC23FE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/find_targettable_npc.asm:67 END_C_FUNCTION
    case 0xC23FE9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/generate_psi_list.asm (source_named).
bool execute_battle_generate_psi_list_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/generate_psi_list.asm:3 BEGIN_C_FUNCTION
    case 0xC1C452: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C454: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C455: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C456: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C457: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C457.
    case 0xC1C459: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C45A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C45B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:18 TAX
    case 0xC1C45C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C45D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:20 LDA @PARAM02
    case 0xC1C45F: cpu.execute_instruction<0xA5>(0x000033, 2); return true;
    // src/battle/generate_psi_list.asm:21 STA @LOCAL08
    case 0xC1C461: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:22 LDA @PARAM01
    case 0xC1C463: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/battle/generate_psi_list.asm:23 STA @VIRTUAL01
    case 0xC1C465: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C467: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:25 TXA
    case 0xC1C469: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:26 DEC
    case 0xC1C46A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:27 STA @VIRTUAL04
    case 0xC1C46B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:28 STA @LOCAL07
    case 0xC1C46D: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/battle/generate_psi_list.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1C46F: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/battle/generate_psi_list.asm:30 JSR UNKNOWN_C11383
    case 0xC1C473: cpu.execute_instruction<0x20>(0x001383, 3); return true;
    // src/battle/generate_psi_list.asm:31 STZ @LOCAL06
    case 0xC1C476: cpu.execute_instruction<0x64>(0x00001F, 2); return true;
    // src/battle/generate_psi_list.asm:32 LDA @VIRTUAL04
    case 0xC1C478: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C47A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C47A.
    case 0xC1C47C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C47D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C47F: cpu.execute_instruction<0x4C>(0x00C5B5, 3); return true;
    // src/battle/generate_psi_list.asm:35 LDA @VIRTUAL01
    case 0xC1C482: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    case 0xC1C484: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1C484.
    case 0xC1C486: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    case 0xC1C487: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    // Overlapping static entry reached from 0xC1C487.
    case 0xC1C489: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C48A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C48C: cpu.execute_instruction<0x4C>(0x00C5B5, 3); return true;
    // src/battle/generate_psi_list.asm:39 LDA @LOCAL08
    case 0xC1C48F: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    case 0xC1C491: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1C491.
    case 0xC1C493: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    case 0xC1C494: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    // Overlapping static entry reached from 0xC1C494.
    case 0xC1C496: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C497: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C499: cpu.execute_instruction<0x4C>(0x00C5B5, 3); return true;
    // src/battle/generate_psi_list.asm:43 LDA GAME_STATE+game_state::party_psi
    case 0xC1C49C: cpu.execute_instruction<0xAD>(0x009839, 3); return true;
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    case 0xC1C49F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1C49F.
    case 0xC1C4A1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    case 0xC1C4A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C4A2.
    case 0xC1C4A4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C4A5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C4A7: cpu.execute_instruction<0x4C>(0x00C53D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008B, 2); else cpu.execute_instruction<0xA9>(0x008B8B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4AA.
    case 0xC1C4AC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4AF.
    case 0xC1C4B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4B4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4B6: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4B8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4BA: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    case 0xC1C4BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C4BC.
    case 0xC1C4BE: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4BF: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4C1: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4C3: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4C5: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:51 CLC
    case 0xC1C4C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:52 ADC @VIRTUAL0A
    case 0xC1C4C8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:53 STA @VIRTUAL0A
    case 0xC1C4CA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:54 LDA [@VIRTUAL0A]
    case 0xC1C4CC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    case 0xC1C4CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1C4CE.
    case 0xC1C4D0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:56 TAX
    case 0xC1C4D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:57 LDA #0
    case 0xC1C4D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/generate_psi_list.asm:57 LDA #0
    // Overlapping static entry reached from 0xC1C4D2.
    case 0xC1C4D4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/generate_psi_list.asm:58 JSR UNKNOWN_C438A5
    case 0xC1C4D5: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/battle/generate_psi_list.asm:59 LDA [@VIRTUAL06]
    case 0xC1C4D9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    case 0xC1C4DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1C4DB.
    case 0xC1C4DD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:61 JSR GET_PSI_NAME
    case 0xC1C4DE: cpu.execute_instruction<0x20>(0x00C403, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E1: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E5: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    case 0xC1C4EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C4EB.
    case 0xC1C4ED: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:65 LDA [@VIRTUAL06],Y
    case 0xC1C4EE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC1C4F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    case 0xC1C4F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1C4F2.
    case 0xC1C4F4: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:68 DEC
    case 0xC1C4F5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:69 ASL
    case 0xC1C4F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:70 PHA
    case 0xC1C4F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C4F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00F112, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4F8.
    case 0xC1C4FA: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C4FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4FA.
    case 0xC1C4FC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C4FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4FC.
    case 0xC1C4FE: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4FD.
    case 0xC1C4FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C500: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:72 PLA
    case 0xC1C502: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:73 CLC
    case 0xC1C503: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:74 ADC @VIRTUAL06
    case 0xC1C504: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:75 STA @VIRTUAL06
    case 0xC1C506: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:76 STA @LOCAL00
    case 0xC1C508: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:77 LDA @VIRTUAL06+2
    case 0xC1C50A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:78 STA @LOCAL00+2
    case 0xC1C50C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C50E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C50E.
    case 0xC1C510: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C511: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C513: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C513.
    case 0xC1C515: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C516: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:80 LDA [@VIRTUAL0A]
    case 0xC1C518: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    case 0xC1C51A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1C51A.
    case 0xC1C51C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:82 TAY
    case 0xC1C51D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:83 STY @LOCAL04
    case 0xC1C51E: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C520: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C522: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C524: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C526: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C528: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    case 0xC1C52A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C52A.
    case 0xC1C52C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:87 LDA [@VIRTUAL06],Y
    case 0xC1C52D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC1C52F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    case 0xC1C531: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC1C531.
    case 0xC1C533: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:90 TAX
    case 0xC1C534: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    case 0xC1C535: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C535.
    case 0xC1C537: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:92 LDY @LOCAL04
    case 0xC1C538: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:93 JSR UNKNOWN_C1153B
    case 0xC1C53A: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/battle/generate_psi_list.asm:95 LDA GAME_STATE+game_state::party_psi
    case 0xC1C53D: cpu.execute_instruction<0xAD>(0x009839, 3); return true;
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    case 0xC1C540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1C540.
    case 0xC1C542: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    case 0xC1C543: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C543.
    case 0xC1C545: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:98 BEQ @UNKNOWN5
    case 0xC1C546: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C548: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x008B9A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C548.
    case 0xC1C54A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C54B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C54D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C54D.
    case 0xC1C54F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C550: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C552: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C554: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C556: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C558: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C55A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    case 0xC1C55C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C55C.
    case 0xC1C55E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:107 LDA [@VIRTUAL06],Y
    case 0xC1C55F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1C561: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    case 0xC1C563: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC1C563.
    case 0xC1C565: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:110 DEC
    case 0xC1C566: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:111 ASL
    case 0xC1C567: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:121 PHA
    case 0xC1C568: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C569: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00F112, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C569.
    case 0xC1C56B: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C56C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C56B.
    case 0xC1C56D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C56E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C56D.
    case 0xC1C56F: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C56E.
    case 0xC1C570: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C571: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:123 PLA
    case 0xC1C573: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:124 CLC
    case 0xC1C574: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:125 ADC @VIRTUAL06
    case 0xC1C575: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:126 STA @VIRTUAL06
    case 0xC1C577: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:127 STA @LOCAL00
    case 0xC1C579: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:128 LDA @VIRTUAL06+2
    case 0xC1C57B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:129 STA @LOCAL00+2
    case 0xC1C57D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C57F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C57F.
    case 0xC1C581: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C582: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C584: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C584.
    case 0xC1C586: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C587: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C589: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C58B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C58D: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C58F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:133 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C591: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    case 0xC1C593: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C593.
    case 0xC1C595: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:135 LDA [@VIRTUAL06],Y
    case 0xC1C596: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC1C598: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    case 0xC1C59A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    // Overlapping static entry reached from 0xC1C59A.
    case 0xC1C59C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:138 TAY
    case 0xC1C59D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:139 STY @LOCAL04
    case 0xC1C59E: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    case 0xC1C5A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C5A2.
    case 0xC1C5A4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:142 LDA [@VIRTUAL06],Y
    case 0xC1C5A5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC1C5A7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    case 0xC1C5A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC1C5A9.
    case 0xC1C5AB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:145 TAX
    case 0xC1C5AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    case 0xC1C5AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C5AD.
    case 0xC1C5AF: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:147 LDY @LOCAL04
    case 0xC1C5B0: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:148 JSR UNKNOWN_C1153B
    case 0xC1C5B2: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/battle/generate_psi_list.asm:150 LDA #1
    case 0xC1C5B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:150 LDA #1
    // Overlapping static entry reached from 0xC1C5B5.
    case 0xC1C5B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/generate_psi_list.asm:151 STA @VIRTUAL02
    case 0xC1C5B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/generate_psi_list.asm:152 JMP @UNKNOWN17
    case 0xC1C5BA: cpu.execute_instruction<0x4C>(0x00C6E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5BD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5C1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5C5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5C7: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5C9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5CB: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:158 LDA @LOCAL07
    case 0xC1C5CD: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/generate_psi_list.asm:159 STA @VIRTUAL04
    case 0xC1C5CF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:160 BEQ @UNKNOWN7
    case 0xC1C5D1: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    case 0xC1C5D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    // Overlapping static entry reached from 0xC1C5D3.
    case 0xC1C5D5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:162 BEQ @UNKNOWN8
    case 0xC1C5D6: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C5D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C5D8.
    case 0xC1C5DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:164 BEQ @UNKNOWN9
    case 0xC1C5DB: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/battle/generate_psi_list.asm:165 BRA @UNKNOWN10
    case 0xC1C5DD: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/battle/generate_psi_list.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    case 0xC1C5E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    // Overlapping static entry reached from 0xC1C5E1.
    case 0xC1C5E3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:169 LDA [@VIRTUAL0A],Y
    case 0xC1C5E4: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:170 STA @VIRTUAL00
    case 0xC1C5E6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:171 STA @LOCAL03
    case 0xC1C5E8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:172 BRA @UNKNOWN10
    case 0xC1C5EA: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    case 0xC1C5EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    // Overlapping static entry reached from 0xC1C5EE.
    case 0xC1C5F0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:176 LDA [@VIRTUAL0A],Y
    case 0xC1C5F1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:177 STA @VIRTUAL00
    case 0xC1C5F3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:178 STA @LOCAL03
    case 0xC1C5F5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:179 BRA @UNKNOWN10
    case 0xC1C5F7: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/battle/generate_psi_list.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    case 0xC1C5FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    // Overlapping static entry reached from 0xC1C5FB.
    case 0xC1C5FD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC1C5FE: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:184 STA @VIRTUAL00
    case 0xC1C600: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:185 STA @LOCAL03
    case 0xC1C602: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C604: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:188 LDA @LOCAL03
    case 0xC1C606: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:189 STA @VIRTUAL00
    case 0xC1C608: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC1C60A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:191 LDA @VIRTUAL00
    case 0xC1C60C: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    case 0xC1C60E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC1C60E.
    case 0xC1C610: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C611: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C613: cpu.execute_instruction<0x4C>(0x00C6E0, 3); return true;
    // src/battle/generate_psi_list.asm:194 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C616: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    case 0xC1C618: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    // Overlapping static entry reached from 0xC1C618.
    case 0xC1C61A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:196 LDA [@VIRTUAL06],Y
    case 0xC1C61B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:197 AND @VIRTUAL01
    case 0xC1C61D: cpu.execute_instruction<0x25>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:198 REP #PROC_FLAGS::ACCUM8
    case 0xC1C61F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    case 0xC1C621: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC1C621.
    case 0xC1C623: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C624: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C626: cpu.execute_instruction<0x4C>(0x00C6E0, 3); return true;
    // src/battle/generate_psi_list.asm:201 LDA @VIRTUAL04
    case 0xC1C629: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    case 0xC1C62B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C62B.
    case 0xC1C62D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/generate_psi_list.asm:203 JSL MULT168
    case 0xC1C62E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/generate_psi_list.asm:204 TAX
    case 0xC1C632: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C633: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:206 LDA @VIRTUAL00
    case 0xC1C635: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/battle/generate_psi_list.asm:207 CMP PARTY_CHARACTERS+char_struct::level,X
    case 0xC1C637: cpu.execute_instruction<0xDD>(0x0099D3, 3); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C63A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C63C: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C63E: cpu.execute_instruction<0x4C>(0x00C6E0, 3); return true;
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    case 0xC1C641: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    // Overlapping static entry reached from 0xC1C641.
    case 0xC1C643: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:210 LDA [@VIRTUAL06],Y
    case 0xC1C644: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:211 AND @LOCAL08
    case 0xC1C646: cpu.execute_instruction<0x25>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:212 REP #PROC_FLAGS::ACCUM8
    case 0xC1C648: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    case 0xC1C64A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    // Overlapping static entry reached from 0xC1C64A.
    case 0xC1C64C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C64D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C64F: cpu.execute_instruction<0x4C>(0x00C6E0, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C652: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C654: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C656: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C658: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:216 LDA [@VIRTUAL0A]
    case 0xC1C65A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    case 0xC1C65C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC1C65C.
    case 0xC1C65E: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/generate_psi_list.asm:218 CMP @LOCAL06
    case 0xC1C65F: cpu.execute_instruction<0xC5>(0x00001F, 2); return true;
    // src/battle/generate_psi_list.asm:219 BEQ @UNKNOWN15
    case 0xC1C661: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C663: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    case 0xC1C665: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C665.
    case 0xC1C667: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:222 LDA [@VIRTUAL06],Y
    case 0xC1C668: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC1C66A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    case 0xC1C66C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC1C66C.
    case 0xC1C66E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:225 TAX
    case 0xC1C66F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:226 LDA #0
    case 0xC1C670: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/generate_psi_list.asm:226 LDA #0
    // Overlapping static entry reached from 0xC1C670.
    case 0xC1C672: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/generate_psi_list.asm:227 JSR UNKNOWN_C438A5
    case 0xC1C673: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/battle/generate_psi_list.asm:228 LDA [@VIRTUAL0A]
    case 0xC1C677: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    case 0xC1C679: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC1C679.
    case 0xC1C67B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:230 JSR GET_PSI_NAME
    case 0xC1C67C: cpu.execute_instruction<0x20>(0x00C403, 3); return true;
    // src/battle/generate_psi_list.asm:231 LDA [@VIRTUAL0A]
    case 0xC1C67F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    case 0xC1C681: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1C681.
    case 0xC1C683: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/generate_psi_list.asm:233 STA @LOCAL06
    case 0xC1C684: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/battle/generate_psi_list.asm:252 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C686: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:253 LDY #psi_ability::level
    case 0xC1C688: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:253 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C688.
    case 0xC1C68A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:254 LDA [@VIRTUAL06],Y
    case 0xC1C68B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:255 REP #PROC_FLAGS::ACCUM8
    case 0xC1C68D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:256 AND #$00FF
    case 0xC1C68F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:256 AND #$00FF
    // Overlapping static entry reached from 0xC1C68F.
    case 0xC1C691: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:257 DEC
    case 0xC1C692: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:258 ASL
    case 0xC1C693: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:259 PHA
    case 0xC1C694: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00F112, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C695.
    case 0xC1C697: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C698: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C697.
    case 0xC1C699: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C69A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C699.
    case 0xC1C69B: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C69A.
    case 0xC1C69C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C69D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:261 PLA
    case 0xC1C69F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:262 CLC
    case 0xC1C6A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:263 ADC @VIRTUAL06
    case 0xC1C6A1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:264 STA @VIRTUAL06
    case 0xC1C6A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:265 STA @LOCAL00
    case 0xC1C6A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:266 LDA @VIRTUAL06+2
    case 0xC1C6A7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:267 STA @LOCAL00+2
    case 0xC1C6A9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C6AB.
    case 0xC1C6AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6AE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C6B0.
    case 0xC1C6B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6B3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6B5: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6B9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6BB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:271 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C6BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    case 0xC1C6BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C6BF.
    case 0xC1C6C1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:273 LDA [@VIRTUAL06],Y
    case 0xC1C6C2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:274 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    case 0xC1C6C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    // Overlapping static entry reached from 0xC1C6C6.
    case 0xC1C6C8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:276 TAY
    case 0xC1C6C9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:277 STY @LOCAL04
    case 0xC1C6CA: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C6CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    case 0xC1C6CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C6CE.
    case 0xC1C6D0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:280 LDA [@VIRTUAL06],Y
    case 0xC1C6D1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:281 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    case 0xC1C6D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC1C6D5.
    case 0xC1C6D7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:283 TAX
    case 0xC1C6D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:284 LDA @VIRTUAL02
    case 0xC1C6D9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/generate_psi_list.asm:285 LDY @LOCAL04
    case 0xC1C6DB: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:286 JSR UNKNOWN_C1153B
    case 0xC1C6DD: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/battle/generate_psi_list.asm:288 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:289 INC @VIRTUAL02
    case 0xC1C6E2: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C6E4.
    case 0xC1C6E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C6E9.
    case 0xC1C6EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:292 LDA @VIRTUAL02
    case 0xC1C6EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C6FB: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C6FD: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C6FF: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C701: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:295 CLC
    case 0xC1C703: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:296 ADC @VIRTUAL0A
    case 0xC1C704: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:297 STA @VIRTUAL0A
    case 0xC1C706: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:298 LDA [@VIRTUAL0A]
    case 0xC1C708: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    case 0xC1C70A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC1C70A.
    case 0xC1C70C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C70D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C70F: cpu.execute_instruction<0x4C>(0x00C5BD, 3); return true;
    // src/battle/generate_psi_list.asm:301 LDA @LOCAL07
    case 0xC1C712: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/battle/generate_psi_list.asm:302 STA @VIRTUAL04
    case 0xC1C714: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C716: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C718: cpu.execute_instruction<0x4C>(0x00C84A, 3); return true;
    // src/battle/generate_psi_list.asm:304 LDA @VIRTUAL01
    case 0xC1C71B: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    case 0xC1C71D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    // Overlapping static entry reached from 0xC1C71D.
    case 0xC1C71F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    case 0xC1C720: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    // Overlapping static entry reached from 0xC1C720.
    case 0xC1C722: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C723: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C725: cpu.execute_instruction<0x4C>(0x00C84A, 3); return true;
    // src/battle/generate_psi_list.asm:308 LDA @LOCAL08
    case 0xC1C728: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    case 0xC1C72A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC1C72A.
    case 0xC1C72C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    case 0xC1C72D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    // Overlapping static entry reached from 0xC1C72D.
    case 0xC1C72F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C730: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C732: cpu.execute_instruction<0x4C>(0x00C84A, 3); return true;
    // src/battle/generate_psi_list.asm:312 LDA GAME_STATE+game_state::party_psi
    case 0xC1C735: cpu.execute_instruction<0xAD>(0x009839, 3); return true;
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    case 0xC1C738: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC1C738.
    case 0xC1C73A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    case 0xC1C73B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C73B.
    case 0xC1C73D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C73E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C740: cpu.execute_instruction<0x4C>(0x00C7D2, 3); return true;
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    case 0xC1C743: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0002FD, 3); return true;
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    // Overlapping static entry reached from 0xC1C743.
    case 0xC1C745: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/generate_psi_list.asm:317 CLC
    case 0xC1C746: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:318 ADC @VIRTUAL06
    case 0xC1C747: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:319 STA @VIRTUAL06
    case 0xC1C749: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:320 STA @LOCAL05
    case 0xC1C74B: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/battle/generate_psi_list.asm:321 LDA @VIRTUAL06+2
    case 0xC1C74D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:322 STA @LOCAL05+2
    case 0xC1C74F: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    case 0xC1C751: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C751.
    case 0xC1C753: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C754: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C756: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C758: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C75A: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/generate_psi_list.asm:325 CLC
    case 0xC1C75C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:326 ADC @VIRTUAL0A
    case 0xC1C75D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:327 STA @VIRTUAL0A
    case 0xC1C75F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:328 LDA [@VIRTUAL0A]
    case 0xC1C761: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    case 0xC1C763: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    // Overlapping static entry reached from 0xC1C763.
    case 0xC1C765: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:330 TAX
    case 0xC1C766: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:331 LDA #0
    case 0xC1C767: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/generate_psi_list.asm:331 LDA #0
    // Overlapping static entry reached from 0xC1C767.
    case 0xC1C769: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/generate_psi_list.asm:332 JSR UNKNOWN_C438A5
    case 0xC1C76A: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/battle/generate_psi_list.asm:333 LDA [@VIRTUAL06]
    case 0xC1C76E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    case 0xC1C770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC1C770.
    case 0xC1C772: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:335 JSR GET_PSI_NAME
    case 0xC1C773: cpu.execute_instruction<0x20>(0x00C403, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C776: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C778: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C77A: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C77C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:337 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C77E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    case 0xC1C780: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C780.
    case 0xC1C782: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:339 LDA [@VIRTUAL06],Y
    case 0xC1C783: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:340 REP #PROC_FLAGS::ACCUM8
    case 0xC1C785: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    case 0xC1C787: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC1C787.
    case 0xC1C789: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:342 DEC
    case 0xC1C78A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:343 ASL
    case 0xC1C78B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:344 PHA
    case 0xC1C78C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C78D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00F112, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C78D.
    case 0xC1C78F: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C790: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C78F.
    case 0xC1C791: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C792: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C791.
    case 0xC1C793: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C792.
    case 0xC1C794: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C795: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:346 PLA
    case 0xC1C797: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:347 CLC
    case 0xC1C798: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:348 ADC @VIRTUAL06
    case 0xC1C799: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:349 STA @VIRTUAL06
    case 0xC1C79B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:350 STA @LOCAL00
    case 0xC1C79D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:351 LDA @VIRTUAL06+2
    case 0xC1C79F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:352 STA @LOCAL00+2
    case 0xC1C7A1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C7A3.
    case 0xC1C7A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C7A8.
    case 0xC1C7AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7AB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/generate_psi_list.asm:354 LDA [@VIRTUAL0A]
    case 0xC1C7AD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    case 0xC1C7AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    // Overlapping static entry reached from 0xC1C7AF.
    case 0xC1C7B1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:356 TAY
    case 0xC1C7B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:357 STY @LOCAL02
    case 0xC1C7B3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7B5: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7B9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7BB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:359 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C7BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    case 0xC1C7BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C7BF.
    case 0xC1C7C1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:361 LDA [@VIRTUAL06],Y
    case 0xC1C7C2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:362 REP #PROC_FLAGS::ACCUM8
    case 0xC1C7C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    case 0xC1C7C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    // Overlapping static entry reached from 0xC1C7C6.
    case 0xC1C7C8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:364 TAX
    case 0xC1C7C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    case 0xC1C7CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x000033, 3); return true;
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C7CA.
    case 0xC1C7CC: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:366 LDY @LOCAL02
    case 0xC1C7CD: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/generate_psi_list.asm:367 JSR UNKNOWN_C1153B
    case 0xC1C7CF: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/battle/generate_psi_list.asm:369 LDA GAME_STATE+game_state::party_psi
    case 0xC1C7D2: cpu.execute_instruction<0xAD>(0x009839, 3); return true;
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    case 0xC1C7D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC1C7D5.
    case 0xC1C7D7: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    case 0xC1C7D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C7D8.
    case 0xC1C7DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/generate_psi_list.asm:372 BEQ @UNKNOWN24
    case 0xC1C7DB: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x008D5C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C7DD.
    case 0xC1C7DF: cpu.execute_instruction<0x8D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C7E2.
    case 0xC1C7E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7E9: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7ED: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/battle/generate_psi_list.asm:392 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C7EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:393 LDY #psi_ability::level
    case 0xC1C7F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/generate_psi_list.asm:393 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C7F1.
    case 0xC1C7F3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:394 LDA [@VIRTUAL06],Y
    case 0xC1C7F4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:395 REP #PROC_FLAGS::ACCUM8
    case 0xC1C7F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:396 AND #$00FF
    case 0xC1C7F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC1C7F8.
    case 0xC1C7FA: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/generate_psi_list.asm:397 DEC
    case 0xC1C7FB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:398 ASL
    case 0xC1C7FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:399 PHA
    case 0xC1C7FD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C7FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00F112, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C7FE.
    case 0xC1C800: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C801: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C800.
    case 0xC1C802: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C802.
    case 0xC1C804: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C803.
    case 0xC1C805: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C806: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:401 PLA
    case 0xC1C808: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:402 CLC
    case 0xC1C809: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:403 ADC @VIRTUAL06
    case 0xC1C80A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:404 STA @VIRTUAL06
    case 0xC1C80C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:405 STA @LOCAL00
    case 0xC1C80E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/generate_psi_list.asm:406 LDA @VIRTUAL06+2
    case 0xC1C810: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:407 STA @LOCAL00+2
    case 0xC1C812: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C814.
    case 0xC1C816: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C817: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C819: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C819.
    case 0xC1C81B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C81C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C81E: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C820: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C822: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C824: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/generate_psi_list.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C826: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    case 0xC1C828: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C828.
    case 0xC1C82A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:413 LDA [@VIRTUAL06],Y
    case 0xC1C82B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC1C82D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    case 0xC1C82F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC1C82F.
    case 0xC1C831: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/generate_psi_list.asm:416 TAY
    case 0xC1C832: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:417 STY @LOCAL04
    case 0xC1C833: cpu.execute_instruction<0x84>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C835: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    case 0xC1C837: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C837.
    case 0xC1C839: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/generate_psi_list.asm:420 LDA [@VIRTUAL06],Y
    case 0xC1C83A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/generate_psi_list.asm:421 REP #PROC_FLAGS::ACCUM8
    case 0xC1C83C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    case 0xC1C83E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC1C83E.
    case 0xC1C840: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/generate_psi_list.asm:423 TAX
    case 0xC1C841: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    case 0xC1C842: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000034, 3); return true;
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C842.
    case 0xC1C844: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/generate_psi_list.asm:425 LDY @LOCAL04
    case 0xC1C845: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // src/battle/generate_psi_list.asm:426 JSR UNKNOWN_C1153B
    case 0xC1C847: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/battle/generate_psi_list.asm:428 JSR PRINT_MENU_ITEMS
    case 0xC1C84A: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/battle/generate_psi_list.asm:429 JSR CLEAR_INSTANT_PRINTING
    case 0xC1C84D: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C851: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C852: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_battle_action_type.asm (source_named).
bool execute_battle_get_battle_action_type_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_action_type.asm:3 BEGIN_C_FUNCTION
    case 0xC2698B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC2698D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC2698E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC2698F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC26990: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26990.
    case 0xC26992: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC26993: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC26994: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC26995: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    // Overlapping static entry reached from 0xC26992.
    case 0xC26996: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC26997: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC26998: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2699A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2699B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:9 TAX
    case 0xC2699C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:10 INX
    case 0xC2699D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:11 INX
    case 0xC2699E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_action_type.asm:12 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC2699F: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/get_battle_action_type.asm:13 AND #$00FF
    case 0xC269A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_battle_action_type.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC269A3.
    case 0xC269A5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_action_type.asm:14 END_C_FUNCTION
    case 0xC269A6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_action_type.asm:14 END_C_FUNCTION
    case 0xC269A7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_battle_sprite_height.asm (source_named).
bool execute_battle_get_battle_sprite_height_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_height.asm:3 BEGIN_C_FUNCTION
    case 0xC2F04E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F050: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F051: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F052: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F053: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F053.
    case 0xC2F055: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F056: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F057: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:8 DEC
    case 0xC2F058: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F059: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F05B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F05C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F05D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/get_battle_sprite_height.asm:10 TAX
    case 0xC2F05F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:11 INX
    case 0xC2F060: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:12 INX
    case 0xC2F061: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:13 INX
    case 0xC2F062: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:14 INX
    case 0xC2F063: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_height.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2F064: cpu.execute_instruction<0xBF>(0xCE62EE, 4); return true;
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    case 0xC2F068: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2F068.
    case 0xC2F06A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    case 0xC2F06B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2F06B.
    case 0xC2F06D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:18 BEQ @UNKNOWN0
    case 0xC2F06E: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    case 0xC2F070: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    // Overlapping static entry reached from 0xC2F070.
    case 0xC2F072: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:20 BEQ @UNKNOWN0
    case 0xC2F073: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    case 0xC2F075: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    // Overlapping static entry reached from 0xC2F075.
    case 0xC2F077: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:22 BEQ @UNKNOWN1
    case 0xC2F078: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    case 0xC2F07A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2F07A.
    case 0xC2F07C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:24 BEQ @UNKNOWN1
    case 0xC2F07D: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    case 0xC2F07F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2F07F.
    case 0xC2F081: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:26 BEQ @UNKNOWN1
    case 0xC2F082: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    case 0xC2F084: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2F084.
    case 0xC2F086: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_height.asm:28 BEQ @UNKNOWN2
    case 0xC2F087: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/get_battle_sprite_height.asm:29 BRA @UNKNOWN3
    case 0xC2F089: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    case 0xC2F08B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2F08B.
    case 0xC2F08D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_height.asm:32 BRA @UNKNOWN4
    case 0xC2F08E: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    case 0xC2F090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2F090.
    case 0xC2F092: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_height.asm:35 BRA @UNKNOWN4
    case 0xC2F093: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    case 0xC2F095: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2F095.
    case 0xC2F097: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_height.asm:38 BRA @UNKNOWN4
    case 0xC2F098: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    case 0xC2F09A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2F09A.
    case 0xC2F09C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2F09D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2F09E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_battle_sprite_width.asm (source_named).
bool execute_battle_get_battle_sprite_width_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_width.asm:3 BEGIN_C_FUNCTION
    case 0xC2EFFD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EFFF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F000: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F001: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F002: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F002.
    case 0xC2F004: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F005: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F006: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:8 DEC
    case 0xC2F007: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F008: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F00A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F00B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F00C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/get_battle_sprite_width.asm:10 TAX
    case 0xC2F00E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:11 INX
    case 0xC2F00F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:12 INX
    case 0xC2F010: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:13 INX
    case 0xC2F011: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:14 INX
    case 0xC2F012: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/get_battle_sprite_width.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2F013: cpu.execute_instruction<0xBF>(0xCE62EE, 4); return true;
    // src/battle/get_battle_sprite_width.asm:16 AND #$00FF
    case 0xC2F017: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_battle_sprite_width.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2F017.
    case 0xC2F019: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/get_battle_sprite_width.asm:17 CMP #$0001
    case 0xC2F01A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/get_battle_sprite_width.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2F01A.
    case 0xC2F01C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:18 BEQ @UNKNOWN0
    case 0xC2F01D: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/get_battle_sprite_width.asm:19 CMP #$0003
    case 0xC2F01F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/get_battle_sprite_width.asm:19 CMP #$0003
    // Overlapping static entry reached from 0xC2F01F.
    case 0xC2F021: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:20 BEQ @UNKNOWN0
    case 0xC2F022: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_width.asm:21 CMP #$0002
    case 0xC2F024: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/get_battle_sprite_width.asm:21 CMP #$0002
    // Overlapping static entry reached from 0xC2F024.
    case 0xC2F026: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:22 BEQ @UNKNOWN1
    case 0xC2F027: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/get_battle_sprite_width.asm:23 CMP #$0004
    case 0xC2F029: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_width.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2F029.
    case 0xC2F02B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:24 BEQ @UNKNOWN1
    case 0xC2F02C: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/get_battle_sprite_width.asm:25 CMP #$0005
    case 0xC2F02E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/get_battle_sprite_width.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2F02E.
    case 0xC2F030: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:26 BEQ @UNKNOWN2
    case 0xC2F031: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/get_battle_sprite_width.asm:27 CMP #$0006
    case 0xC2F033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/get_battle_sprite_width.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2F033.
    case 0xC2F035: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_battle_sprite_width.asm:28 BEQ @UNKNOWN2
    case 0xC2F036: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/get_battle_sprite_width.asm:29 BRA @UNKNOWN3
    case 0xC2F038: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/get_battle_sprite_width.asm:31 LDA #$0004
    case 0xC2F03A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/get_battle_sprite_width.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2F03A.
    case 0xC2F03C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_width.asm:32 BRA @UNKNOWN4
    case 0xC2F03D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/get_battle_sprite_width.asm:34 LDA #$0008
    case 0xC2F03F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/get_battle_sprite_width.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2F03F.
    case 0xC2F041: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_width.asm:35 BRA @UNKNOWN4
    case 0xC2F042: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/get_battle_sprite_width.asm:37 LDA #$0010
    case 0xC2F044: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/get_battle_sprite_width.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2F044.
    case 0xC2F046: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_battle_sprite_width.asm:38 BRA @UNKNOWN4
    case 0xC2F047: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/get_battle_sprite_width.asm:40 LDA #$0000
    case 0xC2F049: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/get_battle_sprite_width.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2F049.
    case 0xC2F04B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_width.asm:42 END_C_FUNCTION
    case 0xC2F04C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_width.asm:42 END_C_FUNCTION
    case 0xC2F04D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_enemy_type.asm (source_named).
bool execute_battle_get_enemy_type_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_enemy_type.asm:3 BEGIN_C_FUNCTION
    case 0xC269A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/get_enemy_type.asm:7 LDY #.SIZEOF(enemy_data)
    case 0xC269AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/get_enemy_type.asm:7 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC269AA.
    case 0xC269AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/get_enemy_type.asm:8 JSL MULT168
    case 0xC269AD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/get_enemy_type.asm:9 CLC
    case 0xC269B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/get_enemy_type.asm:10 ADC #enemy_data::type
    case 0xC269B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/battle/get_enemy_type.asm:10 ADC #enemy_data::type
    // Overlapping static entry reached from 0xC269B2.
    case 0xC269B4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/get_enemy_type.asm:11 TAX
    case 0xC269B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/get_enemy_type.asm:12 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC269B6: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/get_enemy_type.asm:13 AND #$00FF
    case 0xC269BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/get_enemy_type.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC269BA.
    case 0xC269BC: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_enemy_type.asm:14 END_C_FUNCTION
    case 0xC269BD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/get_shield_targetting.asm (source_named).
bool execute_battle_get_shield_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_shield_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23FEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/get_shield_targetting.asm:7 CMP #BATTLE_ACTIONS::PSI_SHIELD_SIGMA
    case 0xC23FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002A, 2); else cpu.execute_instruction<0xC9>(0x00002A, 3); return true;
    // src/battle/get_shield_targetting.asm:7 CMP #BATTLE_ACTIONS::PSI_SHIELD_SIGMA
    // Overlapping static entry reached from 0xC23FEC.
    case 0xC23FEE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_shield_targetting.asm:8 BEQ @SINGLETARGET
    case 0xC23FEF: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/get_shield_targetting.asm:9 CMP #BATTLE_ACTIONS::PSI_SHIELD_OMEGA
    case 0xC23FF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002B, 2); else cpu.execute_instruction<0xC9>(0x00002B, 3); return true;
    // src/battle/get_shield_targetting.asm:9 CMP #BATTLE_ACTIONS::PSI_SHIELD_OMEGA
    // Overlapping static entry reached from 0xC23FF1.
    case 0xC23FF3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_shield_targetting.asm:10 BEQ @SINGLETARGET
    case 0xC23FF4: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/get_shield_targetting.asm:11 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_SIGMA
    case 0xC23FF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002E, 2); else cpu.execute_instruction<0xC9>(0x00002E, 3); return true;
    // src/battle/get_shield_targetting.asm:11 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_SIGMA
    // Overlapping static entry reached from 0xC23FF6.
    case 0xC23FF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/get_shield_targetting.asm:12 BEQ @SINGLETARGET
    case 0xC23FF9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/get_shield_targetting.asm:13 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_OMEGA
    case 0xC23FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/battle/get_shield_targetting.asm:13 CMP #BATTLE_ACTIONS::PSI_PSI_SHIELD_OMEGA
    // Overlapping static entry reached from 0xC23FFB.
    case 0xC23FFD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/get_shield_targetting.asm:14 BNE @MULTITARGET
    case 0xC23FFE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/get_shield_targetting.asm:16 LDA #1
    case 0xC24000: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/get_shield_targetting.asm:16 LDA #1
    // Overlapping static entry reached from 0xC24000.
    case 0xC24002: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/get_shield_targetting.asm:17 BRA @RETURN
    case 0xC24003: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/get_shield_targetting.asm:19 LDA #0
    case 0xC24005: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/get_shield_targetting.asm:19 LDA #0
    // Overlapping static entry reached from 0xC24005.
    case 0xC24007: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/get_shield_targetting.asm:21 END_C_FUNCTION
    case 0xC24008: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/giygas_hurt_prayer.asm (source_named).
bool execute_battle_giygas_hurt_prayer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/giygas_hurt_prayer.asm:3 BEGIN_C_FUNCTION
    case 0xC2C3E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C3E7.
    case 0xC2C3E9: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/giygas_hurt_prayer.asm:7 END_STACK_VARS
    case 0xC2C3EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/giygas_hurt_prayer.asm:8 TAX
    case 0xC2C3EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/giygas_hurt_prayer.asm:9 STX @LOCAL00
    case 0xC2C3ED: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:10 LDA #1*SECOND
    case 0xC2C3EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:10 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3EF.
    case 0xC2C3F1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:11 JSR WAIT
    case 0xC2C3F2: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:12 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C3F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00A21C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:12 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C3F5.
    case 0xC2C3F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00008D, 2); else cpu.execute_instruction<0xA2>(0x00728D, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    case 0xC2C3F8: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C3F7.
    case 0xC2C3F9: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:13 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C3F7.
    case 0xC2C3FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x000522, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:14 JSL FIX_TARGET_NAME
    case 0xC2C3FB: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/giygas_hurt_prayer.asm:14 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC2C3FA.
    case 0xC2C3FC: cpu.execute_instruction<0x05>(0x00003D, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:14 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC2C3FA.
    case 0xC2C3FD: cpu.execute_instruction<0x3D>(0x00A9C2, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:14 JSL FIX_TARGET_NAME
    // Overlapping static entry reached from 0xC2C3FC.
    case 0xC2C3FE: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    case 0xC2C3FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3FD.
    case 0xC2C400: cpu.execute_instruction<0x3C>(0x008D00, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:15 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C3FF.
    case 0xC2C401: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:16 STA GREEN_FLASH_DURATION
    case 0xC2C402: cpu.execute_instruction<0x8D>(0x00AD9E, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:16 STA GREEN_FLASH_DURATION
    // Overlapping static entry reached from 0xC2C400.
    case 0xC2C403: cpu.execute_instruction<0x9E>(0x00A9AD, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    case 0xC2C405: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    // Overlapping static entry reached from 0xC2C403.
    case 0xC2C406: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:17 LDA #1
    // Overlapping static entry reached from 0xC2C405.
    case 0xC2C407: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:18 STA IS_SMAAAAASH_ATTACK
    case 0xC2C408: cpu.execute_instruction<0x8D>(0x00AA8E, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:19 LDX @LOCAL00
    case 0xC2C40B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:20 TXA
    case 0xC2C40D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/giygas_hurt_prayer.asm:21 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2C40E: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:22 LDX #$00FF
    case 0xC2C411: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:22 LDX #$00FF
    // Overlapping static entry reached from 0xC2C411.
    case 0xC2C413: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:23 JSR CALC_RESIST_DAMAGE
    case 0xC2C414: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:24 LDA #1*SECOND
    case 0xC2C417: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/giygas_hurt_prayer.asm:24 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C417.
    case 0xC2C419: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/giygas_hurt_prayer.asm:25 JSR WAIT
    case 0xC2C41A: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/giygas_hurt_prayer.asm:26 END_C_FUNCTION
    case 0xC2C41D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/giygas_hurt_prayer.asm:26 END_C_FUNCTION
    case 0xC2C41E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/heal_strangeness.asm (source_named).
bool execute_battle_heal_strangeness_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/heal_strangeness.asm:3 BEGIN_C_FUNCTION
    case 0xC2856B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC2856D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC2856E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC2856F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2856F.
    case 0xC28571: cpu.execute_instruction<0xFF>(0x72AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/heal_strangeness.asm:6 END_STACK_VARS
    case 0xC28572: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:7 LDA CURRENT_TARGET
    case 0xC28573: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/heal_strangeness.asm:7 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC28571.
    case 0xC28575: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x006918, 3); return true;
    // src/battle/heal_strangeness.asm:8 CLC
    case 0xC28576: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    case 0xC28577: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC28575.
    case 0xC28578: cpu.execute_instruction<0x20>(0x00AA00, 3); return true;
    // src/battle/heal_strangeness.asm:9 ADC #battler::afflictions + STATUS_GROUP::STRANGENESS
    // Overlapping static entry reached from 0xC28577.
    case 0xC28579: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/heal_strangeness.asm:10 TAX
    case 0xC2857A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/heal_strangeness.asm:11 LDA __BSS_START__,X
    case 0xC2857B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/heal_strangeness.asm:12 AND #$00FF
    case 0xC2857E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/heal_strangeness.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2857E.
    case 0xC28580: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/heal_strangeness.asm:13 CMP #1
    case 0xC28581: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/heal_strangeness.asm:13 CMP #1
    // Overlapping static entry reached from 0xC28581.
    case 0xC28583: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/heal_strangeness.asm:14 BNE @RETURN
    case 0xC28584: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/battle/heal_strangeness.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC28586: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/heal_strangeness.asm:16 LDA #0
    case 0xC28588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/heal_strangeness.asm:17 STA __BSS_START__,X
    case 0xC2858A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/heal_strangeness.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC28588.
    case 0xC2858B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/heal_strangeness.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC2858D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC2858F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x006F1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC2858F.
    case 0xC28591: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28592: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC28591.
    case 0xC28595: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    // Overlapping static entry reached from 0xC28594.
    case 0xC28596: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28597: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/heal_strangeness.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEN_OFF
    case 0xC28599: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/heal_strangeness.asm:21 END_C_FUNCTION
    case 0xC2859D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/heal_strangeness.asm:21 END_C_FUNCTION
    case 0xC2859E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/increase_defense_16th.asm (source_named).
bool execute_battle_increase_defense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/increase_defense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27D82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D85: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D86: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D87.
    case 0xC27D89: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D8A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D8B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:9 STA @VIRTUAL02
    case 0xC27D8C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27D89.
    case 0xC27D8D: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/increase_defense_16th.asm:10 CLC
    case 0xC27D8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:11 ADC #battler::defense
    case 0xC27D8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/increase_defense_16th.asm:11 ADC #battler::defense
    // Overlapping static entry reached from 0xC27D8F.
    case 0xC27D91: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/increase_defense_16th.asm:12 TAY
    case 0xC27D92: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27D93: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:14 LSR
    case 0xC27D96: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:15 LSR
    case 0xC27D97: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:16 LSR
    case 0xC27D98: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:17 LSR
    case 0xC27D99: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27D9A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/increase_defense_16th.asm:19 TAX
    case 0xC27D9C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27D9D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/increase_defense_16th.asm:22 LDX #$0001
    case 0xC27D9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/increase_defense_16th.asm:22 LDX #$0001
    // Overlapping static entry reached from 0xC27D9F.
    case 0xC27DA1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/increase_defense_16th.asm:24 STX @VIRTUAL04
    case 0xC27DA2: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/increase_defense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27DA4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:26 CLC
    case 0xC27DA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:27 ADC @VIRTUAL04
    case 0xC27DA8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_defense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27DAA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27DAD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:30 CLC
    case 0xC27DAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:31 ADC #battler::defense
    case 0xC27DB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/increase_defense_16th.asm:31 ADC #battler::defense
    // Overlapping static entry reached from 0xC27DB0.
    case 0xC27DB2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/increase_defense_16th.asm:32 TAX
    case 0xC27DB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:33 STX @LOCAL01
    case 0xC27DB4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/increase_defense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27DB6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:35 LDA a:battler::base_defense,X
    case 0xC27DB8: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/increase_defense_16th.asm:36 AND #$00FF
    case 0xC27DBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/increase_defense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27DBB.
    case 0xC27DBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27DBE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27DC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27DC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27DC2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_defense_16th.asm:38 LSR
    case 0xC27DC4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:39 LSR
    case 0xC27DC5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_defense_16th.asm:40 STA @LOCAL00
    case 0xC27DC6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/increase_defense_16th.asm:41 STA @VIRTUAL02
    case 0xC27DC8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_defense_16th.asm:42 LDX @LOCAL01
    case 0xC27DCA: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/increase_defense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27DCC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/increase_defense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27DCF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/increase_defense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27DD1: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/increase_defense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27DD3: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/increase_defense_16th.asm:46 LDA @LOCAL00
    case 0xC27DD5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/increase_defense_16th.asm:47 STA __BSS_START__,X
    case 0xC27DD7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/increase_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27DDA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/increase_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27DDB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/increase_offense_16th.asm (source_named).
bool execute_battle_increase_offense_16th_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/increase_offense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27D28: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D2A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D2B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D2C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D2D.
    case 0xC27D2F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D30: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/increase_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D31: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:9 STA @VIRTUAL02
    case 0xC27D32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27D2F.
    case 0xC27D33: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/increase_offense_16th.asm:10 CLC
    case 0xC27D34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:11 ADC #battler::offense
    case 0xC27D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/increase_offense_16th.asm:11 ADC #battler::offense
    // Overlapping static entry reached from 0xC27D35.
    case 0xC27D37: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/increase_offense_16th.asm:12 TAY
    case 0xC27D38: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27D39: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:14 LSR
    case 0xC27D3C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:15 LSR
    case 0xC27D3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:16 LSR
    case 0xC27D3E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:17 LSR
    case 0xC27D3F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27D40: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/increase_offense_16th.asm:19 TAX
    case 0xC27D42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27D43: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/increase_offense_16th.asm:22 LDX #1
    case 0xC27D45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/increase_offense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27D45.
    case 0xC27D47: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/increase_offense_16th.asm:24 STX @VIRTUAL04
    case 0xC27D48: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/increase_offense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27D4A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:26 CLC
    case 0xC27D4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:27 ADC @VIRTUAL04
    case 0xC27D4E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_offense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27D50: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27D53: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:30 CLC
    case 0xC27D55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:31 ADC #battler::offense
    case 0xC27D56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/increase_offense_16th.asm:31 ADC #battler::offense
    // Overlapping static entry reached from 0xC27D56.
    case 0xC27D58: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/increase_offense_16th.asm:32 TAX
    case 0xC27D59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:33 STX @LOCAL01
    case 0xC27D5A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/increase_offense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27D5C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:35 LDA a:battler::base_offense,X
    case 0xC27D5E: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/increase_offense_16th.asm:36 AND #$00FF
    case 0xC27D61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/increase_offense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27D61.
    case 0xC27D63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D64: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/increase_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D68: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/increase_offense_16th.asm:38 LSR
    case 0xC27D6A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:39 LSR
    case 0xC27D6B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/increase_offense_16th.asm:40 STA @LOCAL00
    case 0xC27D6C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/increase_offense_16th.asm:41 STA @VIRTUAL02
    case 0xC27D6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/increase_offense_16th.asm:42 LDX @LOCAL01
    case 0xC27D70: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/increase_offense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27D72: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/increase_offense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27D75: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/increase_offense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D77: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/increase_offense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D79: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/increase_offense_16th.asm:46 LDA @LOCAL00
    case 0xC27D7B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/increase_offense_16th.asm:47 STA __BSS_START__,X
    case 0xC27D7D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/increase_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27D80: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/increase_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27D81: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/inflict_status.asm (source_named).
bool execute_battle_inflict_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/inflict_status.asm:3 BEGIN_C_FUNCTION
    case 0xC2724A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC2724C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC2724D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC2724E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC2724F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2724F.
    case 0xC27251: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27252: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/inflict_status.asm:10 END_STACK_VARS
    case 0xC27253: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:11 STX @VIRTUAL02
    case 0xC27254: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/inflict_status.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC27251.
    case 0xC27255: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/inflict_status.asm:12 TAX
    case 0xC27256: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:13 STX @LOCAL00
    case 0xC27257: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/inflict_status.asm:14 LDA a:battler::npc_id,X
    case 0xC27259: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/inflict_status.asm:15 AND #$00FF
    case 0xC2725C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/inflict_status.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2725C.
    case 0xC2725E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/inflict_status.asm:16 BEQ @UNKNOWN0
    case 0xC2725F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/inflict_status.asm:17 LDA #0
    case 0xC27261: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/inflict_status.asm:17 LDA #0
    // Overlapping static entry reached from 0xC27261.
    case 0xC27263: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/inflict_status.asm:18 BRA @UNKNOWN3
    case 0xC27264: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/battle/inflict_status.asm:20 TXA
    case 0xC27266: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:21 CLC
    case 0xC27267: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:22 ADC @VIRTUAL02
    case 0xC27268: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/inflict_status.asm:23 TAX
    case 0xC2726A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:24 LDA a:battler::afflictions,X
    case 0xC2726B: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/inflict_status.asm:25 AND #$00FF
    case 0xC2726E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/inflict_status.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2726E.
    case 0xC27270: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/inflict_status.asm:26 BEQ @UNKNOWN1
    case 0xC27271: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/inflict_status.asm:27 STY @VIRTUAL04
    case 0xC27273: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/inflict_status.asm:28 CMP @VIRTUAL04
    case 0xC27275: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/inflict_status.asm:29 BLTEQ @UNKNOWN2
    case 0xC27277: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/inflict_status.asm:29 BLTEQ @UNKNOWN2
    case 0xC27279: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/inflict_status.asm:31 LDX @LOCAL00
    case 0xC2727B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/inflict_status.asm:32 TXA
    case 0xC2727D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:33 CLC
    case 0xC2727E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:34 ADC @VIRTUAL02
    case 0xC2727F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/inflict_status.asm:35 TAX
    case 0xC27281: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:36 TYA
    case 0xC27282: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/inflict_status.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC27283: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/inflict_status.asm:38 STA a:battler::afflictions,X
    case 0xC27285: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/inflict_status.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC27288: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/inflict_status.asm:40 LDA #1
    case 0xC2728A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/inflict_status.asm:40 LDA #1
    // Overlapping static entry reached from 0xC2728A.
    case 0xC2728C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/inflict_status.asm:41 BRA @UNKNOWN3
    case 0xC2728D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/inflict_status.asm:43 LDA #0
    case 0xC2728F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/inflict_status.asm:43 LDA #0
    // Overlapping static entry reached from 0xC2728F.
    case 0xC27291: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/inflict_status.asm:45 END_C_FUNCTION
    case 0xC27292: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/inflict_status.asm:45 END_C_FUNCTION
    case 0xC27293: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_common.asm (source_named).
bool execute_battle_init_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_common.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC052AA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC052AC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC052AD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC052AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC052AE.
    case 0xC052B0: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_common.asm:7 END_STACK_VARS
    case 0xC052B1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/init_common.asm:8 LDY #0
    case 0xC052B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/init_common.asm:8 LDY #0
    // Overlapping static entry reached from 0xC052B2.
    case 0xC052B4: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/init_common.asm:9 LDX #1
    case 0xC052B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_common.asm:9 LDX #1
    // Overlapping static entry reached from 0xC052B5.
    case 0xC052B7: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/init_common.asm:10 TXA
    case 0xC052B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_common.asm:11 JSL FADE_OUT_WITH_MOSAIC
    case 0xC052B9: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/battle/init_common.asm:12 JSL BATTLE_ROUTINE
    case 0xC052BD: cpu.execute_instruction<0x22>(0xC24821, 4); return true;
    // src/battle/init_common.asm:13 STA @LOCAL00
    case 0xC052C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_common.asm:14 JSL UPDATE_PARTY
    case 0xC052C3: cpu.execute_instruction<0x22>(0xC034D6, 4); return true;
    // src/battle/init_common.asm:15 LDA #1
    case 0xC052C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/init_common.asm:15 LDA #1
    // Overlapping static entry reached from 0xC052C7.
    case 0xC052C9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/init_common.asm:16 STA PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC052CA: cpu.execute_instruction<0x8D>(0x004DC4, 3); return true;
    // src/battle/init_common.asm:17 STZ BATTLE_MODE
    case 0xC052CD: cpu.execute_instruction<0x9C>(0x004DC2, 3); return true;
    // src/battle/init_common.asm:18 LDA @LOCAL00
    case 0xC052D0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_common.asm:19 END_C_FUNCTION
    case 0xC052D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_common.asm:19 END_C_FUNCTION
    case 0xC052D3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_enemy_stats.asm (source_named).
bool execute_battle_init_enemy_stats_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_enemy_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B6EB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6ED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6EE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6EF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B6F0.
    case 0xC2B6F2: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6F3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6F4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:10 STX @VIRTUAL02
    case 0xC2B6F5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B6F2.
    case 0xC2B6F6: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/init_enemy_stats.asm:11 TAY
    case 0xC2B6F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:12 STY @LOCAL01
    case 0xC2B6F8: cpu.execute_instruction<0x84>(0x00000F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FA.
    case 0xC2B6FC: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FC.
    case 0xC2B6FE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FE.
    case 0xC2B700: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FF.
    case 0xC2B701: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B702: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/init_enemy_stats.asm:14 TYA
    case 0xC2B704: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:15 LDY #.SIZEOF(enemy_data)
    case 0xC2B705: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/init_enemy_stats.asm:15 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2B705.
    case 0xC2B707: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/init_enemy_stats.asm:16 JSL MULT168
    case 0xC2B708: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/init_enemy_stats.asm:17 CLC
    case 0xC2B70C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:18 ADC @VIRTUAL06
    case 0xC2B70D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:19 STA @VIRTUAL06
    case 0xC2B70F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B711: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/init_enemy_stats.asm:21 STZ_BADOPT @LOCAL00
    case 0xC2B713: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/init_enemy_stats.asm:22 LDX #.SIZEOF(battler)
    case 0xC2B715: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/init_enemy_stats.asm:22 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B715.
    case 0xC2B717: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/init_enemy_stats.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC2B718: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:24 LDA @VIRTUAL02
    case 0xC2B71A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:25 JSL MEMSET16
    case 0xC2B71C: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/init_enemy_stats.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B720: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:27 LDY #enemy_data::level
    case 0xC2B722: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000036, 2); else cpu.execute_instruction<0xA0>(0x000036, 3); return true;
    // src/battle/init_enemy_stats.asm:27 LDY #enemy_data::level
    // Overlapping static entry reached from 0xC2B722.
    case 0xC2B724: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:28 LDA [@VIRTUAL06],Y
    case 0xC2B725: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2B727: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:30 AND #$00FF
    case 0xC2B729: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2B729.
    case 0xC2B72B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/init_enemy_stats.asm:31 TAX
    case 0xC2B72C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:32 CPX HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2B72D: cpu.execute_instruction<0xEC>(0x00AA0C, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/init_enemy_stats.asm:33 BLTEQ @UNKNOWN0
    case 0xC2B730: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/init_enemy_stats.asm:33 BLTEQ @UNKNOWN0
    case 0xC2B732: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/init_enemy_stats.asm:34 STX HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2B734: cpu.execute_instruction<0x8E>(0x00AA0C, 3); return true;
    // src/battle/init_enemy_stats.asm:36 LDY @LOCAL01
    case 0xC2B737: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/battle/init_enemy_stats.asm:37 TYA
    case 0xC2B739: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:38 LDX @VIRTUAL02
    case 0xC2B73A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:39 STA a:battler::id,X
    case 0xC2B73C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/init_enemy_stats.asm:40 TYA
    case 0xC2B73F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:41 LDX @VIRTUAL02
    case 0xC2B740: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:42 STA a:battler::unknown76,X
    case 0xC2B742: cpu.execute_instruction<0x9D>(0x00004C, 3); return true;
    // src/battle/init_enemy_stats.asm:43 LDY #enemy_data::battle_sprite
    case 0xC2B745: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/battle/init_enemy_stats.asm:43 LDY #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2B745.
    case 0xC2B747: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:44 LDA [@VIRTUAL06],Y
    case 0xC2B748: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:45 LDX @VIRTUAL02
    case 0xC2B74A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:46 STA a:battler::sprite,X
    case 0xC2B74C: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:47 LDY @LOCAL01
    case 0xC2B74F: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/battle/init_enemy_stats.asm:48 TYA
    case 0xC2B751: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:49 JSL UNKNOWN_C2B66A
    case 0xC2B752: cpu.execute_instruction<0x22>(0xC2B66A, 4); return true;
    // src/battle/init_enemy_stats.asm:51 LDX @VIRTUAL02
    case 0xC2B756: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:52 STA a:battler::the_flag,X
    case 0xC2B758: cpu.execute_instruction<0x9D>(0x00000B, 3); return true;
    // src/battle/init_enemy_stats.asm:53 LDA #1
    case 0xC2B75B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/init_enemy_stats.asm:54 LDX @VIRTUAL02
    case 0xC2B75D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:54 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B75B.
    case 0xC2B75E: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:55 STA a:battler::consciousness,X
    case 0xC2B75F: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/battle/init_enemy_stats.asm:56 LDX @VIRTUAL02
    case 0xC2B762: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:57 STA a:battler::ally_or_enemy,X
    case 0xC2B764: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/battle/init_enemy_stats.asm:58 LDX @VIRTUAL02
    case 0xC2B767: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:59 STZ a:battler::npc_id,X
    case 0xC2B769: cpu.execute_instruction<0x9E>(0x00000F, 3); return true;
    // src/battle/init_enemy_stats.asm:60 LDY #enemy_data::row
    case 0xC2B76C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005B, 2); else cpu.execute_instruction<0xA0>(0x00005B, 3); return true;
    // src/battle/init_enemy_stats.asm:60 LDY #enemy_data::row
    // Overlapping static entry reached from 0xC2B76C.
    case 0xC2B76E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:61 LDA [@VIRTUAL06],Y
    case 0xC2B76F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:62 LDX @VIRTUAL02
    case 0xC2B771: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:63 STA a:battler::row,X
    case 0xC2B773: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // src/battle/init_enemy_stats.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC2B776: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:65 LDY #enemy_data::hp
    case 0xC2B778: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000021, 2); else cpu.execute_instruction<0xA0>(0x000021, 3); return true;
    // src/battle/init_enemy_stats.asm:65 LDY #enemy_data::hp
    // Overlapping static entry reached from 0xC2B778.
    case 0xC2B77A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:66 LDA [@VIRTUAL06],Y
    case 0xC2B77B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:67 LDX @VIRTUAL02
    case 0xC2B77D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:68 STA a:battler::hp_max,X
    case 0xC2B77F: cpu.execute_instruction<0x9D>(0x000015, 3); return true;
    // src/battle/init_enemy_stats.asm:69 LDX @VIRTUAL02
    case 0xC2B782: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:70 STA a:battler::hp_target,X
    case 0xC2B784: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/init_enemy_stats.asm:71 LDX @VIRTUAL02
    case 0xC2B787: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:72 STA a:battler::hp,X
    case 0xC2B789: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/init_enemy_stats.asm:73 LDY #enemy_data::pp
    case 0xC2B78C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000023, 2); else cpu.execute_instruction<0xA0>(0x000023, 3); return true;
    // src/battle/init_enemy_stats.asm:73 LDY #enemy_data::pp
    // Overlapping static entry reached from 0xC2B78C.
    case 0xC2B78E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:74 LDA [@VIRTUAL06],Y
    case 0xC2B78F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:75 LDX @VIRTUAL02
    case 0xC2B791: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:76 STA a:battler::pp_max,X
    case 0xC2B793: cpu.execute_instruction<0x9D>(0x00001B, 3); return true;
    // src/battle/init_enemy_stats.asm:77 LDX @VIRTUAL02
    case 0xC2B796: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:78 STA a:battler::pp_target,X
    case 0xC2B798: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // src/battle/init_enemy_stats.asm:79 LDX @VIRTUAL02
    case 0xC2B79B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:80 STA a:battler::pp,X
    case 0xC2B79D: cpu.execute_instruction<0x9D>(0x000017, 3); return true;
    // src/battle/init_enemy_stats.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:82 LDY #enemy_data::offense
    case 0xC2B7A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000038, 2); else cpu.execute_instruction<0xA0>(0x000038, 3); return true;
    // src/battle/init_enemy_stats.asm:82 LDY #enemy_data::offense
    // Overlapping static entry reached from 0xC2B7A2.
    case 0xC2B7A4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:83 LDA [@VIRTUAL06],Y
    case 0xC2B7A5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:84 LDX @VIRTUAL02
    case 0xC2B7A7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:85 STA a:battler::base_offense,X
    case 0xC2B7A9: cpu.execute_instruction<0x9D>(0x000032, 3); return true;
    // src/battle/init_enemy_stats.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:87 AND #$00FF
    case 0xC2B7AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC2B7AE.
    case 0xC2B7B0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:88 LDX @VIRTUAL02
    case 0xC2B7B1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:89 STA a:battler::offense,X
    case 0xC2B7B3: cpu.execute_instruction<0x9D>(0x000026, 3); return true;
    // src/battle/init_enemy_stats.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7B6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:91 LDY #enemy_data::defense
    case 0xC2B7B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003A, 2); else cpu.execute_instruction<0xA0>(0x00003A, 3); return true;
    // src/battle/init_enemy_stats.asm:91 LDY #enemy_data::defense
    // Overlapping static entry reached from 0xC2B7B8.
    case 0xC2B7BA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:92 LDA [@VIRTUAL06],Y
    case 0xC2B7BB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:93 LDX @VIRTUAL02
    case 0xC2B7BD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:94 STA a:battler::base_defense,X
    case 0xC2B7BF: cpu.execute_instruction<0x9D>(0x000033, 3); return true;
    // src/battle/init_enemy_stats.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:96 AND #$00FF
    case 0xC2B7C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC2B7C4.
    case 0xC2B7C6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:97 LDX @VIRTUAL02
    case 0xC2B7C7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:98 STA a:battler::defense,X
    case 0xC2B7C9: cpu.execute_instruction<0x9D>(0x000028, 3); return true;
    // src/battle/init_enemy_stats.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:100 LDY #enemy_data::speed
    case 0xC2B7CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003C, 2); else cpu.execute_instruction<0xA0>(0x00003C, 3); return true;
    // src/battle/init_enemy_stats.asm:100 LDY #enemy_data::speed
    // Overlapping static entry reached from 0xC2B7CE.
    case 0xC2B7D0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:101 LDA [@VIRTUAL06],Y
    case 0xC2B7D1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:102 LDX @VIRTUAL02
    case 0xC2B7D3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:103 STA a:battler::base_speed,X
    case 0xC2B7D5: cpu.execute_instruction<0x9D>(0x000034, 3); return true;
    // src/battle/init_enemy_stats.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7D8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:105 AND #$00FF
    case 0xC2B7DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC2B7DA.
    case 0xC2B7DC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:106 LDX @VIRTUAL02
    case 0xC2B7DD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:107 STA a:battler::speed,X
    case 0xC2B7DF: cpu.execute_instruction<0x9D>(0x00002A, 3); return true;
    // src/battle/init_enemy_stats.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:109 LDY #enemy_data::guts
    case 0xC2B7E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003D, 2); else cpu.execute_instruction<0xA0>(0x00003D, 3); return true;
    // src/battle/init_enemy_stats.asm:109 LDY #enemy_data::guts
    // Overlapping static entry reached from 0xC2B7E4.
    case 0xC2B7E6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:110 LDA [@VIRTUAL06],Y
    case 0xC2B7E7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:111 LDX @VIRTUAL02
    case 0xC2B7E9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:112 STA a:battler::base_guts,X
    case 0xC2B7EB: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/battle/init_enemy_stats.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:114 AND #$00FF
    case 0xC2B7F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC2B7F0.
    case 0xC2B7F2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:115 LDX @VIRTUAL02
    case 0xC2B7F3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:116 STA a:battler::guts,X
    case 0xC2B7F5: cpu.execute_instruction<0x9D>(0x00002C, 3); return true;
    // src/battle/init_enemy_stats.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:118 LDY #enemy_data::luck
    case 0xC2B7FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/battle/init_enemy_stats.asm:118 LDY #enemy_data::luck
    // Overlapping static entry reached from 0xC2B7FA.
    case 0xC2B7FC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:119 LDA [@VIRTUAL06],Y
    case 0xC2B7FD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:120 LDX @VIRTUAL02
    case 0xC2B7FF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:121 STA a:battler::base_luck,X
    case 0xC2B801: cpu.execute_instruction<0x9D>(0x000036, 3); return true;
    // src/battle/init_enemy_stats.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC2B804: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:123 AND #$00FF
    case 0xC2B806: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC2B806.
    case 0xC2B808: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/init_enemy_stats.asm:124 LDX @VIRTUAL02
    case 0xC2B809: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:125 STA a:battler::luck,X
    case 0xC2B80B: cpu.execute_instruction<0x9D>(0x00002E, 3); return true;
    // src/battle/init_enemy_stats.asm:126 LDX @VIRTUAL02
    case 0xC2B80E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B810: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:128 STZ a:battler::vitality,X
    case 0xC2B812: cpu.execute_instruction<0x9E>(0x000030, 3); return true;
    // src/battle/init_enemy_stats.asm:129 LDY #enemy_data::iq
    case 0xC2B815: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000055, 2); else cpu.execute_instruction<0xA0>(0x000055, 3); return true;
    // src/battle/init_enemy_stats.asm:129 LDY #enemy_data::iq
    // Overlapping static entry reached from 0xC2B815.
    case 0xC2B817: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:130 LDA [@VIRTUAL06],Y
    case 0xC2B818: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:131 LDX @VIRTUAL02
    case 0xC2B81A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:132 STA a:battler::iq,X
    case 0xC2B81C: cpu.execute_instruction<0x9D>(0x000031, 3); return true;
    // src/battle/init_enemy_stats.asm:133 LDY #enemy_data::fire_vulnerability
    case 0xC2B81F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003F, 2); else cpu.execute_instruction<0xA0>(0x00003F, 3); return true;
    // src/battle/init_enemy_stats.asm:133 LDY #enemy_data::fire_vulnerability
    // Overlapping static entry reached from 0xC2B81F.
    case 0xC2B821: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:134 LDA [@VIRTUAL06],Y
    case 0xC2B822: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:135 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2B824: cpu.execute_instruction<0x22>(0xC2B608, 4); return true;
    // src/battle/init_enemy_stats.asm:136 LDX @VIRTUAL02
    case 0xC2B828: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:137 STA a:battler::fire_resist,X
    case 0xC2B82A: cpu.execute_instruction<0x9D>(0x00003A, 3); return true;
    // src/battle/init_enemy_stats.asm:138 LDY #enemy_data::freeze_vulnerability
    case 0xC2B82D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/battle/init_enemy_stats.asm:138 LDY #enemy_data::freeze_vulnerability
    // Overlapping static entry reached from 0xC2B82D.
    case 0xC2B82F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:139 LDA [@VIRTUAL06],Y
    case 0xC2B830: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:140 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2B832: cpu.execute_instruction<0x22>(0xC2B608, 4); return true;
    // src/battle/init_enemy_stats.asm:141 LDX @VIRTUAL02
    case 0xC2B836: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:142 STA a:battler::freeze_resist,X
    case 0xC2B838: cpu.execute_instruction<0x9D>(0x000038, 3); return true;
    // src/battle/init_enemy_stats.asm:143 LDY #enemy_data::flash_vulnerability
    case 0xC2B83B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000041, 2); else cpu.execute_instruction<0xA0>(0x000041, 3); return true;
    // src/battle/init_enemy_stats.asm:143 LDY #enemy_data::flash_vulnerability
    // Overlapping static entry reached from 0xC2B83B.
    case 0xC2B83D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:144 LDA [@VIRTUAL06],Y
    case 0xC2B83E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:145 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B840: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_enemy_stats.asm:146 LDX @VIRTUAL02
    case 0xC2B844: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:147 STA a:battler::flash_resist,X
    case 0xC2B846: cpu.execute_instruction<0x9D>(0x000039, 3); return true;
    // src/battle/init_enemy_stats.asm:148 LDY #enemy_data::paralysis_vulnerability
    case 0xC2B849: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000042, 2); else cpu.execute_instruction<0xA0>(0x000042, 3); return true;
    // src/battle/init_enemy_stats.asm:148 LDY #enemy_data::paralysis_vulnerability
    // Overlapping static entry reached from 0xC2B849.
    case 0xC2B84B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:149 LDA [@VIRTUAL06],Y
    case 0xC2B84C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:150 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B84E: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_enemy_stats.asm:151 LDX @VIRTUAL02
    case 0xC2B852: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:152 STA a:battler::paralysis_resist,X
    case 0xC2B854: cpu.execute_instruction<0x9D>(0x000037, 3); return true;
    // src/battle/init_enemy_stats.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC2B857: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:154 LDA #enemy_data::hypnosis_brainshock_vulnerability
    case 0xC2B859: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000043, 2); else cpu.execute_instruction<0xA9>(0x000043, 3); return true;
    // src/battle/init_enemy_stats.asm:154 LDA #enemy_data::hypnosis_brainshock_vulnerability
    // Overlapping static entry reached from 0xC2B859.
    case 0xC2B85B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B85C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B85E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B860: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B862: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/init_enemy_stats.asm:156 CLC
    case 0xC2B864: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:157 ADC @VIRTUAL0A
    case 0xC2B865: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:158 STA @VIRTUAL0A
    case 0xC2B867: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B869: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:160 LDA [@VIRTUAL0A]
    case 0xC2B86B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:161 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B86D: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_enemy_stats.asm:162 LDX @VIRTUAL02
    case 0xC2B871: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:163 STA a:battler::hypnosis_resist,X
    case 0xC2B873: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/battle/init_enemy_stats.asm:164 LDA [@VIRTUAL0A]
    case 0xC2B876: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:165 STA @VIRTUAL00
    case 0xC2B878: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/init_enemy_stats.asm:166 LDA #3
    case 0xC2B87A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003803, 3); return true;
    // src/battle/init_enemy_stats.asm:167 SEC
    case 0xC2B87C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:168 SBC @VIRTUAL00
    case 0xC2B87D: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/battle/init_enemy_stats.asm:169 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B87F: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_enemy_stats.asm:170 LDX @VIRTUAL02
    case 0xC2B883: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:171 STA a:battler::brainshock_resist,X
    case 0xC2B885: cpu.execute_instruction<0x9D>(0x00003B, 3); return true;
    // src/battle/init_enemy_stats.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC2B888: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:173 LDY #enemy_data::money
    case 0xC2B88A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000029, 2); else cpu.execute_instruction<0xA0>(0x000029, 3); return true;
    // src/battle/init_enemy_stats.asm:173 LDY #enemy_data::money
    // Overlapping static entry reached from 0xC2B88A.
    case 0xC2B88C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:174 LDA [@VIRTUAL06],Y
    case 0xC2B88D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:175 LDX @VIRTUAL02
    case 0xC2B88F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:176 STA a:battler::money,X
    case 0xC2B891: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // src/battle/init_enemy_stats.asm:177 LDY #enemy_data::exp
    case 0xC2B894: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000025, 2); else cpu.execute_instruction<0xA0>(0x000025, 3); return true;
    // src/battle/init_enemy_stats.asm:177 LDY #enemy_data::exp
    // Overlapping static entry reached from 0xC2B894.
    case 0xC2B896: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:178 LDA [@VIRTUAL06],Y
    case 0xC2B897: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:179 PHA
    case 0xC2B899: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:180 INY
    case 0xC2B89A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:181 INY
    case 0xC2B89B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:182 LDA [@VIRTUAL06],Y
    case 0xC2B89C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:183 STA @VIRTUAL0A+2
    case 0xC2B89E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/init_enemy_stats.asm:184 PLA
    case 0xC2B8A0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:185 STA @VIRTUAL0A
    case 0xC2B8A1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/init_enemy_stats.asm:186 LDA @VIRTUAL02
    case 0xC2B8A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:187 CLC
    case 0xC2B8A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_enemy_stats.asm:188 ADC #battler::exp
    case 0xC2B8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003F, 2); else cpu.execute_instruction<0x69>(0x00003F, 3); return true;
    // src/battle/init_enemy_stats.asm:188 ADC #battler::exp
    // Overlapping static entry reached from 0xC2B8A6.
    case 0xC2B8A8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/init_enemy_stats.asm:189 TAY
    case 0xC2B8A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8AA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8AC: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8AF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8B1: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:191 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:192 LDY #enemy_data::initial_status
    case 0xC2B8B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000059, 2); else cpu.execute_instruction<0xA0>(0x000059, 3); return true;
    // src/battle/init_enemy_stats.asm:192 LDY #enemy_data::initial_status
    // Overlapping static entry reached from 0xC2B8B6.
    case 0xC2B8B8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_enemy_stats.asm:193 LDA [@VIRTUAL06],Y
    case 0xC2B8B9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_enemy_stats.asm:194 REP #PROC_FLAGS::ACCUM8
    case 0xC2B8BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:195 AND #$00FF
    case 0xC2B8BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_enemy_stats.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC2B8BD.
    case 0xC2B8BF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/init_enemy_stats.asm:196 CMP #INITIAL_STATUS::PSI_SHIELD
    case 0xC2B8C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/init_enemy_stats.asm:196 CMP #INITIAL_STATUS::PSI_SHIELD
    // Overlapping static entry reached from 0xC2B8C0.
    case 0xC2B8C2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:197 BEQ @UNKNOWN1
    case 0xC2B8C3: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:198 CMP #INITIAL_STATUS::PSI_SHIELD_POWER
    case 0xC2B8C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:198 CMP #INITIAL_STATUS::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8C5.
    case 0xC2B8C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:199 BEQ @UNKNOWN2
    case 0xC2B8C8: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/battle/init_enemy_stats.asm:200 CMP #INITIAL_STATUS::SHIELD
    case 0xC2B8CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/init_enemy_stats.asm:200 CMP #INITIAL_STATUS::SHIELD
    // Overlapping static entry reached from 0xC2B8CA.
    case 0xC2B8CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:201 BEQ @UNKNOWN3
    case 0xC2B8CD: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/init_enemy_stats.asm:202 CMP #INITIAL_STATUS::SHIELD_POWER
    case 0xC2B8CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/init_enemy_stats.asm:202 CMP #INITIAL_STATUS::SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8CF.
    case 0xC2B8D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:203 BEQ @UNKNOWN4
    case 0xC2B8D2: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/init_enemy_stats.asm:204 CMP #INITIAL_STATUS::ASLEEP
    case 0xC2B8D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/init_enemy_stats.asm:204 CMP #INITIAL_STATUS::ASLEEP
    // Overlapping static entry reached from 0xC2B8D4.
    case 0xC2B8D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:205 BEQ @UNKNOWN5
    case 0xC2B8D7: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/battle/init_enemy_stats.asm:206 CMP #INITIAL_STATUS::CANT_CONCENTRATE
    case 0xC2B8D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/init_enemy_stats.asm:206 CMP #INITIAL_STATUS::CANT_CONCENTRATE
    // Overlapping static entry reached from 0xC2B8D9.
    case 0xC2B8DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:207 BEQ @UNKNOWN6
    case 0xC2B8DC: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/init_enemy_stats.asm:208 CMP #INITIAL_STATUS::STRANGE
    case 0xC2B8DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/init_enemy_stats.asm:208 CMP #INITIAL_STATUS::STRANGE
    // Overlapping static entry reached from 0xC2B8DE.
    case 0xC2B8E0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_enemy_stats.asm:209 BEQ @UNKNOWN7
    case 0xC2B8E1: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/init_enemy_stats.asm:210 BRA @UNKNOWN8
    case 0xC2B8E3: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/init_enemy_stats.asm:212 LDX #STATUS_6::PSI_SHIELD
    case 0xC2B8E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/init_enemy_stats.asm:212 LDX #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC2B8E5.
    case 0xC2B8E7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:213 LDA @VIRTUAL02
    case 0xC2B8E8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:214 JSR SHIELDS_COMMON
    case 0xC2B8EA: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/init_enemy_stats.asm:215 BRA @UNKNOWN8
    case 0xC2B8ED: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/battle/init_enemy_stats.asm:217 LDX #STATUS_6::PSI_SHIELD_POWER
    case 0xC2B8EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_enemy_stats.asm:217 LDX #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8EF.
    case 0xC2B8F1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:218 LDA @VIRTUAL02
    case 0xC2B8F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:219 JSR SHIELDS_COMMON
    case 0xC2B8F4: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/init_enemy_stats.asm:220 BRA @UNKNOWN8
    case 0xC2B8F7: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/init_enemy_stats.asm:222 LDX #STATUS_6::SHIELD
    case 0xC2B8F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/init_enemy_stats.asm:222 LDX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC2B8F9.
    case 0xC2B8FB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:223 LDA @VIRTUAL02
    case 0xC2B8FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:224 JSR SHIELDS_COMMON
    case 0xC2B8FE: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/init_enemy_stats.asm:225 BRA @UNKNOWN8
    case 0xC2B901: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/init_enemy_stats.asm:227 LDX #STATUS_6::SHIELD_POWER
    case 0xC2B903: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/init_enemy_stats.asm:227 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2B903.
    case 0xC2B905: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/init_enemy_stats.asm:228 LDA @VIRTUAL02
    case 0xC2B906: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:229 JSR SHIELDS_COMMON
    case 0xC2B908: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/init_enemy_stats.asm:230 BRA @UNKNOWN8
    case 0xC2B90B: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/battle/init_enemy_stats.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B90D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:233 LDA #STATUS_2::ASLEEP
    case 0xC2B90F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/init_enemy_stats.asm:234 LDX @VIRTUAL02
    case 0xC2B911: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:234 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B90F.
    case 0xC2B912: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:235 STA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC2B913: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/battle/init_enemy_stats.asm:236 BRA @UNKNOWN8
    case 0xC2B916: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/init_enemy_stats.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B918: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:239 LDA #STATUS_4::CANT_CONCENTRATE4
    case 0xC2B91A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x00A604, 3); return true;
    // src/battle/init_enemy_stats.asm:240 LDX @VIRTUAL02
    case 0xC2B91C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:240 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B91A.
    case 0xC2B91D: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:241 STA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC2B91E: cpu.execute_instruction<0x9D>(0x000021, 3); return true;
    // src/battle/init_enemy_stats.asm:242 BRA @UNKNOWN8
    case 0xC2B921: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/battle/init_enemy_stats.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B923: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_enemy_stats.asm:245 LDA #STATUS_3::STRANGE
    case 0xC2B925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/init_enemy_stats.asm:246 LDX @VIRTUAL02
    case 0xC2B927: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_enemy_stats.asm:246 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B925.
    case 0xC2B928: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/init_enemy_stats.asm:247 STA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC2B929: cpu.execute_instruction<0x9D>(0x000020, 3); return true;
    // src/battle/init_enemy_stats.asm:249 REP #PROC_FLAGS::ACCUM8
    case 0xC2B92C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_enemy_stats.asm:250 END_C_FUNCTION
    case 0xC2B92E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_enemy_stats.asm:250 END_C_FUNCTION
    case 0xC2B92F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_overworld.asm (source_named).
bool execute_battle_init_overworld_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_overworld.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B731: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B733: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B734: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B735: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B735.
    case 0xC0B737: cpu.execute_instruction<0xFF>(0xC2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B738: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    case 0xC0B739: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0B737.
    case 0xC0B73B: cpu.execute_instruction<0x4D>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B73C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B73E: cpu.execute_instruction<0x4C>(0x00B7D6, 3); return true;
    // src/battle/init_overworld.asm:10 LDA DEBUG
    case 0xC0B741: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/battle/init_overworld.asm:11 BEQ @UNKNOWN1
    case 0xC0B744: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/init_overworld.asm:12 JSL UNKNOWN_EFE708
    case 0xC0B746: cpu.execute_instruction<0x22>(0xEFE708, 4); return true;
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    case 0xC0B74A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC0B74A.
    case 0xC0B74C: cpu.execute_instruction<0xFF>(0x2249F0, 4); return true;
    // src/battle/init_overworld.asm:14 BEQ @UNKNOWN5
    case 0xC0B74D: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    case 0xC0B74F: cpu.execute_instruction<0x22>(0xC26634, 4); return true;
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    // Overlapping static entry reached from 0xC0B74C.
    case 0xC0B750: cpu.execute_instruction<0x34>(0x000066, 2); return true;
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    // Overlapping static entry reached from 0xC0B750.
    case 0xC0B752: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/battle/init_overworld.asm:17 CMP #0
    case 0xC0B753: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:17 CMP #0
    // Overlapping static entry reached from 0xC0B752.
    case 0xC0B754: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/init_overworld.asm:17 CMP #0
    // Overlapping static entry reached from 0xC0B753.
    case 0xC0B755: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_overworld.asm:18 BEQ @UNKNOWN2
    case 0xC0B756: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/init_overworld.asm:19 JSL INSTANT_WIN_HANDLER
    case 0xC0B758: cpu.execute_instruction<0x22>(0xC261BD, 4); return true;
    // src/battle/init_overworld.asm:20 STZ BATTLE_MODE
    case 0xC0B75C: cpu.execute_instruction<0x9C>(0x004DC2, 3); return true;
    // src/battle/init_overworld.asm:21 BRA @UNKNOWN5
    case 0xC0B75F: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/battle/init_overworld.asm:23 JSL INIT_BATTLE_COMMON
    case 0xC0B761: cpu.execute_instruction<0x22>(0xC052AA, 4); return true;
    // src/battle/init_overworld.asm:24 TAX
    case 0xC0B765: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:25 STX @LOCAL01
    case 0xC0B766: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/init_overworld.asm:26 JSL UNKNOWN_C07B52
    case 0xC0B768: cpu.execute_instruction<0x22>(0xC07B52, 4); return true;
    // src/battle/init_overworld.asm:27 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B76C: cpu.execute_instruction<0x9C>(0x005D98, 3); return true;
    // src/battle/init_overworld.asm:28 LDA PSI_TELEPORT_DESTINATION
    case 0xC0B76F: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/battle/init_overworld.asm:29 BNE @UNKNOWN4
    case 0xC0B772: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/init_overworld.asm:30 LDX @LOCAL01
    case 0xC0B774: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/init_overworld.asm:31 BEQ @UNKNOWN3
    case 0xC0B776: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:32 LDA DEBUG
    case 0xC0B778: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/battle/init_overworld.asm:33 BEQ @UNKNOWN8
    case 0xC0B77B: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/battle/init_overworld.asm:34 JSL DEBUG_CHECK_VIEW_CHARACTER_MODE
    case 0xC0B77D: cpu.execute_instruction<0x22>(0xEFE746, 4); return true;
    // src/battle/init_overworld.asm:35 CMP #0
    case 0xC0B781: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:35 CMP #0
    // Overlapping static entry reached from 0xC0B781.
    case 0xC0B783: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_overworld.asm:36 BNE @UNKNOWN8
    case 0xC0B784: cpu.execute_instruction<0xD0>(0x000050, 2); return true;
    // src/battle/init_overworld.asm:38 JSL RELOAD_MAP
    case 0xC0B786: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/battle/init_overworld.asm:39 LDX #1
    case 0xC0B78A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_overworld.asm:39 LDX #1
    // Overlapping static entry reached from 0xC0B78A.
    case 0xC0B78C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/init_overworld.asm:40 TXA
    case 0xC0B78D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:41 JSL FADE_IN
    case 0xC0B78E: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/battle/init_overworld.asm:42 BRA @UNKNOWN5
    case 0xC0B792: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/init_overworld.asm:44 JSL TELEPORT_MAINLOOP
    case 0xC0B794: cpu.execute_instruction<0x22>(0xC0EA99, 4); return true;
    // src/battle/init_overworld.asm:46 LDA #0
    case 0xC0B798: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:46 LDA #0
    // Overlapping static entry reached from 0xC0B798.
    case 0xC0B79A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/init_overworld.asm:47 STA @LOCAL00
    case 0xC0B79B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:48 BRA @UNKNOWN7
    case 0xC0B79D: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/battle/init_overworld.asm:50 ASL
    case 0xC0B79F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:51 TAX
    case 0xC0B7A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0B7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0B7A1.
    case 0xC0B7A3: cpu.execute_instruction<0xFF>(0x289E9D, 4); return true;
    // src/battle/init_overworld.asm:53 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0B7A4: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/battle/init_overworld.asm:54 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0B7A7: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/battle/init_overworld.asm:55 TXA
    case 0xC0B7AA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:56 CLC
    case 0xC0B7AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0B7AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0B7AC.
    case 0xC0B7AE: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/battle/init_overworld.asm:58 TAX
    case 0xC0B7AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:59 LDA __BSS_START__,X
    case 0xC0B7B0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:60 AND #$7FFF
    case 0xC0B7B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/battle/init_overworld.asm:60 AND #$7FFF
    // Overlapping static entry reached from 0xC0B7B3.
    case 0xC0B7B5: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/battle/init_overworld.asm:61 STA __BSS_START__,X
    case 0xC0B7B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/init_overworld.asm:62 LDA @LOCAL00
    case 0xC0B7B9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:63 INC
    case 0xC0B7BB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/init_overworld.asm:64 STA @LOCAL00
    case 0xC0B7BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_overworld.asm:66 CMP #23
    case 0xC0B7BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/battle/init_overworld.asm:66 CMP #23
    // Overlapping static entry reached from 0xC0B7BE.
    case 0xC0B7C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_overworld.asm:67 BNE @UNKNOWN6
    case 0xC0B7C1: cpu.execute_instruction<0xD0>(0x0000DC, 2); return true;
    // src/battle/init_overworld.asm:68 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B7C3: cpu.execute_instruction<0x9C>(0x005D98, 3); return true;
    // src/battle/init_overworld.asm:69 JSL UNKNOWN_C09451
    case 0xC0B7C6: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/battle/init_overworld.asm:70 LDA #120
    case 0xC0B7CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/init_overworld.asm:70 LDA #120
    // Overlapping static entry reached from 0xC0B7CA.
    case 0xC0B7CC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/init_overworld.asm:71 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0B7CD: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    case 0xC0B7D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    // Overlapping static entry reached from 0xC0B7D0.
    case 0xC0B7D2: cpu.execute_instruction<0xFF>(0x4DB68D, 4); return true;
    // src/battle/init_overworld.asm:73 STA TOUCHED_ENEMY
    case 0xC0B7D3: cpu.execute_instruction<0x8D>(0x004DB6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7D6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7D7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_player_stats.asm (source_named).
bool execute_battle_init_player_stats_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_player_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B930: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B932: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B933: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B934: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B935: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B935.
    case 0xC2B937: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B938: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B939: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:12 TXY
    case 0xC2B93A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:13 STY @LOCAL03
    case 0xC2B93B: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:14 STA @VIRTUAL04
    case 0xC2B93D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/init_player_stats.asm:15 DEC
    case 0xC2B93F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC2B940: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/init_player_stats.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B940.
    case 0xC2B942: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/init_player_stats.asm:17 JSL MULT168
    case 0xC2B943: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/init_player_stats.asm:18 CLC
    case 0xC2B947: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2B948: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/init_player_stats.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2B948.
    case 0xC2B94A: cpu.execute_instruction<0x99>(0x000285, 3); return true;
    // src/battle/init_player_stats.asm:20 STA @VIRTUAL02
    case 0xC2B94B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B94D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    case 0xC2B94F: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/battle/init_player_stats.asm:23 LDX #.SIZEOF(battler)
    case 0xC2B951: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/init_player_stats.asm:23 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B951.
    case 0xC2B953: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/init_player_stats.asm:24 LDY @LOCAL03
    case 0xC2B954: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC2B956: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:26 TYA
    case 0xC2B958: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:27 JSL MEMSET16
    case 0xC2B959: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/battle/init_player_stats.asm:28 LDA @VIRTUAL04
    case 0xC2B95D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/init_player_stats.asm:29 LDY @LOCAL03
    case 0xC2B95F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:30 STA a:battler::id,Y
    case 0xC2B961: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/init_player_stats.asm:31 TYX
    case 0xC2B964: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:32 STZ a:battler::sprite,X
    case 0xC2B965: cpu.execute_instruction<0x9E>(0x000002, 3); return true;
    // src/battle/init_player_stats.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B968: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:34 LDA #1
    case 0xC2B96A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/battle/init_player_stats.asm:35 STA a:battler::consciousness,Y
    case 0xC2B96C: cpu.execute_instruction<0x99>(0x00000C, 3); return true;
    // src/battle/init_player_stats.asm:35 STA a:battler::consciousness,Y
    // Overlapping static entry reached from 0xC2B96A.
    case 0xC2B96D: cpu.execute_instruction<0x0C>(0x00BB00, 3); return true;
    // src/battle/init_player_stats.asm:36 TYX
    case 0xC2B96F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:37 STZ a:battler::ally_or_enemy,X
    case 0xC2B970: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/battle/init_player_stats.asm:38 TYX
    case 0xC2B973: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:39 STZ a:battler::npc_id,X
    case 0xC2B974: cpu.execute_instruction<0x9E>(0x00000F, 3); return true;
    // src/battle/init_player_stats.asm:40 LDX @VIRTUAL02
    case 0xC2B977: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC2B979: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:42 LDA a:char_struct::current_hp,X
    case 0xC2B97B: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/init_player_stats.asm:43 STA a:battler::hp,Y
    case 0xC2B97E: cpu.execute_instruction<0x99>(0x000011, 3); return true;
    // src/battle/init_player_stats.asm:44 LDX @VIRTUAL02
    case 0xC2B981: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:45 LDA a:char_struct::current_hp_target,X
    case 0xC2B983: cpu.execute_instruction<0xBD>(0x000047, 3); return true;
    // src/battle/init_player_stats.asm:46 STA a:battler::hp_target,Y
    case 0xC2B986: cpu.execute_instruction<0x99>(0x000013, 3); return true;
    // src/battle/init_player_stats.asm:47 LDX @VIRTUAL02
    case 0xC2B989: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:48 LDA a:char_struct::max_hp,X
    case 0xC2B98B: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/battle/init_player_stats.asm:49 STA a:battler::hp_max,Y
    case 0xC2B98E: cpu.execute_instruction<0x99>(0x000015, 3); return true;
    // src/battle/init_player_stats.asm:50 LDX @VIRTUAL02
    case 0xC2B991: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:51 LDA a:char_struct::current_pp,X
    case 0xC2B993: cpu.execute_instruction<0xBD>(0x00004B, 3); return true;
    // src/battle/init_player_stats.asm:52 STA a:battler::pp,Y
    case 0xC2B996: cpu.execute_instruction<0x99>(0x000017, 3); return true;
    // src/battle/init_player_stats.asm:53 LDX @VIRTUAL02
    case 0xC2B999: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:54 LDA a:char_struct::current_pp_target,X
    case 0xC2B99B: cpu.execute_instruction<0xBD>(0x00004D, 3); return true;
    // src/battle/init_player_stats.asm:55 STA a:battler::pp_target,Y
    case 0xC2B99E: cpu.execute_instruction<0x99>(0x000019, 3); return true;
    // src/battle/init_player_stats.asm:56 LDX @VIRTUAL02
    case 0xC2B9A1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:57 LDA a:char_struct::max_pp,X
    case 0xC2B9A3: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/init_player_stats.asm:58 STA a:battler::pp_max,Y
    case 0xC2B9A6: cpu.execute_instruction<0x99>(0x00001B, 3); return true;
    // src/battle/init_player_stats.asm:59 TYA
    case 0xC2B9A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:60 CLC
    case 0xC2B9AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:61 ADC #battler::afflictions
    case 0xC2B9AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/battle/init_player_stats.asm:61 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC2B9AB.
    case 0xC2B9AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9B0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9B3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9B6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/init_player_stats.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9B8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B9BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B9BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B9BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B9C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/init_player_stats.asm:65 LDA @VIRTUAL02
    case 0xC2B9C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:66 CLC
    case 0xC2B9C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:67 ADC #char_struct::afflictions
    case 0xC2B9C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/battle/init_player_stats.asm:67 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2B9C5.
    case 0xC2B9C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9CA: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B9D0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/init_player_stats.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B9D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B9D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B9D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B9DA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/init_player_stats.asm:71 LDA #AFFLICTION_GROUP_COUNT
    case 0xC2B9DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/init_player_stats.asm:71 LDA #AFFLICTION_GROUP_COUNT
    // Overlapping static entry reached from 0xC2B9DC.
    case 0xC2B9DE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/init_player_stats.asm:72 JSL MEMCPY24
    case 0xC2B9DF: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/init_player_stats.asm:73 LDX @VIRTUAL02
    case 0xC2B9E3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:75 LDA a:char_struct::offense,X
    case 0xC2B9E7: cpu.execute_instruction<0xBD>(0x000015, 3); return true;
    // src/battle/init_player_stats.asm:76 LDY @LOCAL03
    case 0xC2B9EA: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:77 STA a:battler::base_offense,Y
    case 0xC2B9EC: cpu.execute_instruction<0x99>(0x000032, 3); return true;
    // src/battle/init_player_stats.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:79 AND #$00FF
    case 0xC2B9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC2B9F1.
    case 0xC2B9F3: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:80 STA a:battler::offense,Y
    case 0xC2B9F4: cpu.execute_instruction<0x99>(0x000026, 3); return true;
    // src/battle/init_player_stats.asm:81 LDX @VIRTUAL02
    case 0xC2B9F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:83 LDA a:char_struct::defense,X
    case 0xC2B9FB: cpu.execute_instruction<0xBD>(0x000016, 3); return true;
    // src/battle/init_player_stats.asm:84 STA a:battler::base_defense,Y
    case 0xC2B9FE: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // src/battle/init_player_stats.asm:85 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:86 AND #$00FF
    case 0xC2BA03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC2BA03.
    case 0xC2BA05: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:87 STA a:battler::defense,Y
    case 0xC2BA06: cpu.execute_instruction<0x99>(0x000028, 3); return true;
    // src/battle/init_player_stats.asm:88 LDX @VIRTUAL02
    case 0xC2BA09: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA0B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:90 LDA a:char_struct::speed,X
    case 0xC2BA0D: cpu.execute_instruction<0xBD>(0x000017, 3); return true;
    // src/battle/init_player_stats.asm:91 STA a:battler::base_speed,Y
    case 0xC2BA10: cpu.execute_instruction<0x99>(0x000034, 3); return true;
    // src/battle/init_player_stats.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:93 AND #$00FF
    case 0xC2BA15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2BA15.
    case 0xC2BA17: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:94 STA a:battler::speed,Y
    case 0xC2BA18: cpu.execute_instruction<0x99>(0x00002A, 3); return true;
    // src/battle/init_player_stats.asm:95 LDX @VIRTUAL02
    case 0xC2BA1B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:97 LDA a:char_struct::guts,X
    case 0xC2BA1F: cpu.execute_instruction<0xBD>(0x000018, 3); return true;
    // src/battle/init_player_stats.asm:98 STA a:battler::base_guts,Y
    case 0xC2BA22: cpu.execute_instruction<0x99>(0x000035, 3); return true;
    // src/battle/init_player_stats.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA25: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:100 AND #$00FF
    case 0xC2BA27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC2BA27.
    case 0xC2BA29: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:101 STA a:battler::guts,Y
    case 0xC2BA2A: cpu.execute_instruction<0x99>(0x00002C, 3); return true;
    // src/battle/init_player_stats.asm:102 LDX @VIRTUAL02
    case 0xC2BA2D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:104 LDA a:char_struct::luck,X
    case 0xC2BA31: cpu.execute_instruction<0xBD>(0x000019, 3); return true;
    // src/battle/init_player_stats.asm:105 STA a:battler::base_luck,Y
    case 0xC2BA34: cpu.execute_instruction<0x99>(0x000036, 3); return true;
    // src/battle/init_player_stats.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA37: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:107 AND #$00FF
    case 0xC2BA39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_player_stats.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC2BA39.
    case 0xC2BA3B: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/battle/init_player_stats.asm:108 STA a:battler::luck,Y
    case 0xC2BA3C: cpu.execute_instruction<0x99>(0x00002E, 3); return true;
    // src/battle/init_player_stats.asm:109 LDX @VIRTUAL02
    case 0xC2BA3F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:110 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:111 LDA a:char_struct::vitality,X
    case 0xC2BA43: cpu.execute_instruction<0xBD>(0x00001A, 3); return true;
    // src/battle/init_player_stats.asm:112 STA a:battler::vitality,Y
    case 0xC2BA46: cpu.execute_instruction<0x99>(0x000030, 3); return true;
    // src/battle/init_player_stats.asm:113 LDX @VIRTUAL02
    case 0xC2BA49: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:114 LDA a:char_struct::iq,X
    case 0xC2BA4B: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/init_player_stats.asm:115 STA a:battler::iq,Y
    case 0xC2BA4E: cpu.execute_instruction<0x99>(0x000031, 3); return true;
    // src/battle/init_player_stats.asm:116 LDX @VIRTUAL02
    case 0xC2BA51: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:117 LDA a:char_struct::fire_resist,X
    case 0xC2BA53: cpu.execute_instruction<0xBD>(0x000052, 3); return true;
    // src/battle/init_player_stats.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2BA56: cpu.execute_instruction<0x22>(0xC2B608, 4); return true;
    // src/battle/init_player_stats.asm:119 LDY @LOCAL03
    case 0xC2BA5A: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:120 STA a:battler::fire_resist,Y
    case 0xC2BA5C: cpu.execute_instruction<0x99>(0x00003A, 3); return true;
    // src/battle/init_player_stats.asm:121 LDX @VIRTUAL02
    case 0xC2BA5F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:122 LDA a:char_struct::freeze_resist,X
    case 0xC2BA61: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // src/battle/init_player_stats.asm:123 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2BA64: cpu.execute_instruction<0x22>(0xC2B608, 4); return true;
    // src/battle/init_player_stats.asm:124 LDY @LOCAL03
    case 0xC2BA68: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:125 STA a:battler::freeze_resist,Y
    case 0xC2BA6A: cpu.execute_instruction<0x99>(0x000038, 3); return true;
    // src/battle/init_player_stats.asm:126 LDX @VIRTUAL02
    case 0xC2BA6D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:127 LDA a:char_struct::flash_resist,X
    case 0xC2BA6F: cpu.execute_instruction<0xBD>(0x000054, 3); return true;
    // src/battle/init_player_stats.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA72: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_player_stats.asm:129 LDY @LOCAL03
    case 0xC2BA76: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:130 STA a:battler::flash_resist,Y
    case 0xC2BA78: cpu.execute_instruction<0x99>(0x000039, 3); return true;
    // src/battle/init_player_stats.asm:131 LDX @VIRTUAL02
    case 0xC2BA7B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:132 LDA a:char_struct::paralysis_resist,X
    case 0xC2BA7D: cpu.execute_instruction<0xBD>(0x000055, 3); return true;
    // src/battle/init_player_stats.asm:133 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA80: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_player_stats.asm:134 LDY @LOCAL03
    case 0xC2BA84: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:135 STA a:battler::paralysis_resist,Y
    case 0xC2BA86: cpu.execute_instruction<0x99>(0x000037, 3); return true;
    // src/battle/init_player_stats.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA89: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:137 LDA @VIRTUAL02
    case 0xC2BA8B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/init_player_stats.asm:138 CLC
    case 0xC2BA8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:139 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC2BA8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x000056, 3); return true;
    // src/battle/init_player_stats.asm:139 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC2BA8E.
    case 0xC2BA90: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/init_player_stats.asm:140 TAX
    case 0xC2BA91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:141 STX @LOCAL02
    case 0xC2BA92: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/init_player_stats.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:143 LDA __BSS_START__,X
    case 0xC2BA96: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/init_player_stats.asm:144 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA99: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_player_stats.asm:145 LDY @LOCAL03
    case 0xC2BA9D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:146 STA a:battler::hypnosis_resist,Y
    case 0xC2BA9F: cpu.execute_instruction<0x99>(0x00003C, 3); return true;
    // src/battle/init_player_stats.asm:147 LDX @LOCAL02
    case 0xC2BAA2: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/init_player_stats.asm:148 LDA __BSS_START__,X
    case 0xC2BAA4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/init_player_stats.asm:149 STA @VIRTUAL00
    case 0xC2BAA7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/init_player_stats.asm:150 LDA #3
    case 0xC2BAA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003803, 3); return true;
    // src/battle/init_player_stats.asm:151 SEC
    case 0xC2BAAB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:152 SBC @VIRTUAL00
    case 0xC2BAAC: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/battle/init_player_stats.asm:153 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BAAE: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/init_player_stats.asm:154 LDY @LOCAL03
    case 0xC2BAB2: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/init_player_stats.asm:155 STA a:battler::brainshock_resist,Y
    case 0xC2BAB4: cpu.execute_instruction<0x99>(0x00003B, 3); return true;
    // src/battle/init_player_stats.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC2BAB7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:157 LDA @VIRTUAL04
    case 0xC2BAB9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/init_player_stats.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BABB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/init_player_stats.asm:159 DEC
    case 0xC2BABD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/init_player_stats.asm:160 STA a:battler::row,Y
    case 0xC2BABE: cpu.execute_instruction<0x99>(0x000010, 3); return true;
    // src/battle/init_player_stats.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC2BAC1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_player_stats.asm:162 END_C_FUNCTION
    case 0xC2BAC3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_player_stats.asm:162 END_C_FUNCTION
    case 0xC2BAC4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/init_scripted.asm (source_named).
bool execute_battle_init_scripted_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_scripted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22F38: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC22F3D.
    case 0xC22F3F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F40: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F41: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    case 0xC22F42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC22F3F.
    case 0xC22F43: cpu.execute_instruction<0x10>(0x00008D, 2); return true;
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    case 0xC22F44: cpu.execute_instruction<0x8D>(0x004A8C, 3); return true;
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC22F43.
    case 0xC22F45: cpu.execute_instruction<0x8C>(0x00A94A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F45.
    case 0xC22F48: cpu.execute_instruction<0x0D>(0x0085C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F47.
    case 0xC22F49: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F4A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F49.
    case 0xC22F4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F4C.
    case 0xC22F4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F4F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/init_scripted.asm:13 LDA @LOCAL01
    case 0xC22F51: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:14 ASL
    case 0xC22F53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:15 ASL
    case 0xC22F54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:16 ASL
    case 0xC22F55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:17 CLC
    case 0xC22F56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:18 ADC @VIRTUAL0A
    case 0xC22F57: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/init_scripted.asm:19 STA @VIRTUAL0A
    case 0xC22F59: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC22F5B.
    case 0xC22F5D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F5E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F60: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F61: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F65: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/battle/init_scripted.asm:21 STZ ENEMIES_IN_BATTLE
    case 0xC22F67: cpu.execute_instruction<0x9C>(0x009F8A, 3); return true;
    // src/battle/init_scripted.asm:22 BRA @UNKNOWN2
    case 0xC22F6A: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/battle/init_scripted.asm:24 LDA ENEMIES_IN_BATTLE
    case 0xC22F6C: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/battle/init_scripted.asm:25 ASL
    case 0xC22F6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:26 TAX
    case 0xC22F70: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:27 LDY #1
    case 0xC22F71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:27 LDY #1
    // Overlapping static entry reached from 0xC22F71.
    case 0xC22F73: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/init_scripted.asm:28 LDA [@VIRTUAL06],Y
    case 0xC22F74: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/init_scripted.asm:29 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC22F76: cpu.execute_instruction<0x9D>(0x009F8C, 3); return true;
    // src/battle/init_scripted.asm:30 INC ENEMIES_IN_BATTLE
    case 0xC22F79: cpu.execute_instruction<0xEE>(0x009F8A, 3); return true;
    // src/battle/init_scripted.asm:32 LDA @LOCAL00
    case 0xC22F7C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/init_scripted.asm:33 TAX
    case 0xC22F7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:34 DEC
    case 0xC22F7F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:35 STA @LOCAL00
    case 0xC22F80: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_scripted.asm:36 CPX #0
    case 0xC22F82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:36 CPX #0
    // Overlapping static entry reached from 0xC22F82.
    case 0xC22F84: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_scripted.asm:37 BNE @UNKNOWN0
    case 0xC22F85: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/battle/init_scripted.asm:38 LDA #3
    case 0xC22F87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/init_scripted.asm:38 LDA #3
    // Overlapping static entry reached from 0xC22F87.
    case 0xC22F89: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/init_scripted.asm:39 CLC
    case 0xC22F8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:40 ADC @VIRTUAL06
    case 0xC22F8B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/init_scripted.asm:41 STA @VIRTUAL06
    case 0xC22F8D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F8F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F91: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F93: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F95: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/init_scripted.asm:44 LDA [@VIRTUAL0A]
    case 0xC22F97: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/init_scripted.asm:45 AND #$00FF
    case 0xC22F99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/init_scripted.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC22F99.
    case 0xC22F9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/init_scripted.asm:46 STA @LOCAL00
    case 0xC22F9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/init_scripted.asm:47 CMP #$00FF
    case 0xC22F9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/init_scripted.asm:47 CMP #$00FF
    // Overlapping static entry reached from 0xC22F9E.
    case 0xC22FA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_scripted.asm:48 BNE @UNKNOWN1
    case 0xC22FA1: cpu.execute_instruction<0xD0>(0x0000D9, 2); return true;
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    case 0xC22FA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    // Overlapping static entry reached from 0xC22FA3.
    case 0xC22FA5: cpu.execute_instruction<0xFF>(0x4DC28D, 4); return true;
    // src/battle/init_scripted.asm:50 STA BATTLE_MODE
    case 0xC22FA6: cpu.execute_instruction<0x8D>(0x004DC2, 3); return true;
    // src/battle/init_scripted.asm:51 JSL BATTLE_SWIRL_SEQUENCE
    case 0xC22FA9: cpu.execute_instruction<0x22>(0xC2E8E0, 4); return true;
    // src/battle/init_scripted.asm:52 BRA @UNKNOWN4
    case 0xC22FAD: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/init_scripted.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC22FAF: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/battle/init_scripted.asm:55 JSL UNKNOWN_C4A7B0
    case 0xC22FB3: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/battle/init_scripted.asm:57 JSL UNKNOWN_C2E9C8
    case 0xC22FB7: cpu.execute_instruction<0x22>(0xC2E9C8, 4); return true;
    // src/battle/init_scripted.asm:58 CMP #0
    case 0xC22FBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:58 CMP #0
    // Overlapping static entry reached from 0xC22FBB.
    case 0xC22FBD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/init_scripted.asm:59 BNE @UNKNOWN3
    case 0xC22FBE: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // src/battle/init_scripted.asm:60 JSL INIT_BATTLE_COMMON
    case 0xC22FC0: cpu.execute_instruction<0x22>(0xC052AA, 4); return true;
    // src/battle/init_scripted.asm:61 TAX
    case 0xC22FC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:62 STX @LOCAL01
    case 0xC22FC5: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:63 LDA PSI_TELEPORT_DESTINATION
    case 0xC22FC7: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/battle/init_scripted.asm:64 BNE @UNKNOWN6
    case 0xC22FCA: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/init_scripted.asm:65 CPX #0
    case 0xC22FCC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:65 CPX #0
    // Overlapping static entry reached from 0xC22FCC.
    case 0xC22FCE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/init_scripted.asm:66 BEQ @UNKNOWN5
    case 0xC22FCF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/init_scripted.asm:67 LDA #1
    case 0xC22FD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:67 LDA #1
    // Overlapping static entry reached from 0xC22FD1.
    case 0xC22FD3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/init_scripted.asm:68 BRA @RETURN
    case 0xC22FD4: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/battle/init_scripted.asm:70 JSL RELOAD_MAP
    case 0xC22FD6: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/battle/init_scripted.asm:71 LDX #1
    case 0xC22FDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:71 LDX #1
    // Overlapping static entry reached from 0xC22FDA.
    case 0xC22FDC: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/init_scripted.asm:72 TXA
    case 0xC22FDD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:73 JSL FADE_IN
    case 0xC22FDE: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/battle/init_scripted.asm:74 BRA @UNKNOWN7
    case 0xC22FE2: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/init_scripted.asm:76 JSL TELEPORT_MAINLOOP
    case 0xC22FE4: cpu.execute_instruction<0x22>(0xC0EA99, 4); return true;
    // src/battle/init_scripted.asm:77 LDX @LOCAL01
    case 0xC22FE8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/init_scripted.asm:78 BEQ @UNKNOWN7
    case 0xC22FEA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/init_scripted.asm:79 LDA #1
    case 0xC22FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/init_scripted.asm:79 LDA #1
    // Overlapping static entry reached from 0xC22FEC.
    case 0xC22FEE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/init_scripted.asm:80 BRA @RETURN
    case 0xC22FEF: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/init_scripted.asm:82 JSL UNKNOWN_C3EE4D
    case 0xC22FF1: cpu.execute_instruction<0x22>(0xC3EE4D, 4); return true;
    // src/battle/init_scripted.asm:83 LDA CURRENT_BATTLE_GROUP
    case 0xC22FF5: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    case 0xC22FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0001C0, 3); return true;
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    // Overlapping static entry reached from 0xC22FF8.
    case 0xC22FFA: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    case 0xC22FFB: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    // Overlapping static entry reached from 0xC22FFA.
    case 0xC22FFC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/battle/init_scripted.asm:86 LDA #120
    case 0xC22FFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22FFC.
    case 0xC22FFE: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22FFD.
    case 0xC22FFF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/init_scripted.asm:87 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC23000: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/battle/init_scripted.asm:89 LDA #0
    case 0xC23003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/init_scripted.asm:89 LDA #0
    // Overlapping static entry reached from 0xC23003.
    case 0xC23005: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC23006: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC23007: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/instant_win_check.asm (source_named).
bool execute_battle_instant_win_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26634: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26636: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26637: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC26638: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC26638.
    case 0xC2663A: cpu.execute_instruction<0xFF>(0xBCAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_check.asm:16 END_STACK_VARS
    case 0xC2663B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:17 LDA BATTLE_INITIATIVE
    case 0xC2663C: cpu.execute_instruction<0xAD>(0x004DBC, 3); return true;
    // src/battle/instant_win_check.asm:17 LDA BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC2663A.
    case 0xC2663E: cpu.execute_instruction<0x4D>(0x0002C9, 3); return true;
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC2663F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/instant_win_check.asm:18 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC2663F.
    case 0xC26641: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_check.asm:19 BNE @UNKNOWN0
    case 0xC26642: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:20 LDA #0
    case 0xC26644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:20 LDA #0
    // Overlapping static entry reached from 0xC26644.
    case 0xC26646: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:21 JMP @UNKNOWN37
    case 0xC26647: cpu.execute_instruction<0x4C>(0x006989, 3); return true;
    // src/battle/instant_win_check.asm:23 STZ @LOCAL09
    case 0xC2664A: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:24 STZ @LOCAL08
    case 0xC2664C: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:25 LDA #$FFFF
    case 0xC2664E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/instant_win_check.asm:25 LDA #$FFFF
    // Overlapping static entry reached from 0xC2664E.
    case 0xC26650: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/battle/instant_win_check.asm:26 STA @VIRTUAL02
    case 0xC26651: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:27 STA @LOCAL07
    case 0xC26653: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:27 STA @LOCAL07
    // Overlapping static entry reached from 0xC26650.
    case 0xC26654: cpu.execute_instruction<0x1E>(0x0002A5, 3); return true;
    // src/battle/instant_win_check.asm:28 LDA @VIRTUAL02
    case 0xC26655: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:29 STA @VIRTUAL04
    case 0xC26657: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:30 LDY #0
    case 0xC26659: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:30 LDY #0
    // Overlapping static entry reached from 0xC26659.
    case 0xC2665B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/instant_win_check.asm:31 STY @LOCAL06
    case 0xC2665C: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:32 JMP @UNKNOWN7
    case 0xC2665E: cpu.execute_instruction<0x4C>(0x006720, 3); return true;
    // src/battle/instant_win_check.asm:41 LDA GAME_STATE + game_state::party_members,Y
    case 0xC26661: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/battle/instant_win_check.asm:43 AND #$00FF
    case 0xC26664: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC26664.
    case 0xC26666: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:44 TAX
    case 0xC26667: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:45 STX @LOCAL05
    case 0xC26668: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:46 CPX #1
    case 0xC2666A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:46 CPX #1
    // Overlapping static entry reached from 0xC2666A.
    case 0xC2666C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC2666D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC2666F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:47 BCCL @UNKNOWN6
    case 0xC26671: cpu.execute_instruction<0x4C>(0x00671B, 3); return true;
    // src/battle/instant_win_check.asm:48 CPX #4
    case 0xC26674: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/instant_win_check.asm:48 CPX #4
    // Overlapping static entry reached from 0xC26674.
    case 0xC26676: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC26677: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC26679: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:49 BGTL @UNKNOWN6
    case 0xC2667B: cpu.execute_instruction<0x4C>(0x00671B, 3); return true;
    // src/battle/instant_win_check.asm:50 TXA
    case 0xC2667E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:51 DEC
    case 0xC2667F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC26680: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/instant_win_check.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC26680.
    case 0xC26682: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:53 JSL MULT168
    case 0xC26683: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:54 TAX
    case 0xC26687: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:55 LDA PARTY_CHARACTERS+char_struct::speed,X
    case 0xC26688: cpu.execute_instruction<0xBD>(0x0099E5, 3); return true;
    // src/battle/instant_win_check.asm:56 AND #$00FF
    case 0xC2668B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC2668B.
    case 0xC2668D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/instant_win_check.asm:57 CMP @VIRTUAL04
    case 0xC2668E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:58 BCS @UNKNOWN4
    case 0xC26690: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:59 STA @VIRTUAL04
    case 0xC26692: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:61 LDX @LOCAL05
    case 0xC26694: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:62 TXA
    case 0xC26696: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:63 DEC
    case 0xC26697: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC26698: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/instant_win_check.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC26698.
    case 0xC2669A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:65 JSL MULT168
    case 0xC2669B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:66 TAX
    case 0xC2669F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:67 LDA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC266A0: cpu.execute_instruction<0xBD>(0x0099E3, 3); return true;
    // src/battle/instant_win_check.asm:68 AND #$00FF
    case 0xC266A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC266A3.
    case 0xC266A5: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/instant_win_check.asm:69 CMP @VIRTUAL02
    case 0xC266A6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:70 BCS @UNKNOWN5
    case 0xC266A8: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:71 STA @VIRTUAL02
    case 0xC266AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:72 STA @LOCAL07
    case 0xC266AC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:74 LDX @LOCAL05
    case 0xC266AE: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:75 TXA
    case 0xC266B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:76 DEC
    case 0xC266B1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC266B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/instant_win_check.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC266B2.
    case 0xC266B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:78 JSL MULT168
    case 0xC266B5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:79 STA @LOCAL04
    case 0xC266B9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:80 CLC
    case 0xC266BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:81 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC266BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/battle/instant_win_check.asm:81 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC266BC.
    case 0xC266BE: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/battle/instant_win_check.asm:82 TAX
    case 0xC266BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:83 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC266C0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:83 LDA a:STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC266BE.
    case 0xC266C1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/instant_win_check.asm:84 AND #$00FF
    case 0xC266C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC266C3.
    case 0xC266C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:85 STA @LOCAL03
    case 0xC266C6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:86 CMP #STATUS_0::UNCONSCIOUS
    case 0xC266C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:86 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC266C8.
    case 0xC266CA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:87 BEQ @UNKNOWN6
    case 0xC266CB: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/battle/instant_win_check.asm:88 LDA @LOCAL03
    case 0xC266CD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:89 CMP #STATUS_0::DIAMONDIZED
    case 0xC266CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/instant_win_check.asm:89 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC266CF.
    case 0xC266D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:90 BEQ @UNKNOWN6
    case 0xC266D2: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/battle/instant_win_check.asm:91 LDA @LOCAL03
    case 0xC266D4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:92 CMP #STATUS_0::PARALYZED
    case 0xC266D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/instant_win_check.asm:92 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC266D6.
    case 0xC266D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:93 BEQ @UNKNOWN6
    case 0xC266D9: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/instant_win_check.asm:94 LDA @LOCAL03
    case 0xC266DB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:95 CMP #STATUS_0::NAUSEOUS
    case 0xC266DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/instant_win_check.asm:95 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC266DD.
    case 0xC266DF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:96 BEQ @UNKNOWN6
    case 0xC266E0: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/battle/instant_win_check.asm:97 LDA @LOCAL03
    case 0xC266E2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:98 CMP #STATUS_0::POISONED
    case 0xC266E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/instant_win_check.asm:98 CMP #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC266E4.
    case 0xC266E6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:99 BEQ @UNKNOWN6
    case 0xC266E7: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/instant_win_check.asm:100 LDA @LOCAL03
    case 0xC266E9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:101 CMP #STATUS_0::SUNSTROKE
    case 0xC266EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/instant_win_check.asm:101 CMP #STATUS_0::SUNSTROKE
    // Overlapping static entry reached from 0xC266EB.
    case 0xC266ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:102 BEQ @UNKNOWN6
    case 0xC266EE: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/battle/instant_win_check.asm:103 LDA @LOCAL03
    case 0xC266F0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:104 CMP #STATUS_0::COLD
    case 0xC266F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/battle/instant_win_check.asm:104 CMP #STATUS_0::COLD
    // Overlapping static entry reached from 0xC266F2.
    case 0xC266F4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:105 BEQ @UNKNOWN6
    case 0xC266F5: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/instant_win_check.asm:106 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC266F7: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:107 AND #$00FF
    case 0xC266FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC266FA.
    case 0xC266FC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:108 TAX
    case 0xC266FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:109 CPX #STATUS_1::MUSHROOMIZED
    case 0xC266FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:109 CPX #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC266FE.
    case 0xC26700: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:110 BEQ @UNKNOWN6
    case 0xC26701: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:111 CPX #STATUS_1::POSSESSED
    case 0xC26703: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/instant_win_check.asm:111 CPX #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC26703.
    case 0xC26705: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:112 BEQ @UNKNOWN6
    case 0xC26706: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/instant_win_check.asm:113 LDA @LOCAL08
    case 0xC26708: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:114 ASL
    case 0xC2670A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:115 PHA
    case 0xC2670B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:116 LDA @LOCAL04
    case 0xC2670C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:117 TAX
    case 0xC2670E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:118 LDA PARTY_CHARACTERS+char_struct::offense,X
    case 0xC2670F: cpu.execute_instruction<0xBD>(0x0099E3, 3); return true;
    // src/battle/instant_win_check.asm:119 AND #$00FF
    case 0xC26712: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC26712.
    case 0xC26714: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/battle/instant_win_check.asm:120 PLX
    case 0xC26715: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:121 STA INSTANT_WIN_SORTED_OFFENSE,X
    case 0xC26716: cpu.execute_instruction<0x9D>(0x00AA76, 3); return true;
    // src/battle/instant_win_check.asm:122 INC @LOCAL08
    case 0xC26719: cpu.execute_instruction<0xE6>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:124 LDY @LOCAL06
    case 0xC2671B: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:125 INY
    case 0xC2671D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:126 STY @LOCAL06
    case 0xC2671E: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:128 CPY #6
    case 0xC26720: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/instant_win_check.asm:128 CPY #6
    // Overlapping static entry reached from 0xC26720.
    case 0xC26722: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26723: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26725: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:129 BCCL @UNKNOWN1
    case 0xC26727: cpu.execute_instruction<0x4C>(0x006661, 3); return true;
    // src/battle/instant_win_check.asm:130 LDA ENEMIES_IN_BATTLE
    case 0xC2672A: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:131 CMP @LOCAL08
    case 0xC2672D: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:132 BLTEQ @UNKNOWN9
    case 0xC2672F: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:132 BLTEQ @UNKNOWN9
    case 0xC26731: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:133 LDA #0
    case 0xC26733: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:133 LDA #0
    // Overlapping static entry reached from 0xC26733.
    case 0xC26735: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:134 JMP @UNKNOWN37
    case 0xC26736: cpu.execute_instruction<0x4C>(0x006989, 3); return true;
    // src/battle/instant_win_check.asm:136 LDA BATTLE_INITIATIVE
    case 0xC26739: cpu.execute_instruction<0xAD>(0x004DBC, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/instant_win_check.asm:137 BNEL @UNKNOWN18
    case 0xC2673C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/instant_win_check.asm:137 BNEL @UNKNOWN18
    case 0xC2673E: cpu.execute_instruction<0x4C>(0x0067EC, 3); return true;
    // src/battle/instant_win_check.asm:138 LDA #0
    case 0xC26741: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:138 LDA #0
    // Overlapping static entry reached from 0xC26741.
    case 0xC26743: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:139 STA @LOCAL05
    case 0xC26744: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:140 BRA @UNKNOWN13
    case 0xC26746: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/battle/instant_win_check.asm:142 ASL
    case 0xC26748: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:143 TAX
    case 0xC26749: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:144 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2674A: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/instant_win_check.asm:145 LDY #.SIZEOF(enemy_data)
    case 0xC2674D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:145 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2674D.
    case 0xC2674F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:146 JSL MULT168
    case 0xC26750: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:147 CLC
    case 0xC26754: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:148 ADC #enemy_data::speed
    case 0xC26755: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/battle/instant_win_check.asm:148 ADC #enemy_data::speed
    // Overlapping static entry reached from 0xC26755.
    case 0xC26757: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:149 TAX
    case 0xC26758: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:150 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26759: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/instant_win_check.asm:151 AND #$00FF
    case 0xC2675D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_check.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC2675D.
    case 0xC2675F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_check.asm:152 TAX
    case 0xC26760: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:153 CPX @LOCAL09
    case 0xC26761: cpu.execute_instruction<0xE4>(0x000022, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:154 BLTEQ @UNKNOWN12
    case 0xC26763: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:154 BLTEQ @UNKNOWN12
    case 0xC26765: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:155 STX @LOCAL09
    case 0xC26767: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:157 LDA @LOCAL05
    case 0xC26769: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:158 INC
    case 0xC2676B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:159 STA @LOCAL05
    case 0xC2676C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:161 CMP ENEMIES_IN_BATTLE
    case 0xC2676E: cpu.execute_instruction<0xCD>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:162 BCC @UNKNOWN11
    case 0xC26771: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/battle/instant_win_check.asm:163 LDA @VIRTUAL04
    case 0xC26773: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:164 CMP @LOCAL09
    case 0xC26775: cpu.execute_instruction<0xC5>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:165 BCS @UNKNOWN14
    case 0xC26777: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:166 LDA #0
    case 0xC26779: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:166 LDA #0
    // Overlapping static entry reached from 0xC26779.
    case 0xC2677B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:167 JMP @UNKNOWN37
    case 0xC2677C: cpu.execute_instruction<0x4C>(0x006989, 3); return true;
    // src/battle/instant_win_check.asm:169 LDA #0
    case 0xC2677F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:169 LDA #0
    // Overlapping static entry reached from 0xC2677F.
    case 0xC26781: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:170 STA @LOCAL03
    case 0xC26782: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:171 BRA @UNKNOWN17
    case 0xC26784: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26786: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26786.
    case 0xC26788: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26789: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26788.
    case 0xC2678A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2678B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2678A.
    case 0xC2678C: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2678B.
    case 0xC2678D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_check.asm:173 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2678E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26790: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26792: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26794: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_check.asm:174 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC26796: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/instant_win_check.asm:175 LDA @LOCAL03
    case 0xC26798: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:176 ASL
    case 0xC2679A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:177 TAX
    case 0xC2679B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:178 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2679C: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/battle/instant_win_check.asm:179 LDY #.SIZEOF(enemy_data)
    case 0xC2679F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:179 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2679F.
    case 0xC267A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:180 JSL MULT168
    case 0xC267A2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:181 TAX
    case 0xC267A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:182 CLC
    case 0xC267A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:183 ADC #enemy_data::defense
    case 0xC267A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/battle/instant_win_check.asm:183 ADC #enemy_data::defense
    // Overlapping static entry reached from 0xC267A8.
    case 0xC267AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:184 CLC
    case 0xC267AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:185 ADC @VIRTUAL06
    case 0xC267AC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:186 STA @VIRTUAL06
    case 0xC267AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:187 LDA [@VIRTUAL06]
    case 0xC267B0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:188 STA @VIRTUAL02
    case 0xC267B2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:189 TXA
    case 0xC267B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:190 CLC
    case 0xC267B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:191 ADC #enemy_data::hp
    case 0xC267B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/battle/instant_win_check.asm:191 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC267B6.
    case 0xC267B8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267B9: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267BB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267BD: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_check.asm:192 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC267BF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/instant_win_check.asm:193 CLC
    case 0xC267C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:194 ADC @VIRTUAL06
    case 0xC267C2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:195 STA @VIRTUAL06
    case 0xC267C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:196 LDA [@VIRTUAL06]
    case 0xC267C6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:197 CLC
    case 0xC267C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:198 ADC @VIRTUAL02
    case 0xC267C9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:199 STA @VIRTUAL04
    case 0xC267CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:200 LDA @LOCAL07
    case 0xC267CD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:201 STA @VIRTUAL02
    case 0xC267CF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:202 ASL
    case 0xC267D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:203 CMP @VIRTUAL04
    case 0xC267D2: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:204 BCS @UNKNOWN16
    case 0xC267D4: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:205 LDA #0
    case 0xC267D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:205 LDA #0
    // Overlapping static entry reached from 0xC267D6.
    case 0xC267D8: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:206 JMP @UNKNOWN37
    case 0xC267D9: cpu.execute_instruction<0x4C>(0x006989, 3); return true;
    // src/battle/instant_win_check.asm:208 LDA @LOCAL03
    case 0xC267DC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:209 INC
    case 0xC267DE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:210 STA @LOCAL03
    case 0xC267DF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:212 CMP ENEMIES_IN_BATTLE
    case 0xC267E1: cpu.execute_instruction<0xCD>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:213 BCC @UNKNOWN15
    case 0xC267E4: cpu.execute_instruction<0x90>(0x0000A0, 2); return true;
    // src/battle/instant_win_check.asm:214 LDA #1
    case 0xC267E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:214 LDA #1
    // Overlapping static entry reached from 0xC267E6.
    case 0xC267E8: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/instant_win_check.asm:215 JMP @UNKNOWN37
    case 0xC267E9: cpu.execute_instruction<0x4C>(0x006989, 3); return true;
    // src/battle/instant_win_check.asm:217 LDA #0
    case 0xC267EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:217 LDA #0
    // Overlapping static entry reached from 0xC267EC.
    case 0xC267EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:218 STA @LOCAL03
    case 0xC267EF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:219 BRA @UNKNOWN20
    case 0xC267F1: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/battle/instant_win_check.asm:221 ASL
    case 0xC267F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:222 TAY
    case 0xC267F4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:223 STY @LOCAL05
    case 0xC267F5: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267F7.
    case 0xC267F9: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267F9.
    case 0xC267FB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267FB.
    case 0xC267FD: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC267FC.
    case 0xC267FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_check.asm:224 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC267FF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_check.asm:225 TYA
    case 0xC26801: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:226 CLC
    case 0xC26802: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:227 ADC #.LOWORD(ENEMIES_IN_BATTLE_IDS)
    case 0xC26803: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009F8C, 3); return true;
    // src/battle/instant_win_check.asm:227 ADC #.LOWORD(ENEMIES_IN_BATTLE_IDS)
    // Overlapping static entry reached from 0xC26803.
    case 0xC26805: cpu.execute_instruction<0x9F>(0x00BDAA, 4); return true;
    // src/battle/instant_win_check.asm:228 TAX
    case 0xC26806: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:229 LDA __BSS_START__,X
    case 0xC26807: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:229 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC26805.
    case 0xC26809: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/instant_win_check.asm:230 LDY #.SIZEOF(enemy_data)
    case 0xC2680A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:230 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2680A.
    case 0xC2680C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:231 JSL MULT168
    case 0xC2680D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:232 CLC
    case 0xC26811: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:233 ADC #enemy_data::hp
    case 0xC26812: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/battle/instant_win_check.asm:233 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC26812.
    case 0xC26814: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26815: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26817: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC26819: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/instant_win_check.asm:234 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2681B: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/instant_win_check.asm:235 CLC
    case 0xC2681D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:236 ADC @VIRTUAL0A
    case 0xC2681E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/instant_win_check.asm:237 STA @VIRTUAL0A
    case 0xC26820: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/instant_win_check.asm:238 LDA [@VIRTUAL0A]
    case 0xC26822: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/instant_win_check.asm:239 LDY @LOCAL05
    case 0xC26824: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:240 STA INSTANT_WIN_SORTED_HP,Y
    case 0xC26826: cpu.execute_instruction<0x99>(0x00AA7E, 3); return true;
    // src/battle/instant_win_check.asm:241 LDA __BSS_START__,X
    case 0xC26829: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:242 LDY #.SIZEOF(enemy_data)
    case 0xC2682C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/instant_win_check.asm:242 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2682C.
    case 0xC2682E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:243 JSL MULT168
    case 0xC2682F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/instant_win_check.asm:244 CLC
    case 0xC26833: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:245 ADC #enemy_data::defense
    case 0xC26834: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/battle/instant_win_check.asm:245 ADC #enemy_data::defense
    // Overlapping static entry reached from 0xC26834.
    case 0xC26836: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:246 CLC
    case 0xC26837: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:247 ADC @VIRTUAL06
    case 0xC26838: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:248 STA @VIRTUAL06
    case 0xC2683A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:249 LDA [@VIRTUAL06]
    case 0xC2683C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_check.asm:250 LDY @LOCAL05
    case 0xC2683E: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:251 STA INSTANT_WIN_SORTED_DEFENSE,Y
    case 0xC26840: cpu.execute_instruction<0x99>(0x00AA86, 3); return true;
    // src/battle/instant_win_check.asm:252 LDA @LOCAL03
    case 0xC26843: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:253 INC
    case 0xC26845: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:254 STA @LOCAL03
    case 0xC26846: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:256 CMP ENEMIES_IN_BATTLE
    case 0xC26848: cpu.execute_instruction<0xCD>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:257 BCC @UNKNOWN19
    case 0xC2684B: cpu.execute_instruction<0x90>(0x0000A6, 2); return true;
    // src/battle/instant_win_check.asm:259 LDY #1
    case 0xC2684D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:259 LDY #1
    // Overlapping static entry reached from 0xC2684D.
    case 0xC2684F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/instant_win_check.asm:260 LDX #0
    case 0xC26850: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:260 LDX #0
    // Overlapping static entry reached from 0xC26850.
    case 0xC26852: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_check.asm:261 STX @LOCAL09
    case 0xC26853: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:262 BRA @UNKNOWN26
    case 0xC26855: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/battle/instant_win_check.asm:264 TXA
    case 0xC26857: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:265 INC
    case 0xC26858: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:266 STA @LOCAL06
    case 0xC26859: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:267 BRA @UNKNOWN25
    case 0xC2685B: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/battle/instant_win_check.asm:269 LDX @LOCAL09
    case 0xC2685D: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:270 TXA
    case 0xC2685F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:271 ASL
    case 0xC26860: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:272 CLC
    case 0xC26861: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:273 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    case 0xC26862: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x00AA76, 3); return true;
    // src/battle/instant_win_check.asm:273 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    // Overlapping static entry reached from 0xC26862.
    case 0xC26864: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:274 STA @LOCAL07
    case 0xC26865: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:275 LDA (@LOCAL07)
    case 0xC26867: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:276 STA @LOCAL01
    case 0xC26869: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/instant_win_check.asm:277 LDA @LOCAL06
    case 0xC2686B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:278 ASL
    case 0xC2686D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:279 CLC
    case 0xC2686E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:280 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    case 0xC2686F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x00AA76, 3); return true;
    // src/battle/instant_win_check.asm:280 ADC #.LOWORD(INSTANT_WIN_SORTED_OFFENSE)
    // Overlapping static entry reached from 0xC2686F.
    case 0xC26871: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:281 STA @VIRTUAL04
    case 0xC26872: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:282 LDX @VIRTUAL04
    case 0xC26874: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:283 LDA __BSS_START__,X
    case 0xC26876: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:284 STA @VIRTUAL02
    case 0xC26879: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:285 CMP @LOCAL01
    case 0xC2687B: cpu.execute_instruction<0xC5>(0x000010, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:286 BLTEQ @UNKNOWN24
    case 0xC2687D: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:286 BLTEQ @UNKNOWN24
    case 0xC2687F: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/instant_win_check.asm:287 LDY #0
    case 0xC26881: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:287 LDY #0
    // Overlapping static entry reached from 0xC26881.
    case 0xC26883: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/instant_win_check.asm:288 LDA @VIRTUAL02
    case 0xC26884: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:289 STA (@LOCAL07)
    case 0xC26886: cpu.execute_instruction<0x92>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:290 LDA @LOCAL01
    case 0xC26888: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/instant_win_check.asm:291 LDX @VIRTUAL04
    case 0xC2688A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:292 STA __BSS_START__,X
    case 0xC2688C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:294 LDA @LOCAL06
    case 0xC2688F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:295 INC
    case 0xC26891: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:296 STA @LOCAL06
    case 0xC26892: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:298 CMP @LOCAL08
    case 0xC26894: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:299 BCC @UNKNOWN23
    case 0xC26896: cpu.execute_instruction<0x90>(0x0000C5, 2); return true;
    // src/battle/instant_win_check.asm:300 LDX @LOCAL09
    case 0xC26898: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:301 INX
    case 0xC2689A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:302 STX @LOCAL09
    case 0xC2689B: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:304 LDA @LOCAL08
    case 0xC2689D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:305 DEC
    case 0xC2689F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:306 STA @VIRTUAL02
    case 0xC268A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:307 TXA
    case 0xC268A2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:308 CMP @VIRTUAL02
    case 0xC268A3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:309 BCC @UNKNOWN22
    case 0xC268A5: cpu.execute_instruction<0x90>(0x0000B0, 2); return true;
    // src/battle/instant_win_check.asm:310 CPY #0
    case 0xC268A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:310 CPY #0
    // Overlapping static entry reached from 0xC268A7.
    case 0xC268A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_check.asm:311 BEQ @UNKNOWN21
    case 0xC268AA: cpu.execute_instruction<0xF0>(0x0000A1, 2); return true;
    // src/battle/instant_win_check.asm:313 LDA #1
    case 0xC268AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:313 LDA #1
    // Overlapping static entry reached from 0xC268AC.
    case 0xC268AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:314 STA @LOCAL07
    case 0xC268AF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:315 LDA #0
    case 0xC268B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:315 LDA #0
    // Overlapping static entry reached from 0xC268B1.
    case 0xC268B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_check.asm:316 STA @VIRTUAL02
    case 0xC268B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:317 BRA @UNKNOWN32
    case 0xC268B6: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/battle/instant_win_check.asm:319 LDY @VIRTUAL02
    case 0xC268B8: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:320 INY
    case 0xC268BA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:321 BRA @UNKNOWN31
    case 0xC268BB: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/battle/instant_win_check.asm:323 LDA @VIRTUAL02
    case 0xC268BD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:324 ASL
    case 0xC268BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:325 TAX
    case 0xC268C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:326 CLC
    case 0xC268C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:327 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC268C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00AA7E, 3); return true;
    // src/battle/instant_win_check.asm:327 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC268C2.
    case 0xC268C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:328 STA @LOCAL05
    case 0xC268C5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:329 LDA (@LOCAL05)
    case 0xC268C7: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:330 STA @LOCAL00
    case 0xC268C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/instant_win_check.asm:331 TYA
    case 0xC268CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:332 ASL
    case 0xC268CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:333 STA @LOCAL09
    case 0xC268CD: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:334 CLC
    case 0xC268CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:335 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC268D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00AA7E, 3); return true;
    // src/battle/instant_win_check.asm:335 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC268D0.
    case 0xC268D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:336 STA @LOCAL03
    case 0xC268D3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:337 LDA (@LOCAL03)
    case 0xC268D5: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:338 STA @VIRTUAL04
    case 0xC268D7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:339 CMP @LOCAL00
    case 0xC268D9: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/instant_win_check.asm:340 BLTEQ @UNKNOWN30
    case 0xC268DB: cpu.execute_instruction<0x90>(0x000028, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/instant_win_check.asm:340 BLTEQ @UNKNOWN30
    case 0xC268DD: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/instant_win_check.asm:341 STZ @LOCAL07
    case 0xC268DF: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:342 LDA @VIRTUAL04
    case 0xC268E1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:343 STA (@LOCAL05)
    case 0xC268E3: cpu.execute_instruction<0x92>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:344 LDA @LOCAL00
    case 0xC268E5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/instant_win_check.asm:345 STA (@LOCAL03)
    case 0xC268E7: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:346 TXA
    case 0xC268E9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:347 CLC
    case 0xC268EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:348 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC268EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000086, 2); else cpu.execute_instruction<0x69>(0x00AA86, 3); return true;
    // src/battle/instant_win_check.asm:348 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC268EB.
    case 0xC268ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:349 STA @LOCAL05
    case 0xC268EE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:350 LDA (@LOCAL05)
    case 0xC268F0: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:351 STA @VIRTUAL04
    case 0xC268F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:352 LDA @LOCAL09
    case 0xC268F4: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:353 CLC
    case 0xC268F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:354 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC268F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000086, 2); else cpu.execute_instruction<0x69>(0x00AA86, 3); return true;
    // src/battle/instant_win_check.asm:354 ADC #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC268F7.
    case 0xC268F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:355 TAX
    case 0xC268FA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:356 LDA __BSS_START__,X
    case 0xC268FB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:357 STA (@LOCAL05)
    case 0xC268FE: cpu.execute_instruction<0x92>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:358 LDA @VIRTUAL04
    case 0xC26900: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:359 STA __BSS_START__,X
    case 0xC26902: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:361 INY
    case 0xC26905: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:363 CPY ENEMIES_IN_BATTLE
    case 0xC26906: cpu.execute_instruction<0xCC>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:364 BCC @UNKNOWN29
    case 0xC26909: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // src/battle/instant_win_check.asm:365 INC @VIRTUAL02
    case 0xC2690B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:367 LDA ENEMIES_IN_BATTLE
    case 0xC2690D: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:368 DEC
    case 0xC26910: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:369 STA @VIRTUAL04
    case 0xC26911: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:370 LDA @VIRTUAL02
    case 0xC26913: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:371 CMP @VIRTUAL04
    case 0xC26915: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:372 BCC @UNKNOWN28
    case 0xC26917: cpu.execute_instruction<0x90>(0x00009F, 2); return true;
    // src/battle/instant_win_check.asm:373 LDA @LOCAL07
    case 0xC26919: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/instant_win_check.asm:374 BEQ @UNKNOWN27
    case 0xC2691B: cpu.execute_instruction<0xF0>(0x00008F, 2); return true;
    // src/battle/instant_win_check.asm:375 LDX #0
    case 0xC2691D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:375 LDX #0
    // Overlapping static entry reached from 0xC2691D.
    case 0xC2691F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_check.asm:376 STX @LOCAL09
    case 0xC26920: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:377 TXA
    case 0xC26922: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:378 STA @LOCAL06
    case 0xC26923: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:379 BRA @UNKNOWN36
    case 0xC26925: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/battle/instant_win_check.asm:381 ASL
    case 0xC26927: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:382 TAX
    case 0xC26928: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:383 LDA INSTANT_WIN_SORTED_OFFENSE,X
    case 0xC26929: cpu.execute_instruction<0xBD>(0x00AA76, 3); return true;
    // src/battle/instant_win_check.asm:384 ASL
    case 0xC2692C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:385 STA @VIRTUAL04
    case 0xC2692D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:386 LDX @LOCAL09
    case 0xC2692F: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:387 TXA
    case 0xC26931: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:388 ASL
    case 0xC26932: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:389 STA @LOCAL05
    case 0xC26933: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:390 CLC
    case 0xC26935: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:391 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    case 0xC26936: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00AA7E, 3); return true;
    // src/battle/instant_win_check.asm:391 ADC #.LOWORD(INSTANT_WIN_SORTED_HP)
    // Overlapping static entry reached from 0xC26936.
    case 0xC26938: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:392 STA @VIRTUAL02
    case 0xC26939: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:393 STA @LOCAL03
    case 0xC2693B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:394 LDX @VIRTUAL02
    case 0xC2693D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:395 LDA __BSS_START__,X
    case 0xC2693F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:396 TAY
    case 0xC26942: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:397 STY @LOCAL04
    case 0xC26943: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:398 LDY #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    case 0xC26945: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000086, 2); else cpu.execute_instruction<0xA0>(0x00AA86, 3); return true;
    // src/battle/instant_win_check.asm:398 LDY #.LOWORD(INSTANT_WIN_SORTED_DEFENSE)
    // Overlapping static entry reached from 0xC26945.
    case 0xC26947: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:399 LDA (@LOCAL05),Y
    case 0xC26948: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:400 STA @LOCAL05
    case 0xC2694A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:401 LDY @LOCAL04
    case 0xC2694C: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/instant_win_check.asm:402 TYA
    case 0xC2694E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:403 CLC
    case 0xC2694F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:404 ADC @LOCAL05
    case 0xC26950: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:405 STA @VIRTUAL02
    case 0xC26952: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:406 LDA @VIRTUAL04
    case 0xC26954: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:407 CMP @VIRTUAL02
    case 0xC26956: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:408 BCS @UNKNOWN34
    case 0xC26958: cpu.execute_instruction<0xB0>(0x000014, 2); return true;
    // src/battle/instant_win_check.asm:409 LDA @VIRTUAL04
    case 0xC2695A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/instant_win_check.asm:410 SEC
    case 0xC2695C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:411 SBC @LOCAL05
    case 0xC2695D: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // src/battle/instant_win_check.asm:412 STA @VIRTUAL02
    case 0xC2695F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:413 TYA
    case 0xC26961: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:414 SEC
    case 0xC26962: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:415 SBC @VIRTUAL02
    case 0xC26963: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:416 LDX @LOCAL03
    case 0xC26965: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/instant_win_check.asm:417 STX @VIRTUAL02
    case 0xC26967: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/instant_win_check.asm:418 STA __BSS_START__,X
    case 0xC26969: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:419 BRA @UNKNOWN35
    case 0xC2696C: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/instant_win_check.asm:421 LDX @LOCAL09
    case 0xC2696E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:422 INX
    case 0xC26970: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:423 STX @LOCAL09
    case 0xC26971: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/instant_win_check.asm:424 CPX ENEMIES_IN_BATTLE
    case 0xC26973: cpu.execute_instruction<0xEC>(0x009F8A, 3); return true;
    // src/battle/instant_win_check.asm:425 BCC @UNKNOWN35
    case 0xC26976: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/battle/instant_win_check.asm:426 LDA #1
    case 0xC26978: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/instant_win_check.asm:426 LDA #1
    // Overlapping static entry reached from 0xC26978.
    case 0xC2697A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/instant_win_check.asm:427 BRA @UNKNOWN37
    case 0xC2697B: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/instant_win_check.asm:429 LDA @LOCAL06
    case 0xC2697D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:430 INC
    case 0xC2697F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_check.asm:431 STA @LOCAL06
    case 0xC26980: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/instant_win_check.asm:433 CMP @LOCAL08
    case 0xC26982: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/battle/instant_win_check.asm:434 BCC @UNKNOWN33
    case 0xC26984: cpu.execute_instruction<0x90>(0x0000A1, 2); return true;
    // src/battle/instant_win_check.asm:435 LDA #0
    case 0xC26986: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_check.asm:435 LDA #0
    // Overlapping static entry reached from 0xC26986.
    case 0xC26988: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_check.asm:437 END_C_FUNCTION
    case 0xC26989: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_check.asm:437 END_C_FUNCTION
    case 0xC2698A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
