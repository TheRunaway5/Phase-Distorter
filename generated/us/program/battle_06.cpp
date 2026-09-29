// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/battle/psi_shield_nullify.asm (source_named).
bool execute_battle_psi_shield_nullify_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/psi_shield_nullify.asm:3 BEGIN_C_FUNCTION
    case 0xC2941D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC2941F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC29420: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC29421: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC29421.
    case 0xC29423: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC29424: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    case 0xC29425: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    // Overlapping static entry reached from 0xC29425.
    case 0xC29427: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/psi_shield_nullify.asm:9 STA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC29428: cpu.execute_instruction<0x8D>(0x00AA94, 3); return true;
    // src/battle/psi_shield_nullify.asm:10 LDX CURRENT_ATTACKER
    case 0xC2942B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/psi_shield_nullify.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC2942E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:12 LDA a:battler::current_action_argument,X
    case 0xC29430: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/psi_shield_nullify.asm:13 JSL REDIRECT_C1ACF8
    case 0xC29433: cpu.execute_instruction<0x22>(0xC1DD7C, 4); return true;
    // src/battle/psi_shield_nullify.asm:15 LDX CURRENT_ATTACKER
    case 0xC29437: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/psi_shield_nullify.asm:16 LDA a:battler::current_action,X
    case 0xC2943A: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC2943D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC2943F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC29440: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC29442: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC29443: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:18 TAX
    case 0xC29444: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:19 INX
    case 0xC29445: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:20 INX
    case 0xC29446: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:21 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC29447: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    case 0xC2944B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2944B.
    case 0xC2944D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    case 0xC2944E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC2944E.
    case 0xC29450: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/psi_shield_nullify.asm:24 BEQ @UNKNOWN2
    case 0xC29451: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    case 0xC29453: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    // Overlapping static entry reached from 0xC29453.
    case 0xC29455: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/psi_shield_nullify.asm:26 BRA @RETURN
    case 0xC29456: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/battle/psi_shield_nullify.asm:28 LDX CURRENT_TARGET
    case 0xC29458: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/psi_shield_nullify.asm:29 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2945B: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    case 0xC2945E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2945E.
    case 0xC29460: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    case 0xC29461: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC29461.
    case 0xC29463: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/psi_shield_nullify.asm:32 BEQ @REFLECT_PSI
    case 0xC29464: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    case 0xC29466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC29466.
    case 0xC29468: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/psi_shield_nullify.asm:34 BEQ @ABSORB_PSI
    case 0xC29469: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/psi_shield_nullify.asm:35 BRA @UNKNOWN6
    case 0xC2946B: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC2946D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D2, 2); else cpu.execute_instruction<0xA9>(0x0070D2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC2946D.
    case 0xC2946F: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29470: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC2946F.
    case 0xC29471: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29472: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC29472.
    case 0xC29474: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29475: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29477: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    case 0xC2947B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    // Overlapping static entry reached from 0xC2947B.
    case 0xC2947D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/psi_shield_nullify.asm:40 STA DAMAGE_IS_REFLECTED
    case 0xC2947E: cpu.execute_instruction<0x8D>(0x00AA96, 3); return true;
    // src/battle/psi_shield_nullify.asm:41 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC29481: cpu.execute_instruction<0x20>(0x007E8A, 3); return true;
    // src/battle/psi_shield_nullify.asm:42 BRA @UNKNOWN6
    case 0xC29484: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0070FA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29486.
    case 0xC29488: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29489: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29488.
    case 0xC2948A: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC2948B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29505.
    case 0xC2948C: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC2948B.
    case 0xC2948D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC2948E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29490: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/psi_shield_nullify.asm:45 LDA CURRENT_TARGET
    case 0xC29494: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/psi_shield_nullify.asm:46 CLC
    case 0xC29497: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    case 0xC29498: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29498.
    case 0xC2949A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/psi_shield_nullify.asm:48 TAX
    case 0xC2949B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2949C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:50 LDA __BSS_START__,X
    case 0xC2949E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:51 DEC
    case 0xC294A1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:52 STA __BSS_START__,X
    case 0xC294A2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC294A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    case 0xC294A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC294A7.
    case 0xC294A9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/psi_shield_nullify.asm:55 BNE @UNKNOWN5
    case 0xC294AA: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/psi_shield_nullify.asm:56 LDX CURRENT_TARGET
    case 0xC294AC: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/psi_shield_nullify.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC294AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:58 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC294B1: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/psi_shield_nullify.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC294B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000099, 2); else cpu.execute_instruction<0xA9>(0x007099, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294B6.
    case 0xC294B8: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294B8.
    case 0xC294BA: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294BB.
    case 0xC294BD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294C0: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    case 0xC294C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    // Overlapping static entry reached from 0xC294C4.
    case 0xC294C6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/psi_shield_nullify.asm:63 BRA @RETURN
    case 0xC294C7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    case 0xC294C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    // Overlapping static entry reached from 0xC294C9.
    case 0xC294CB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC294CC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC294CD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/random_targetting.asm (source_named).
bool execute_battle_random_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/random_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26EF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26EFA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26EFB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC26EFC.
    case 0xC26EFE: cpu.execute_instruction<0xFF>(0x24A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26EFF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26F00: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26F02: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26F04: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26F06: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26F08: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26F0A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26F0C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26F0E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26F10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F10.
    case 0xC26F12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26F13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26F15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F15.
    case 0xC26F17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26F18: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26F1A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26F1C: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26F1E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26F20: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26F22: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/battle/random_targetting.asm:15 BNE @UNKNOWN1
    case 0xC26F24: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F26: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F28: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F2C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/random_targetting.asm:17 JMP @UNKNOWN6
    case 0xC26F2E: cpu.execute_instruction<0x4C>(0x006FDA, 3); return true;
    // src/battle/random_targetting.asm:19 LDY #0
    case 0xC26F31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/random_targetting.asm:19 LDY #0
    // Overlapping static entry reached from 0xC26F31.
    case 0xC26F33: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/random_targetting.asm:20 STY @LOCAL01
    case 0xC26F34: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:21 JSR RAND_LONG
    case 0xC26F36: cpu.execute_instruction<0x20>(0x0069EF, 3); return true;
    // src/battle/random_targetting.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC26F39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/random_targetting.asm:23 AND #$00FF
    case 0xC26F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/random_targetting.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC26F3B.
    case 0xC26F3D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/random_targetting.asm:24 AND #$001F
    case 0xC26F3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/random_targetting.asm:24 AND #$001F
    // Overlapping static entry reached from 0xC26F3E.
    case 0xC26F40: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/random_targetting.asm:25 INC
    case 0xC26F41: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:26 STA @LOCAL00
    case 0xC26F42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/random_targetting.asm:27 BRA @UNKNOWN5
    case 0xC26F44: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/battle/random_targetting.asm:29 LDY @LOCAL01
    case 0xC26F46: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:30 INY
    case 0xC26F48: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:31 STY @LOCAL01
    case 0xC26F49: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:32 CPY #32
    case 0xC26F4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/random_targetting.asm:32 CPY #32
    // Overlapping static entry reached from 0xC26F4B.
    case 0xC26F4D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/random_targetting.asm:33 BNE @UNKNOWN3
    case 0xC26F4E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/random_targetting.asm:34 LDY #0
    case 0xC26F50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/random_targetting.asm:34 LDY #0
    // Overlapping static entry reached from 0xC26F50.
    case 0xC26F52: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/random_targetting.asm:35 STY @LOCAL01
    case 0xC26F53: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26F55: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26F57: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26F59: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26F5B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/random_targetting.asm:38 PHA
    case 0xC26F5D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:39 LDA @VIRTUAL0A
    case 0xC26F5E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/random_targetting.asm:40 PHA
    case 0xC26F60: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F61.
    case 0xC26F63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F64: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F63.
    case 0xC26F65: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F65.
    case 0xC26F67: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F66.
    case 0xC26F68: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F69: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/random_targetting.asm:42 TYA
    case 0xC26F6B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:43 ASL
    case 0xC26F6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:44 ASL
    case 0xC26F6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:45 CLC
    case 0xC26F6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:46 ADC @VIRTUAL06
    case 0xC26F6F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/random_targetting.asm:47 STA @VIRTUAL06
    case 0xC26F71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26F73.
    case 0xC26F75: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F76: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F78: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F79: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F7B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F7D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26F7F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26F80: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26F82: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26F83: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F85: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F87: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F8D: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F8F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26F91.
    case 0xC26F93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26F94: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26F96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26F96.
    case 0xC26F98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26F99: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26F9B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26F9D: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26F9F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA3: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/random_targetting.asm:53 BEQ @UNKNOWN2
    case 0xC26FA5: cpu.execute_instruction<0xF0>(0x00009F, 2); return true;
    // src/battle/random_targetting.asm:55 LDA @LOCAL00
    case 0xC26FA7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/random_targetting.asm:56 TAX
    case 0xC26FA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:57 DEC
    case 0xC26FAA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:58 STA @LOCAL00
    case 0xC26FAB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/random_targetting.asm:59 CPX #0
    case 0xC26FAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/random_targetting.asm:59 CPX #0
    // Overlapping static entry reached from 0xC26FAD.
    case 0xC26FAF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/random_targetting.asm:60 BNE @UNKNOWN2
    case 0xC26FB0: cpu.execute_instruction<0xD0>(0x000094, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26FB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FB2.
    case 0xC26FB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26FB5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FB4.
    case 0xC26FB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26FB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FB7.
    case 0xC26FB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26FBA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/random_targetting.asm:62 LDY @LOCAL01
    case 0xC26FBC: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:63 TYA
    case 0xC26FBE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:64 ASL
    case 0xC26FBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:65 ASL
    case 0xC26FC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:66 CLC
    case 0xC26FC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:67 ADC @VIRTUAL0A
    case 0xC26FC2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/random_targetting.asm:68 STA @VIRTUAL0A
    case 0xC26FC4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26FC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FC6.
    case 0xC26FC8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26FC9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26FCB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26FCC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26FCE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26FD0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26FD2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26FD4: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26FD6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26FD8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/random_targetting.asm:72 END_C_FUNCTION
    case 0xC26FDA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/random_targetting.asm:72 END_C_FUNCTION
    case 0xC26FDB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/recalc_character_miss_rate.asm (source_named).
bool execute_battle_recalc_character_miss_rate_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recalc_character_miss_rate.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21D95: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D97: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D98: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D99: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC21D9A.
    case 0xC21D9C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D9D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21D9E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:9 TAY
    case 0xC21D9F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:10 DEY
    case 0xC21DA0: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:11 STY @LOCAL01
    case 0xC21DA1: cpu.execute_instruction<0x84>(0x00000F, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:12 TYA
    case 0xC21DA3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC21DA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21DA4.
    case 0xC21DA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:14 JSL MULT168
    case 0xC21DA7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:15 TAX
    case 0xC21DAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:16 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21DAC: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    case 0xC21DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC21DAF.
    case 0xC21DB1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:18 BEQ @UNKNOWN0
    case 0xC21DB2: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:19 DEC
    case 0xC21DB4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:20 STA @VIRTUAL02
    case 0xC21DB5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:21 TXA
    case 0xC21DB7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:22 CLC
    case 0xC21DB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21DB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21DB9.
    case 0xC21DBB: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:24 CLC
    case 0xC21DBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    case 0xC21DBD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21DBB.
    case 0xC21DBE: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:26 TAX
    case 0xC21DBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:27 LDA __BSS_START__,X
    case 0xC21DC0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    case 0xC21DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC21DC3.
    case 0xC21DC5: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21DC6.
    case 0xC21DC8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DC9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:30 CLC
    case 0xC21DCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    case 0xC21DCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21DCE.
    case 0xC21DD0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:32 TAX
    case 0xC21DD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DD2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:34 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21DD4: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC21DD8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:36 SEC
    case 0xC21DDA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    case 0xC21DDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC21DDB.
    case 0xC21DDD: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    case 0xC21DDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    // Overlapping static entry reached from 0xC21DDE.
    case 0xC21DE0: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    case 0xC21DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    // Overlapping static entry reached from 0xC21DE1.
    case 0xC21DE3: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:40 BRA @UNKNOWN1
    case 0xC21DE4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    case 0xC21DE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21DE3.
    case 0xC21DE7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21DE6.
    case 0xC21DE8: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:45 STA @LOCAL00
    case 0xC21DEB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:46 LDY @LOCAL01
    case 0xC21DED: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC21DEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:48 TYA
    case 0xC21DF1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC21DF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21DF2.
    case 0xC21DF4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:50 JSL MULT168
    case 0xC21DF5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:51 TAX
    case 0xC21DF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:53 LDA @LOCAL00
    case 0xC21DFC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:54 STA PARTY_CHARACTERS+char_struct::miss_rate,X
    case 0xC21DFE: cpu.execute_instruction<0x9D>(0x009A1F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21E01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21E02: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/recover_hp.asm (source_named).
bool execute_battle_recover_hp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC27294: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27296: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27297: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27298: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC27299.
    case 0xC2729B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC2729C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC2729D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:11 STX @LOCAL02
    case 0xC2729E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:11 STX @LOCAL02
    // Overlapping static entry reached from 0xC2729B.
    case 0xC2729F: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/battle/recover_hp.asm:12 STA @VIRTUAL02
    case 0xC272A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2729F.
    case 0xC272A1: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/recover_hp.asm:13 LDX @VIRTUAL02
    case 0xC272A2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:14 LDA a:battler::consciousness,X
    case 0xC272A4: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/recover_hp.asm:15 AND #$00FF
    case 0xC272A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_hp.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC272A7.
    case 0xC272A9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_hp.asm:16 CMP #1
    case 0xC272AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_hp.asm:16 CMP #1
    // Overlapping static entry reached from 0xC272AA.
    case 0xC272AC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/recover_hp.asm:17 BNE @UNKNOWN2
    case 0xC272AD: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // src/battle/recover_hp.asm:18 LDX @VIRTUAL02
    case 0xC272AF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:19 LDA a:battler::afflictions,X
    case 0xC272B1: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/recover_hp.asm:20 AND #$00FF
    case 0xC272B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_hp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC272B4.
    case 0xC272B6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_hp.asm:21 CMP #1
    case 0xC272B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_hp.asm:21 CMP #1
    // Overlapping static entry reached from 0xC272B7.
    case 0xC272B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/recover_hp.asm:22 BEQ @UNKNOWN1
    case 0xC272BA: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/battle/recover_hp.asm:23 LDX @LOCAL02
    case 0xC272BC: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:24 STX @VIRTUAL04
    case 0xC272BE: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/recover_hp.asm:25 TXA
    case 0xC272C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:26 LDX @VIRTUAL02
    case 0xC272C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:27 CLC
    case 0xC272C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:28 ADC a:battler::hp_target,X
    case 0xC272C4: cpu.execute_instruction<0x7D>(0x000013, 3); return true;
    // src/battle/recover_hp.asm:29 TAY
    case 0xC272C7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:30 STY @LOCAL02
    case 0xC272C8: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:31 TYX
    case 0xC272CA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:32 LDA @VIRTUAL02
    case 0xC272CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:33 JSR SET_HP
    case 0xC272CD: cpu.execute_instruction<0x20>(0x007126, 3); return true;
    // src/battle/recover_hp.asm:34 LDX @VIRTUAL02
    case 0xC272D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:35 LDY @LOCAL02
    case 0xC272D2: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:36 TYA
    case 0xC272D4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:37 CMP a:battler::hp_max,X
    case 0xC272D5: cpu.execute_instruction<0xDD>(0x000015, 3); return true;
    // src/battle/recover_hp.asm:38 BCC @UNKNOWN0
    case 0xC272D8: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x0069A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC272DA.
    case 0xC272DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000085, 2); else cpu.execute_instruction<0x69>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC272DC.
    case 0xC272DE: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC272DF.
    case 0xC272E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272E2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272E4: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/recover_hp.asm:40 BRA @UNKNOWN2
    case 0xC272E8: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x0069BA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272EA.
    case 0xC272EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000085, 2); else cpu.execute_instruction<0x69>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272ED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272EC.
    case 0xC272EE: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272EF.
    case 0xC272F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272F2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC272F4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC272F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC272F8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272FC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27300: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/recover_hp.asm:45 JSL DISPLAY_TEXT_WAIT
    case 0xC27302: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/recover_hp.asm:46 BRA @UNKNOWN2
    case 0xC27306: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27308: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x007696, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC27308.
    case 0xC2730A: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC2730B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC2730A.
    case 0xC2730C: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC2730D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC2730D.
    case 0xC2730F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27310: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27312: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_hp.asm:50 END_C_FUNCTION
    case 0xC27316: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_hp.asm:50 END_C_FUNCTION
    case 0xC27317: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/recover_pp.asm (source_named).
bool execute_battle_recover_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC27318: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC2731D.
    case 0xC2731F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27320: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27321: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    case 0xC27322: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC2731F.
    case 0xC27323: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    case 0xC27324: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27323.
    case 0xC27325: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/recover_pp.asm:15 STA @LOCAL04
    case 0xC27326: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/recover_pp.asm:16 LDX @VIRTUAL02
    case 0xC27328: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:17 LDA a:battler::consciousness,X
    case 0xC2732A: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/recover_pp.asm:18 AND #$00FF
    case 0xC2732D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_pp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2732D.
    case 0xC2732F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_pp.asm:19 CMP #1
    case 0xC27330: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_pp.asm:19 CMP #1
    // Overlapping static entry reached from 0xC27330.
    case 0xC27332: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/recover_pp.asm:20 BNE @UNKNOWN2
    case 0xC27333: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/battle/recover_pp.asm:21 LDX @VIRTUAL02
    case 0xC27335: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:22 LDA a:battler::afflictions,X
    case 0xC27337: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/recover_pp.asm:23 AND #$00FF
    case 0xC2733A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_pp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2733A.
    case 0xC2733C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_pp.asm:24 CMP #1
    case 0xC2733D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_pp.asm:24 CMP #1
    // Overlapping static entry reached from 0xC2733D.
    case 0xC2733F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/recover_pp.asm:25 BEQ @UNKNOWN2
    case 0xC27340: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/battle/recover_pp.asm:26 LDX @VIRTUAL02
    case 0xC27342: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:27 LDY a:battler::pp_target,X
    case 0xC27344: cpu.execute_instruction<0xBC>(0x000019, 3); return true;
    // src/battle/recover_pp.asm:28 LDX @VIRTUAL02
    case 0xC27347: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:29 LDA a:battler::pp_max,X
    case 0xC27349: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/recover_pp.asm:30 STA @LOCAL03
    case 0xC2734C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/recover_pp.asm:31 STA @VIRTUAL02
    case 0xC2734E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:32 TYA
    case 0xC27350: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:33 CLC
    case 0xC27351: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:34 ADC @VIRTUAL04
    case 0xC27352: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:35 CMP @VIRTUAL02
    case 0xC27354: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:36 BCC @UNKNOWN0
    case 0xC27356: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // src/battle/recover_pp.asm:37 STY @VIRTUAL02
    case 0xC27358: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:38 LDA @LOCAL03
    case 0xC2735A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/recover_pp.asm:39 SEC
    case 0xC2735C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:40 SBC @VIRTUAL02
    case 0xC2735D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:41 BRA @UNKNOWN1
    case 0xC2735F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:43 LDA @VIRTUAL04
    case 0xC27361: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:45 TAY
    case 0xC27363: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:46 STY @LOCAL02
    case 0xC27364: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/recover_pp.asm:47 LDA @LOCAL04
    case 0xC27366: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/recover_pp.asm:48 STA @VIRTUAL02
    case 0xC27368: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:49 LDX @VIRTUAL02
    case 0xC2736A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:50 LDA @VIRTUAL04
    case 0xC2736C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:51 CLC
    case 0xC2736E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:52 ADC a:battler::pp_target,X
    case 0xC2736F: cpu.execute_instruction<0x7D>(0x000019, 3); return true;
    // src/battle/recover_pp.asm:53 TAX
    case 0xC27372: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:54 LDA @VIRTUAL02
    case 0xC27373: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:55 JSR SET_PP
    case 0xC27375: cpu.execute_instruction<0x20>(0x007191, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC27378: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D2, 2); else cpu.execute_instruction<0xA9>(0x0069D2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC27378.
    case 0xC2737A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000085, 2); else cpu.execute_instruction<0x69>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC2737B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC2737A.
    case 0xC2737C: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC2737D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC2737D.
    case 0xC2737F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC27380: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/recover_pp.asm:57 LDY @LOCAL02
    case 0xC27382: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/recover_pp.asm:58 TYA
    case 0xC27384: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC27385: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC27387: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27389: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2738B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2738D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2738F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/recover_pp.asm:61 JSL DISPLAY_TEXT_WAIT
    case 0xC27391: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC27395: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC27396: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/reduce_hp.asm (source_named).
bool execute_battle_reduce_hp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reduce_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC271F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC271F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC271F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC271F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC271F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC271F5.
    case 0xC271F7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC271F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC271F9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:9 STX @VIRTUAL02
    case 0xC271FA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/reduce_hp.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC271F7.
    case 0xC271FB: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/reduce_hp.asm:10 TAY
    case 0xC271FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:11 LDA a:battler::hp_target,Y
    case 0xC271FD: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/reduce_hp.asm:12 STA @LOCAL00
    case 0xC27200: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reduce_hp.asm:13 STA @VIRTUAL04
    case 0xC27202: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/reduce_hp.asm:14 LDA @VIRTUAL02
    case 0xC27204: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/reduce_hp.asm:15 CMP @VIRTUAL04
    case 0xC27206: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/reduce_hp.asm:16 BLTEQ @UNKNOWN0
    case 0xC27208: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/reduce_hp.asm:16 BLTEQ @UNKNOWN0
    case 0xC2720A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/reduce_hp.asm:17 LDA #0
    case 0xC2720C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/reduce_hp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2720C.
    case 0xC2720E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/reduce_hp.asm:18 BRA @UNKNOWN1
    case 0xC2720F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/reduce_hp.asm:20 LDA @LOCAL00
    case 0xC27211: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/reduce_hp.asm:21 SEC
    case 0xC27213: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:22 SBC @VIRTUAL02
    case 0xC27214: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/reduce_hp.asm:24 TAX
    case 0xC27216: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:25 TYA
    case 0xC27217: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:26 JSR SET_HP
    case 0xC27218: cpu.execute_instruction<0x20>(0x007126, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reduce_hp.asm:27 END_C_FUNCTION
    case 0xC2721B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/reduce_hp.asm:27 END_C_FUNCTION
    case 0xC2721C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/reduce_pp.asm (source_named).
bool execute_battle_reduce_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reduce_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC2721D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC2721F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27220: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27221: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27222: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27222.
    case 0xC27224: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27225: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27226: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:9 STX @VIRTUAL02
    case 0xC27227: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/reduce_pp.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC27224.
    case 0xC27228: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/reduce_pp.asm:10 TAY
    case 0xC27229: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:11 LDA a:battler::pp_target,Y
    case 0xC2722A: cpu.execute_instruction<0xB9>(0x000019, 3); return true;
    // src/battle/reduce_pp.asm:12 STA @LOCAL00
    case 0xC2722D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reduce_pp.asm:13 STA @VIRTUAL04
    case 0xC2722F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/reduce_pp.asm:14 LDA @VIRTUAL02
    case 0xC27231: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/reduce_pp.asm:15 CMP @VIRTUAL04
    case 0xC27233: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/reduce_pp.asm:16 BLTEQ @UNKNOWN0
    case 0xC27235: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/reduce_pp.asm:16 BLTEQ @UNKNOWN0
    case 0xC27237: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/reduce_pp.asm:17 LDA #0
    case 0xC27239: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/reduce_pp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC27239.
    case 0xC2723B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/reduce_pp.asm:18 BRA @UNKNOWN1
    case 0xC2723C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/reduce_pp.asm:20 LDA @LOCAL00
    case 0xC2723E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/reduce_pp.asm:21 SEC
    case 0xC27240: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:22 SBC @VIRTUAL02
    case 0xC27241: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/reduce_pp.asm:24 TAX
    case 0xC27243: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:25 TYA
    case 0xC27244: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:26 JSR SET_PP
    case 0xC27245: cpu.execute_instruction<0x20>(0x007191, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reduce_pp.asm:27 END_C_FUNCTION
    case 0xC27248: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/reduce_pp.asm:27 END_C_FUNCTION
    case 0xC27249: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_dead_targetting.asm (source_named).
bool execute_battle_remove_dead_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_dead_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC270E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC270E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC270E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC270E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC270E8.
    case 0xC270EA: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC270EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:7 LDX #0
    case 0xC270EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/remove_dead_targetting.asm:7 LDX #0
    // Overlapping static entry reached from 0xC270EC.
    case 0xC270EE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/remove_dead_targetting.asm:8 STX @LOCAL00
    case 0xC270EF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:9 BRA @UNKNOWN2
    case 0xC270F1: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/battle/remove_dead_targetting.asm:11 TXA
    case 0xC270F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:12 JSL IS_CHAR_TARGETTED
    case 0xC270F4: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/battle/remove_dead_targetting.asm:13 CMP #0
    case 0xC270F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/remove_dead_targetting.asm:13 CMP #0
    // Overlapping static entry reached from 0xC270F8.
    case 0xC270FA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_dead_targetting.asm:14 BEQ @UNKNOWN1
    case 0xC270FB: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/remove_dead_targetting.asm:15 LDX @LOCAL00
    case 0xC270FD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:16 TXA
    case 0xC270FF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:17 LDY #.SIZEOF(battler)
    case 0xC27100: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/remove_dead_targetting.asm:17 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27100.
    case 0xC27102: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/remove_dead_targetting.asm:18 JSL MULT168
    case 0xC27103: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/remove_dead_targetting.asm:19 TAX
    case 0xC27107: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:20 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27108: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/battle/remove_dead_targetting.asm:21 AND #$00FF
    case 0xC2710B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_dead_targetting.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2710B.
    case 0xC2710D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/remove_dead_targetting.asm:22 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2710E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/remove_dead_targetting.asm:22 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2710E.
    case 0xC27110: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/remove_dead_targetting.asm:23 BNE @UNKNOWN1
    case 0xC27111: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/remove_dead_targetting.asm:24 LDX @LOCAL00
    case 0xC27113: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:25 TXA
    case 0xC27115: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:26 JSL REMOVE_TARGET
    case 0xC27116: cpu.execute_instruction<0x22>(0xC27089, 4); return true;
    // src/battle/remove_dead_targetting.asm:28 LDX @LOCAL00
    case 0xC2711A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:29 INX
    case 0xC2711C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:30 STX @LOCAL00
    case 0xC2711D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:32 CPX #BATTLER_COUNT
    case 0xC2711F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/remove_dead_targetting.asm:32 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2711F.
    case 0xC27121: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/remove_dead_targetting.asm:33 BCC @UNKNOWN0
    case 0xC27122: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_dead_targetting.asm:34 END_C_FUNCTION
    case 0xC27124: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/remove_dead_targetting.asm:34 END_C_FUNCTION
    case 0xC27125: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_npc_targetting.asm (source_named).
bool execute_battle_remove_npc_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_npc_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26E77: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E79: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E7A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26E7B.
    case 0xC26E7D: cpu.execute_instruction<0xFF>(0xACA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E7E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:7 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26E7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/remove_npc_targetting.asm:7 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26E7F.
    case 0xC26E81: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    case 0xC26E82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    // Overlapping static entry reached from 0xC26E82.
    case 0xC26E84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/remove_npc_targetting.asm:9 STA @LOCAL00
    case 0xC26E85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:10 BRA @UNKNOWN2
    case 0xC26E87: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/remove_npc_targetting.asm:12 LDA a:battler::consciousness,X
    case 0xC26E89: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/remove_npc_targetting.asm:13 AND #$00FF
    case 0xC26E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_npc_targetting.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC26E8C.
    case 0xC26E8E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_npc_targetting.asm:14 BEQ @UNKNOWN1
    case 0xC26E8F: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/battle/remove_npc_targetting.asm:15 LDA a:battler::npc_id,X
    case 0xC26E91: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/remove_npc_targetting.asm:16 AND #$00FF
    case 0xC26E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_npc_targetting.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC26E94.
    case 0xC26E96: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_npc_targetting.asm:17 BEQ @UNKNOWN1
    case 0xC26E97: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E99.
    case 0xC26E9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E9B.
    case 0xC26E9D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E9D.
    case 0xC26E9F: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E9E.
    case 0xC26EA0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/remove_npc_targetting.asm:19 LDA @LOCAL00
    case 0xC26EA3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:20 ASL
    case 0xC26EA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:21 ASL
    case 0xC26EA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:22 CLC
    case 0xC26EA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:23 ADC @VIRTUAL06
    case 0xC26EA8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/remove_npc_targetting.asm:24 STA @VIRTUAL06
    case 0xC26EAA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EAC.
    case 0xC26EAE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EAF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB6: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/remove_npc_targetting.asm:26 LDA @VIRTUAL0A
    case 0xC26EB8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/remove_npc_targetting.asm:27 EOR #$FFFF
    case 0xC26EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_npc_targetting.asm:27 EOR #$FFFF
    // Overlapping static entry reached from 0xC26EBA.
    case 0xC26EBC: cpu.execute_instruction<0xFF>(0xA50A85, 4); return true;
    // src/battle/remove_npc_targetting.asm:28 STA @VIRTUAL0A
    case 0xC26EBD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/remove_npc_targetting.asm:29 LDA @VIRTUAL0A+2
    case 0xC26EBF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/remove_npc_targetting.asm:29 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC26EBC.
    case 0xC26EC0: cpu.execute_instruction<0x0C>(0x00FF49, 3); return true;
    // src/battle/remove_npc_targetting.asm:30 EOR #$FFFF
    case 0xC26EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_npc_targetting.asm:30 EOR #$FFFF
    // Overlapping static entry reached from 0xC26EC1.
    case 0xC26EC3: cpu.execute_instruction<0xFF>(0xAD0C85, 4); return true;
    // src/battle/remove_npc_targetting.asm:31 STA @VIRTUAL0A+2
    case 0xC26EC4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26EC6: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EC3.
    case 0xC26EC7: cpu.execute_instruction<0x6C>(0x0085A9, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26EC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26ECB: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26ECE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED2: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED8: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26EDA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EDC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EDE: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EE1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EE3: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/remove_npc_targetting.asm:36 TXA
    case 0xC26EE6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:37 CLC
    case 0xC26EE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:38 ADC #.SIZEOF(battler)
    case 0xC26EE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/remove_npc_targetting.asm:38 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26EE8.
    case 0xC26EEA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/remove_npc_targetting.asm:39 TAX
    case 0xC26EEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:40 LDA @LOCAL00
    case 0xC26EEC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:41 INC
    case 0xC26EEE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:42 STA @LOCAL00
    case 0xC26EEF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:44 CMP #BATTLER_COUNT
    case 0xC26EF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/remove_npc_targetting.asm:44 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26EF1.
    case 0xC26EF3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/remove_npc_targetting.asm:45 BCC @UNKNOWN0
    case 0xC26EF4: cpu.execute_instruction<0x90>(0x000093, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_npc_targetting.asm:46 END_C_FUNCTION
    case 0xC26EF6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_npc_targetting.asm:46 END_C_FUNCTION
    case 0xC26EF7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_status_untargettable_targets.asm (source_named).
bool execute_battle_remove_status_untargettable_targets_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2416F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24171: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24172: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24173: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC24173.
    case 0xC24175: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24176: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:7 LDX #0
    case 0xC24177: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:7 LDX #0
    // Overlapping static entry reached from 0xC24177.
    case 0xC24179: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:8 STX @LOCAL00
    case 0xC2417A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:9 BRA @UNKNOWN1
    case 0xC2417C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:11 LDX CURRENT_ATTACKER
    case 0xC2417E: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:12 CMP a:battler::current_action,X
    case 0xC24181: cpu.execute_instruction<0xDD>(0x000004, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:13 BEQ @UNKNOWN6
    case 0xC24184: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:14 LDX @LOCAL00
    case 0xC24186: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:15 INX
    case 0xC24188: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:16 STX @LOCAL00
    case 0xC24189: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:18 TXA
    case 0xC2418B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:19 ASL
    case 0xC2418C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:20 TAX
    case 0xC2418D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:21 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC2418E: cpu.execute_instruction<0xBF>(0xC4A08D, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:22 BNE @UNKNOWN0
    case 0xC24192: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:23 LDY #0
    case 0xC24194: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:23 LDY #0
    // Overlapping static entry reached from 0xC24194.
    case 0xC24196: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:24 STY @LOCAL00
    case 0xC24197: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:25 BRA @UNKNOWN5
    case 0xC24199: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:27 TYA
    case 0xC2419B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:28 JSL IS_CHAR_TARGETTED
    case 0xC2419C: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:29 CMP #0
    case 0xC241A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:29 CMP #0
    // Overlapping static entry reached from 0xC241A0.
    case 0xC241A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:30 BEQ @UNKNOWN4
    case 0xC241A3: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:31 LDY @LOCAL00
    case 0xC241A5: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:32 TYA
    case 0xC241A7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:33 LDY #.SIZEOF(battler)
    case 0xC241A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC241A8.
    case 0xC241AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:34 JSL MULT168
    case 0xC241AB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:35 TAX
    case 0xC241AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:36 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC241B0: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:37 AND #$00FF
    case 0xC241B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC241B3.
    case 0xC241B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:38 BEQ @UNKNOWN3
    case 0xC241B6: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:39 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC241B8: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:40 AND #$00FF
    case 0xC241BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC241BB.
    case 0xC241BD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:41 TAX
    case 0xC241BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:42 CPX #STATUS_0::UNCONSCIOUS
    case 0xC241BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:42 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC241BF.
    case 0xC241C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:43 BEQ @UNKNOWN3
    case 0xC241C2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:44 CPX #STATUS_0::DIAMONDIZED
    case 0xC241C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:44 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC241C4.
    case 0xC241C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:45 BNE @UNKNOWN4
    case 0xC241C7: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:47 LDY @LOCAL00
    case 0xC241C9: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:48 TYA
    case 0xC241CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:49 JSL REMOVE_TARGET
    case 0xC241CC: cpu.execute_instruction<0x22>(0xC27089, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:51 LDY @LOCAL00
    case 0xC241D0: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:52 INY
    case 0xC241D2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:53 STY @LOCAL00
    case 0xC241D3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:55 CPY #BATTLER_COUNT
    case 0xC241D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:55 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC241D5.
    case 0xC241D7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:56 BCC @UNKNOWN2
    case 0xC241D8: cpu.execute_instruction<0x90>(0x0000C1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:58 END_C_FUNCTION
    case 0xC241DA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:58 END_C_FUNCTION
    case 0xC241DB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_target.asm (source_named).
bool execute_battle_remove_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27089: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2708E.
    case 0xC27090: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC27091: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC27092: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/remove_target.asm:8 STA @LOCAL00
    case 0xC27093: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/remove_target.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC27090.
    case 0xC27094: cpu.execute_instruction<0x0E>(0x0079A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27095: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27095.
    case 0xC27097: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27098: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27097.
    case 0xC27099: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2709A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27099.
    case 0xC2709B: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2709A.
    case 0xC2709C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2709D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/remove_target.asm:10 LDA @LOCAL00
    case 0xC2709F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/remove_target.asm:11 ASL
    case 0xC270A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_target.asm:12 ASL
    case 0xC270A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_target.asm:13 CLC
    case 0xC270A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/remove_target.asm:14 ADC @VIRTUAL06
    case 0xC270A4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/remove_target.asm:15 STA @VIRTUAL06
    case 0xC270A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC270A8.
    case 0xC270AA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270AB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270AD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270AE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270B0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270B2: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/remove_target.asm:17 LDA @VIRTUAL0A
    case 0xC270B4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/remove_target.asm:18 EOR #$FFFF
    case 0xC270B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_target.asm:18 EOR #$FFFF
    // Overlapping static entry reached from 0xC270B6.
    case 0xC270B8: cpu.execute_instruction<0xFF>(0xA50A85, 4); return true;
    // src/battle/remove_target.asm:19 STA @VIRTUAL0A
    case 0xC270B9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    case 0xC270BB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC270B8.
    case 0xC270BC: cpu.execute_instruction<0x0C>(0x00FF49, 3); return true;
    // src/battle/remove_target.asm:21 EOR #$FFFF
    case 0xC270BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_target.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC270BD.
    case 0xC270BF: cpu.execute_instruction<0xFF>(0xAD0C85, 4); return true;
    // src/battle/remove_target.asm:22 STA @VIRTUAL0A+2
    case 0xC270C0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270C2: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC270BF.
    case 0xC270C3: cpu.execute_instruction<0x6C>(0x0085A9, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270C7: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270CA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270CE: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D4: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270DA: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270DF: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC270E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC270E3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/render_battle_sprite_row.asm (source_named).
bool execute_battle_render_battle_sprite_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/render_battle_sprite_row.asm:3 BEGIN_C_FUNCTION
    case 0xC2F724: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F726: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F727: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F728: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F729: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F729.
    case 0xC2F72B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F72C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F72D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    case 0xC2F72E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC2F72B.
    case 0xC2F72F: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2F730: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00A21C, 3); return true;
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F72F.
    case 0xC2F731: cpu.execute_instruction<0x1C>(0x0085A2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F730.
    case 0xC2F732: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000285, 3); return true;
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    case 0xC2F733: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2F732.
    case 0xC2F734: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    case 0xC2F735: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    // Overlapping static entry reached from 0xC2F735.
    case 0xC2F737: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/render_battle_sprite_row.asm:16 STA @VIRTUAL04
    case 0xC2F738: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:17 STA @LOCAL03
    case 0xC2F73A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/render_battle_sprite_row.asm:18 JMP @UNKNOWN12
    case 0xC2F73C: cpu.execute_instruction<0x4C>(0x00F8EB, 3); return true;
    // src/battle/render_battle_sprite_row.asm:20 LDX @VIRTUAL02
    case 0xC2F73F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:21 LDA a:battler::consciousness,X
    case 0xC2F741: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    case 0xC2F744: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F744.
    case 0xC2F746: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F747: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F749: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:24 LDX @VIRTUAL02
    case 0xC2F74C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:25 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2F74E: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    case 0xC2F751: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F751.
    case 0xC2F753: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    case 0xC2F754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F754.
    case 0xC2F756: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F757: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F759: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:29 LDX @VIRTUAL02
    case 0xC2F75C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:30 LDA a:battler::ally_or_enemy,X
    case 0xC2F75E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    case 0xC2F761: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2F761.
    case 0xC2F763: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    case 0xC2F764: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    // Overlapping static entry reached from 0xC2F764.
    case 0xC2F766: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F767: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F769: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:34 LDX @VIRTUAL02
    case 0xC2F76C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:35 LDA a:battler::row,X
    case 0xC2F76E: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    case 0xC2F771: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2F771.
    case 0xC2F773: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/render_battle_sprite_row.asm:37 CMP @LOCAL04
    case 0xC2F774: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F776: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F778: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:39 LDX @VIRTUAL02
    case 0xC2F77B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:40 LDA a:battler::sprite,X
    case 0xC2F77D: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F780: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F782: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:42 LDA @VIRTUAL02
    case 0xC2F785: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:43 CLC
    case 0xC2F787: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    case 0xC2F788: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000048, 2); else cpu.execute_instruction<0x69>(0x000048, 3); return true;
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    // Overlapping static entry reached from 0xC2F788.
    case 0xC2F78A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/render_battle_sprite_row.asm:45 TAX
    case 0xC2F78B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:46 LDA __BSS_START__,X
    case 0xC2F78C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    case 0xC2F78F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC2F78F.
    case 0xC2F791: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:48 BEQ @UNKNOWN6
    case 0xC2F792: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/render_battle_sprite_row.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F794: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:50 DEC
    case 0xC2F796: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:51 STA __BSS_START__,X
    case 0xC2F797: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    case 0xC2F79A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    // Overlapping static entry reached from 0xC2F79A.
    case 0xC2F79C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/render_battle_sprite_row.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC2F79D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    case 0xC2F79F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2F79F.
    case 0xC2F7A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/render_battle_sprite_row.asm:55 JSL DIVISION16
    case 0xC2F7A2: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    case 0xC2F7A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    // Overlapping static entry reached from 0xC2F7A6.
    case 0xC2F7A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F7A9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F7AB: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:59 LDA @VIRTUAL02
    case 0xC2F7AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:60 CLC
    case 0xC2F7B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    case 0xC2F7B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    // Overlapping static entry reached from 0xC2F7B1.
    case 0xC2F7B3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/render_battle_sprite_row.asm:62 TAX
    case 0xC2F7B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:63 LDA __BSS_START__,X
    case 0xC2F7B5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    case 0xC2F7B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2F7B8.
    case 0xC2F7BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:65 BEQ @UNKNOWN7
    case 0xC2F7BB: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F7BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:67 DEC
    case 0xC2F7BF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:68 STA __BSS_START__,X
    case 0xC2F7C0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2F7C3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    case 0xC2F7C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F7C5.
    case 0xC2F7C7: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    case 0xC2F7C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    // Overlapping static entry reached from 0xC2F7C8.
    case 0xC2F7CA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:72 BNE @UNKNOWN7
    case 0xC2F7CB: cpu.execute_instruction<0xD0>(0x00003B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:73 LDX @VIRTUAL02
    case 0xC2F7CD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:74 LDA a:battler::sprite_y,X
    case 0xC2F7CF: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    case 0xC2F7D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC2F7D2.
    case 0xC2F7D4: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:76 SEC
    case 0xC2F7D5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:77 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F7D6: cpu.execute_instruction<0xED>(0x00AD98, 3); return true;
    // src/battle/render_battle_sprite_row.asm:78 TAY
    case 0xC2F7D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:79 LDX @VIRTUAL02
    case 0xC2F7DA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:80 LDA a:battler::sprite_x,X
    case 0xC2F7DC: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    case 0xC2F7DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC2F7DF.
    case 0xC2F7E1: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:82 SEC
    case 0xC2F7E2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:83 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F7E3: cpu.execute_instruction<0xED>(0x00AD96, 3); return true;
    // src/battle/render_battle_sprite_row.asm:84 TAX
    case 0xC2F7E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:85 STX @LOCAL02
    case 0xC2F7E7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:86 LDX @VIRTUAL02
    case 0xC2F7E9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:87 LDA a:battler::vram_sprite_index,X
    case 0xC2F7EB: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    case 0xC2F7EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC2F7EE.
    case 0xC2F7F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:90 CLC
    case 0xC2F7FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F7FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x00AC16, 3); return true;
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F7FC.
    case 0xC2F7FE: cpu.execute_instruction<0xAC>(0x0012A6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:92 LDX @LOCAL02
    case 0xC2F7FF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:93 JSL UNKNOWN_C08CD5
    case 0xC2F801: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/battle/render_battle_sprite_row.asm:94 JMP @UNKNOWN11
    case 0xC2F805: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:96 LDX @VIRTUAL02
    case 0xC2F808: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:97 LDA a:battler::use_alt_spritemap,X
    case 0xC2F80A: cpu.execute_instruction<0xBD>(0x00004B, 3); return true;
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    case 0xC2F80D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC2F80D.
    case 0xC2F80F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:99 BEQ @UNKNOWN8
    case 0xC2F810: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:100 LDX @VIRTUAL02
    case 0xC2F812: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:101 LDA a:battler::sprite_y,X
    case 0xC2F814: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    case 0xC2F817: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC2F817.
    case 0xC2F819: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:103 SEC
    case 0xC2F81A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:104 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F81B: cpu.execute_instruction<0xED>(0x00AD98, 3); return true;
    // src/battle/render_battle_sprite_row.asm:105 TAY
    case 0xC2F81E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:106 LDX @VIRTUAL02
    case 0xC2F81F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:107 LDA a:battler::sprite_x,X
    case 0xC2F821: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    case 0xC2F824: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC2F824.
    case 0xC2F826: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:109 SEC
    case 0xC2F827: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:110 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F828: cpu.execute_instruction<0xED>(0x00AD96, 3); return true;
    // src/battle/render_battle_sprite_row.asm:111 TAX
    case 0xC2F82B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:112 STX @LOCAL01
    case 0xC2F82C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/render_battle_sprite_row.asm:113 LDX @VIRTUAL02
    case 0xC2F82E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:114 LDA a:battler::vram_sprite_index,X
    case 0xC2F830: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    case 0xC2F833: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC2F833.
    case 0xC2F835: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F836: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F838: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F839: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F83F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:117 CLC
    case 0xC2F840: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F841: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x00AC16, 3); return true;
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F841.
    case 0xC2F843: cpu.execute_instruction<0xAC>(0x0010A6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:119 LDX @LOCAL01
    case 0xC2F844: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/render_battle_sprite_row.asm:120 JSL UNKNOWN_C08CD5
    case 0xC2F846: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/battle/render_battle_sprite_row.asm:121 JMP @UNKNOWN11
    case 0xC2F84A: cpu.execute_instruction<0x4C>(0x00F8D9, 3); return true;
    // src/battle/render_battle_sprite_row.asm:123 LDA ENEMY_TARGETTING_FLASHING
    case 0xC2F84D: cpu.execute_instruction<0xAD>(0x00ADA2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:124 BEQ @UNKNOWN10
    case 0xC2F850: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/battle/render_battle_sprite_row.asm:125 LDX @VIRTUAL02
    case 0xC2F852: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:126 LDA a:battler::unknown74,X
    case 0xC2F854: cpu.execute_instruction<0xBD>(0x00004A, 3); return true;
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    case 0xC2F857: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC2F857.
    case 0xC2F859: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:128 BEQ @UNKNOWN9
    case 0xC2F85A: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:129 LDA FRAME_COUNTER
    case 0xC2F85C: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    case 0xC2F85F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC2F85F.
    case 0xC2F861: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    case 0xC2F862: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    // Overlapping static entry reached from 0xC2F862.
    case 0xC2F864: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:132 BEQ @UNKNOWN10
    case 0xC2F865: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/render_battle_sprite_row.asm:134 LDX @VIRTUAL02
    case 0xC2F867: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:135 LDA a:battler::sprite_y,X
    case 0xC2F869: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    case 0xC2F86C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    // Overlapping static entry reached from 0xC2F86C.
    case 0xC2F86E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:137 SEC
    case 0xC2F86F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:138 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F870: cpu.execute_instruction<0xED>(0x00AD98, 3); return true;
    // src/battle/render_battle_sprite_row.asm:139 TAY
    case 0xC2F873: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:140 LDX @VIRTUAL02
    case 0xC2F874: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:141 LDA a:battler::sprite_x,X
    case 0xC2F876: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    case 0xC2F879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2F879.
    case 0xC2F87B: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:143 SEC
    case 0xC2F87C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:144 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F87D: cpu.execute_instruction<0xED>(0x00AD96, 3); return true;
    // src/battle/render_battle_sprite_row.asm:145 TAX
    case 0xC2F880: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:146 STX @LOCAL02
    case 0xC2F881: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:147 LDX @VIRTUAL02
    case 0xC2F883: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:148 LDA a:battler::vram_sprite_index,X
    case 0xC2F885: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    case 0xC2F888: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2F888.
    case 0xC2F88A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F88F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F891: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F892: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F893: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F894: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:151 CLC
    case 0xC2F895: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F896: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x00AC16, 3); return true;
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F896.
    case 0xC2F898: cpu.execute_instruction<0xAC>(0x0012A6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:153 LDX @LOCAL02
    case 0xC2F899: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:154 JSL UNKNOWN_C08CD5
    case 0xC2F89B: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/battle/render_battle_sprite_row.asm:155 BRA @UNKNOWN11
    case 0xC2F89F: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:157 LDX @VIRTUAL02
    case 0xC2F8A1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:158 LDA a:battler::sprite_y,X
    case 0xC2F8A3: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    case 0xC2F8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC2F8A6.
    case 0xC2F8A8: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:160 SEC
    case 0xC2F8A9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:161 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F8AA: cpu.execute_instruction<0xED>(0x00AD98, 3); return true;
    // src/battle/render_battle_sprite_row.asm:162 TAY
    case 0xC2F8AD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:163 LDX @VIRTUAL02
    case 0xC2F8AE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:164 LDA a:battler::sprite_x,X
    case 0xC2F8B0: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    case 0xC2F8B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    // Overlapping static entry reached from 0xC2F8B3.
    case 0xC2F8B5: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:166 SEC
    case 0xC2F8B6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:167 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F8B7: cpu.execute_instruction<0xED>(0x00AD96, 3); return true;
    // src/battle/render_battle_sprite_row.asm:168 TAX
    case 0xC2F8BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:169 STX @LOCAL00
    case 0xC2F8BB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/render_battle_sprite_row.asm:170 LDX @VIRTUAL02
    case 0xC2F8BD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:171 LDA a:battler::vram_sprite_index,X
    case 0xC2F8BF: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    case 0xC2F8C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC2F8C2.
    case 0xC2F8C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8C9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F8CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:174 CLC
    case 0xC2F8CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2F8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00AAD6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F8D0.
    case 0xC2F8D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:176 LDX @LOCAL00
    case 0xC2F8D3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/render_battle_sprite_row.asm:177 JSL UNKNOWN_C08CD5
    case 0xC2F8D5: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/battle/render_battle_sprite_row.asm:179 LDA @VIRTUAL02
    case 0xC2F8D9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:180 CLC
    case 0xC2F8DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    case 0xC2F8DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F8DC.
    case 0xC2F8DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/render_battle_sprite_row.asm:182 STA @VIRTUAL02
    case 0xC2F8DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:183 LDA @LOCAL03
    case 0xC2F8E1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/render_battle_sprite_row.asm:184 STA @VIRTUAL04
    case 0xC2F8E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:185 INC @VIRTUAL04
    case 0xC2F8E5: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:186 LDA @VIRTUAL04
    case 0xC2F8E7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:187 STA @LOCAL03
    case 0xC2F8E9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/render_battle_sprite_row.asm:189 LDA @VIRTUAL04
    case 0xC2F8EB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    case 0xC2F8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F8ED.
    case 0xC2F8EF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F8F0: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F8F2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F8F4: cpu.execute_instruction<0x4C>(0x00F73F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F8F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F8F8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/reset_post_battle_stats.asm (source_named).
bool execute_battle_reset_post_battle_stats_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reset_post_battle_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BC5C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC5E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC5F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BC60.
    case 0xC2BC62: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC63: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:7 LDA #0
    case 0xC2BC64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/reset_post_battle_stats.asm:7 LDA #0
    // Overlapping static entry reached from 0xC2BC64.
    case 0xC2BC66: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/reset_post_battle_stats.asm:8 STA @LOCAL00
    case 0xC2BC67: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:9 BRA @UNKNOWN2
    case 0xC2BC69: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/reset_post_battle_stats.asm:11 LDY #.SIZEOF(battler)
    case 0xC2BC6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/reset_post_battle_stats.asm:11 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BC6B.
    case 0xC2BC6D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/reset_post_battle_stats.asm:12 JSL MULT168
    case 0xC2BC6E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/reset_post_battle_stats.asm:13 TAX
    case 0xC2BC72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:14 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2BC73: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/reset_post_battle_stats.asm:15 AND #$00FF
    case 0xC2BC76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2BC76.
    case 0xC2BC78: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:16 BEQ @UNKNOWN1
    case 0xC2BC79: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/reset_post_battle_stats.asm:17 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2BC7B: cpu.execute_instruction<0xBD>(0x009FBA, 3); return true;
    // src/battle/reset_post_battle_stats.asm:18 AND #$00FF
    case 0xC2BC7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2BC7E.
    case 0xC2BC80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:19 BNE @UNKNOWN1
    case 0xC2BC81: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/battle/reset_post_battle_stats.asm:20 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2BC83: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/reset_post_battle_stats.asm:21 AND #$00FF
    case 0xC2BC86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2BC86.
    case 0xC2BC88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:22 BNE @UNKNOWN1
    case 0xC2BC89: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/reset_post_battle_stats.asm:23 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2BC8B: cpu.execute_instruction<0xBD>(0x009FBC, 3); return true;
    // src/battle/reset_post_battle_stats.asm:24 AND #$00FF
    case 0xC2BC8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC2BC8E.
    case 0xC2BC90: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC2BC91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/reset_post_battle_stats.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BC91.
    case 0xC2BC93: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/reset_post_battle_stats.asm:26 JSL MULT168
    case 0xC2BC94: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/reset_post_battle_stats.asm:27 CLC
    case 0xC2BC98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:28 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BC99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/reset_post_battle_stats.asm:28 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BC99.
    case 0xC2BC9B: cpu.execute_instruction<0x99>(0x00E2AA, 3); return true;
    // src/battle/reset_post_battle_stats.asm:29 TAX
    case 0xC2BC9C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC9D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/reset_post_battle_stats.asm:30 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2BC9B.
    case 0xC2BC9E: cpu.execute_instruction<0x20>(0x00149E, 3); return true;
    // src/battle/reset_post_battle_stats.asm:31 STZ a:char_struct::afflictions+6,X
    case 0xC2BC9F: cpu.execute_instruction<0x9E>(0x000014, 3); return true;
    // src/battle/reset_post_battle_stats.asm:31 STZ a:char_struct::afflictions+6,X
    // Overlapping static entry reached from 0xC2BC9E.
    case 0xC2BCA1: cpu.execute_instruction<0x00>(0x00009E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:32 STZ a:char_struct::afflictions+4,X
    case 0xC2BCA2: cpu.execute_instruction<0x9E>(0x000012, 3); return true;
    // src/battle/reset_post_battle_stats.asm:33 STZ a:char_struct::afflictions+3,X
    case 0xC2BCA5: cpu.execute_instruction<0x9E>(0x000011, 3); return true;
    // src/battle/reset_post_battle_stats.asm:34 STZ a:char_struct::afflictions+2,X
    case 0xC2BCA8: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/battle/reset_post_battle_stats.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2BCAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/reset_post_battle_stats.asm:37 LDA @LOCAL00
    case 0xC2BCAD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:38 INC
    case 0xC2BCAF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:39 STA @LOCAL00
    case 0xC2BCB0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:41 CMP #TOTAL_PARTY_COUNT
    case 0xC2BCB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/reset_post_battle_stats.asm:41 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BCB2.
    case 0xC2BCB4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/reset_post_battle_stats.asm:42 BCC @UNKNOWN0
    case 0xC2BCB5: cpu.execute_instruction<0x90>(0x0000B4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reset_post_battle_stats.asm:43 END_C_FUNCTION
    case 0xC2BCB7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/reset_post_battle_stats.asm:43 END_C_FUNCTION
    case 0xC2BCB8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/return_battle_attacker_address.asm (source_named).
bool execute_battle_return_battle_attacker_address_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/return_battle_attacker_address.asm:3 BEGIN_C_FUNCTION
    case 0xC1AC9B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/return_battle_attacker_address.asm:5 LDA #.LOWORD(BATTLE_ATTACKER_NAME)
    case 0xC1AC9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x009CD7, 3); return true;
    // src/battle/return_battle_attacker_address.asm:5 LDA #.LOWORD(BATTLE_ATTACKER_NAME)
    // Overlapping static entry reached from 0xC1AC9D.
    case 0xC1AC9F: cpu.execute_instruction<0x9C>(0x00C260, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/return_battle_attacker_address.asm:6 END_C_FUNCTION
    case 0xC1ACA0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/return_battle_target_address.asm (source_named).
bool execute_battle_return_battle_target_address_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/return_battle_target_address.asm:3 BEGIN_C_FUNCTION
    case 0xC1ACF2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/return_battle_target_address.asm:5 LDA #.LOWORD(BATTLE_TARGET_NAME)
    case 0xC1ACF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x009CF5, 3); return true;
    // src/battle/return_battle_target_address.asm:5 LDA #.LOWORD(BATTLE_TARGET_NAME)
    // Overlapping static entry reached from 0xC1ACF4.
    case 0xC1ACF6: cpu.execute_instruction<0x9C>(0x00C260, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/return_battle_target_address.asm:6 END_C_FUNCTION
    case 0xC1ACF7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/revive_target.asm (source_named).
bool execute_battle_revive_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/revive_target.asm:3 BEGIN_C_FUNCTION
    case 0xC27397: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC27399: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC2739C.
    case 0xC2739E: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC273A0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/revive_target.asm:21 TXY
    case 0xC273A1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/revive_target.asm:22 STY @LOCAL05
    case 0xC273A2: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/revive_target.asm:23 STA @VIRTUAL04
    case 0xC273A4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x006F7C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC273A6.
    case 0xC273A8: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC273A8.
    case 0xC273AC: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC273AB.
    case 0xC273AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273B0: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/revive_target.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC273B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:26 LDA #0
    case 0xC273B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    case 0xC273B8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC273B6.
    case 0xC273B9: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC273BA: cpu.execute_instruction<0x9D>(0x000023, 3); return true;
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    // Overlapping static entry reached from 0xC273B9.
    case 0xC273BB: cpu.execute_instruction<0x23>(0x000000, 2); return true;
    // src/battle/revive_target.asm:29 LDX @VIRTUAL04
    case 0xC273BD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:30 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC273BF: cpu.execute_instruction<0x9D>(0x000022, 3); return true;
    // src/battle/revive_target.asm:31 LDX @VIRTUAL04
    case 0xC273C2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:32 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC273C4: cpu.execute_instruction<0x9D>(0x000021, 3); return true;
    // src/battle/revive_target.asm:33 LDX @VIRTUAL04
    case 0xC273C7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:34 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC273C9: cpu.execute_instruction<0x9D>(0x000020, 3); return true;
    // src/battle/revive_target.asm:35 LDX @VIRTUAL04
    case 0xC273CC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:36 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC273CE: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:37 LDX @VIRTUAL04
    case 0xC273D1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:38 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC273D3: cpu.execute_instruction<0x9D>(0x00001E, 3); return true;
    // src/battle/revive_target.asm:39 LDX @VIRTUAL04
    case 0xC273D6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:40 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC273D8: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/revive_target.asm:41 LDX @VIRTUAL04
    case 0xC273DB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC273DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:43 STZ a:battler::current_action,X
    case 0xC273DF: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/revive_target.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC273E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:45 LDA #1
    case 0xC273E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    case 0xC273E6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC273E4.
    case 0xC273E7: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    case 0xC273E8: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    // Overlapping static entry reached from 0xC273E7.
    case 0xC273E9: cpu.execute_instruction<0x0D>(0x00A400, 3); return true;
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    case 0xC273EB: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    // Overlapping static entry reached from 0xC273E9.
    case 0xC273EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:49 TYX
    case 0xC273ED: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/revive_target.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC273EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:51 LDA @VIRTUAL04
    case 0xC273F0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/revive_target.asm:52 JSR SET_HP
    case 0xC273F2: cpu.execute_instruction<0x20>(0x007126, 3); return true;
    // src/battle/revive_target.asm:53 LDX @VIRTUAL04
    case 0xC273F5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:54 LDA a:battler::ally_or_enemy,X
    case 0xC273F7: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/revive_target.asm:55 AND #$00FF
    case 0xC273FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC273FA.
    case 0xC273FC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/revive_target.asm:56 BNE @UNKNOWN0
    case 0xC273FD: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/battle/revive_target.asm:57 LDX @VIRTUAL04
    case 0xC273FF: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:58 LDA a:battler::npc_id,X
    case 0xC27401: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/revive_target.asm:59 AND #$00FF
    case 0xC27404: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC27404.
    case 0xC27406: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/revive_target.asm:60 BNE @UNKNOWN0
    case 0xC27407: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // src/battle/revive_target.asm:61 LDA @VIRTUAL04
    case 0xC27409: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/revive_target.asm:62 CLC
    case 0xC2740B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:63 ADC #16
    case 0xC2740C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/revive_target.asm:63 ADC #16
    // Overlapping static entry reached from 0xC2740C.
    case 0xC2740E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/revive_target.asm:64 TAX
    case 0xC2740F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:65 STX @LOCAL04
    case 0xC27410: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/revive_target.asm:66 LDA __BSS_START__,X
    case 0xC27412: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/revive_target.asm:67 AND #$00FF
    case 0xC27415: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC27415.
    case 0xC27417: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    case 0xC27418: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27418.
    case 0xC2741A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:69 JSL MULT168
    case 0xC2741B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/revive_target.asm:70 TAX
    case 0xC2741F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:71 LDY @LOCAL05
    case 0xC27420: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/revive_target.asm:72 TYA
    case 0xC27422: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/revive_target.asm:73 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC27423: cpu.execute_instruction<0x9D>(0x009A15, 3); return true;
    // src/battle/revive_target.asm:74 LDX @LOCAL04
    case 0xC27426: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/revive_target.asm:75 LDA __BSS_START__,X
    case 0xC27428: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/revive_target.asm:76 AND #$00FF
    case 0xC2742B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2742B.
    case 0xC2742D: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC2742E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2742E.
    case 0xC27430: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:78 JSL MULT168
    case 0xC27431: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/revive_target.asm:79 TAX
    case 0xC27435: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:80 LDA #1
    case 0xC27436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:80 LDA #1
    // Overlapping static entry reached from 0xC27436.
    case 0xC27438: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:81 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC27439: cpu.execute_instruction<0x9D>(0x009A13, 3); return true;
    // src/battle/revive_target.asm:83 LDX @VIRTUAL04
    case 0xC2743C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:84 LDA a:battler::ally_or_enemy,X
    case 0xC2743E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/revive_target.asm:85 AND #$00FF
    case 0xC27441: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC27441.
    case 0xC27443: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/revive_target.asm:86 CMP #1
    case 0xC27444: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:86 CMP #1
    // Overlapping static entry reached from 0xC27444.
    case 0xC27446: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC27447: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC27449: cpu.execute_instruction<0x4C>(0x00754B, 3); return true;
    // src/battle/revive_target.asm:88 LDX @VIRTUAL04
    case 0xC2744C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:89 LDA a:battler::npc_id,X
    case 0xC2744E: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/revive_target.asm:90 AND #$00FF
    case 0xC27451: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC27451.
    case 0xC27453: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27454: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27456: cpu.execute_instruction<0x4C>(0x00754B, 3); return true;
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC27459: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27459.
    case 0xC2745B: cpu.execute_instruction<0x9F>(0x0000A2, 4); return true;
    // src/battle/revive_target.asm:93 LDX #0
    case 0xC2745C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/revive_target.asm:93 LDX #0
    // Overlapping static entry reached from 0xC2745C.
    case 0xC2745E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/revive_target.asm:94 STX @LOCAL05
    case 0xC2745F: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:95 BRA @UNKNOWN4
    case 0xC27461: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/revive_target.asm:97 TAX
    case 0xC27463: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:98 SEP #PROC_FLAGS::ACCUM8
    case 0xC27464: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:99 STZ a:battler::use_alt_spritemap,X
    case 0xC27466: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/revive_target.asm:100 CLC
    case 0xC27469: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC2746A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    case 0xC2746C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2746C.
    case 0xC2746E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/revive_target.asm:103 LDX @LOCAL05
    case 0xC2746F: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/revive_target.asm:104 INX
    case 0xC27471: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:105 STX @LOCAL05
    case 0xC27472: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    case 0xC27474: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27474.
    case 0xC27476: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:108 BCC @UNKNOWN3
    case 0xC27477: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/battle/revive_target.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC27479: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:110 LDA #1
    case 0xC2747B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    case 0xC2747D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2747B.
    case 0xC2747E: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    case 0xC2747F: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC2747E.
    case 0xC27480: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27480.
    case 0xC27481: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/revive_target.asm:116 LDX #1
    case 0xC27482: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/revive_target.asm:116 LDX #1
    // Overlapping static entry reached from 0xC27482.
    case 0xC27484: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/revive_target.asm:118 STX @LOCAL05
    case 0xC27485: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:119 BRA @UNKNOWN6
    case 0xC27487: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/battle/revive_target.asm:121 STX @VIRTUAL02
    case 0xC27489: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/revive_target.asm:122 LDX @VIRTUAL04
    case 0xC2748B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC2748D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:124 LDA a:battler::vram_sprite_index,X
    case 0xC2748F: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/revive_target.asm:125 AND #$00FF
    case 0xC27492: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC27492.
    case 0xC27494: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/revive_target.asm:126 ASL
    case 0xC27495: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:127 ASL
    case 0xC27496: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:128 ASL
    case 0xC27497: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:129 ASL
    case 0xC27498: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:130 CLC
    case 0xC27499: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:131 ADC @VIRTUAL02
    case 0xC2749A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/revive_target.asm:132 ASL
    case 0xC2749C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:133 TAX
    case 0xC2749D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:134 STZ PALETTES + BPP4PALETTE_SIZE * 12,X
    case 0xC2749E: cpu.execute_instruction<0x9E>(0x000380, 3); return true;
    // src/battle/revive_target.asm:135 LDX @LOCAL05
    case 0xC274A1: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/revive_target.asm:136 INX
    case 0xC274A3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:137 STX @LOCAL05
    case 0xC274A4: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:139 CPX #16
    case 0xC274A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/revive_target.asm:139 CPX #16
    // Overlapping static entry reached from 0xC274A6.
    case 0xC274A8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:140 BCC @UNKNOWN5
    case 0xC274A9: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/battle/revive_target.asm:141 REP #PROC_FLAGS::ACCUM8
    case 0xC274AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:142 LDA #10
    case 0xC274AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/revive_target.asm:142 LDA #10
    // Overlapping static entry reached from 0xC274AD.
    case 0xC274AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:143 JSL UNKNOWN_C2FAD8
    case 0xC274B0: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/battle/revive_target.asm:144 LDA #1
    case 0xC274B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:144 LDA #1
    // Overlapping static entry reached from 0xC274B4.
    case 0xC274B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:145 STA @VIRTUAL02
    case 0xC274B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/revive_target.asm:146 BRA @UNKNOWN8
    case 0xC274B9: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/revive_target.asm:148 LDA #31
    case 0xC274BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:148 LDA #31
    // Overlapping static entry reached from 0xC274BB.
    case 0xC274BD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:149 STA @LOCAL00
    case 0xC274BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/revive_target.asm:150 TAY
    case 0xC274C0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:151 TAX
    case 0xC274C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:152 STX @LOCAL03
    case 0xC274C2: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/revive_target.asm:153 LDX @VIRTUAL04
    case 0xC274C4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:154 LDA a:battler::vram_sprite_index,X
    case 0xC274C6: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/revive_target.asm:155 AND #$00FF
    case 0xC274C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:155 AND #$00FF
    // Overlapping static entry reached from 0xC274C9.
    case 0xC274CB: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/revive_target.asm:156 ASL
    case 0xC274CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:157 ASL
    case 0xC274CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:158 ASL
    case 0xC274CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:159 ASL
    case 0xC274CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:160 CLC
    case 0xC274D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:161 ADC @VIRTUAL02
    case 0xC274D1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/revive_target.asm:162 LDX @LOCAL03
    case 0xC274D3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/revive_target.asm:163 JSL UNKNOWN_C2FB35
    case 0xC274D5: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/battle/revive_target.asm:164 INC @VIRTUAL02
    case 0xC274D9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/revive_target.asm:166 LDA @VIRTUAL02
    case 0xC274DB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/revive_target.asm:167 CMP #16
    case 0xC274DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/revive_target.asm:167 CMP #16
    // Overlapping static entry reached from 0xC274DD.
    case 0xC274DF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:168 BCC @UNKNOWN7
    case 0xC274E0: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    case 0xC274E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC274E2.
    case 0xC274E4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/revive_target.asm:170 JSR WAIT
    case 0xC274E5: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/revive_target.asm:171 LDA #20
    case 0xC274E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/revive_target.asm:171 LDA #20
    // Overlapping static entry reached from 0xC274E8.
    case 0xC274EA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:172 JSL UNKNOWN_C2FAD8
    case 0xC274EB: cpu.execute_instruction<0x22>(0xC2FAD8, 4); return true;
    // src/battle/revive_target.asm:173 LDA #1
    case 0xC274EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:173 LDA #1
    // Overlapping static entry reached from 0xC274EF.
    case 0xC274F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:174 STA @VIRTUAL02
    case 0xC274F2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/revive_target.asm:175 BRA @UNKNOWN10
    case 0xC274F4: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/battle/revive_target.asm:177 LDX @VIRTUAL04
    case 0xC274F6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:178 LDA a:battler::vram_sprite_index,X
    case 0xC274F8: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/revive_target.asm:179 AND #$00FF
    case 0xC274FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC274FB.
    case 0xC274FD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/revive_target.asm:180 ASL
    case 0xC274FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:181 ASL
    case 0xC274FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:182 ASL
    case 0xC27500: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:183 ASL
    case 0xC27501: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:184 CLC
    case 0xC27502: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:185 ADC @VIRTUAL02
    case 0xC27503: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/revive_target.asm:186 STA @LOCAL02ALT
    case 0xC27505: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/revive_target.asm:187 ASL
    case 0xC27507: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:188 TAX
    case 0xC27508: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:189 LDA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC27509: cpu.execute_instruction<0xBD>(0x000300, 3); return true;
    // src/battle/revive_target.asm:190 TAX
    case 0xC2750C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:191 STX @LOCAL03ALT
    case 0xC2750D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/revive_target.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC2750F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:193 LDA #10
    case 0xC27511: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00480A, 3); return true;
    // src/battle/revive_target.asm:194 PHA
    case 0xC27513: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/revive_target.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC27514: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:196 TXA
    case 0xC27516: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC27517: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/revive_target.asm:198 PLY
    case 0xC27519: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:199 JSL ASR8_UNKNOWN1
    case 0xC2751A: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/battle/revive_target.asm:200 AND #$001F
    case 0xC2751E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:200 AND #$001F
    // Overlapping static entry reached from 0xC2751E.
    case 0xC27520: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:201 STA @LOCAL00
    case 0xC27521: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/revive_target.asm:202 REP #PROC_FLAGS::INDEX8
    case 0xC27523: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/revive_target.asm:203 LDX @LOCAL03ALT
    case 0xC27525: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/revive_target.asm:204 TXA
    case 0xC27527: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:205 LSR
    case 0xC27528: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:206 LSR
    case 0xC27529: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:207 LSR
    case 0xC2752A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:208 LSR
    case 0xC2752B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:209 LSR
    case 0xC2752C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:210 AND #$001F
    case 0xC2752D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:210 AND #$001F
    // Overlapping static entry reached from 0xC2752D.
    case 0xC2752F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/revive_target.asm:211 TAY
    case 0xC27530: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:212 TXA
    case 0xC27531: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:213 AND #$001F
    case 0xC27532: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:213 AND #$001F
    // Overlapping static entry reached from 0xC27532.
    case 0xC27534: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/revive_target.asm:214 TAX
    case 0xC27535: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:215 LDA @LOCAL02ALT
    case 0xC27536: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/revive_target.asm:216 JSL UNKNOWN_C2FB35
    case 0xC27538: cpu.execute_instruction<0x22>(0xC2FB35, 4); return true;
    // src/battle/revive_target.asm:217 INC @VIRTUAL02
    case 0xC2753C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/revive_target.asm:219 LDA @VIRTUAL02
    case 0xC2753E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/revive_target.asm:220 CMP #16
    case 0xC27540: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/revive_target.asm:220 CMP #16
    // Overlapping static entry reached from 0xC27540.
    case 0xC27542: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:221 BCC @UNKNOWN9
    case 0xC27543: cpu.execute_instruction<0x90>(0x0000B1, 2); return true;
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC27545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC27545.
    case 0xC27547: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/revive_target.asm:223 JSR WAIT
    case 0xC27548: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/revive_target.asm:225 LDA #1
    case 0xC2754B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:225 LDA #1
    // Overlapping static entry reached from 0xC2754B.
    case 0xC2754D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC2754E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC2754F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/select_stealable_item.asm (source_named).
bool execute_battle_select_stealable_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/select_stealable_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24316: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC24318: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC24319: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC2431A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2431A.
    case 0xC2431C: cpu.execute_instruction<0xFF>(0xDC205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC2431D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:8 JSR FIND_STEALABLE_ITEMS
    case 0xC2431E: cpu.execute_instruction<0x20>(0x0041DC, 3); return true;
    // src/battle/select_stealable_item.asm:8 JSR FIND_STEALABLE_ITEMS
    // Overlapping static entry reached from 0xC2431C.
    case 0xC24320: cpu.execute_instruction<0x41>(0x0000AA, 2); return true;
    // src/battle/select_stealable_item.asm:9 TAX
    case 0xC24321: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:10 STX @LOCAL00
    case 0xC24322: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/select_stealable_item.asm:11 BNE @UNKNOWN0
    case 0xC24324: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/select_stealable_item.asm:12 LDA #0
    case 0xC24326: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/select_stealable_item.asm:12 LDA #0
    // Overlapping static entry reached from 0xC24326.
    case 0xC24328: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/select_stealable_item.asm:13 BRA @UNKNOWN2
    case 0xC24329: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/battle/select_stealable_item.asm:15 JSL RAND
    case 0xC2432B: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/select_stealable_item.asm:16 AND #$0080
    case 0xC2432F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/battle/select_stealable_item.asm:16 AND #$0080
    // Overlapping static entry reached from 0xC2432F.
    case 0xC24331: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/select_stealable_item.asm:17 BEQ @UNKNOWN1
    case 0xC24332: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/select_stealable_item.asm:18 LDA #0
    case 0xC24334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/select_stealable_item.asm:18 LDA #0
    // Overlapping static entry reached from 0xC24334.
    case 0xC24336: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/select_stealable_item.asm:19 BRA @UNKNOWN2
    case 0xC24337: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/select_stealable_item.asm:21 LDX @LOCAL00
    case 0xC24339: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/select_stealable_item.asm:22 TXA
    case 0xC2433B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:23 JSR RAND_LIMIT
    case 0xC2433C: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/select_stealable_item.asm:24 TAX
    case 0xC2433F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:25 LDA STEALABLE_ITEM_CANDIDATES,X
    case 0xC24340: cpu.execute_instruction<0xBD>(0x00A9D4, 3); return true;
    // src/battle/select_stealable_item.asm:26 AND #$00FF
    case 0xC24343: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/select_stealable_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC24343.
    case 0xC24345: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/select_stealable_item.asm:28 END_C_FUNCTION
    case 0xC24346: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/select_stealable_item.asm:28 END_C_FUNCTION
    case 0xC24347: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/set_hp.asm (source_named).
bool execute_battle_set_hp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/set_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC27126: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27128: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27129: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2712A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2712B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2712B.
    case 0xC2712D: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2712E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2712F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/set_hp.asm:10 TXY
    case 0xC27130: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/set_hp.asm:11 STY @LOCAL01
    case 0xC27131: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_hp.asm:12 TAX
    case 0xC27133: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_hp.asm:13 LDA a:battler::hp_max,X
    case 0xC27134: cpu.execute_instruction<0xBD>(0x000015, 3); return true;
    // src/battle/set_hp.asm:14 STA @LOCAL00
    case 0xC27137: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/set_hp.asm:15 STA @VIRTUAL02
    case 0xC27139: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/set_hp.asm:16 TYA
    case 0xC2713B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:17 CMP @VIRTUAL02
    case 0xC2713C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/set_hp.asm:18 BLTEQ @UNKNOWN0
    case 0xC2713E: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/set_hp.asm:18 BLTEQ @UNKNOWN0
    case 0xC27140: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/set_hp.asm:19 LDA @LOCAL00
    case 0xC27142: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/set_hp.asm:20 TAY
    case 0xC27144: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/set_hp.asm:21 STY @LOCAL01
    case 0xC27145: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_hp.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC27147: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/set_hp.asm:24 AND #$00FF
    case 0xC2714A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC2714A.
    case 0xC2714C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_hp.asm:25 BNE @UNKNOWN2
    case 0xC2714D: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/battle/set_hp.asm:26 LDA a:battler::npc_id,X
    case 0xC2714F: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/set_hp.asm:27 AND #$00FF
    case 0xC27152: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC27152.
    case 0xC27154: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_hp.asm:28 BNE @UNKNOWN1
    case 0xC27155: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/set_hp.asm:29 TYA
    case 0xC27157: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:30 STA a:battler::hp_target,X
    case 0xC27158: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/set_hp.asm:31 LDA a:battler::row,X
    case 0xC2715B: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/set_hp.asm:32 AND #$00FF
    case 0xC2715E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC2715E.
    case 0xC27160: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/set_hp.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC27161: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/set_hp.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27161.
    case 0xC27163: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/set_hp.asm:34 JSL MULT168
    case 0xC27164: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/set_hp.asm:35 TAX
    case 0xC27168: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_hp.asm:36 LDY @LOCAL01
    case 0xC27169: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/set_hp.asm:37 TYA
    case 0xC2716B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:38 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC2716C: cpu.execute_instruction<0x9D>(0x009A15, 3); return true;
    // src/battle/set_hp.asm:39 BRA @UNKNOWN3
    case 0xC2716F: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/battle/set_hp.asm:41 TYA
    case 0xC27171: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:42 STA a:battler::hp,X
    case 0xC27172: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/set_hp.asm:43 TYA
    case 0xC27175: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:44 STA a:battler::hp_target,X
    case 0xC27176: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/set_hp.asm:45 LDA a:battler::row,X
    case 0xC27179: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/set_hp.asm:46 AND #$00FF
    case 0xC2717C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC2717C.
    case 0xC2717E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/set_hp.asm:47 ASL
    case 0xC2717F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/set_hp.asm:55 TAX
    case 0xC27180: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_hp.asm:56 TYA
    case 0xC27181: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:57 STA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC27182: cpu.execute_instruction<0x9D>(0x00983C, 3); return true;
    // src/battle/set_hp.asm:59 BRA @UNKNOWN3
    case 0xC27185: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/set_hp.asm:61 TYA
    case 0xC27187: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:62 STA a:battler::hp,X
    case 0xC27188: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/set_hp.asm:63 TYA
    case 0xC2718B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:64 STA a:battler::hp_target,X
    case 0xC2718C: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/set_hp.asm:66 END_C_FUNCTION
    case 0xC2718F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/set_hp.asm:66 END_C_FUNCTION
    case 0xC27190: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/set_pp.asm (source_named).
bool execute_battle_set_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/set_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC27191: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27193: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27194: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27195: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27196: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC27196.
    case 0xC27198: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC27199: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC2719A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/set_pp.asm:10 TXY
    case 0xC2719B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/set_pp.asm:11 STY @LOCAL01
    case 0xC2719C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_pp.asm:12 TAX
    case 0xC2719E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_pp.asm:13 LDA a:battler::pp_max,X
    case 0xC2719F: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/set_pp.asm:14 STA @LOCAL00
    case 0xC271A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/set_pp.asm:15 STA @VIRTUAL02
    case 0xC271A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/set_pp.asm:16 TYA
    case 0xC271A6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:17 CMP @VIRTUAL02
    case 0xC271A7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/set_pp.asm:18 BLTEQ @UNKNOWN0
    case 0xC271A9: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/set_pp.asm:18 BLTEQ @UNKNOWN0
    case 0xC271AB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/set_pp.asm:19 LDA @LOCAL00
    case 0xC271AD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/set_pp.asm:20 TAY
    case 0xC271AF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/set_pp.asm:21 STY @LOCAL01
    case 0xC271B0: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_pp.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC271B2: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/set_pp.asm:24 AND #$00FF
    case 0xC271B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_pp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC271B5.
    case 0xC271B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_pp.asm:25 BNE @UNKNOWN2
    case 0xC271B8: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/battle/set_pp.asm:26 LDA a:battler::npc_id,X
    case 0xC271BA: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/set_pp.asm:27 AND #$00FF
    case 0xC271BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_pp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC271BD.
    case 0xC271BF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_pp.asm:28 BNE @UNKNOWN1
    case 0xC271C0: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/set_pp.asm:29 TYA
    case 0xC271C2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:30 STA a:battler::pp_target,X
    case 0xC271C3: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // src/battle/set_pp.asm:31 LDA a:battler::row,X
    case 0xC271C6: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/set_pp.asm:32 AND #$00FF
    case 0xC271C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_pp.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC271C9.
    case 0xC271CB: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/set_pp.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC271CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/set_pp.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC271CC.
    case 0xC271CE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/set_pp.asm:34 JSL MULT168
    case 0xC271CF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/set_pp.asm:35 TAX
    case 0xC271D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_pp.asm:36 LDY @LOCAL01
    case 0xC271D4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/set_pp.asm:37 TYA
    case 0xC271D6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:38 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC271D7: cpu.execute_instruction<0x9D>(0x009A1B, 3); return true;
    // src/battle/set_pp.asm:39 BRA @UNKNOWN3
    case 0xC271DA: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/battle/set_pp.asm:41 TYA
    case 0xC271DC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:42 STA a:battler::pp,X
    case 0xC271DD: cpu.execute_instruction<0x9D>(0x000017, 3); return true;
    // src/battle/set_pp.asm:43 TYA
    case 0xC271E0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:44 STA a:battler::pp_target,X
    case 0xC271E1: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // src/battle/set_pp.asm:45 BRA @UNKNOWN3
    case 0xC271E4: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/set_pp.asm:47 TYA
    case 0xC271E6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:48 STA a:battler::pp,X
    case 0xC271E7: cpu.execute_instruction<0x9D>(0x000017, 3); return true;
    // src/battle/set_pp.asm:49 TYA
    case 0xC271EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:50 STA a:battler::pp_target,X
    case 0xC271EB: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/set_pp.asm:52 END_C_FUNCTION
    case 0xC271EE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/set_pp.asm:52 END_C_FUNCTION
    case 0xC271EF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/show_psi_animation.asm (source_named).
bool execute_battle_show_psi_animation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/show_psi_animation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E116: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E118: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E119: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E11B.
    case 0xC2E11D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/show_psi_animation.asm:14 END_STACK_VARS
    case 0xC2E11F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:15 STA @VIRTUAL02
    case 0xC2E120: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E11D.
    case 0xC2E121: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/battle/show_psi_animation.asm:16 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E122: cpu.execute_instruction<0xAD>(0x00ADD5, 3); return true;
    // src/battle/show_psi_animation.asm:17 AND #$00FF
    case 0xC2E125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC2E125.
    case 0xC2E127: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:18 CMP #2
    case 0xC2E128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/show_psi_animation.asm:18 CMP #2
    // Overlapping static entry reached from 0xC2E128.
    case 0xC2E12A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation.asm:19 BNE @UNKNOWN1
    case 0xC2E12B: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E12D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E12D.
    case 0xC2E12F: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E130: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E132.
    case 0xC2E134: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:20 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E135: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E137: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E139: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E13B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:21 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E13D: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E13F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E13F.
    case 0xC2E141: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E142: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E144: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E144.
    case 0xC2E146: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:22 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E147: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:23 LDA @VIRTUAL02
    case 0xC2E149: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E14B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E14D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E14E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E150: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:24 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E151: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:25 TAX
    case 0xC2E152: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:26 LDA f:PSI_ANIM_CFG,X
    case 0xC2E153: cpu.execute_instruction<0xBF>(0xCCF04D, 4); return true;
    // src/battle/show_psi_animation.asm:27 CLC
    case 0xC2E157: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:28 ADC @VIRTUAL06
    case 0xC2E158: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:29 STA @VIRTUAL06
    case 0xC2E15A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:30 STA @LOCAL00
    case 0xC2E15C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/show_psi_animation.asm:31 LDA @VIRTUAL06+2
    case 0xC2E15E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:32 STA @LOCAL00+2
    case 0xC2E160: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E162: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E164: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E166: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E183.
    case 0xC2E167: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E168: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:33 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E167.
    case 0xC2E169: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E16A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E16C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E16E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E170: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/show_psi_animation.asm:35 JSL DECOMP
    case 0xC2E172: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E176: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E178: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E17A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E17C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E17E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E17E.
    case 0xC2E180: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E181: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E181.
    case 0xC2E183: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E184: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E183.
    case 0xC2E185: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E186: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E187: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E185.
    case 0xC2E188: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:36 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E188.
    case 0xC2E18A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0060A9, 3); return true;
    // src/battle/show_psi_animation.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    case 0xC2E18B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x000260, 3); return true;
    // src/battle/show_psi_animation.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E18A.
    case 0xC2E18C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E18B.
    case 0xC2E18D: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:39 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E18E: cpu.execute_instruction<0x8D>(0x001BCA, 3); return true;
    // src/battle/show_psi_animation.asm:40 JMP @UNKNOWN6
    case 0xC2E191: cpu.execute_instruction<0x4C>(0x00E2F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E194.
    case 0xC2E196: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E197: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E199: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E199.
    case 0xC2E19B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:42 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E19C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E19E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E1A0: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E1A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:43 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E1A4: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E1A6.
    case 0xC2E1A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E1AB.
    case 0xC2E1AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:44 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL06
    case 0xC2E1AE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:45 LDA @VIRTUAL02
    case 0xC2E1B0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E1B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:47 TAX
    case 0xC2E1B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:48 LDA f:PSI_ANIM_CFG,X
    case 0xC2E1BA: cpu.execute_instruction<0xBF>(0xCCF04D, 4); return true;
    // src/battle/show_psi_animation.asm:49 CLC
    case 0xC2E1BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:50 ADC @VIRTUAL06
    case 0xC2E1BF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:51 STA @VIRTUAL06
    case 0xC2E1C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:52 STA @LOCAL00
    case 0xC2E1C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/show_psi_animation.asm:53 LDA @VIRTUAL06+2
    case 0xC2E1C5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:54 STA @LOCAL00+2
    case 0xC2E1C7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1C9: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1CD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:55 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2E1CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E1D7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/show_psi_animation.asm:57 JSL DECOMP
    case 0xC2E1D9: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E1DD.
    case 0xC2E1DF: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E1E2.
    case 0xC2E1E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:58 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E1E5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation.asm:59 LDX #0
    case 0xC2E1E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/show_psi_animation.asm:59 LDX #0
    // Overlapping static entry reached from 0xC2E1E7.
    case 0xC2E1E9: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/show_psi_animation.asm:60 JMP @UNKNOWN4
    case 0xC2E1EA: cpu.execute_instruction<0x4C>(0x00E2C9, 3); return true;
    // src/battle/show_psi_animation.asm:62 LDA [@VIRTUAL06]
    case 0xC2E1ED: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:63 STA [@VIRTUAL0A]
    case 0xC2E1EF: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:64 INC @VIRTUAL06
    case 0xC2E1F1: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:65 INC @VIRTUAL06
    case 0xC2E1F3: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:66 INC @VIRTUAL0A
    case 0xC2E1F5: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:67 INC @VIRTUAL0A
    case 0xC2E1F7: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:68 LDA [@VIRTUAL06]
    case 0xC2E1F9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:69 STA [@VIRTUAL0A]
    case 0xC2E1FB: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:70 INC @VIRTUAL06
    case 0xC2E1FD: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:71 INC @VIRTUAL06
    case 0xC2E1FF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:72 INC @VIRTUAL0A
    case 0xC2E201: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:73 INC @VIRTUAL0A
    case 0xC2E203: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:74 LDA [@VIRTUAL06]
    case 0xC2E205: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:75 STA [@VIRTUAL0A]
    case 0xC2E207: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:76 INC @VIRTUAL06
    case 0xC2E209: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:77 INC @VIRTUAL06
    case 0xC2E20B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:78 INC @VIRTUAL0A
    case 0xC2E20D: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:79 INC @VIRTUAL0A
    case 0xC2E20F: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:80 LDA [@VIRTUAL06]
    case 0xC2E211: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:81 STA [@VIRTUAL0A]
    case 0xC2E213: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:82 INC @VIRTUAL06
    case 0xC2E215: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:83 INC @VIRTUAL06
    case 0xC2E217: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E219: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E21B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E21D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:84 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E21F: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E221: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E223: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E225: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:85 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E227: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:86 INC @VIRTUAL06
    case 0xC2E229: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:87 INC @VIRTUAL06
    case 0xC2E22B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:88 LDA [@LOCAL07]
    case 0xC2E22D: cpu.execute_instruction<0xA7>(0x000024, 2); return true;
    // src/battle/show_psi_animation.asm:89 STA [@VIRTUAL06]
    case 0xC2E22F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E231: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E233: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E235: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:90 MOVE_INT @LOCAL07, @VIRTUAL0A
    case 0xC2E237: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation.asm:91 INC @VIRTUAL0A
    case 0xC2E239: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:92 INC @VIRTUAL0A
    case 0xC2E23B: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:93 INC @VIRTUAL06
    case 0xC2E23D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:94 INC @VIRTUAL06
    case 0xC2E23F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:95 LDA [@VIRTUAL0A]
    case 0xC2E241: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:96 STA [@VIRTUAL06]
    case 0xC2E243: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:97 INC @VIRTUAL0A
    case 0xC2E245: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:98 INC @VIRTUAL0A
    case 0xC2E247: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:99 INC @VIRTUAL06
    case 0xC2E249: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:100 INC @VIRTUAL06
    case 0xC2E24B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E24D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E24F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E251: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:101 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E253: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/show_psi_animation.asm:102 LDA [@VIRTUAL0A]
    case 0xC2E255: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:103 STA [@VIRTUAL06]
    case 0xC2E257: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E259: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E25B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E2D5.
    case 0xC2E25C: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E25D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E25C.
    case 0xC2E25E: cpu.execute_instruction<0x0C>(0x000885, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:104 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E25F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:105 INC @VIRTUAL06
    case 0xC2E261: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:106 INC @VIRTUAL06
    case 0xC2E263: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E265: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E267: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E269: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:107 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E26B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E26D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E26F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E271: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:108 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC2E273: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E275: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E277: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E279: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2E27B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation.asm:110 INC @VIRTUAL0A
    case 0xC2E27D: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:111 INC @VIRTUAL0A
    case 0xC2E27F: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:112 LDA [@LOCAL05]
    case 0xC2E281: cpu.execute_instruction<0xA7>(0x00001C, 2); return true;
    // src/battle/show_psi_animation.asm:113 STA [@VIRTUAL0A]
    case 0xC2E283: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E285: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E287: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E289: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    // Overlapping static entry reached from 0xC24CC0.
    case 0xC2E28A: cpu.execute_instruction<0x1E>(0x000885, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:114 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC2E28B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:115 INC @VIRTUAL06
    case 0xC2E28D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:116 INC @VIRTUAL06
    case 0xC2E28F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:117 INC @VIRTUAL0A
    case 0xC2E291: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:118 INC @VIRTUAL0A
    case 0xC2E293: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:119 LDA #0
    case 0xC2E295: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/show_psi_animation.asm:119 LDA #0
    // Overlapping static entry reached from 0xC2E295.
    case 0xC2E297: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/battle/show_psi_animation.asm:120 STA [@VIRTUAL0A]
    case 0xC2E298: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:121 INC @VIRTUAL0A
    case 0xC2E29A: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:122 INC @VIRTUAL0A
    case 0xC2E29C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:123 STA [@VIRTUAL0A]
    case 0xC2E29E: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:124 INC @VIRTUAL0A
    case 0xC2E2A0: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:125 INC @VIRTUAL0A
    case 0xC2E2A2: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:126 STA [@VIRTUAL0A]
    case 0xC2E2A4: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:127 INC @VIRTUAL0A
    case 0xC2E2A6: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:128 INC @VIRTUAL0A
    case 0xC2E2A8: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:129 STA [@VIRTUAL0A]
    case 0xC2E2AA: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:130 INC @VIRTUAL0A
    case 0xC2E2AC: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:131 INC @VIRTUAL0A
    case 0xC2E2AE: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:132 STA [@VIRTUAL0A]
    case 0xC2E2B0: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:133 INC @VIRTUAL0A
    case 0xC2E2B2: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:134 INC @VIRTUAL0A
    case 0xC2E2B4: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:135 STA [@VIRTUAL0A]
    case 0xC2E2B6: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:136 INC @VIRTUAL0A
    case 0xC2E2B8: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:137 INC @VIRTUAL0A
    case 0xC2E2BA: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:138 STA [@VIRTUAL0A]
    case 0xC2E2BC: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:139 INC @VIRTUAL0A
    case 0xC2E2BE: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:140 INC @VIRTUAL0A
    case 0xC2E2C0: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:141 STA [@VIRTUAL0A]
    case 0xC2E2C2: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:142 INC @VIRTUAL0A
    case 0xC2E2C4: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:143 INC @VIRTUAL0A
    case 0xC2E2C6: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:144 INX
    case 0xC2E2C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:146 CPX #256
    case 0xC2E2C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/battle/show_psi_animation.asm:146 CPX #256
    // Overlapping static entry reached from 0xC2E2C9.
    case 0xC2E2CB: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    case 0xC2E2CC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E2CB.
    case 0xC2E2CD: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    case 0xC2E2CE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E2CD.
    case 0xC2E2CF: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    case 0xC2E2D0: cpu.execute_instruction<0x4C>(0x00E1ED, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:147 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E2CF.
    case 0xC2E2D1: cpu.execute_instruction<0xED>(0x00A9E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2D1.
    case 0xC2E2D4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2D3.
    case 0xC2E2D5: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2D8.
    case 0xC2E2DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2DB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2DD.
    case 0xC2E2DF: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E2E0.
    case 0xC2E2E2: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation.asm:148 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E2E6: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // src/battle/show_psi_animation.asm:150 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2E2EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/show_psi_animation.asm:150 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2E2EA.
    case 0xC2E2EC: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:151 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E2ED: cpu.execute_instruction<0x8D>(0x001BCA, 3); return true;
    // src/battle/show_psi_animation.asm:153 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC2E2F0: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00F47F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E2F4.
    case 0xC2E2F6: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E2F9.
    case 0xC2E2FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:154 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E2FC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:155 LDA @VIRTUAL02
    case 0xC2E2FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:156 ASL
    case 0xC2E300: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:157 ASL
    case 0xC2E301: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:158 ASL
    case 0xC2E302: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:159 CLC
    case 0xC2E303: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:160 ADC @VIRTUAL06
    case 0xC2E304: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:161 STA @VIRTUAL06
    case 0xC2E306: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:162 STA @LOCAL00
    case 0xC2E308: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/show_psi_animation.asm:163 LDA @VIRTUAL06+2
    case 0xC2E30A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:164 STA @LOCAL00+2
    case 0xC2E30C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/show_psi_animation.asm:165 LDX #8
    case 0xC2E30E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:165 LDX #8
    // Overlapping static entry reached from 0xC2E30E.
    case 0xC2E310: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/show_psi_animation.asm:166 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    case 0xC2E311: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x001BAA, 3); return true;
    // src/battle/show_psi_animation.asm:166 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    // Overlapping static entry reached from 0xC2E311.
    case 0xC2E313: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:167 JSL MEMCPY16
    case 0xC2E314: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E318: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E31A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E31C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:168 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E31E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/show_psi_animation.asm:169 LDX #8
    case 0xC2E320: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:169 LDX #8
    // Overlapping static entry reached from 0xC2E320.
    case 0xC2E322: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/show_psi_animation.asm:170 LDA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E323: cpu.execute_instruction<0xAD>(0x001BCA, 3); return true;
    // src/battle/show_psi_animation.asm:171 JSL MEMCPY16
    case 0xC2E326: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E32A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E32A.
    case 0xC2E32C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E32D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E32F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E32F.
    case 0xC2E331: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:172 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E332: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E334: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E336: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E338: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:173 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E33A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E33C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E33E: cpu.execute_instruction<0x8D>(0x001BA1, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E341: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:174 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E343: cpu.execute_instruction<0x8D>(0x001BA3, 3); return true;
    // src/battle/show_psi_animation.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E346: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:176 LDA #1
    case 0xC2E348: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/show_psi_animation.asm:177 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E34A: cpu.execute_instruction<0x8D>(0x001B9E, 3); return true;
    // src/battle/show_psi_animation.asm:177 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E348.
    case 0xC2E34B: cpu.execute_instruction<0x9E>(0x00C21B, 3); return true;
    // src/battle/show_psi_animation.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC2E34D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:178 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E34B.
    case 0xC2E34E: cpu.execute_instruction<0x20>(0x004DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E34F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004D, 2); else cpu.execute_instruction<0xA9>(0x00F04D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E34F.
    case 0xC2E351: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E352: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E351.
    case 0xC2E353: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E353.
    case 0xC2E355: cpu.execute_instruction<0xCC>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E354.
    case 0xC2E356: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E357: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:179 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E355.
    case 0xC2E358: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E359: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E35B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E35D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:180 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2E35F: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/show_psi_animation.asm:181 LDA @VIRTUAL02
    case 0xC2E361: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E363: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E365: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E366: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E368: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:182 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E369: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:183 STA @LOCAL04
    case 0xC2E36A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:184 INC
    case 0xC2E36C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:185 INC
    case 0xC2E36D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:186 CLC
    case 0xC2E36E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:187 ADC @VIRTUAL06
    case 0xC2E36F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:188 STA @VIRTUAL06
    case 0xC2E371: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:189 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E373: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:190 LDA [@VIRTUAL06]
    case 0xC2E375: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:191 STA PSI_ANIMATION_STATE + psi_animation_state::frame_hold_frames
    case 0xC2E377: cpu.execute_instruction<0x8D>(0x001B9F, 3); return true;
    // src/battle/show_psi_animation.asm:192 REP #PROC_FLAGS::ACCUM8
    case 0xC2E37A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:193 LDA @LOCAL04
    case 0xC2E37C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:194 CLC
    case 0xC2E37E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:195 ADC #6
    case 0xC2E37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/battle/show_psi_animation.asm:195 ADC #6
    // Overlapping static entry reached from 0xC2E37F.
    case 0xC2E381: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E382: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E384: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E386: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E388: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:197 CLC
    case 0xC2E38A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:198 ADC @VIRTUAL06
    case 0xC2E38B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:199 STA @VIRTUAL06
    case 0xC2E38D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:200 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E38F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:201 LDA [@VIRTUAL06]
    case 0xC2E391: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:202 STA PSI_ANIMATION_STATE + psi_animation_state::total_frames
    case 0xC2E393: cpu.execute_instruction<0x8D>(0x001BA0, 3); return true;
    // src/battle/show_psi_animation.asm:203 REP #PROC_FLAGS::ACCUM8
    case 0xC2E396: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:204 LDA @LOCAL04
    case 0xC2E398: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:205 INC
    case 0xC2E39A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:206 INC
    case 0xC2E39B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:207 INC
    case 0xC2E39C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E39D: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E39F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3A1: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:208 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3A3: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:209 CLC
    case 0xC2E3A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:210 ADC @VIRTUAL06
    case 0xC2E3A6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:211 STA @VIRTUAL06
    case 0xC2E3A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E3AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:213 LDA [@VIRTUAL06]
    case 0xC2E3AC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:214 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_frames
    case 0xC2E3AE: cpu.execute_instruction<0x8D>(0x001BA8, 3); return true;
    // src/battle/show_psi_animation.asm:215 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:216 LDA @LOCAL04
    case 0xC2E3B3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:217 INC
    case 0xC2E3B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:218 INC
    case 0xC2E3B6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:219 INC
    case 0xC2E3B7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:220 INC
    case 0xC2E3B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3B9: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3BB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3BD: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:221 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3BF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:222 CLC
    case 0xC2E3C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:223 ADC @VIRTUAL06
    case 0xC2E3C2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:224 STA @VIRTUAL06
    case 0xC2E3C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E3C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:226 LDA [@VIRTUAL06]
    case 0xC2E3C8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:227 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E3CA: cpu.execute_instruction<0x8D>(0x001BA5, 3); return true;
    // src/battle/show_psi_animation.asm:228 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:229 LDA @LOCAL04
    case 0xC2E3CF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:230 CLC
    case 0xC2E3D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:231 ADC #5
    case 0xC2E3D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/battle/show_psi_animation.asm:231 ADC #5
    // Overlapping static entry reached from 0xC2E3D2.
    case 0xC2E3D4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3D5: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3D7: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3D9: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:232 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3DB: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:233 CLC
    case 0xC2E3DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:234 ADC @VIRTUAL06
    case 0xC2E3DE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:235 STA @VIRTUAL06
    case 0xC2E3E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:236 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E3E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:237 LDA [@VIRTUAL06]
    case 0xC2E3E4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:238 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_upper_index
    case 0xC2E3E6: cpu.execute_instruction<0x8D>(0x001BA6, 3); return true;
    // src/battle/show_psi_animation.asm:239 STZ PSI_ANIMATION_STATE + psi_animation_state::palette_animation_current_index
    case 0xC2E3E9: cpu.execute_instruction<0x9C>(0x001BA7, 3); return true;
    // src/battle/show_psi_animation.asm:240 LDA #1
    case 0xC2E3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/show_psi_animation.asm:241 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    case 0xC2E3EE: cpu.execute_instruction<0x8D>(0x001BA9, 3); return true;
    // src/battle/show_psi_animation.asm:241 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E3EC.
    case 0xC2E3EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00C21B, 3); return true;
    // src/battle/show_psi_animation.asm:242 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:242 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E3EF.
    case 0xC2E3F2: cpu.execute_instruction<0x20>(0x001AA5, 3); return true;
    // src/battle/show_psi_animation.asm:243 LDA @LOCAL04
    case 0xC2E3F3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:244 CLC
    case 0xC2E3F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:245 ADC #8
    case 0xC2E3F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:245 ADC #8
    // Overlapping static entry reached from 0xC2E3F6.
    case 0xC2E3F8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3F9: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3FB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3FD: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:246 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E3FF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:247 CLC
    case 0xC2E401: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:248 ADC @VIRTUAL06
    case 0xC2E402: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:249 STA @VIRTUAL06
    case 0xC2E404: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:250 LDA [@VIRTUAL06]
    case 0xC2E406: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:251 AND #$00FF
    case 0xC2E408: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:251 AND #$00FF
    // Overlapping static entry reached from 0xC2E408.
    case 0xC2E40A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:252 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_start_frames_left
    case 0xC2E40B: cpu.execute_instruction<0x8D>(0x001BCC, 3); return true;
    // src/battle/show_psi_animation.asm:253 LDA @LOCAL04
    case 0xC2E40E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:254 CLC
    case 0xC2E410: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:255 ADC #9
    case 0xC2E411: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/show_psi_animation.asm:255 ADC #9
    // Overlapping static entry reached from 0xC2E411.
    case 0xC2E413: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E414: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E416: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E418: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:256 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E41A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:257 CLC
    case 0xC2E41C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:258 ADC @VIRTUAL06
    case 0xC2E41D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:259 STA @VIRTUAL06
    case 0xC2E41F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:260 LDA [@VIRTUAL06]
    case 0xC2E421: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:261 AND #$00FF
    case 0xC2E423: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:261 AND #$00FF
    // Overlapping static entry reached from 0xC2E423.
    case 0xC2E425: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:262 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left
    case 0xC2E426: cpu.execute_instruction<0x8D>(0x001BCE, 3); return true;
    // src/battle/show_psi_animation.asm:263 LDA @LOCAL04
    case 0xC2E429: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:264 CLC
    case 0xC2E42B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:265 ADC #10
    case 0xC2E42C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/battle/show_psi_animation.asm:265 ADC #10
    // Overlapping static entry reached from 0xC2E42C.
    case 0xC2E42E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E42F: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E431: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E433: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation.asm:266 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2E435: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation.asm:267 CLC
    case 0xC2E437: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:268 ADC @VIRTUAL06
    case 0xC2E438: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:269 STA @VIRTUAL06
    case 0xC2E43A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:270 LDA [@VIRTUAL06]
    case 0xC2E43C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:271 AND #$001F
    case 0xC2E43E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/show_psi_animation.asm:271 AND #$001F
    // Overlapping static entry reached from 0xC2E43E.
    case 0xC2E440: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:272 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_red
    case 0xC2E441: cpu.execute_instruction<0x8D>(0x001BD0, 3); return true;
    // src/battle/show_psi_animation.asm:273 LDA [@VIRTUAL06]
    case 0xC2E444: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:274 LSR
    case 0xC2E446: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:275 LSR
    case 0xC2E447: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:276 LSR
    case 0xC2E448: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:277 LSR
    case 0xC2E449: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:278 LSR
    case 0xC2E44A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:279 AND #$001F
    case 0xC2E44B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/show_psi_animation.asm:279 AND #$001F
    // Overlapping static entry reached from 0xC2E44B.
    case 0xC2E44D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:280 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_green
    case 0xC2E44E: cpu.execute_instruction<0x8D>(0x001BD2, 3); return true;
    // src/battle/show_psi_animation.asm:281 SEP #PROC_FLAGS::INDEX8
    case 0xC2E451: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/show_psi_animation.asm:282 LDY #10
    case 0xC2E453: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00A70A, 3); return true;
    // src/battle/show_psi_animation.asm:283 LDA [@VIRTUAL06]
    case 0xC2E455: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:283 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2E453.
    case 0xC2E456: cpu.execute_instruction<0x06>(0x000022, 2); return true;
    // src/battle/show_psi_animation.asm:284 JSL ASR8_UNKNOWN1
    case 0xC2E457: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/battle/show_psi_animation.asm:284 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E456.
    case 0xC2E458: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/battle/show_psi_animation.asm:284 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E458.
    case 0xC2E45A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000029, 2); else cpu.execute_instruction<0xC0>(0x001F29, 3); return true;
    // src/battle/show_psi_animation.asm:285 AND #$001F
    case 0xC2E45B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/show_psi_animation.asm:285 AND #$001F
    // Overlapping static entry reached from 0xC2E45A.
    case 0xC2E45C: cpu.execute_instruction<0x1F>(0xD48D00, 4); return true;
    // src/battle/show_psi_animation.asm:285 AND #$001F
    // Overlapping static entry reached from 0xC2E45B.
    case 0xC2E45D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:286 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    case 0xC2E45E: cpu.execute_instruction<0x8D>(0x001BD4, 3); return true;
    // src/battle/show_psi_animation.asm:286 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    // Overlapping static entry reached from 0xC2E45C.
    case 0xC2E460: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E461: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x00F58F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E461.
    case 0xC2E463: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E464: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E463.
    case 0xC2E465: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E465.
    case 0xC2E467: cpu.execute_instruction<0xCC>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E466.
    case 0xC2E468: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E469: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation.asm:287 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E467.
    case 0xC2E46A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:288 LDA @VIRTUAL02
    case 0xC2E46B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:289 ASL
    case 0xC2E46D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:290 ASL
    case 0xC2E46E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:291 CLC
    case 0xC2E46F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:292 ADC @VIRTUAL06
    case 0xC2E470: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:293 STA @VIRTUAL06
    case 0xC2E472: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation.asm:294 REP #PROC_FLAGS::INDEX8
    case 0xC2E474: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E476: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E476.
    case 0xC2E478: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E479: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E47B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E47C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E47E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/show_psi_animation.asm:295 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E480: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E482: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E484: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E486: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E488: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E48A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E48C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E48E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:297 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E490: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E492: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E494: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E496: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:298 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E498: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/show_psi_animation.asm:299 JSL DECOMP
    case 0xC2E49A: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/battle/show_psi_animation.asm:300 JSL UNKNOWN_C2DE0F
    case 0xC2E49E: cpu.execute_instruction<0x22>(0xC2DE0F, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E4A2.
    case 0xC2E4A4: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E4A4.
    case 0xC2E4A6: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4AA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/show_psi_animation.asm:301 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E4AD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/show_psi_animation.asm:302 REP #PROC_FLAGS::ACCUM8
    case 0xC2E4AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation.asm:303 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E4B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/show_psi_animation.asm:304 LDX #128
    case 0xC2E4B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/battle/show_psi_animation.asm:304 LDX #128
    // Overlapping static entry reached from 0xC2E4B9.
    case 0xC2E4BB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/show_psi_animation.asm:305 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC2E4BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000380, 3); return true;
    // src/battle/show_psi_animation.asm:305 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC2E4BC.
    case 0xC2E4BE: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/battle/show_psi_animation.asm:306 JSL MEMCPY16
    case 0xC2E4BF: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/battle/show_psi_animation.asm:306 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E4BE.
    case 0xC2E4C0: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/battle/show_psi_animation.asm:306 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E4C0.
    case 0xC2E4C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/battle/show_psi_animation.asm:307 LDA #0
    case 0xC2E4C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/show_psi_animation.asm:307 LDA #0
    // Overlapping static entry reached from 0xC2E4C2.
    case 0xC2E4C4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/show_psi_animation.asm:307 LDA #0
    // Overlapping static entry reached from 0xC2E4C3.
    case 0xC2E4C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation.asm:308 STA @LOCAL04
    case 0xC2E4C6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:309 BRA @UNKNOWN8
    case 0xC2E4C8: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:311 ASL
    case 0xC2E4CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:312 TAX
    case 0xC2E4CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:313 STZ PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E4CC: cpu.execute_instruction<0x9E>(0x00AEE7, 3); return true;
    // src/battle/show_psi_animation.asm:314 LDA @LOCAL04
    case 0xC2E4CF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:315 INC
    case 0xC2E4D1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:316 STA @LOCAL04
    case 0xC2E4D2: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:318 CMP #4
    case 0xC2E4D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/show_psi_animation.asm:318 CMP #4
    // Overlapping static entry reached from 0xC2E4D4.
    case 0xC2E4D6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/show_psi_animation.asm:319 BCC @UNKNOWN7
    case 0xC2E4D7: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/battle/show_psi_animation.asm:320 LDX CURRENT_TARGET
    case 0xC2E4D9: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:321 LDA a:battler::consciousness,X
    case 0xC2E4DC: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/show_psi_animation.asm:322 AND #$00FF
    case 0xC2E4DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:322 AND #$00FF
    // Overlapping static entry reached from 0xC2E4DF.
    case 0xC2E4E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation.asm:323 BEQL @UNKNOWN26
    case 0xC2E4E2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:323 BEQL @UNKNOWN26
    case 0xC2E4E4: cpu.execute_instruction<0x4C>(0x00E6B1, 3); return true;
    // src/battle/show_psi_animation.asm:324 LDX CURRENT_TARGET
    case 0xC2E4E7: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:325 LDA a:battler::ally_or_enemy,X
    case 0xC2E4EA: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/show_psi_animation.asm:326 AND #$00FF
    case 0xC2E4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:326 AND #$00FF
    // Overlapping static entry reached from 0xC2E4ED.
    case 0xC2E4EF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:327 CMP #1
    case 0xC2E4F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:327 CMP #1
    // Overlapping static entry reached from 0xC2E4F0.
    case 0xC2E4F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:328 BNEL @UNKNOWN26
    case 0xC2E4F3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:328 BNEL @UNKNOWN26
    case 0xC2E4F5: cpu.execute_instruction<0x4C>(0x00E6B1, 3); return true;
    // src/battle/show_psi_animation.asm:329 STZ PSI_ANIMATION_X_OFFSET
    case 0xC2E4F8: cpu.execute_instruction<0x9C>(0x00AD9A, 3); return true;
    // src/battle/show_psi_animation.asm:330 LDA @VIRTUAL02
    case 0xC2E4FB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E4FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E4FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E500: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E502: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation.asm:331 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E503: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:332 CLC
    case 0xC2E504: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:333 ADC #7
    case 0xC2E505: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/battle/show_psi_animation.asm:333 ADC #7
    // Overlapping static entry reached from 0xC2E505.
    case 0xC2E507: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/show_psi_animation.asm:334 TAX
    case 0xC2E508: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:335 LDA f:PSI_ANIM_CFG,X
    case 0xC2E509: cpu.execute_instruction<0xBF>(0xCCF04D, 4); return true;
    // src/battle/show_psi_animation.asm:336 AND #$00FF
    case 0xC2E50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC2E50D.
    case 0xC2E50F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:337 BEQ @UNKNOWN12
    case 0xC2E510: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/show_psi_animation.asm:338 CMP #3
    case 0xC2E512: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/show_psi_animation.asm:338 CMP #3
    // Overlapping static entry reached from 0xC2E512.
    case 0xC2E514: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:339 BEQ @UNKNOWN12
    case 0xC2E515: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/show_psi_animation.asm:340 CMP #1
    case 0xC2E517: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:340 CMP #1
    // Overlapping static entry reached from 0xC2E517.
    case 0xC2E519: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:341 BEQ @UNKNOWN14
    case 0xC2E51A: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/battle/show_psi_animation.asm:342 CMP #2
    case 0xC2E51C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/show_psi_animation.asm:342 CMP #2
    // Overlapping static entry reached from 0xC2E51C.
    case 0xC2E51E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation.asm:343 BEQL @UNKNOWN20
    case 0xC2E51F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:343 BEQL @UNKNOWN20
    case 0xC2E521: cpu.execute_instruction<0x4C>(0x00E637, 3); return true;
    // src/battle/show_psi_animation.asm:344 JMP @UNKNOWN24
    case 0xC2E524: cpu.execute_instruction<0x4C>(0x00E68C, 3); return true;
    // src/battle/show_psi_animation.asm:346 LDX CURRENT_TARGET
    case 0xC2E527: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:347 LDA a:battler::sprite_x,X
    case 0xC2E52A: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/show_psi_animation.asm:348 AND #$00FF
    case 0xC2E52D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:348 AND #$00FF
    // Overlapping static entry reached from 0xC2E52D.
    case 0xC2E52F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation.asm:349 STA @VIRTUAL02
    case 0xC2E530: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:350 LDA #128
    case 0xC2E532: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/show_psi_animation.asm:350 LDA #128
    // Overlapping static entry reached from 0xC2E532.
    case 0xC2E534: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/show_psi_animation.asm:351 SEC
    case 0xC2E535: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:352 SBC @VIRTUAL02
    case 0xC2E536: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:353 STA PSI_ANIMATION_X_OFFSET
    case 0xC2E538: cpu.execute_instruction<0x8D>(0x00AD9A, 3); return true;
    // src/battle/show_psi_animation.asm:354 LDX CURRENT_TARGET
    case 0xC2E53B: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:355 LDA a:battler::sprite_y,X
    case 0xC2E53E: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/show_psi_animation.asm:356 AND #$00FF
    case 0xC2E541: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:356 AND #$00FF
    // Overlapping static entry reached from 0xC2E541.
    case 0xC2E543: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation.asm:357 STA @VIRTUAL02
    case 0xC2E544: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:358 LDA #144
    case 0xC2E546: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000090, 3); return true;
    // src/battle/show_psi_animation.asm:358 LDA #144
    // Overlapping static entry reached from 0xC2E546.
    case 0xC2E548: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/show_psi_animation.asm:359 SEC
    case 0xC2E549: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:360 SBC @VIRTUAL02
    case 0xC2E54A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:361 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E54C: cpu.execute_instruction<0x8D>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:362 LDX CURRENT_TARGET
    case 0xC2E54F: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:363 LDA a:battler::sprite,X
    case 0xC2E552: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/show_psi_animation.asm:364 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E555: cpu.execute_instruction<0x20>(0x00F04E, 3); return true;
    // src/battle/show_psi_animation.asm:365 CMP #8
    case 0xC2E558: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:365 CMP #8
    // Overlapping static entry reached from 0xC2E558.
    case 0xC2E55A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation.asm:366 BNE @UNKNOWN13
    case 0xC2E55B: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:367 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E55D: cpu.execute_instruction<0xAD>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:368 CLC
    case 0xC2E560: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:369 ADC #16
    case 0xC2E561: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/show_psi_animation.asm:369 ADC #16
    // Overlapping static entry reached from 0xC2E561.
    case 0xC2E563: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:370 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E564: cpu.execute_instruction<0x8D>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E567: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:373 LDA #1
    case 0xC2E569: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/show_psi_animation.asm:374 LDX CURRENT_TARGET
    case 0xC2E56B: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:374 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2E569.
    case 0xC2E56C: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/show_psi_animation.asm:375 STA a:battler::use_alt_spritemap,X
    case 0xC2E56E: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/show_psi_animation.asm:376 LDX CURRENT_TARGET
    case 0xC2E571: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:377 REP #PROC_FLAGS::ACCUM8
    case 0xC2E574: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:378 LDA a:battler::vram_sprite_index,X
    case 0xC2E576: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/show_psi_animation.asm:379 AND #$00FF
    case 0xC2E579: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:379 AND #$00FF
    // Overlapping static entry reached from 0xC2E579.
    case 0xC2E57B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:380 ASL
    case 0xC2E57C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:381 TAX
    case 0xC2E57D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:382 LDA #1
    case 0xC2E57E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:382 LDA #1
    // Overlapping static entry reached from 0xC2E57E.
    case 0xC2E580: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/show_psi_animation.asm:383 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E581: cpu.execute_instruction<0x9D>(0x00AEE7, 3); return true;
    // src/battle/show_psi_animation.asm:384 JMP @UNKNOWN24
    case 0xC2E584: cpu.execute_instruction<0x4C>(0x00E68C, 3); return true;
    // src/battle/show_psi_animation.asm:386 LDX CURRENT_TARGET
    case 0xC2E587: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:387 LDA a:battler::sprite_y,X
    case 0xC2E58A: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/show_psi_animation.asm:388 AND #$00FF
    case 0xC2E58D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC2E58D.
    case 0xC2E58F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation.asm:389 STA @VIRTUAL02
    case 0xC2E590: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:390 LDA #144
    case 0xC2E592: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000090, 3); return true;
    // src/battle/show_psi_animation.asm:390 LDA #144
    // Overlapping static entry reached from 0xC2E592.
    case 0xC2E594: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/show_psi_animation.asm:391 SEC
    case 0xC2E595: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:392 SBC @VIRTUAL02
    case 0xC2E596: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:393 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E598: cpu.execute_instruction<0x8D>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:394 LDY #0
    case 0xC2E59B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/show_psi_animation.asm:394 LDY #0
    // Overlapping static entry reached from 0xC2E59B.
    case 0xC2E59D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/show_psi_animation.asm:395 STY @LOCAL04
    case 0xC2E59E: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:396 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2E5A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00A21C, 3); return true;
    // src/battle/show_psi_animation.asm:396 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2E5A0.
    case 0xC2E5A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000285, 3); return true;
    // src/battle/show_psi_animation.asm:397 STA @VIRTUAL02
    case 0xC2E5A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:397 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E5A2.
    case 0xC2E5A4: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/battle/show_psi_animation.asm:398 LDX #8
    case 0xC2E5A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:398 LDX #8
    // Overlapping static entry reached from 0xC2E5A5.
    case 0xC2E5A7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/show_psi_animation.asm:399 STX @LOCAL03
    case 0xC2E5A8: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/show_psi_animation.asm:400 BRA @UNKNOWN18
    case 0xC2E5AA: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/battle/show_psi_animation.asm:402 LDX @VIRTUAL02
    case 0xC2E5AC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:403 LDA a:battler::consciousness,X
    case 0xC2E5AE: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/show_psi_animation.asm:404 AND #$00FF
    case 0xC2E5B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC2E5B1.
    case 0xC2E5B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:405 BEQ @UNKNOWN17
    case 0xC2E5B4: cpu.execute_instruction<0xF0>(0x000058, 2); return true;
    // src/battle/show_psi_animation.asm:406 LDX @VIRTUAL02
    case 0xC2E5B6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:407 LDA a:battler::ally_or_enemy,X
    case 0xC2E5B8: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/show_psi_animation.asm:408 AND #$00FF
    case 0xC2E5BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:408 AND #$00FF
    // Overlapping static entry reached from 0xC2E5BB.
    case 0xC2E5BD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:409 CMP #1
    case 0xC2E5BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:409 CMP #1
    // Overlapping static entry reached from 0xC2E5BE.
    case 0xC2E5C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation.asm:410 BNE @UNKNOWN17
    case 0xC2E5C1: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/battle/show_psi_animation.asm:411 LDX @VIRTUAL02
    case 0xC2E5C3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:412 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2E5C5: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/show_psi_animation.asm:413 AND #$00FF
    case 0xC2E5C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC2E5C8.
    case 0xC2E5CA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:414 CMP #1
    case 0xC2E5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:414 CMP #1
    // Overlapping static entry reached from 0xC2E5CB.
    case 0xC2E5CD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:415 BEQ @UNKNOWN17
    case 0xC2E5CE: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/battle/show_psi_animation.asm:416 LDX @VIRTUAL02
    case 0xC2E5D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:417 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E5D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:418 LDA a:battler::sprite_y,X
    case 0xC2E5D4: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/show_psi_animation.asm:419 LDX CURRENT_TARGET
    case 0xC2E5D7: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/show_psi_animation.asm:420 CMP a:battler::sprite_y,X
    case 0xC2E5DA: cpu.execute_instruction<0xDD>(0x000045, 3); return true;
    // src/battle/show_psi_animation.asm:421 BNE @UNKNOWN17
    case 0xC2E5DD: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/battle/show_psi_animation.asm:422 LDX @VIRTUAL02
    case 0xC2E5DF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:423 REP #PROC_FLAGS::ACCUM8
    case 0xC2E5E1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:424 LDA a:battler::sprite,X
    case 0xC2E5E3: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/show_psi_animation.asm:425 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E5E6: cpu.execute_instruction<0x20>(0x00F04E, 3); return true;
    // src/battle/show_psi_animation.asm:426 CMP #8
    case 0xC2E5E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:426 CMP #8
    // Overlapping static entry reached from 0xC2E5E9.
    case 0xC2E5EB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation.asm:427 BNE @UNKNOWN16
    case 0xC2E5EC: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/show_psi_animation.asm:428 LDY #1
    case 0xC2E5EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:428 LDY #1
    // Overlapping static entry reached from 0xC2E5EE.
    case 0xC2E5F0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/show_psi_animation.asm:429 STY @LOCAL04
    case 0xC2E5F1: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:431 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E5F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:432 LDA #1
    case 0xC2E5F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/show_psi_animation.asm:433 LDX @VIRTUAL02
    case 0xC2E5F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:433 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2E5F5.
    case 0xC2E5F8: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/show_psi_animation.asm:434 STA a:battler::use_alt_spritemap,X
    case 0xC2E5F9: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/show_psi_animation.asm:435 LDX @VIRTUAL02
    case 0xC2E5FC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:436 REP #PROC_FLAGS::ACCUM8
    case 0xC2E5FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:437 LDA a:battler::vram_sprite_index,X
    case 0xC2E600: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/show_psi_animation.asm:438 AND #$00FF
    case 0xC2E603: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:438 AND #$00FF
    // Overlapping static entry reached from 0xC2E603.
    case 0xC2E605: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:439 ASL
    case 0xC2E606: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:440 TAX
    case 0xC2E607: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:441 LDA #1
    case 0xC2E608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:441 LDA #1
    // Overlapping static entry reached from 0xC2E608.
    case 0xC2E60A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/show_psi_animation.asm:442 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E60B: cpu.execute_instruction<0x9D>(0x00AEE7, 3); return true;
    // src/battle/show_psi_animation.asm:444 REP #PROC_FLAGS::ACCUM8
    case 0xC2E60E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:445 LDA @VIRTUAL02
    case 0xC2E610: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:446 CLC
    case 0xC2E612: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:447 ADC #.SIZEOF(battler)
    case 0xC2E613: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/show_psi_animation.asm:447 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E613.
    case 0xC2E615: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation.asm:448 STA @VIRTUAL02
    case 0xC2E616: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation.asm:449 LDX @LOCAL03
    case 0xC2E618: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/show_psi_animation.asm:450 INX
    case 0xC2E61A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:451 STX @LOCAL03
    case 0xC2E61B: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/show_psi_animation.asm:453 CPX #32
    case 0xC2E61D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/show_psi_animation.asm:453 CPX #32
    // Overlapping static entry reached from 0xC2E61D.
    case 0xC2E61F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation.asm:454 BCCL @UNKNOWN15
    case 0xC2E620: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation.asm:454 BCCL @UNKNOWN15
    case 0xC2E622: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation.asm:454 BCCL @UNKNOWN15
    case 0xC2E624: cpu.execute_instruction<0x4C>(0x00E5AC, 3); return true;
    // src/battle/show_psi_animation.asm:455 LDY @LOCAL04
    case 0xC2E627: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/show_psi_animation.asm:456 BEQ @UNKNOWN24
    case 0xC2E629: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/battle/show_psi_animation.asm:457 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E62B: cpu.execute_instruction<0xAD>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:458 CLC
    case 0xC2E62E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:459 ADC #16
    case 0xC2E62F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/show_psi_animation.asm:459 ADC #16
    // Overlapping static entry reached from 0xC2E62F.
    case 0xC2E631: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:460 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E632: cpu.execute_instruction<0x8D>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:461 BRA @UNKNOWN24
    case 0xC2E635: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/battle/show_psi_animation.asm:463 LDA #16
    case 0xC2E637: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/show_psi_animation.asm:463 LDA #16
    // Overlapping static entry reached from 0xC2E637.
    case 0xC2E639: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation.asm:464 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E63A: cpu.execute_instruction<0x8D>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:465 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2E63D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00A21C, 3); return true;
    // src/battle/show_psi_animation.asm:465 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2E63D.
    case 0xC2E63F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A2, 2); else cpu.execute_instruction<0xA2>(0x0008A2, 3); return true;
    // src/battle/show_psi_animation.asm:466 LDX #8
    case 0xC2E640: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation.asm:466 LDX #8
    // Overlapping static entry reached from 0xC2E63F.
    case 0xC2E641: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:466 LDX #8
    // Overlapping static entry reached from 0xC2E640.
    case 0xC2E642: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/show_psi_animation.asm:467 STX @LOCAL02
    case 0xC2E643: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/show_psi_animation.asm:468 BRA @UNKNOWN23
    case 0xC2E645: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/battle/show_psi_animation.asm:470 LDA a:battler::consciousness,Y
    case 0xC2E647: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/show_psi_animation.asm:471 AND #$00FF
    case 0xC2E64A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:471 AND #$00FF
    // Overlapping static entry reached from 0xC2E64A.
    case 0xC2E64C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:472 BEQ @UNKNOWN22
    case 0xC2E64D: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/show_psi_animation.asm:473 LDA a:battler::ally_or_enemy,Y
    case 0xC2E64F: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/show_psi_animation.asm:474 AND #$00FF
    case 0xC2E652: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:474 AND #$00FF
    // Overlapping static entry reached from 0xC2E652.
    case 0xC2E654: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:475 CMP #1
    case 0xC2E655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:475 CMP #1
    // Overlapping static entry reached from 0xC2E655.
    case 0xC2E657: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation.asm:476 BNE @UNKNOWN22
    case 0xC2E658: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/show_psi_animation.asm:477 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC2E65A: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/show_psi_animation.asm:478 AND #$00FF
    case 0xC2E65D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:478 AND #$00FF
    // Overlapping static entry reached from 0xC2E65D.
    case 0xC2E65F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:479 CMP #1
    case 0xC2E660: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:479 CMP #1
    // Overlapping static entry reached from 0xC2E660.
    case 0xC2E662: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation.asm:480 BEQ @UNKNOWN22
    case 0xC2E663: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/show_psi_animation.asm:481 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E665: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:482 LDA #1
    case 0xC2E667: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/battle/show_psi_animation.asm:483 STA a:battler::use_alt_spritemap,Y
    case 0xC2E669: cpu.execute_instruction<0x99>(0x00004B, 3); return true;
    // src/battle/show_psi_animation.asm:483 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E667.
    case 0xC2E66A: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:483 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E66A.
    case 0xC2E66B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/show_psi_animation.asm:484 REP #PROC_FLAGS::ACCUM8
    case 0xC2E66C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation.asm:485 LDA a:battler::vram_sprite_index,Y
    case 0xC2E66E: cpu.execute_instruction<0xB9>(0x000043, 3); return true;
    // src/battle/show_psi_animation.asm:486 AND #$00FF
    case 0xC2E671: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:486 AND #$00FF
    // Overlapping static entry reached from 0xC2E671.
    case 0xC2E673: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/show_psi_animation.asm:487 ASL
    case 0xC2E674: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:488 TAX
    case 0xC2E675: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:489 LDA #1
    case 0xC2E676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/show_psi_animation.asm:489 LDA #1
    // Overlapping static entry reached from 0xC2E676.
    case 0xC2E678: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/show_psi_animation.asm:490 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E679: cpu.execute_instruction<0x9D>(0x00AEE7, 3); return true;
    // src/battle/show_psi_animation.asm:492 TYA
    case 0xC2E67C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:493 CLC
    case 0xC2E67D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:494 ADC #.SIZEOF(battler)
    case 0xC2E67E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/show_psi_animation.asm:494 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E67E.
    case 0xC2E680: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/show_psi_animation.asm:495 TAY
    case 0xC2E681: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:496 LDX @LOCAL02
    case 0xC2E682: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/show_psi_animation.asm:497 INX
    case 0xC2E684: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/show_psi_animation.asm:498 STX @LOCAL02
    case 0xC2E685: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/show_psi_animation.asm:500 CPX #32
    case 0xC2E687: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/show_psi_animation.asm:500 CPX #32
    // Overlapping static entry reached from 0xC2E687.
    case 0xC2E689: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/show_psi_animation.asm:501 BCC @UNKNOWN21
    case 0xC2E68A: cpu.execute_instruction<0x90>(0x0000BB, 2); return true;
    // src/battle/show_psi_animation.asm:503 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E68C: cpu.execute_instruction<0xAD>(0x00ADD5, 3); return true;
    // src/battle/show_psi_animation.asm:504 AND #$00FF
    case 0xC2E68F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation.asm:504 AND #$00FF
    // Overlapping static entry reached from 0xC2E68F.
    case 0xC2E691: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation.asm:505 CMP #2
    case 0xC2E692: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/show_psi_animation.asm:505 CMP #2
    // Overlapping static entry reached from 0xC2E692.
    case 0xC2E694: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation.asm:506 BNE @UNKNOWN25
    case 0xC2E695: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/battle/show_psi_animation.asm:507 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E697: cpu.execute_instruction<0xAD>(0x00AD9A, 3); return true;
    // src/battle/show_psi_animation.asm:508 STA BG2_X_POS
    case 0xC2E69A: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/battle/show_psi_animation.asm:509 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E69D: cpu.execute_instruction<0xAD>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:510 STA BG2_Y_POS
    case 0xC2E6A0: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/battle/show_psi_animation.asm:511 BRA @UNKNOWN26
    case 0xC2E6A3: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/show_psi_animation.asm:513 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E6A5: cpu.execute_instruction<0xAD>(0x00AD9A, 3); return true;
    // src/battle/show_psi_animation.asm:514 STA BG1_X_POS
    case 0xC2E6A8: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/battle/show_psi_animation.asm:515 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E6AB: cpu.execute_instruction<0xAD>(0x00AD9C, 3); return true;
    // src/battle/show_psi_animation.asm:516 STA BG1_Y_POS
    case 0xC2E6AE: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/show_psi_animation.asm:518 END_C_FUNCTION
    case 0xC2E6B1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/show_psi_animation.asm:518 END_C_FUNCTION
    case 0xC2E6B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/smaaaash.asm (source_named).
bool execute_battle_smaaaash_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/smaaaash.asm:3 BEGIN_C_FUNCTION
    case 0xC283F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC283FC.
    case 0xC283FE: cpu.execute_instruction<0xFF>(0x8E9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    case 0xC28400: cpu.execute_instruction<0x9C>(0x00AA8E, 3); return true;
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    // Overlapping static entry reached from 0xC283FE.
    case 0xC28402: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:10 LDX CURRENT_ATTACKER
    case 0xC28403: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/smaaaash.asm:11 LDA __BSS_START__ + battler::guts,X
    case 0xC28406: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/smaaaash.asm:12 STA @LOCAL01
    case 0xC28409: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:13 LDX CURRENT_ATTACKER
    case 0xC2840B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/smaaaash.asm:14 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC2840E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/smaaaash.asm:15 AND #$00FF
    case 0xC28411: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC28411.
    case 0xC28413: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/smaaaash.asm:16 BNE @BYPASS_MINIMUM_GUTS
    case 0xC28414: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/smaaaash.asm:17 LDA @LOCAL01
    case 0xC28416: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC28418: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC28418.
    case 0xC2841A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/smaaaash.asm:19 BCS @BYPASS_MINIMUM_GUTS
    case 0xC2841B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC2841D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC2841D.
    case 0xC2841F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/smaaaash.asm:21 STA @LOCAL01
    case 0xC28420: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:23 LDA @LOCAL01
    case 0xC28422: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:24 JSR SUCCESS_500
    case 0xC28424: cpu.execute_instruction<0x20>(0x006BDB, 3); return true;
    // src/battle/smaaaash.asm:25 CMP #0
    case 0xC28427: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/smaaaash.asm:25 CMP #0
    // Overlapping static entry reached from 0xC28427.
    case 0xC28429: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC2842A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC2842C: cpu.execute_instruction<0x4C>(0x0084A8, 3); return true;
    // src/battle/smaaaash.asm:27 LDX CURRENT_ATTACKER
    case 0xC2842F: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/smaaaash.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC28432: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/smaaaash.asm:29 AND #$00FF
    case 0xC28435: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC28435.
    case 0xC28437: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/smaaaash.asm:30 BNE @ATTACKER_IS_ENEMY
    case 0xC28438: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    case 0xC2843A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC2843A.
    case 0xC2843C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/smaaaash.asm:32 STA GREEN_FLASH_DURATION
    case 0xC2843D: cpu.execute_instruction<0x8D>(0x00AD9E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28440: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007624, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC28440.
    case 0xC28442: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28443: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC28442.
    case 0xC28444: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28445: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC28445.
    case 0xC28447: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC28448: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC2844A: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/smaaaash.asm:34 BRA @SKIP_ENEMY_FLASH
    case 0xC2844E: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    case 0xC28450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC28450.
    case 0xC28452: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/smaaaash.asm:37 STA RED_FLASH_DURATION
    case 0xC28453: cpu.execute_instruction<0x8D>(0x00ADA0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x007630, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC28456.
    case 0xC28458: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28459: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC28458.
    case 0xC2845A: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC2845B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC2845B.
    case 0xC2845D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC2845E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28460: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/smaaaash.asm:40 LDX CURRENT_TARGET
    case 0xC28464: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/smaaaash.asm:41 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28467: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/smaaaash.asm:42 AND #$00FF
    case 0xC2846A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC2846A.
    case 0xC2846C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/smaaaash.asm:43 TAX
    case 0xC2846D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    case 0xC2846E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2846E.
    case 0xC28470: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/smaaaash.asm:45 BEQ @TARGET_HAS_SHIELD
    case 0xC28471: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    case 0xC28473: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC28473.
    case 0xC28475: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/smaaaash.asm:47 BNE @TARGET_DOES_NOT_HAVE_SHIELD
    case 0xC28476: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/smaaaash.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC28478: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/smaaaash.asm:50 LDA #1
    case 0xC2847A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    case 0xC2847C: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2847A.
    case 0xC2847D: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/smaaaash.asm:52 STA __BSS_START__ + battler::shield_hp,X
    case 0xC2847F: cpu.execute_instruction<0x9D>(0x000025, 3); return true;
    // src/battle/smaaaash.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC28482: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/smaaaash.asm:55 LDA #1
    case 0xC28484: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/smaaaash.asm:55 LDA #1
    // Overlapping static entry reached from 0xC28484.
    case 0xC28486: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/smaaaash.asm:56 STA IS_SMAAAAASH_ATTACK
    case 0xC28487: cpu.execute_instruction<0x8D>(0x00AA8E, 3); return true;
    // src/battle/smaaaash.asm:57 LDX #$00FF
    case 0xC2848A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:57 LDX #$00FF
    // Overlapping static entry reached from 0xC2848A.
    case 0xC2848C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/smaaaash.asm:58 STX @LOCAL01
    case 0xC2848D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:59 LDX CURRENT_ATTACKER
    case 0xC2848F: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/smaaaash.asm:60 LDA __BSS_START__ + battler::offense,X
    case 0xC28492: cpu.execute_instruction<0xBD>(0x000026, 3); return true;
    // src/battle/smaaaash.asm:61 ASL
    case 0xC28495: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:62 ASL
    case 0xC28496: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:63 LDX CURRENT_TARGET
    case 0xC28497: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/smaaaash.asm:64 SEC
    case 0xC2849A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:65 SBC __BSS_START__ + battler::defense,X
    case 0xC2849B: cpu.execute_instruction<0xFD>(0x000028, 3); return true;
    // src/battle/smaaaash.asm:66 LDX @LOCAL01
    case 0xC2849E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:67 JSR CALC_RESIST_DAMAGE
    case 0xC284A0: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/smaaaash.asm:68 LDA #1
    case 0xC284A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/smaaaash.asm:68 LDA #1
    // Overlapping static entry reached from 0xC284A3.
    case 0xC284A5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/smaaaash.asm:69 BRA @RETURN
    case 0xC284A6: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/smaaaash.asm:71 LDA #0
    case 0xC284A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/smaaaash.asm:71 LDA #0
    // Overlapping static entry reached from 0xC284A8.
    case 0xC284AA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC284AB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC284AC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_255.asm (source_named).
bool execute_battle_success_255_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_255.asm:3 BEGIN_C_FUNCTION
    case 0xC26BB8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26BBA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26BBB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26BBC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26BBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26BBD.
    case 0xC26BBF: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26BC0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26BC1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/success_255.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC26BC2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/success_255.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC26BBF.
    case 0xC26BC3: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/battle/success_255.asm:9 STA @VIRTUAL00
    case 0xC26BC4: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/success_255.asm:10 JSR RAND_LONG
    case 0xC26BC6: cpu.execute_instruction<0x20>(0x0069EF, 3); return true;
    // src/battle/success_255.asm:11 CMP @VIRTUAL00
    case 0xC26BC9: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/battle/success_255.asm:12 BCS @UNKNOWN0
    case 0xC26BCB: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/battle/success_255.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC26BCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/success_255.asm:14 LDA #1
    case 0xC26BCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_255.asm:14 LDA #1
    // Overlapping static entry reached from 0xC26BCF.
    case 0xC26BD1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_255.asm:15 BRA @RETURN
    case 0xC26BD2: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/success_255.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC26BD4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/success_255.asm:18 LDA #0
    case 0xC26BD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_255.asm:18 LDA #0
    // Overlapping static entry reached from 0xC26BD6.
    case 0xC26BD8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_255.asm:20 END_C_FUNCTION
    case 0xC26BD9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_255.asm:20 END_C_FUNCTION
    case 0xC26BDA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_500.asm (source_named).
bool execute_battle_success_500_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_500.asm:3 BEGIN_C_FUNCTION
    case 0xC26BDB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26BDD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26BDE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26BDF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26BE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26BE0.
    case 0xC26BE2: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26BE3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26BE4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/success_500.asm:8 STA @VIRTUAL02
    case 0xC26BE5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/success_500.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC26BE2.
    case 0xC26BE6: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/battle/success_500.asm:9 LDA #500
    case 0xC26BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x0001F4, 3); return true;
    // src/battle/success_500.asm:9 LDA #500
    // Overlapping static entry reached from 0xC26BE7.
    case 0xC26BE9: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/success_500.asm:10 JSR RAND_LIMIT
    case 0xC26BEA: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/success_500.asm:10 JSR RAND_LIMIT
    // Overlapping static entry reached from 0xC26BE9.
    case 0xC26BEB: cpu.execute_instruction<0x2D>(0x00C56A, 3); return true;
    // src/battle/success_500.asm:11 CMP @VIRTUAL02
    case 0xC26BED: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/success_500.asm:11 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC26BEB.
    case 0xC26BEE: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // src/battle/success_500.asm:12 BCS @UNKNOWN0
    case 0xC26BEF: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/success_500.asm:13 LDA #1
    case 0xC26BF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_500.asm:13 LDA #1
    // Overlapping static entry reached from 0xC26BF1.
    case 0xC26BF3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_500.asm:14 BRA @RETURN
    case 0xC26BF4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_500.asm:16 LDA #0
    case 0xC26BF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_500.asm:16 LDA #0
    // Overlapping static entry reached from 0xC26BF6.
    case 0xC26BF8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_500.asm:18 END_C_FUNCTION
    case 0xC26BF9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_500.asm:18 END_C_FUNCTION
    case 0xC26BFA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_luck40.asm (source_named).
bool execute_battle_success_luck40_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_luck40.asm:3 BEGIN_C_FUNCTION
    case 0xC28D41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/success_luck40.asm:6 LDA #40
    case 0xC28D43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/battle/success_luck40.asm:6 LDA #40
    // Overlapping static entry reached from 0xC28D43.
    case 0xC28D45: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/success_luck40.asm:7 JSR RAND_LIMIT
    case 0xC28D46: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/success_luck40.asm:8 LDX CURRENT_TARGET
    case 0xC28D49: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/success_luck40.asm:9 CMP a:battler::luck,X
    case 0xC28D4C: cpu.execute_instruction<0xDD>(0x00002E, 3); return true;
    // src/battle/success_luck40.asm:10 BCS @SUCCESS
    case 0xC28D4F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/success_luck40.asm:11 LDA #0
    case 0xC28D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_luck40.asm:11 LDA #0
    // Overlapping static entry reached from 0xC28D51.
    case 0xC28D53: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_luck40.asm:12 BRA @RETURN
    case 0xC28D54: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_luck40.asm:14 LDA #1
    case 0xC28D56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_luck40.asm:14 LDA #1
    // Overlapping static entry reached from 0xC28D56.
    case 0xC28D58: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_luck40.asm:16 END_C_FUNCTION
    case 0xC28D59: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_luck80.asm (source_named).
bool execute_battle_success_luck80_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_luck80.asm:3 BEGIN_C_FUNCTION
    case 0xC27C96: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/success_luck80.asm:6 LDA #80
    case 0xC27C98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/battle/success_luck80.asm:6 LDA #80
    // Overlapping static entry reached from 0xC27C98.
    case 0xC27C9A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/success_luck80.asm:7 JSR RAND_LIMIT
    case 0xC27C9B: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/success_luck80.asm:8 LDX CURRENT_TARGET
    case 0xC27C9E: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/success_luck80.asm:9 CMP a:battler::luck,X
    case 0xC27CA1: cpu.execute_instruction<0xDD>(0x00002E, 3); return true;
    // src/battle/success_luck80.asm:10 BCS @SUCCESS
    case 0xC27CA4: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/success_luck80.asm:11 LDA #0
    case 0xC27CA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_luck80.asm:11 LDA #0
    // Overlapping static entry reached from 0xC27CA6.
    case 0xC27CA8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_luck80.asm:12 BRA @RETURN
    case 0xC27CA9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_luck80.asm:14 LDA #1
    case 0xC27CAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_luck80.asm:14 LDA #1
    // Overlapping static entry reached from 0xC27CAB.
    case 0xC27CAD: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_luck80.asm:16 END_C_FUNCTION
    case 0xC27CAE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_speed.asm (source_named).
bool execute_battle_success_speed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_speed.asm:3 BEGIN_C_FUNCTION
    case 0xC27CAF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27CB1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27CB2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27CB3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC27CB4.
    case 0xC27CB6: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27CB7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27CB8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/success_speed.asm:10 TAY
    case 0xC27CB9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/success_speed.asm:11 LDX CURRENT_TARGET
    case 0xC27CBA: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/success_speed.asm:12 LDA a:battler::speed,X
    case 0xC27CBD: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/success_speed.asm:13 ASL
    case 0xC27CC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/success_speed.asm:14 TAX
    case 0xC27CC1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/success_speed.asm:15 STX @LOCAL01
    case 0xC27CC2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/success_speed.asm:16 LDX CURRENT_ATTACKER
    case 0xC27CC4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/success_speed.asm:17 LDA a:battler::speed,X
    case 0xC27CC7: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/success_speed.asm:18 STA @LOCAL00
    case 0xC27CCA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/success_speed.asm:19 STA @VIRTUAL02
    case 0xC27CCC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/success_speed.asm:20 LDX @LOCAL01
    case 0xC27CCE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/success_speed.asm:21 TXA
    case 0xC27CD0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/success_speed.asm:22 CMP @VIRTUAL02
    case 0xC27CD1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/success_speed.asm:23 BCC @UNKNOWN0
    case 0xC27CD3: cpu.execute_instruction<0x90>(0x00000D, 2); return true;
    // src/battle/success_speed.asm:24 LDA @LOCAL00
    case 0xC27CD5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/success_speed.asm:25 STA @VIRTUAL02
    case 0xC27CD7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/success_speed.asm:26 TXA
    case 0xC27CD9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/success_speed.asm:27 SEC
    case 0xC27CDA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/success_speed.asm:28 SBC @VIRTUAL02
    case 0xC27CDB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/success_speed.asm:29 TAX
    case 0xC27CDD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/success_speed.asm:30 STX @LOCAL01
    case 0xC27CDE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/success_speed.asm:31 BRA @UNKNOWN1
    case 0xC27CE0: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/success_speed.asm:33 LDX #0
    case 0xC27CE2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/success_speed.asm:33 LDX #0
    // Overlapping static entry reached from 0xC27CE2.
    case 0xC27CE4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/success_speed.asm:34 STX @LOCAL01
    case 0xC27CE5: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/success_speed.asm:36 TYA
    case 0xC27CE7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/success_speed.asm:37 JSR RAND_LIMIT
    case 0xC27CE8: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/success_speed.asm:38 LDX @LOCAL01
    case 0xC27CEB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/success_speed.asm:39 STX @VIRTUAL02
    case 0xC27CED: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/success_speed.asm:40 CMP @VIRTUAL02
    case 0xC27CEF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/success_speed.asm:41 BCC @UNKNOWN2
    case 0xC27CF1: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/battle/success_speed.asm:42 LDA #1
    case 0xC27CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_speed.asm:42 LDA #1
    // Overlapping static entry reached from 0xC27CF3.
    case 0xC27CF5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_speed.asm:43 BRA @UNKNOWN3
    case 0xC27CF6: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_speed.asm:45 LDA #0
    case 0xC27CF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_speed.asm:45 LDA #0
    // Overlapping static entry reached from 0xC27CF8.
    case 0xC27CFA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_speed.asm:47 END_C_FUNCTION
    case 0xC27CFB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_speed.asm:47 END_C_FUNCTION
    case 0xC27CFC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/swap_attacker_with_target.asm (source_named).
bool execute_battle_swap_attacker_with_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/swap_attacker_with_target.asm:3 BEGIN_C_FUNCTION
    case 0xC27E8A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E8C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC27E8E.
    case 0xC27E90: cpu.execute_instruction<0xFF>(0x70AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/swap_attacker_with_target.asm:7 LDA CURRENT_ATTACKER
    case 0xC27E92: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/battle/swap_attacker_with_target.asm:7 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC27E90.
    case 0xC27E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x000E85, 3); return true;
    // src/battle/swap_attacker_with_target.asm:8 STA @LOCAL00
    case 0xC27E95: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/swap_attacker_with_target.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC27E94.
    case 0xC27E96: cpu.execute_instruction<0x0E>(0x0072AD, 3); return true;
    // src/battle/swap_attacker_with_target.asm:9 LDA CURRENT_TARGET
    case 0xC27E97: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/swap_attacker_with_target.asm:9 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC27E96.
    case 0xC27E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00708D, 3); return true;
    // src/battle/swap_attacker_with_target.asm:10 STA CURRENT_ATTACKER
    case 0xC27E9A: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/battle/swap_attacker_with_target.asm:10 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC27E99.
    case 0xC27E9B: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/swap_attacker_with_target.asm:10 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC27E99.
    case 0xC27E9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x000EA5, 3); return true;
    // src/battle/swap_attacker_with_target.asm:11 LDA @LOCAL00
    case 0xC27E9D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/swap_attacker_with_target.asm:11 LDA @LOCAL00
    // Overlapping static entry reached from 0xC27E9C.
    case 0xC27E9E: cpu.execute_instruction<0x0E>(0x00728D, 3); return true;
    // src/battle/swap_attacker_with_target.asm:12 STA CURRENT_TARGET
    case 0xC27E9F: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/swap_attacker_with_target.asm:12 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC27E9E.
    case 0xC27EA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x0000A9, 3); return true;
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    case 0xC27EA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    // Overlapping static entry reached from 0xC27EA1.
    case 0xC27EA3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    // Overlapping static entry reached from 0xC27EA2.
    case 0xC27EA4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/swap_attacker_with_target.asm:14 JSL FIX_ATTACKER_NAME
    case 0xC27EA5: cpu.execute_instruction<0x22>(0xC23BCF, 4); return true;
    // src/battle/swap_attacker_with_target.asm:15 JSL FIX_TARGET_NAME
    case 0xC27EA9: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/swap_attacker_with_target.asm:16 END_C_FUNCTION
    case 0xC27EAD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/swap_attacker_with_target.asm:16 END_C_FUNCTION
    case 0xC27EAE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_all.asm (source_named).
bool execute_battle_target_all_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_all.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26E00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26E02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26E03: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26E04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26E04.
    case 0xC26E06: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26E07: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26E08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26E08.
    case 0xC26E0A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26E0B: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26E0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26E0E.
    case 0xC26E10: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26E11: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_all.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26E14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/target_all.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26E14.
    case 0xC26E16: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/battle/target_all.asm:9 LDA #0
    case 0xC26E17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_all.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26E17.
    case 0xC26E19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_all.asm:10 STA @LOCAL00
    case 0xC26E1A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all.asm:11 BRA @UNKNOWN2
    case 0xC26E1C: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/target_all.asm:13 LDA a:battler::consciousness,X
    case 0xC26E1E: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_all.asm:14 AND #$00FF
    case 0xC26E21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_all.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26E21.
    case 0xC26E23: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_all.asm:15 BEQ @UNKNOWN1
    case 0xC26E24: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E26.
    case 0xC26E28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E29: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E28.
    case 0xC26E2A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E2A.
    case 0xC26E2C: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E2B.
    case 0xC26E2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E2E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_all.asm:17 LDA @LOCAL00
    case 0xC26E30: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all.asm:18 ASL
    case 0xC26E32: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all.asm:19 ASL
    case 0xC26E33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all.asm:20 CLC
    case 0xC26E34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all.asm:21 ADC @VIRTUAL06
    case 0xC26E35: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_all.asm:22 STA @VIRTUAL06
    case 0xC26E37: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26E39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26E39.
    case 0xC26E3B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26E3C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26E3E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26E3F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26E41: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26E43: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E45: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E48: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E4A: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E4D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26E4F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26E51: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26E53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26E55: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26E57: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26E59: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E5D: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E62: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_all.asm:28 TXA
    case 0xC26E65: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_all.asm:29 CLC
    case 0xC26E66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all.asm:30 ADC #.SIZEOF(battler)
    case 0xC26E67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_all.asm:30 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26E67.
    case 0xC26E69: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_all.asm:31 TAX
    case 0xC26E6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_all.asm:32 LDA @LOCAL00
    case 0xC26E6B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all.asm:33 INC
    case 0xC26E6D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_all.asm:34 STA @LOCAL00
    case 0xC26E6E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all.asm:36 CMP #BATTLER_COUNT
    case 0xC26E70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_all.asm:36 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26E70.
    case 0xC26E72: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/target_all.asm:37 BCC @UNKNOWN0
    case 0xC26E73: cpu.execute_instruction<0x90>(0x0000A9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_all.asm:38 END_C_FUNCTION
    case 0xC26E75: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_all.asm:38 END_C_FUNCTION
    case 0xC26E76: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_all_enemies.asm (source_named).
bool execute_battle_target_all_enemies_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_all_enemies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26C82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C85: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26C86.
    case 0xC26C88: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C89: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C8A.
    case 0xC26C8C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C8D: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C90.
    case 0xC26C92: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C93: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_all_enemies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26C96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/target_all_enemies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26C96.
    case 0xC26C98: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/battle/target_all_enemies.asm:9 LDA #0
    case 0xC26C99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_all_enemies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26C99.
    case 0xC26C9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_all_enemies.asm:10 STA @LOCAL00
    case 0xC26C9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:11 BRA @UNKNOWN2
    case 0xC26C9E: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/battle/target_all_enemies.asm:13 LDA a:battler::consciousness,X
    case 0xC26CA0: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_all_enemies.asm:14 AND #$00FF
    case 0xC26CA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_all_enemies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26CA3.
    case 0xC26CA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_all_enemies.asm:15 BEQ @UNKNOWN1
    case 0xC26CA6: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/battle/target_all_enemies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26CA8: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_all_enemies.asm:17 AND #$00FF
    case 0xC26CAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_all_enemies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26CAB.
    case 0xC26CAD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/target_all_enemies.asm:18 CMP #1
    case 0xC26CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/target_all_enemies.asm:18 CMP #1
    // Overlapping static entry reached from 0xC26CAE.
    case 0xC26CB0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/target_all_enemies.asm:19 BNE @UNKNOWN1
    case 0xC26CB1: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB3.
    case 0xC26CB5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CB6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB5.
    case 0xC26CB7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB7.
    case 0xC26CB9: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB8.
    case 0xC26CBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CBB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_all_enemies.asm:21 LDA @LOCAL00
    case 0xC26CBD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:22 ASL
    case 0xC26CBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:23 ASL
    case 0xC26CC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:24 CLC
    case 0xC26CC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:25 ADC @VIRTUAL06
    case 0xC26CC2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_all_enemies.asm:26 STA @VIRTUAL06
    case 0xC26CC4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26CC6.
    case 0xC26CC8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CC9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CCB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CCC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CCE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CD0: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CD2: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CD5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CD7: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CDA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CDC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CDE: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE4: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CE8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CEA: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CEF: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_all_enemies.asm:32 TXA
    case 0xC26CF2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:33 CLC
    case 0xC26CF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:34 ADC #.SIZEOF(battler)
    case 0xC26CF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_all_enemies.asm:34 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26CF4.
    case 0xC26CF6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_all_enemies.asm:35 TAX
    case 0xC26CF7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:36 LDA @LOCAL00
    case 0xC26CF8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:37 INC
    case 0xC26CFA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:38 STA @LOCAL00
    case 0xC26CFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:40 CMP #BATTLER_COUNT
    case 0xC26CFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_all_enemies.asm:40 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26CFD.
    case 0xC26CFF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/target_all_enemies.asm:41 BCC @UNKNOWN0
    case 0xC26D00: cpu.execute_instruction<0x90>(0x00009E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_all_enemies.asm:42 END_C_FUNCTION
    case 0xC26D02: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_all_enemies.asm:42 END_C_FUNCTION
    case 0xC26D03: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_allies.asm (source_named).
bool execute_battle_target_allies_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_allies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26BFB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26BFD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26BFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26BFF.
    case 0xC26C01: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26C02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C03.
    case 0xC26C05: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C06: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C09.
    case 0xC26C0B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C0C: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26C0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26C0F.
    case 0xC26C11: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/battle/target_allies.asm:9 LDA #0
    case 0xC26C12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_allies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26C12.
    case 0xC26C14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_allies.asm:10 STA @LOCAL00
    case 0xC26C15: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:11 BRA @UNKNOWN3
    case 0xC26C17: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/battle/target_allies.asm:13 LDA a:battler::consciousness,X
    case 0xC26C19: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_allies.asm:14 AND #$00FF
    case 0xC26C1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_allies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26C1C.
    case 0xC26C1E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_allies.asm:15 BEQ @UNKNOWN2
    case 0xC26C1F: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/battle/target_allies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26C21: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_allies.asm:17 AND #$00FF
    case 0xC26C24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_allies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26C24.
    case 0xC26C26: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_allies.asm:18 BEQ @UNKNOWN1
    case 0xC26C27: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/target_allies.asm:19 LDA a:battler::npc_id,X
    case 0xC26C29: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/target_allies.asm:20 AND #$00FF
    case 0xC26C2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_allies.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC26C2C.
    case 0xC26C2E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_allies.asm:21 BEQ @UNKNOWN2
    case 0xC26C2F: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C31.
    case 0xC26C33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C34: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C33.
    case 0xC26C35: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C35.
    case 0xC26C37: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C36.
    case 0xC26C38: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C39: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_allies.asm:24 LDA @LOCAL00
    case 0xC26C3B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:25 ASL
    case 0xC26C3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:26 ASL
    case 0xC26C3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:27 CLC
    case 0xC26C3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_allies.asm:28 ADC @VIRTUAL06
    case 0xC26C40: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_allies.asm:29 STA @VIRTUAL06
    case 0xC26C42: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26C44.
    case 0xC26C46: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C47: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C49: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C4A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C4C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C4E: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C50: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C55: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C58: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C5C: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C5E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C62: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C64: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C66: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C68: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C6B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C6D: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_allies.asm:35 TXA
    case 0xC26C70: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:36 CLC
    case 0xC26C71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    case 0xC26C72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26C72.
    case 0xC26C74: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_allies.asm:38 TAX
    case 0xC26C75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_allies.asm:39 LDA @LOCAL00
    case 0xC26C76: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:40 INC
    case 0xC26C78: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:41 STA @LOCAL00
    case 0xC26C79: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    case 0xC26C7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26C7B.
    case 0xC26C7D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/target_allies.asm:44 BCC @UNKNOWN0
    case 0xC26C7E: cpu.execute_instruction<0x90>(0x000099, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26C80: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26C81: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_battler.asm (source_named).
bool execute_battle_target_battler_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_battler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26FDC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26FDE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26FDF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26FE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26FE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26FE1.
    case 0xC26FE3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26FE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26FE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/target_battler.asm:8 STA @LOCAL00
    case 0xC26FE6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_battler.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC26FE3.
    case 0xC26FE7: cpu.execute_instruction<0x0E>(0x0079A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FE8.
    case 0xC26FEA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FEA.
    case 0xC26FEC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FEC.
    case 0xC26FEE: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FED.
    case 0xC26FEF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FF0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_battler.asm:10 LDA @LOCAL00
    case 0xC26FF2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_battler.asm:11 ASL
    case 0xC26FF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_battler.asm:12 ASL
    case 0xC26FF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_battler.asm:13 CLC
    case 0xC26FF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_battler.asm:14 ADC @VIRTUAL06
    case 0xC26FF7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_battler.asm:15 STA @VIRTUAL06
    case 0xC26FF9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FFB.
    case 0xC26FFD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FFE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27000: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27001: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27003: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27005: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27007: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2700A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2700C: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2700F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27011: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27013: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27015: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27017: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27019: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2701B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2701D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2701F: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27022: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27024: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_battler.asm:20 END_C_FUNCTION
    case 0xC27027: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_battler.asm:20 END_C_FUNCTION
    case 0xC27028: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_row.asm (source_named).
bool execute_battle_target_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_row.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26D04: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26D06: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26D07: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26D08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26D09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC26D09.
    case 0xC26D0B: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26D0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26D0D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/target_row.asm:9 TAY
    case 0xC26D0E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/target_row.asm:10 STY @LOCAL01
    case 0xC26D0F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26D11.
    case 0xC26D13: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D14: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26D17.
    case 0xC26D19: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D1A: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_row.asm:12 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26D1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/target_row.asm:12 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26D1D.
    case 0xC26D1F: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/battle/target_row.asm:13 LDA #0
    case 0xC26D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_row.asm:13 LDA #0
    // Overlapping static entry reached from 0xC26D20.
    case 0xC26D22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_row.asm:14 STA @LOCAL00
    case 0xC26D23: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_row.asm:15 JMP @UNKNOWN6
    case 0xC26D25: cpu.execute_instruction<0x4C>(0x006DF4, 3); return true;
    // src/battle/target_row.asm:17 LDA a:battler::consciousness,X
    case 0xC26D28: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_row.asm:18 AND #$00FF
    case 0xC26D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC26D2B.
    case 0xC26D2D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/target_row.asm:19 BEQL @UNKNOWN5
    case 0xC26D2E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/target_row.asm:19 BEQL @UNKNOWN5
    case 0xC26D30: cpu.execute_instruction<0x4C>(0x006DE9, 3); return true;
    // src/battle/target_row.asm:20 LDY @LOCAL01
    case 0xC26D33: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/target_row.asm:21 TYA
    case 0xC26D35: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/target_row.asm:22 BEQ @UNKNOWN2
    case 0xC26D36: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/target_row.asm:23 CMP #1
    case 0xC26D38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/target_row.asm:23 CMP #1
    // Overlapping static entry reached from 0xC26D38.
    case 0xC26D3A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_row.asm:24 BEQ @UNKNOWN4
    case 0xC26D3B: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/target_row.asm:25 CMP #2
    case 0xC26D3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/target_row.asm:25 CMP #2
    // Overlapping static entry reached from 0xC26D3D.
    case 0xC26D3F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_row.asm:26 BEQ @UNKNOWN4
    case 0xC26D40: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/battle/target_row.asm:27 JMP @UNKNOWN5
    case 0xC26D42: cpu.execute_instruction<0x4C>(0x006DE9, 3); return true;
    // src/battle/target_row.asm:29 LDA a:battler::ally_or_enemy,X
    case 0xC26D45: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_row.asm:30 AND #$00FF
    case 0xC26D48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC26D48.
    case 0xC26D4A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/target_row.asm:31 BNEL @UNKNOWN5
    case 0xC26D4B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/target_row.asm:31 BNEL @UNKNOWN5
    case 0xC26D4D: cpu.execute_instruction<0x4C>(0x006DE9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D50.
    case 0xC26D52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D52.
    case 0xC26D54: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D54.
    case 0xC26D56: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D55.
    case 0xC26D57: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D58: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_row.asm:33 LDA @LOCAL00
    case 0xC26D5A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_row.asm:34 ASL
    case 0xC26D5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:35 ASL
    case 0xC26D5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:36 CLC
    case 0xC26D5E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_row.asm:37 ADC @VIRTUAL06
    case 0xC26D5F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_row.asm:38 STA @VIRTUAL06
    case 0xC26D61: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26D63.
    case 0xC26D65: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D66: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D68: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D69: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D6B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D6D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D6F: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D74: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D7B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D7D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D7F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D81: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D83: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D85: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D87: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D8A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D8C: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_row.asm:43 BRA @UNKNOWN5
    case 0xC26D8F: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/battle/target_row.asm:45 LDA a:battler::ally_or_enemy,X
    case 0xC26D91: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_row.asm:46 AND #$00FF
    case 0xC26D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC26D94.
    case 0xC26D96: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/target_row.asm:47 CMP #1
    case 0xC26D97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/target_row.asm:47 CMP #1
    // Overlapping static entry reached from 0xC26D97.
    case 0xC26D99: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/target_row.asm:48 BNE @UNKNOWN5
    case 0xC26D9A: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/battle/target_row.asm:49 TYA
    case 0xC26D9C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/target_row.asm:50 DEC
    case 0xC26D9D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/target_row.asm:51 STA @VIRTUAL02
    case 0xC26D9E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/target_row.asm:52 LDA a:battler::row,X
    case 0xC26DA0: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/target_row.asm:53 AND #$00FF
    case 0xC26DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC26DA3.
    case 0xC26DA5: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/target_row.asm:54 CMP @VIRTUAL02
    case 0xC26DA6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/target_row.asm:55 BNE @UNKNOWN5
    case 0xC26DA8: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00A279, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DAA.
    case 0xC26DAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DAC.
    case 0xC26DAE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DAE.
    case 0xC26DB0: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DAF.
    case 0xC26DB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_row.asm:57 LDA @LOCAL00
    case 0xC26DB4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_row.asm:58 ASL
    case 0xC26DB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:59 ASL
    case 0xC26DB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:60 CLC
    case 0xC26DB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_row.asm:61 ADC @VIRTUAL06
    case 0xC26DB9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_row.asm:62 STA @VIRTUAL06
    case 0xC26DBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26DBD.
    case 0xC26DBF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DC0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DC2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DC3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DC5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DC7: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26DC9: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26DCC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26DCE: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26DD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26DD3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26DD5: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26DD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26DD9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26DDB: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26DDD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26DDF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26DE1: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26DE4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26DE6: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/target_row.asm:68 TXA
    case 0xC26DE9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_row.asm:69 CLC
    case 0xC26DEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_row.asm:70 ADC #.SIZEOF(battler)
    case 0xC26DEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_row.asm:70 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26DEB.
    case 0xC26DED: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_row.asm:71 TAX
    case 0xC26DEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_row.asm:72 LDA @LOCAL00
    case 0xC26DEF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_row.asm:73 INC
    case 0xC26DF1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_row.asm:74 STA @LOCAL00
    case 0xC26DF2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_row.asm:76 CMP #BATTLER_COUNT
    case 0xC26DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_row.asm:76 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26DF4.
    case 0xC26DF6: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/target_row.asm:77 BCCL @UNKNOWN0
    case 0xC26DF7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/target_row.asm:77 BCCL @UNKNOWN0
    case 0xC26DF9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/target_row.asm:77 BCCL @UNKNOWN0
    case 0xC26DFB: cpu.execute_instruction<0x4C>(0x006D28, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_row.asm:78 END_C_FUNCTION
    case 0xC26DFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_row.asm:78 END_C_FUNCTION
    case 0xC26DFF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/weaken_shield.asm (source_named).
bool execute_battle_weaken_shield_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/weaken_shield.asm:3 BEGIN_C_FUNCTION
    case 0xC294CE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC294D2.
    case 0xC294D4: cpu.execute_instruction<0xFF>(0x949C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC294D6: cpu.execute_instruction<0x9C>(0x00AA94, 3); return true;
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    // Overlapping static entry reached from 0xC294D4.
    case 0xC294D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:8 LDA DAMAGE_IS_REFLECTED
    case 0xC294D9: cpu.execute_instruction<0xAD>(0x00AA96, 3); return true;
    // src/battle/weaken_shield.asm:9 BEQ @UNKNOWN1
    case 0xC294DC: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/weaken_shield.asm:10 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC294DE: cpu.execute_instruction<0x20>(0x007E8A, 3); return true;
    // src/battle/weaken_shield.asm:11 LDA CURRENT_TARGET
    case 0xC294E1: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/weaken_shield.asm:12 CLC
    case 0xC294E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    case 0xC294E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC294E5.
    case 0xC294E7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/weaken_shield.asm:14 TAX
    case 0xC294E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC294E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/weaken_shield.asm:16 LDA __BSS_START__,X
    case 0xC294EB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/weaken_shield.asm:17 DEC
    case 0xC294EE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:18 STA __BSS_START__,X
    case 0xC294EF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/weaken_shield.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC294F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/weaken_shield.asm:20 AND #$00FF
    case 0xC294F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/weaken_shield.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC294F4.
    case 0xC294F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/weaken_shield.asm:21 BNE @UNKNOWN0
    case 0xC294F7: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/weaken_shield.asm:22 LDX CURRENT_TARGET
    case 0xC294F9: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/weaken_shield.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC294FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/weaken_shield.asm:24 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC294FE: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/weaken_shield.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC29501: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29503: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000099, 2); else cpu.execute_instruction<0xA9>(0x007099, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29503.
    case 0xC29505: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29506: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29505.
    case 0xC29507: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29508: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29508.
    case 0xC2950A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2950B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2950D: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/weaken_shield.asm:28 STZ DAMAGE_IS_REFLECTED
    case 0xC29511: cpu.execute_instruction<0x9C>(0x00AA96, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC29514: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC29515: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
