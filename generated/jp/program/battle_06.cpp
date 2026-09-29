// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/battle/psi_shield_nullify.asm (source_named).
bool execute_battle_psi_shield_nullify_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/psi_shield_nullify.asm:3 BEGIN_C_FUNCTION
    case 0xC293C6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293C8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293C9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC293CA.
    case 0xC293CC: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/psi_shield_nullify.asm:7 END_STACK_VARS
    case 0xC293CD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    case 0xC293CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:8 LDA #1
    // Overlapping static entry reached from 0xC293CE.
    case 0xC293D0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/psi_shield_nullify.asm:9 STA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC293D1: cpu.execute_instruction<0x8D>(0x00AC69, 3); return true;
    // src/battle/psi_shield_nullify.asm:10 LDX CURRENT_ATTACKER
    case 0xC293D4: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/psi_shield_nullify.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC293D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:12 LDA a:battler::current_action_argument,X
    case 0xC293D9: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/psi_shield_nullify.asm:13 JSL REDIRECT_C1ACF8
    case 0xC293DC: cpu.execute_instruction<0x22>(0xC1DB59, 4); return true;
    // src/battle/psi_shield_nullify.asm:15 LDX CURRENT_ATTACKER
    case 0xC293E0: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/psi_shield_nullify.asm:16 LDA a:battler::current_action,X
    case 0xC293E3: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293E6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293E9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/psi_shield_nullify.asm:17 OPTIMIZED_MULT $04, 12
    case 0xC293EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:18 TAX
    case 0xC293ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:19 INX
    case 0xC293EE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:20 INX
    case 0xC293EF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:21 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC293F0: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    case 0xC293F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/psi_shield_nullify.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC293F4.
    case 0xC293F6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    case 0xC293F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/psi_shield_nullify.asm:23 CMP #ACTION_TYPE::PSI
    // Overlapping static entry reached from 0xC293F7.
    case 0xC293F9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/psi_shield_nullify.asm:24 BEQ @UNKNOWN2
    case 0xC293FA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    case 0xC293FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:25 LDA #0
    // Overlapping static entry reached from 0xC293FC.
    case 0xC293FE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/psi_shield_nullify.asm:26 BRA @RETURN
    case 0xC293FF: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/battle/psi_shield_nullify.asm:28 LDX CURRENT_TARGET
    case 0xC29401: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/psi_shield_nullify.asm:29 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC29404: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    case 0xC29407: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/psi_shield_nullify.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC29407.
    case 0xC29409: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    case 0xC2940A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:31 CMP #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2940A.
    case 0xC2940C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/psi_shield_nullify.asm:32 BEQ @REFLECT_PSI
    case 0xC2940D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    case 0xC2940F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/psi_shield_nullify.asm:33 CMP #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC2940F.
    case 0xC29411: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/psi_shield_nullify.asm:34 BEQ @ABSORB_PSI
    case 0xC29412: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/battle/psi_shield_nullify.asm:35 BRA @UNKNOWN6
    case 0xC29414: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A8, 2); else cpu.execute_instruction<0xA9>(0x0035A8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC29416.
    case 0xC29418: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29419: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC29418.
    case 0xC2941A: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC2941B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    // Overlapping static entry reached from 0xC2941B.
    case 0xC2941D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC2941E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_TURN
    case 0xC29420: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    case 0xC29424: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:39 LDA #1
    // Overlapping static entry reached from 0xC29424.
    case 0xC29426: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/psi_shield_nullify.asm:40 STA DAMAGE_IS_REFLECTED
    case 0xC29427: cpu.execute_instruction<0x8D>(0x00AC6B, 3); return true;
    // src/battle/psi_shield_nullify.asm:41 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC2942A: cpu.execute_instruction<0x20>(0x007E21, 3); return true;
    // src/battle/psi_shield_nullify.asm:42 BRA @UNKNOWN6
    case 0xC2942D: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC2942F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0035CE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC2942F.
    case 0xC29431: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29432: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29431.
    case 0xC29433: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29434: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    // Overlapping static entry reached from 0xC29434.
    case 0xC29436: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29437: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:44 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_TURN
    case 0xC29439: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/psi_shield_nullify.asm:45 LDA CURRENT_TARGET
    case 0xC2943D: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/psi_shield_nullify.asm:46 CLC
    case 0xC29440: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    case 0xC29441: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/psi_shield_nullify.asm:47 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29441.
    case 0xC29443: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/psi_shield_nullify.asm:48 TAX
    case 0xC29444: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC29445: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:50 LDA __BSS_START__,X
    case 0xC29447: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:51 DEC
    case 0xC2944A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/psi_shield_nullify.asm:52 STA __BSS_START__,X
    case 0xC2944B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC2944E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    case 0xC29450: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/psi_shield_nullify.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC29450.
    case 0xC29452: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/psi_shield_nullify.asm:55 BNE @UNKNOWN5
    case 0xC29453: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/psi_shield_nullify.asm:56 LDX CURRENT_TARGET
    case 0xC29455: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/psi_shield_nullify.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC29458: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/psi_shield_nullify.asm:58 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2945A: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/psi_shield_nullify.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC2945D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2945F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00356E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2945F.
    case 0xC29461: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29462: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29461.
    case 0xC29463: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29464.
    case 0xC29466: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29467: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/psi_shield_nullify.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29469: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    case 0xC2946D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/psi_shield_nullify.asm:62 LDA #1
    // Overlapping static entry reached from 0xC2946D.
    case 0xC2946F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/psi_shield_nullify.asm:63 BRA @RETURN
    case 0xC29470: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    case 0xC29472: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/psi_shield_nullify.asm:65 LDA #0
    // Overlapping static entry reached from 0xC29472.
    case 0xC29474: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC29475: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/psi_shield_nullify.asm:67 END_C_FUNCTION
    case 0xC29476: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/random_targetting.asm (source_named).
bool execute_battle_random_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/random_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26E37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E39: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E3A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC26E3B.
    case 0xC26E3D: cpu.execute_instruction<0xFF>(0x24A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/random_targetting.asm:10 END_STACK_VARS
    case 0xC26E3E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E3F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E41: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E43: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC26E45: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E47: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E49: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E4B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL02
    case 0xC26E4D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E4F.
    case 0xC26E51: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E54.
    case 0xC26E56: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:13 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC26E57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E59: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E5B: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E5D: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E5F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/random_targetting.asm:14 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC26E61: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/battle/random_targetting.asm:15 BNE @UNKNOWN1
    case 0xC26E63: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E65: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E67: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E69: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26E6B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/random_targetting.asm:17 JMP @UNKNOWN6
    case 0xC26E6D: cpu.execute_instruction<0x4C>(0x006F19, 3); return true;
    // src/battle/random_targetting.asm:19 LDY #0
    case 0xC26E70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/random_targetting.asm:19 LDY #0
    // Overlapping static entry reached from 0xC26E70.
    case 0xC26E72: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/random_targetting.asm:20 STY @LOCAL01
    case 0xC26E73: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:21 JSR RAND_LONG
    case 0xC26E75: cpu.execute_instruction<0x20>(0x00692E, 3); return true;
    // src/battle/random_targetting.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC26E78: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/random_targetting.asm:23 AND #$00FF
    case 0xC26E7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/random_targetting.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC26E7A.
    case 0xC26E7C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/random_targetting.asm:24 AND #$001F
    case 0xC26E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/random_targetting.asm:24 AND #$001F
    // Overlapping static entry reached from 0xC26E7D.
    case 0xC26E7F: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/random_targetting.asm:25 INC
    case 0xC26E80: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:26 STA @LOCAL00
    case 0xC26E81: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/random_targetting.asm:27 BRA @UNKNOWN5
    case 0xC26E83: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/battle/random_targetting.asm:29 LDY @LOCAL01
    case 0xC26E85: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:30 INY
    case 0xC26E87: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:31 STY @LOCAL01
    case 0xC26E88: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:32 CPY #32
    case 0xC26E8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/random_targetting.asm:32 CPY #32
    // Overlapping static entry reached from 0xC26E8A.
    case 0xC26E8C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/random_targetting.asm:33 BNE @UNKNOWN3
    case 0xC26E8D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/random_targetting.asm:34 LDY #0
    case 0xC26E8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/random_targetting.asm:34 LDY #0
    // Overlapping static entry reached from 0xC26E8F.
    case 0xC26E91: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/random_targetting.asm:35 STY @LOCAL01
    case 0xC26E92: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E94: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E96: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E98: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:37 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC26E9A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/random_targetting.asm:38 PHA
    case 0xC26E9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:39 LDA @VIRTUAL0A
    case 0xC26E9D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/random_targetting.asm:40 PHA
    case 0xC26E9F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA0.
    case 0xC26EA2: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA2.
    case 0xC26EA4: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA4.
    case 0xC26EA6: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EA5.
    case 0xC26EA7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/random_targetting.asm:41 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/random_targetting.asm:42 TYA
    case 0xC26EAA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:43 ASL
    case 0xC26EAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:44 ASL
    case 0xC26EAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:45 CLC
    case 0xC26EAD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:46 ADC @VIRTUAL06
    case 0xC26EAE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/random_targetting.asm:47 STA @VIRTUAL06
    case 0xC26EB0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EB2.
    case 0xC26EB4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EBA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/random_targetting.asm:48 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EBC: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EBF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EC1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/battle/random_targetting.asm:49 PULL32 @VIRTUAL06
    case 0xC26EC2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26EC4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26EC6: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26EC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26ECA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26ECC: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:50 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26ECE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26ED0.
    case 0xC26ED2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26ED5.
    case 0xC26ED7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26ED8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EDA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EDC: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EDE: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EE0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/random_targetting.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26EE2: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/random_targetting.asm:53 BEQ @UNKNOWN2
    case 0xC26EE4: cpu.execute_instruction<0xF0>(0x00009F, 2); return true;
    // src/battle/random_targetting.asm:55 LDA @LOCAL00
    case 0xC26EE6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/random_targetting.asm:56 TAX
    case 0xC26EE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:57 DEC
    case 0xC26EE9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:58 STA @LOCAL00
    case 0xC26EEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/random_targetting.asm:59 CPX #0
    case 0xC26EEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/random_targetting.asm:59 CPX #0
    // Overlapping static entry reached from 0xC26EEC.
    case 0xC26EEE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/random_targetting.asm:60 BNE @UNKNOWN2
    case 0xC26EEF: cpu.execute_instruction<0xD0>(0x000094, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EF1.
    case 0xC26EF3: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EF3.
    case 0xC26EF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EF6.
    case 0xC26EF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/random_targetting.asm:61 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL0A
    case 0xC26EF9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/random_targetting.asm:62 LDY @LOCAL01
    case 0xC26EFB: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/random_targetting.asm:63 TYA
    case 0xC26EFD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:64 ASL
    case 0xC26EFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:65 ASL
    case 0xC26EFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:66 CLC
    case 0xC26F00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/random_targetting.asm:67 ADC @VIRTUAL0A
    case 0xC26F01: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/random_targetting.asm:68 STA @VIRTUAL0A
    case 0xC26F03: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F05.
    case 0xC26F07: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F08: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/random_targetting.asm:69 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC26F0F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F11: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F13: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F15: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/random_targetting.asm:70 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC26F17: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/random_targetting.asm:72 END_C_FUNCTION
    case 0xC26F19: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/random_targetting.asm:72 END_C_FUNCTION
    case 0xC26F1A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/recalc_character_miss_rate.asm (source_named).
bool execute_battle_recalc_character_miss_rate_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recalc_character_miss_rate.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21C2A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC21C2F.
    case 0xC21C31: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C32: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recalc_character_miss_rate.asm:8 END_STACK_VARS
    case 0xC21C33: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:9 TAY
    case 0xC21C34: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:10 DEY
    case 0xC21C35: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:11 STY @LOCAL01
    case 0xC21C36: cpu.execute_instruction<0x84>(0x00000F, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:12 TYA
    case 0xC21C38: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC21C39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C39.
    case 0xC21C3B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:14 JSL MULT168
    case 0xC21C3C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:15 TAX
    case 0xC21C40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:16 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC21C41: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    case 0xC21C44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC21C44.
    case 0xC21C46: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:18 BEQ @UNKNOWN0
    case 0xC21C47: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:19 DEC
    case 0xC21C49: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:20 STA @VIRTUAL02
    case 0xC21C4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:21 TXA
    case 0xC21C4C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:22 CLC
    case 0xC21C4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:23 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21C4E.
    case 0xC21C50: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:24 CLC
    case 0xC21C51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    case 0xC21C52: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:25 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21C50.
    case 0xC21C53: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:26 TAX
    case 0xC21C54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:27 LDA __BSS_START__,X
    case 0xC21C55: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    case 0xC21C58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC21C58.
    case 0xC21C5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C5B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C5E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21C62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:30 CLC
    case 0xC21C63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    case 0xC21C64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:31 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21C64.
    case 0xC21C66: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:32 TAX
    case 0xC21C67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C68: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:34 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21C6A: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC21C6E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:36 SEC
    case 0xC21C70: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    case 0xC21C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC21C71.
    case 0xC21C73: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    case 0xC21C74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:38 SBC #$0080
    // Overlapping static entry reached from 0xC21C74.
    case 0xC21C76: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    case 0xC21C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:39 EOR #$FF80
    // Overlapping static entry reached from 0xC21C77.
    case 0xC21C79: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:40 BRA @UNKNOWN1
    case 0xC21C7A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    case 0xC21C7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21C79.
    case 0xC21C7D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:42 LDA #0
    // Overlapping static entry reached from 0xC21C7C.
    case 0xC21C7E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:45 STA @LOCAL00
    case 0xC21C81: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:46 LDY @LOCAL01
    case 0xC21C83: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC21C85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:48 TYA
    case 0xC21C87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC21C88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/recalc_character_miss_rate.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21C88.
    case 0xC21C8A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:50 JSL MULT168
    case 0xC21C8B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/recalc_character_miss_rate.asm:51 TAX
    case 0xC21C8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recalc_character_miss_rate.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC21C90: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:53 LDA @LOCAL00
    case 0xC21C92: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/recalc_character_miss_rate.asm:54 STA PARTY_CHARACTERS+char_struct::miss_rate,X
    case 0xC21C94: cpu.execute_instruction<0x9D>(0x009CCF, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21C97: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/recalc_character_miss_rate.asm:55 END_C_FUNCTION
    case 0xC21C98: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/recover_hp.asm (source_named).
bool execute_battle_recover_hp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC271D7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC271D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC271DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC271DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC271DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC271DC.
    case 0xC271DE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC271DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC271E0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:11 STX @LOCAL02
    case 0xC271E1: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:11 STX @LOCAL02
    // Overlapping static entry reached from 0xC271DE.
    case 0xC271E2: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/battle/recover_hp.asm:12 STA @VIRTUAL02
    case 0xC271E3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC271E2.
    case 0xC271E4: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/recover_hp.asm:13 LDX @VIRTUAL02
    case 0xC271E5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:14 LDA a:battler::consciousness,X
    case 0xC271E7: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/recover_hp.asm:15 AND #$00FF
    case 0xC271EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_hp.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC271EA.
    case 0xC271EC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_hp.asm:16 CMP #1
    case 0xC271ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_hp.asm:16 CMP #1
    // Overlapping static entry reached from 0xC271ED.
    case 0xC271EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/recover_hp.asm:17 BNE @UNKNOWN2
    case 0xC271F0: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // src/battle/recover_hp.asm:18 LDX @VIRTUAL02
    case 0xC271F2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:19 LDA a:battler::afflictions,X
    case 0xC271F4: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/recover_hp.asm:20 AND #$00FF
    case 0xC271F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_hp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC271F7.
    case 0xC271F9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_hp.asm:21 CMP #1
    case 0xC271FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_hp.asm:21 CMP #1
    // Overlapping static entry reached from 0xC271FA.
    case 0xC271FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/recover_hp.asm:22 BEQ @UNKNOWN1
    case 0xC271FD: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/battle/recover_hp.asm:23 LDX @LOCAL02
    case 0xC271FF: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:24 STX @VIRTUAL04
    case 0xC27201: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/recover_hp.asm:25 TXA
    case 0xC27203: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:26 LDX @VIRTUAL02
    case 0xC27204: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:27 CLC
    case 0xC27206: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:28 ADC a:battler::hp_target,X
    case 0xC27207: cpu.execute_instruction<0x7D>(0x000013, 3); return true;
    // src/battle/recover_hp.asm:29 TAY
    case 0xC2720A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:30 STY @LOCAL02
    case 0xC2720B: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:31 TYX
    case 0xC2720D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:32 LDA @VIRTUAL02
    case 0xC2720E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:33 JSR SET_HP
    case 0xC27210: cpu.execute_instruction<0x20>(0x007065, 3); return true;
    // src/battle/recover_hp.asm:34 LDX @VIRTUAL02
    case 0xC27213: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_hp.asm:35 LDY @LOCAL02
    case 0xC27215: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/recover_hp.asm:36 TYA
    case 0xC27217: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recover_hp.asm:37 CMP a:battler::hp_max,X
    case 0xC27218: cpu.execute_instruction<0xDD>(0x000015, 3); return true;
    // src/battle/recover_hp.asm:38 BCC @UNKNOWN0
    case 0xC2721B: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC2721D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x002F0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC2721D.
    case 0xC2721F: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC27220: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC27222: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC2721F.
    case 0xC27223: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC27222.
    case 0xC27224: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC27225: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC27227: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/recover_hp.asm:40 BRA @UNKNOWN2
    case 0xC2722B: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC2722D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x002F21, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC2722D.
    case 0xC2722F: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC27230: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC27232: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC2722F.
    case 0xC27233: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC27232.
    case 0xC27234: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC27235: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27237: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27239: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2723B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2723D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2723F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27241: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27243: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/recover_hp.asm:45 JSL DISPLAY_TEXT_WAIT
    case 0xC27245: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/recover_hp.asm:46 BRA @UNKNOWN2
    case 0xC27249: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC2724B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x002DF3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC2724B.
    case 0xC2724D: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC2724E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27250: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC27250.
    case 0xC27252: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27253: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27255: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_hp.asm:50 END_C_FUNCTION
    case 0xC27259: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_hp.asm:50 END_C_FUNCTION
    case 0xC2725A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/recover_pp.asm (source_named).
bool execute_battle_recover_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC2725B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2725D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2725E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2725F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27260: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC27260.
    case 0xC27262: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27263: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27264: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    case 0xC27265: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC27262.
    case 0xC27266: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    case 0xC27267: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27266.
    case 0xC27268: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/battle/recover_pp.asm:15 STA @LOCAL04
    case 0xC27269: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/recover_pp.asm:16 LDX @VIRTUAL02
    case 0xC2726B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:17 LDA a:battler::consciousness,X
    case 0xC2726D: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/recover_pp.asm:18 AND #$00FF
    case 0xC27270: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_pp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC27270.
    case 0xC27272: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_pp.asm:19 CMP #1
    case 0xC27273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_pp.asm:19 CMP #1
    // Overlapping static entry reached from 0xC27273.
    case 0xC27275: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/recover_pp.asm:20 BNE @UNKNOWN2
    case 0xC27276: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/battle/recover_pp.asm:21 LDX @VIRTUAL02
    case 0xC27278: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:22 LDA a:battler::afflictions,X
    case 0xC2727A: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/recover_pp.asm:23 AND #$00FF
    case 0xC2727D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/recover_pp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2727D.
    case 0xC2727F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/recover_pp.asm:24 CMP #1
    case 0xC27280: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/recover_pp.asm:24 CMP #1
    // Overlapping static entry reached from 0xC27280.
    case 0xC27282: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/recover_pp.asm:25 BEQ @UNKNOWN2
    case 0xC27283: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/battle/recover_pp.asm:26 LDX @VIRTUAL02
    case 0xC27285: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:27 LDY a:battler::pp_target,X
    case 0xC27287: cpu.execute_instruction<0xBC>(0x000019, 3); return true;
    // src/battle/recover_pp.asm:28 LDX @VIRTUAL02
    case 0xC2728A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:29 LDA a:battler::pp_max,X
    case 0xC2728C: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/recover_pp.asm:30 STA @LOCAL03
    case 0xC2728F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/recover_pp.asm:31 STA @VIRTUAL02
    case 0xC27291: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:32 TYA
    case 0xC27293: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:33 CLC
    case 0xC27294: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:34 ADC @VIRTUAL04
    case 0xC27295: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:35 CMP @VIRTUAL02
    case 0xC27297: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:36 BCC @UNKNOWN0
    case 0xC27299: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // src/battle/recover_pp.asm:37 STY @VIRTUAL02
    case 0xC2729B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:38 LDA @LOCAL03
    case 0xC2729D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/recover_pp.asm:39 SEC
    case 0xC2729F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:40 SBC @VIRTUAL02
    case 0xC272A0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:41 BRA @UNKNOWN1
    case 0xC272A2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:43 LDA @VIRTUAL04
    case 0xC272A4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:45 TAY
    case 0xC272A6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:46 STY @LOCAL02
    case 0xC272A7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/recover_pp.asm:47 LDA @LOCAL04
    case 0xC272A9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/recover_pp.asm:48 STA @VIRTUAL02
    case 0xC272AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:49 LDX @VIRTUAL02
    case 0xC272AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:50 LDA @VIRTUAL04
    case 0xC272AF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/recover_pp.asm:51 CLC
    case 0xC272B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:52 ADC a:battler::pp_target,X
    case 0xC272B2: cpu.execute_instruction<0x7D>(0x000019, 3); return true;
    // src/battle/recover_pp.asm:53 TAX
    case 0xC272B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/recover_pp.asm:54 LDA @VIRTUAL02
    case 0xC272B6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/recover_pp.asm:55 JSR SET_PP
    case 0xC272B8: cpu.execute_instruction<0x20>(0x0070D4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000039, 2); else cpu.execute_instruction<0xA9>(0x002F39, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272BB.
    case 0xC272BD: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272BD.
    case 0xC272C1: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272C0.
    case 0xC272C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/recover_pp.asm:57 LDY @LOCAL02
    case 0xC272C5: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/recover_pp.asm:58 TYA
    case 0xC272C7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC272C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC272CA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272CE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272D0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272D2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/recover_pp.asm:61 JSL DISPLAY_TEXT_WAIT
    case 0xC272D4: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC272D8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC272D9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/reduce_hp.asm (source_named).
bool execute_battle_reduce_hp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reduce_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC27133: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC27135: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC27136: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC27137: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC27138: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27138.
    case 0xC2713A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC2713B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/reduce_hp.asm:8 END_STACK_VARS
    case 0xC2713C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:9 STX @VIRTUAL02
    case 0xC2713D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/reduce_hp.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2713A.
    case 0xC2713E: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/reduce_hp.asm:10 TAY
    case 0xC2713F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:11 LDA a:battler::hp_target,Y
    case 0xC27140: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/reduce_hp.asm:12 STA @LOCAL00
    case 0xC27143: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reduce_hp.asm:13 STA @VIRTUAL04
    case 0xC27145: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/reduce_hp.asm:14 LDA @VIRTUAL02
    case 0xC27147: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/reduce_hp.asm:15 CMP @VIRTUAL04
    case 0xC27149: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/reduce_hp.asm:16 BLTEQ @UNKNOWN0
    case 0xC2714B: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/reduce_hp.asm:16 BLTEQ @UNKNOWN0
    case 0xC2714D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/reduce_hp.asm:17 LDA #0
    case 0xC2714F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/reduce_hp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2714F.
    case 0xC27151: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/reduce_hp.asm:18 BRA @UNKNOWN1
    case 0xC27152: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/reduce_hp.asm:20 LDA @LOCAL00
    case 0xC27154: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/reduce_hp.asm:21 SEC
    case 0xC27156: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:22 SBC @VIRTUAL02
    case 0xC27157: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/reduce_hp.asm:24 TAX
    case 0xC27159: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:25 TYA
    case 0xC2715A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/reduce_hp.asm:26 JSR SET_HP
    case 0xC2715B: cpu.execute_instruction<0x20>(0x007065, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reduce_hp.asm:27 END_C_FUNCTION
    case 0xC2715E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/reduce_hp.asm:27 END_C_FUNCTION
    case 0xC2715F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/reduce_pp.asm (source_named).
bool execute_battle_reduce_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reduce_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC27160: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27162: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27163: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27164: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27165: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27165.
    case 0xC27167: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27168: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/reduce_pp.asm:8 END_STACK_VARS
    case 0xC27169: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:9 STX @VIRTUAL02
    case 0xC2716A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/reduce_pp.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC27167.
    case 0xC2716B: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/reduce_pp.asm:10 TAY
    case 0xC2716C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:11 LDA a:battler::pp_target,Y
    case 0xC2716D: cpu.execute_instruction<0xB9>(0x000019, 3); return true;
    // src/battle/reduce_pp.asm:12 STA @LOCAL00
    case 0xC27170: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reduce_pp.asm:13 STA @VIRTUAL04
    case 0xC27172: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/reduce_pp.asm:14 LDA @VIRTUAL02
    case 0xC27174: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/reduce_pp.asm:15 CMP @VIRTUAL04
    case 0xC27176: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/reduce_pp.asm:16 BLTEQ @UNKNOWN0
    case 0xC27178: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/reduce_pp.asm:16 BLTEQ @UNKNOWN0
    case 0xC2717A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/reduce_pp.asm:17 LDA #0
    case 0xC2717C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/reduce_pp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2717C.
    case 0xC2717E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/reduce_pp.asm:18 BRA @UNKNOWN1
    case 0xC2717F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/reduce_pp.asm:20 LDA @LOCAL00
    case 0xC27181: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/reduce_pp.asm:21 SEC
    case 0xC27183: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:22 SBC @VIRTUAL02
    case 0xC27184: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/reduce_pp.asm:24 TAX
    case 0xC27186: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:25 TYA
    case 0xC27187: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/reduce_pp.asm:26 JSR SET_PP
    case 0xC27188: cpu.execute_instruction<0x20>(0x0070D4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reduce_pp.asm:27 END_C_FUNCTION
    case 0xC2718B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/reduce_pp.asm:27 END_C_FUNCTION
    case 0xC2718C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_dead_targetting.asm (source_named).
bool execute_battle_remove_dead_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_dead_targetting.asm:3 BEGIN_C_FUNCTION
    case 0xC27023: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC27025: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC27026: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC27027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC27027.
    case 0xC27029: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_dead_targetting.asm:6 END_STACK_VARS
    case 0xC2702A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:7 LDX #0
    case 0xC2702B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/remove_dead_targetting.asm:7 LDX #0
    // Overlapping static entry reached from 0xC2702B.
    case 0xC2702D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/remove_dead_targetting.asm:8 STX @LOCAL00
    case 0xC2702E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:9 BRA @UNKNOWN2
    case 0xC27030: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/battle/remove_dead_targetting.asm:11 TXA
    case 0xC27032: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:12 JSL IS_CHAR_TARGETTED
    case 0xC27033: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/battle/remove_dead_targetting.asm:13 CMP #0
    case 0xC27037: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/remove_dead_targetting.asm:13 CMP #0
    // Overlapping static entry reached from 0xC27037.
    case 0xC27039: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_dead_targetting.asm:14 BEQ @UNKNOWN1
    case 0xC2703A: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/remove_dead_targetting.asm:15 LDX @LOCAL00
    case 0xC2703C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:16 TXA
    case 0xC2703E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:17 LDY #.SIZEOF(battler)
    case 0xC2703F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/remove_dead_targetting.asm:17 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2703F.
    case 0xC27041: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/remove_dead_targetting.asm:18 JSL MULT168
    case 0xC27042: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/remove_dead_targetting.asm:19 TAX
    case 0xC27046: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:20 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27047: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/battle/remove_dead_targetting.asm:21 AND #$00FF
    case 0xC2704A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_dead_targetting.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2704A.
    case 0xC2704C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/remove_dead_targetting.asm:22 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2704D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/remove_dead_targetting.asm:22 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2704D.
    case 0xC2704F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/remove_dead_targetting.asm:23 BNE @UNKNOWN1
    case 0xC27050: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/remove_dead_targetting.asm:24 LDX @LOCAL00
    case 0xC27052: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:25 TXA
    case 0xC27054: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:26 JSL REMOVE_TARGET
    case 0xC27055: cpu.execute_instruction<0x22>(0xC26FC8, 4); return true;
    // src/battle/remove_dead_targetting.asm:28 LDX @LOCAL00
    case 0xC27059: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:29 INX
    case 0xC2705B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/remove_dead_targetting.asm:30 STX @LOCAL00
    case 0xC2705C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_dead_targetting.asm:32 CPX #BATTLER_COUNT
    case 0xC2705E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/remove_dead_targetting.asm:32 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2705E.
    case 0xC27060: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/remove_dead_targetting.asm:33 BCC @UNKNOWN0
    case 0xC27061: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_dead_targetting.asm:34 END_C_FUNCTION
    case 0xC27063: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/remove_dead_targetting.asm:34 END_C_FUNCTION
    case 0xC27064: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_npc_targetting.asm (source_named).
bool execute_battle_remove_npc_targetting_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_npc_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26DB6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26DB8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26DB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26DBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26DBA.
    case 0xC26DBC: cpu.execute_instruction<0xFF>(0xAEA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26DBD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:7 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26DBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/remove_npc_targetting.asm:7 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26DBE.
    case 0xC26DC0: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    case 0xC26DC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    // Overlapping static entry reached from 0xC26DC0.
    case 0xC26DC2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    // Overlapping static entry reached from 0xC26DC1.
    case 0xC26DC3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/remove_npc_targetting.asm:9 STA @LOCAL00
    case 0xC26DC4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:10 BRA @UNKNOWN2
    case 0xC26DC6: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/battle/remove_npc_targetting.asm:12 LDA a:battler::consciousness,X
    case 0xC26DC8: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/remove_npc_targetting.asm:13 AND #$00FF
    case 0xC26DCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_npc_targetting.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC26DCB.
    case 0xC26DCD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_npc_targetting.asm:14 BEQ @UNKNOWN1
    case 0xC26DCE: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/battle/remove_npc_targetting.asm:15 LDA a:battler::npc_id,X
    case 0xC26DD0: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/remove_npc_targetting.asm:16 AND #$00FF
    case 0xC26DD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_npc_targetting.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC26DD3.
    case 0xC26DD5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_npc_targetting.asm:17 BEQ @UNKNOWN1
    case 0xC26DD6: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DD8.
    case 0xC26DDA: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DDB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DDA.
    case 0xC26DDC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DDC.
    case 0xC26DDE: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26DDD.
    case 0xC26DDF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26DE0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/remove_npc_targetting.asm:19 LDA @LOCAL00
    case 0xC26DE2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:20 ASL
    case 0xC26DE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:21 ASL
    case 0xC26DE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:22 CLC
    case 0xC26DE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:23 ADC @VIRTUAL06
    case 0xC26DE7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/remove_npc_targetting.asm:24 STA @VIRTUAL06
    case 0xC26DE9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26DEB.
    case 0xC26DED: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DEE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DF0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DF1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DF3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26DF5: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/remove_npc_targetting.asm:26 LDA @VIRTUAL0A
    case 0xC26DF7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/remove_npc_targetting.asm:27 EOR #$FFFF
    case 0xC26DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_npc_targetting.asm:27 EOR #$FFFF
    // Overlapping static entry reached from 0xC26DF9.
    case 0xC26DFB: cpu.execute_instruction<0xFF>(0xA50A85, 4); return true;
    // src/battle/remove_npc_targetting.asm:28 STA @VIRTUAL0A
    case 0xC26DFC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/remove_npc_targetting.asm:29 LDA @VIRTUAL0A+2
    case 0xC26DFE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/remove_npc_targetting.asm:29 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC26DFB.
    case 0xC26DFF: cpu.execute_instruction<0x0C>(0x00FF49, 3); return true;
    // src/battle/remove_npc_targetting.asm:30 EOR #$FFFF
    case 0xC26E00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_npc_targetting.asm:30 EOR #$FFFF
    // Overlapping static entry reached from 0xC26E00.
    case 0xC26E02: cpu.execute_instruction<0xFF>(0xAD0C85, 4); return true;
    // src/battle/remove_npc_targetting.asm:31 STA @VIRTUAL0A+2
    case 0xC26E03: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E05: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E02.
    case 0xC26E06: cpu.execute_instruction<0x6E>(0x0085AB, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E08: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E06.
    case 0xC26E09: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E0A: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E09.
    case 0xC26E0B: cpu.execute_instruction<0x70>(0x0000AB, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26E0D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26E0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26E11: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26E13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26E15: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26E17: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26E19: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E1B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E1D: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E20: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26E22: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/remove_npc_targetting.asm:36 TXA
    case 0xC26E25: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:37 CLC
    case 0xC26E26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:38 ADC #.SIZEOF(battler)
    case 0xC26E27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/remove_npc_targetting.asm:38 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26E27.
    case 0xC26E29: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/remove_npc_targetting.asm:39 TAX
    case 0xC26E2A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:40 LDA @LOCAL00
    case 0xC26E2B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:41 INC
    case 0xC26E2D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/remove_npc_targetting.asm:42 STA @LOCAL00
    case 0xC26E2E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/remove_npc_targetting.asm:44 CMP #BATTLER_COUNT
    case 0xC26E30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/remove_npc_targetting.asm:44 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26E30.
    case 0xC26E32: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/remove_npc_targetting.asm:45 BCC @UNKNOWN0
    case 0xC26E33: cpu.execute_instruction<0x90>(0x000093, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_npc_targetting.asm:46 END_C_FUNCTION
    case 0xC26E35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_npc_targetting.asm:46 END_C_FUNCTION
    case 0xC26E36: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_status_untargettable_targets.asm (source_named).
bool execute_battle_remove_status_untargettable_targets_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24023: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24025: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24026: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC24027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC24027.
    case 0xC24029: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:6 END_STACK_VARS
    case 0xC2402A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:7 LDX #0
    case 0xC2402B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:7 LDX #0
    // Overlapping static entry reached from 0xC2402B.
    case 0xC2402D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:8 STX @LOCAL00
    case 0xC2402E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:9 BRA @UNKNOWN1
    case 0xC24030: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:11 LDX CURRENT_ATTACKER
    case 0xC24032: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:12 CMP a:battler::current_action,X
    case 0xC24035: cpu.execute_instruction<0xDD>(0x000004, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:13 BEQ @UNKNOWN6
    case 0xC24038: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:14 LDX @LOCAL00
    case 0xC2403A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:15 INX
    case 0xC2403C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:16 STX @LOCAL00
    case 0xC2403D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:18 TXA
    case 0xC2403F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:19 ASL
    case 0xC24040: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:20 TAX
    case 0xC24041: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:21 LDA f:DEAD_TARGETTABLE_ACTIONS,X
    case 0xC24042: cpu.execute_instruction<0xBF>(0xC474F0, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:22 BNE @UNKNOWN0
    case 0xC24046: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:23 LDY #0
    case 0xC24048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:23 LDY #0
    // Overlapping static entry reached from 0xC24048.
    case 0xC2404A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:24 STY @LOCAL00
    case 0xC2404B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:25 BRA @UNKNOWN5
    case 0xC2404D: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:27 TYA
    case 0xC2404F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:28 JSL IS_CHAR_TARGETTED
    case 0xC24050: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:29 CMP #0
    case 0xC24054: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:29 CMP #0
    // Overlapping static entry reached from 0xC24054.
    case 0xC24056: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:30 BEQ @UNKNOWN4
    case 0xC24057: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:31 LDY @LOCAL00
    case 0xC24059: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:32 TYA
    case 0xC2405B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:33 LDY #.SIZEOF(battler)
    case 0xC2405C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:33 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2405C.
    case 0xC2405E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:34 JSL MULT168
    case 0xC2405F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:35 TAX
    case 0xC24063: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:36 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC24064: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:37 AND #$00FF
    case 0xC24067: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC24067.
    case 0xC24069: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:38 BEQ @UNKNOWN3
    case 0xC2406A: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:39 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2406C: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:40 AND #$00FF
    case 0xC2406F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC2406F.
    case 0xC24071: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:41 TAX
    case 0xC24072: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:42 CPX #STATUS_0::UNCONSCIOUS
    case 0xC24073: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:42 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC24073.
    case 0xC24075: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:43 BEQ @UNKNOWN3
    case 0xC24076: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:44 CPX #STATUS_0::DIAMONDIZED
    case 0xC24078: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:44 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC24078.
    case 0xC2407A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:45 BNE @UNKNOWN4
    case 0xC2407B: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:47 LDY @LOCAL00
    case 0xC2407D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:48 TYA
    case 0xC2407F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:49 JSL REMOVE_TARGET
    case 0xC24080: cpu.execute_instruction<0x22>(0xC26FC8, 4); return true;
    // src/battle/remove_status_untargettable_targets.asm:51 LDY @LOCAL00
    case 0xC24084: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:52 INY
    case 0xC24086: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/remove_status_untargettable_targets.asm:53 STY @LOCAL00
    case 0xC24087: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:55 CPY #BATTLER_COUNT
    case 0xC24089: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/remove_status_untargettable_targets.asm:55 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC24089.
    case 0xC2408B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/remove_status_untargettable_targets.asm:56 BCC @UNKNOWN2
    case 0xC2408C: cpu.execute_instruction<0x90>(0x0000C1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:58 END_C_FUNCTION
    case 0xC2408E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_status_untargettable_targets.asm:58 END_C_FUNCTION
    case 0xC2408F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/remove_target.asm (source_named).
bool execute_battle_remove_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26FC8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26FCD.
    case 0xC26FCF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FD0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FD1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/remove_target.asm:8 STA @LOCAL00
    case 0xC26FD2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/remove_target.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC26FCF.
    case 0xC26FD3: cpu.execute_instruction<0x0E>(0x00E6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD4.
    case 0xC26FD6: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD6.
    case 0xC26FD8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD8.
    case 0xC26FDA: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD9.
    case 0xC26FDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FDC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/remove_target.asm:10 LDA @LOCAL00
    case 0xC26FDE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/remove_target.asm:11 ASL
    case 0xC26FE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_target.asm:12 ASL
    case 0xC26FE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/remove_target.asm:13 CLC
    case 0xC26FE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/remove_target.asm:14 ADC @VIRTUAL06
    case 0xC26FE3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/remove_target.asm:15 STA @VIRTUAL06
    case 0xC26FE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FE7.
    case 0xC26FE9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FEA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FEC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FED: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FEF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FF1: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/remove_target.asm:17 LDA @VIRTUAL0A
    case 0xC26FF3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/remove_target.asm:18 EOR #$FFFF
    case 0xC26FF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_target.asm:18 EOR #$FFFF
    // Overlapping static entry reached from 0xC26FF5.
    case 0xC26FF7: cpu.execute_instruction<0xFF>(0xA50A85, 4); return true;
    // src/battle/remove_target.asm:19 STA @VIRTUAL0A
    case 0xC26FF8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    case 0xC26FFA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC26FF7.
    case 0xC26FFB: cpu.execute_instruction<0x0C>(0x00FF49, 3); return true;
    // src/battle/remove_target.asm:21 EOR #$FFFF
    case 0xC26FFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/battle/remove_target.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC26FFC.
    case 0xC26FFE: cpu.execute_instruction<0xFF>(0xAD0C85, 4); return true;
    // src/battle/remove_target.asm:22 STA @VIRTUAL0A+2
    case 0xC26FFF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27001: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FFE.
    case 0xC27002: cpu.execute_instruction<0x6E>(0x0085AB, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27004: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC27002.
    case 0xC27005: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27006: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC27005.
    case 0xC27007: cpu.execute_instruction<0x70>(0x0000AB, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27009: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2700B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2700D: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2700F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27011: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27013: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27015: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27017: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27019: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2701C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2701E: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC27021: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC27022: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/render_battle_sprite_row.asm (source_named).
bool execute_battle_render_battle_sprite_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/render_battle_sprite_row.asm:3 BEGIN_C_FUNCTION
    case 0xC2F63D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F63F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F640: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F641: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F642: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F642.
    case 0xC2F644: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F645: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/render_battle_sprite_row.asm:11 END_STACK_VARS
    case 0xC2F646: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    case 0xC2F647: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/render_battle_sprite_row.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC2F644.
    case 0xC2F648: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2F649: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A41E, 3); return true;
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F648.
    case 0xC2F64A: cpu.execute_instruction<0x1E>(0x0085A4, 3); return true;
    // src/battle/render_battle_sprite_row.asm:13 LDA #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2F649.
    case 0xC2F64B: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    case 0xC2F64C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2F64B.
    case 0xC2F64D: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    case 0xC2F64E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/render_battle_sprite_row.asm:15 LDA #8
    // Overlapping static entry reached from 0xC2F64E.
    case 0xC2F650: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/render_battle_sprite_row.asm:16 STA @VIRTUAL04
    case 0xC2F651: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:17 STA @LOCAL03
    case 0xC2F653: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/render_battle_sprite_row.asm:18 JMP @UNKNOWN12
    case 0xC2F655: cpu.execute_instruction<0x4C>(0x00F804, 3); return true;
    // src/battle/render_battle_sprite_row.asm:20 LDX @VIRTUAL02
    case 0xC2F658: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:21 LDA a:battler::consciousness,X
    case 0xC2F65A: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    case 0xC2F65D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F65D.
    case 0xC2F65F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F660: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:23 BEQL @UNKNOWN11
    case 0xC2F662: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:24 LDX @VIRTUAL02
    case 0xC2F665: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:25 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2F667: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    case 0xC2F66A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F66A.
    case 0xC2F66C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    case 0xC2F66D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/render_battle_sprite_row.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F66D.
    case 0xC2F66F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F670: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:28 BEQL @UNKNOWN11
    case 0xC2F672: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:29 LDX @VIRTUAL02
    case 0xC2F675: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:30 LDA a:battler::ally_or_enemy,X
    case 0xC2F677: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    case 0xC2F67A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2F67A.
    case 0xC2F67C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    case 0xC2F67D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/render_battle_sprite_row.asm:32 CMP #1
    // Overlapping static entry reached from 0xC2F67D.
    case 0xC2F67F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F680: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:33 BNEL @UNKNOWN11
    case 0xC2F682: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:34 LDX @VIRTUAL02
    case 0xC2F685: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:35 LDA a:battler::row,X
    case 0xC2F687: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    case 0xC2F68A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2F68A.
    case 0xC2F68C: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/render_battle_sprite_row.asm:37 CMP @LOCAL04
    case 0xC2F68D: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F68F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:38 BNEL @UNKNOWN11
    case 0xC2F691: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:39 LDX @VIRTUAL02
    case 0xC2F694: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:40 LDA a:battler::sprite,X
    case 0xC2F696: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F699: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:41 BEQL @UNKNOWN11
    case 0xC2F69B: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:42 LDA @VIRTUAL02
    case 0xC2F69E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:43 CLC
    case 0xC2F6A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    case 0xC2F6A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000048, 2); else cpu.execute_instruction<0x69>(0x000048, 3); return true;
    // src/battle/render_battle_sprite_row.asm:44 ADC #battler::unknown72
    // Overlapping static entry reached from 0xC2F6A1.
    case 0xC2F6A3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/render_battle_sprite_row.asm:45 TAX
    case 0xC2F6A4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:46 LDA __BSS_START__,X
    case 0xC2F6A5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    case 0xC2F6A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC2EA5B.
    case 0xC2F6A9: cpu.execute_instruction<0xFF>(0x1AF000, 4); return true;
    // src/battle/render_battle_sprite_row.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC2F6A8.
    case 0xC2F6AA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:48 BEQ @UNKNOWN6
    case 0xC2F6AB: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/render_battle_sprite_row.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F6AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:50 DEC
    case 0xC2F6AF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:51 STA __BSS_START__,X
    case 0xC2F6B0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    case 0xC2F6B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/render_battle_sprite_row.asm:52 LDY #3
    // Overlapping static entry reached from 0xC2F6B3.
    case 0xC2F6B5: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/render_battle_sprite_row.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6B6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    case 0xC2F6B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2F6B8.
    case 0xC2F6BA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/render_battle_sprite_row.asm:55 JSL DIVISION16
    case 0xC2F6BB: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    case 0xC2F6BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/render_battle_sprite_row.asm:56 AND #$0001
    // Overlapping static entry reached from 0xC2F6BF.
    case 0xC2F6C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F6C2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:57 BNEL @UNKNOWN11
    case 0xC2F6C4: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:59 LDA @VIRTUAL02
    case 0xC2F6C7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:60 CLC
    case 0xC2F6C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    case 0xC2F6CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/battle/render_battle_sprite_row.asm:61 ADC #battler::unknown73
    // Overlapping static entry reached from 0xC2F6CA.
    case 0xC2F6CC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/render_battle_sprite_row.asm:62 TAX
    case 0xC2F6CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:63 LDA __BSS_START__,X
    case 0xC2F6CE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    case 0xC2F6D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2F6D1.
    case 0xC2F6D3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:65 BEQ @UNKNOWN7
    case 0xC2F6D4: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F6D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:67 DEC
    case 0xC2F6D8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:68 STA __BSS_START__,X
    case 0xC2F6D9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/render_battle_sprite_row.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2F6DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    case 0xC2F6DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F6DE.
    case 0xC2F6E0: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    case 0xC2F6E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/render_battle_sprite_row.asm:71 AND #$0004
    // Overlapping static entry reached from 0xC2F6E1.
    case 0xC2F6E3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:72 BNE @UNKNOWN7
    case 0xC2F6E4: cpu.execute_instruction<0xD0>(0x00003B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:73 LDX @VIRTUAL02
    case 0xC2F6E6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:74 LDA a:battler::sprite_y,X
    case 0xC2F6E8: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    case 0xC2F6EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC2F6EB.
    case 0xC2F6ED: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:76 SEC
    case 0xC2F6EE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:77 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F6EF: cpu.execute_instruction<0xED>(0x00AF6D, 3); return true;
    // src/battle/render_battle_sprite_row.asm:78 TAY
    case 0xC2F6F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:79 LDX @VIRTUAL02
    case 0xC2F6F3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:80 LDA a:battler::sprite_x,X
    case 0xC2F6F5: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    case 0xC2F6F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC2F6F8.
    case 0xC2F6FA: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:82 SEC
    case 0xC2F6FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:83 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F6FC: cpu.execute_instruction<0xED>(0x00AF6B, 3); return true;
    // src/battle/render_battle_sprite_row.asm:84 TAX
    case 0xC2F6FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:85 STX @LOCAL02
    case 0xC2F700: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:86 LDX @VIRTUAL02
    case 0xC2F702: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:87 LDA a:battler::vram_sprite_index,X
    case 0xC2F704: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    case 0xC2F707: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC2F707.
    case 0xC2F709: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F70E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F710: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F711: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F712: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:89 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F713: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:90 CLC
    case 0xC2F714: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F715: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00ADEB, 3); return true;
    // src/battle/render_battle_sprite_row.asm:91 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F715.
    case 0xC2F717: cpu.execute_instruction<0xAD>(0x0012A6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:92 LDX @LOCAL02
    case 0xC2F718: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:93 JSL UNKNOWN_C08CD5
    case 0xC2F71A: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/battle/render_battle_sprite_row.asm:94 JMP @UNKNOWN11
    case 0xC2F71E: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:96 LDX @VIRTUAL02
    case 0xC2F721: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:97 LDA a:battler::use_alt_spritemap,X
    case 0xC2F723: cpu.execute_instruction<0xBD>(0x00004B, 3); return true;
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    case 0xC2F726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC2F726.
    case 0xC2F728: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:99 BEQ @UNKNOWN8
    case 0xC2F729: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:100 LDX @VIRTUAL02
    case 0xC2F72B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:101 LDA a:battler::sprite_y,X
    case 0xC2F72D: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    case 0xC2F730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC2F730.
    case 0xC2F732: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:103 SEC
    case 0xC2F733: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:104 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F734: cpu.execute_instruction<0xED>(0x00AF6D, 3); return true;
    // src/battle/render_battle_sprite_row.asm:105 TAY
    case 0xC2F737: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:106 LDX @VIRTUAL02
    case 0xC2F738: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:107 LDA a:battler::sprite_x,X
    case 0xC2F73A: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    case 0xC2F73D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC2F73D.
    case 0xC2F73F: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:109 SEC
    case 0xC2F740: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:110 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F741: cpu.execute_instruction<0xED>(0x00AF6B, 3); return true;
    // src/battle/render_battle_sprite_row.asm:111 TAX
    case 0xC2F744: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:112 STX @LOCAL01
    case 0xC2F745: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/render_battle_sprite_row.asm:113 LDX @VIRTUAL02
    case 0xC2F747: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:114 LDA a:battler::vram_sprite_index,X
    case 0xC2F749: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    case 0xC2F74C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC2F74C.
    case 0xC2F74E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F74F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F751: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F752: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F753: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F755: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F756: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F757: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:116 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F758: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:117 CLC
    case 0xC2F759: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F75A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00ADEB, 3); return true;
    // src/battle/render_battle_sprite_row.asm:118 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F75A.
    case 0xC2F75C: cpu.execute_instruction<0xAD>(0x0010A6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:119 LDX @LOCAL01
    case 0xC2F75D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/render_battle_sprite_row.asm:120 JSL UNKNOWN_C08CD5
    case 0xC2F75F: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/battle/render_battle_sprite_row.asm:121 JMP @UNKNOWN11
    case 0xC2F763: cpu.execute_instruction<0x4C>(0x00F7F2, 3); return true;
    // src/battle/render_battle_sprite_row.asm:123 LDA ENEMY_TARGETTING_FLASHING
    case 0xC2F766: cpu.execute_instruction<0xAD>(0x00AF77, 3); return true;
    // src/battle/render_battle_sprite_row.asm:124 BEQ @UNKNOWN10
    case 0xC2F769: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/battle/render_battle_sprite_row.asm:125 LDX @VIRTUAL02
    case 0xC2F76B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:126 LDA a:battler::unknown74,X
    case 0xC2F76D: cpu.execute_instruction<0xBD>(0x00004A, 3); return true;
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    case 0xC2F770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC2F770.
    case 0xC2F772: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:128 BEQ @UNKNOWN9
    case 0xC2F773: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/render_battle_sprite_row.asm:129 LDA FRAME_COUNTER
    case 0xC2F775: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    case 0xC2F778: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC2F778.
    case 0xC2F77A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    case 0xC2F77B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/battle/render_battle_sprite_row.asm:131 AND #$0008
    // Overlapping static entry reached from 0xC2F77B.
    case 0xC2F77D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/render_battle_sprite_row.asm:132 BEQ @UNKNOWN10
    case 0xC2F77E: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/render_battle_sprite_row.asm:134 LDX @VIRTUAL02
    case 0xC2F780: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:135 LDA a:battler::sprite_y,X
    case 0xC2F782: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    case 0xC2F785: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:136 AND #$00FF
    // Overlapping static entry reached from 0xC2F785.
    case 0xC2F787: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:137 SEC
    case 0xC2F788: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:138 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F789: cpu.execute_instruction<0xED>(0x00AF6D, 3); return true;
    // src/battle/render_battle_sprite_row.asm:139 TAY
    case 0xC2F78C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:140 LDX @VIRTUAL02
    case 0xC2F78D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:141 LDA a:battler::sprite_x,X
    case 0xC2F78F: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    case 0xC2F792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2F792.
    case 0xC2F794: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:143 SEC
    case 0xC2F795: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:144 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F796: cpu.execute_instruction<0xED>(0x00AF6B, 3); return true;
    // src/battle/render_battle_sprite_row.asm:145 TAX
    case 0xC2F799: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:146 STX @LOCAL02
    case 0xC2F79A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:147 LDX @VIRTUAL02
    case 0xC2F79C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:148 LDA a:battler::vram_sprite_index,X
    case 0xC2F79E: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    case 0xC2F7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2F7A1.
    case 0xC2F7A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7A8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:150 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:151 CLC
    case 0xC2F7AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2F7AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00ADEB, 3); return true;
    // src/battle/render_battle_sprite_row.asm:152 ADC #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F7AF.
    case 0xC2F7B1: cpu.execute_instruction<0xAD>(0x0012A6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:153 LDX @LOCAL02
    case 0xC2F7B2: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/render_battle_sprite_row.asm:154 JSL UNKNOWN_C08CD5
    case 0xC2F7B4: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/battle/render_battle_sprite_row.asm:155 BRA @UNKNOWN11
    case 0xC2F7B8: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:157 LDX @VIRTUAL02
    case 0xC2F7BA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:158 LDA a:battler::sprite_y,X
    case 0xC2F7BC: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    case 0xC2F7BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC2F7BF.
    case 0xC2F7C1: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:160 SEC
    case 0xC2F7C2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:161 SBC SCREEN_EFFECT_VERTICAL_OFFSET
    case 0xC2F7C3: cpu.execute_instruction<0xED>(0x00AF6D, 3); return true;
    // src/battle/render_battle_sprite_row.asm:162 TAY
    case 0xC2F7C6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:163 LDX @VIRTUAL02
    case 0xC2F7C7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:164 LDA a:battler::sprite_x,X
    case 0xC2F7C9: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    case 0xC2F7CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:165 AND #$00FF
    // Overlapping static entry reached from 0xC2F7CC.
    case 0xC2F7CE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/render_battle_sprite_row.asm:166 SEC
    case 0xC2F7CF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:167 SBC SCREEN_EFFECT_HORIZONTAL_OFFSET
    case 0xC2F7D0: cpu.execute_instruction<0xED>(0x00AF6B, 3); return true;
    // src/battle/render_battle_sprite_row.asm:168 TAX
    case 0xC2F7D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:169 STX @LOCAL00
    case 0xC2F7D4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/render_battle_sprite_row.asm:170 LDX @VIRTUAL02
    case 0xC2F7D6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:171 LDA a:battler::vram_sprite_index,X
    case 0xC2F7D8: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    case 0xC2F7DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/render_battle_sprite_row.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC2F7DB.
    case 0xC2F7DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/render_battle_sprite_row.asm:173 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2F7E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:174 CLC
    case 0xC2F7E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2F7E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AB, 2); else cpu.execute_instruction<0x69>(0x00ACAB, 3); return true;
    // src/battle/render_battle_sprite_row.asm:175 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2F7E9.
    case 0xC2F7EB: cpu.execute_instruction<0xAC>(0x000EA6, 3); return true;
    // src/battle/render_battle_sprite_row.asm:176 LDX @LOCAL00
    case 0xC2F7EC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/render_battle_sprite_row.asm:177 JSL UNKNOWN_C08CD5
    case 0xC2F7EE: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/battle/render_battle_sprite_row.asm:179 LDA @VIRTUAL02
    case 0xC2F7F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:180 CLC
    case 0xC2F7F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    case 0xC2F7F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/render_battle_sprite_row.asm:181 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F7F5.
    case 0xC2F7F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/render_battle_sprite_row.asm:182 STA @VIRTUAL02
    case 0xC2F7F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/render_battle_sprite_row.asm:183 LDA @LOCAL03
    case 0xC2F7FA: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/render_battle_sprite_row.asm:184 STA @VIRTUAL04
    case 0xC2F7FC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:185 INC @VIRTUAL04
    case 0xC2F7FE: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:186 LDA @VIRTUAL04
    case 0xC2F800: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:187 STA @LOCAL03
    case 0xC2F802: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/render_battle_sprite_row.asm:189 LDA @VIRTUAL04
    case 0xC2F804: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    case 0xC2F806: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/render_battle_sprite_row.asm:190 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2F806.
    case 0xC2F808: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F809: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F80B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/render_battle_sprite_row.asm:191 BCCL @UNKNOWN0
    case 0xC2F80D: cpu.execute_instruction<0x4C>(0x00F658, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F810: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/render_battle_sprite_row.asm:192 END_C_FUNCTION
    case 0xC2F811: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/reset_post_battle_stats.asm (source_named).
bool execute_battle_reset_post_battle_stats_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reset_post_battle_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BC07: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC09: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC0A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BC0B.
    case 0xC2BC0D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC0E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:7 LDA #0
    case 0xC2BC0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/reset_post_battle_stats.asm:7 LDA #0
    // Overlapping static entry reached from 0xC2BC0F.
    case 0xC2BC11: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/reset_post_battle_stats.asm:8 STA @LOCAL00
    case 0xC2BC12: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:9 BRA @UNKNOWN2
    case 0xC2BC14: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/reset_post_battle_stats.asm:11 LDY #.SIZEOF(battler)
    case 0xC2BC16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/reset_post_battle_stats.asm:11 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BC16.
    case 0xC2BC18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/reset_post_battle_stats.asm:12 JSL MULT168
    case 0xC2BC19: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/reset_post_battle_stats.asm:13 TAX
    case 0xC2BC1D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:14 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2BC1E: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/reset_post_battle_stats.asm:15 AND #$00FF
    case 0xC2BC21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2BC21.
    case 0xC2BC23: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:16 BEQ @UNKNOWN1
    case 0xC2BC24: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/reset_post_battle_stats.asm:17 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2BC26: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/battle/reset_post_battle_stats.asm:18 AND #$00FF
    case 0xC2BC29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2BC29.
    case 0xC2BC2B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:19 BNE @UNKNOWN1
    case 0xC2BC2C: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/battle/reset_post_battle_stats.asm:20 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2BC2E: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/reset_post_battle_stats.asm:21 AND #$00FF
    case 0xC2BC31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2BC31.
    case 0xC2BC33: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:22 BNE @UNKNOWN1
    case 0xC2BC34: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/reset_post_battle_stats.asm:23 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2BC36: cpu.execute_instruction<0xBD>(0x00A1BE, 3); return true;
    // src/battle/reset_post_battle_stats.asm:24 AND #$00FF
    case 0xC2BC39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/reset_post_battle_stats.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC2BC39.
    case 0xC2BC3B: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/reset_post_battle_stats.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC2BC3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/reset_post_battle_stats.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BC3C.
    case 0xC2BC3E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/reset_post_battle_stats.asm:26 JSL MULT168
    case 0xC2BC3F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/reset_post_battle_stats.asm:27 CLC
    case 0xC2BC43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:28 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BC44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/reset_post_battle_stats.asm:28 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BC44.
    case 0xC2BC46: cpu.execute_instruction<0x9C>(0x00E2AA, 3); return true;
    // src/battle/reset_post_battle_stats.asm:29 TAX
    case 0xC2BC47: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC48: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/reset_post_battle_stats.asm:30 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2BC46.
    case 0xC2BC49: cpu.execute_instruction<0x20>(0x00139E, 3); return true;
    // src/battle/reset_post_battle_stats.asm:31 STZ a:char_struct::afflictions+6,X
    case 0xC2BC4A: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/battle/reset_post_battle_stats.asm:31 STZ a:char_struct::afflictions+6,X
    // Overlapping static entry reached from 0xC2BC49.
    case 0xC2BC4C: cpu.execute_instruction<0x00>(0x00009E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:32 STZ a:char_struct::afflictions+4,X
    case 0xC2BC4D: cpu.execute_instruction<0x9E>(0x000011, 3); return true;
    // src/battle/reset_post_battle_stats.asm:33 STZ a:char_struct::afflictions+3,X
    case 0xC2BC50: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/battle/reset_post_battle_stats.asm:34 STZ a:char_struct::afflictions+2,X
    case 0xC2BC53: cpu.execute_instruction<0x9E>(0x00000F, 3); return true;
    // src/battle/reset_post_battle_stats.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2BC56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/reset_post_battle_stats.asm:37 LDA @LOCAL00
    case 0xC2BC58: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:38 INC
    case 0xC2BC5A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/reset_post_battle_stats.asm:39 STA @LOCAL00
    case 0xC2BC5B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/reset_post_battle_stats.asm:41 CMP #TOTAL_PARTY_COUNT
    case 0xC2BC5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/reset_post_battle_stats.asm:41 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BC5D.
    case 0xC2BC5F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/reset_post_battle_stats.asm:42 BCC @UNKNOWN0
    case 0xC2BC60: cpu.execute_instruction<0x90>(0x0000B4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reset_post_battle_stats.asm:43 END_C_FUNCTION
    case 0xC2BC62: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/reset_post_battle_stats.asm:43 END_C_FUNCTION
    case 0xC2BC63: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/return_battle_attacker_address.asm (source_named).
bool execute_battle_return_battle_attacker_address_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/return_battle_attacker_address.asm:3 BEGIN_C_FUNCTION
    case 0xC1AB5D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/return_battle_attacker_address.asm:5 LDA #.LOWORD(BATTLE_ATTACKER_NAME)
    case 0xC1AB5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x009F82, 3); return true;
    // src/battle/return_battle_attacker_address.asm:5 LDA #.LOWORD(BATTLE_ATTACKER_NAME)
    // Overlapping static entry reached from 0xC1AB5F.
    case 0xC1AB61: cpu.execute_instruction<0x9F>(0x31C260, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/return_battle_attacker_address.asm:6 END_C_FUNCTION
    case 0xC1AB62: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/return_battle_target_address.asm (source_named).
bool execute_battle_return_battle_target_address_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/return_battle_target_address.asm:3 BEGIN_C_FUNCTION
    case 0xC1ABAE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/return_battle_target_address.asm:5 LDA #.LOWORD(BATTLE_TARGET_NAME)
    case 0xC1ABB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x009F90, 3); return true;
    // src/battle/return_battle_target_address.asm:5 LDA #.LOWORD(BATTLE_TARGET_NAME)
    // Overlapping static entry reached from 0xC1ABB0.
    case 0xC1ABB2: cpu.execute_instruction<0x9F>(0x31C260, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/return_battle_target_address.asm:6 END_C_FUNCTION
    case 0xC1ABB3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/revive_target.asm (source_named).
bool execute_battle_revive_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/revive_target.asm:3 BEGIN_C_FUNCTION
    case 0xC272DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC272DF.
    case 0xC272E1: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272E3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/revive_target.asm:21 TXY
    case 0xC272E4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/revive_target.asm:22 STY @LOCAL05
    case 0xC272E5: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/revive_target.asm:23 STA @VIRTUAL04
    case 0xC272E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x003461, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC272E9.
    case 0xC272EB: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC272EB.
    case 0xC272ED: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC272EE.
    case 0xC272F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272F1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272F3: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/revive_target.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC272F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:26 LDA #0
    case 0xC272F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A600, 3); return true;
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    case 0xC272FB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC272F9.
    case 0xC272FC: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC272FD: cpu.execute_instruction<0x9D>(0x000023, 3); return true;
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    // Overlapping static entry reached from 0xC272FC.
    case 0xC272FE: cpu.execute_instruction<0x23>(0x000000, 2); return true;
    // src/battle/revive_target.asm:29 LDX @VIRTUAL04
    case 0xC27300: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:30 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27302: cpu.execute_instruction<0x9D>(0x000022, 3); return true;
    // src/battle/revive_target.asm:31 LDX @VIRTUAL04
    case 0xC27305: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:32 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC27307: cpu.execute_instruction<0x9D>(0x000021, 3); return true;
    // src/battle/revive_target.asm:33 LDX @VIRTUAL04
    case 0xC2730A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:34 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2730C: cpu.execute_instruction<0x9D>(0x000020, 3); return true;
    // src/battle/revive_target.asm:35 LDX @VIRTUAL04
    case 0xC2730F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:36 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27311: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:37 LDX @VIRTUAL04
    case 0xC27314: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:38 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27316: cpu.execute_instruction<0x9D>(0x00001E, 3); return true;
    // src/battle/revive_target.asm:39 LDX @VIRTUAL04
    case 0xC27319: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:40 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2731B: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/revive_target.asm:41 LDX @VIRTUAL04
    case 0xC2731E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC27320: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:43 STZ a:battler::current_action,X
    case 0xC27322: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/revive_target.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC27325: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:45 LDA #1
    case 0xC27327: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    case 0xC27329: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC27327.
    case 0xC2732A: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    case 0xC2732B: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    // Overlapping static entry reached from 0xC2732A.
    case 0xC2732C: cpu.execute_instruction<0x0D>(0x00A400, 3); return true;
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    case 0xC2732E: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    // Overlapping static entry reached from 0xC2732C.
    case 0xC2732F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:49 TYX
    case 0xC27330: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/revive_target.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC27331: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:51 LDA @VIRTUAL04
    case 0xC27333: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/revive_target.asm:52 JSR SET_HP
    case 0xC27335: cpu.execute_instruction<0x20>(0x007065, 3); return true;
    // src/battle/revive_target.asm:53 LDX @VIRTUAL04
    case 0xC27338: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:54 LDA a:battler::ally_or_enemy,X
    case 0xC2733A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/revive_target.asm:55 AND #$00FF
    case 0xC2733D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC2733D.
    case 0xC2733F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/revive_target.asm:56 BNE @UNKNOWN0
    case 0xC27340: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/battle/revive_target.asm:57 LDX @VIRTUAL04
    case 0xC27342: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:58 LDA a:battler::npc_id,X
    case 0xC27344: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/revive_target.asm:59 AND #$00FF
    case 0xC27347: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC27347.
    case 0xC27349: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/revive_target.asm:60 BNE @UNKNOWN0
    case 0xC2734A: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // src/battle/revive_target.asm:61 LDA @VIRTUAL04
    case 0xC2734C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/revive_target.asm:62 CLC
    case 0xC2734E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:63 ADC #16
    case 0xC2734F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/revive_target.asm:63 ADC #16
    // Overlapping static entry reached from 0xC2734F.
    case 0xC27351: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/revive_target.asm:64 TAX
    case 0xC27352: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:65 STX @LOCAL04
    case 0xC27353: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/revive_target.asm:66 LDA __BSS_START__,X
    case 0xC27355: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/revive_target.asm:67 AND #$00FF
    case 0xC27358: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC27358.
    case 0xC2735A: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    case 0xC2735B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2735B.
    case 0xC2735D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:69 JSL MULT168
    case 0xC2735E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/revive_target.asm:70 TAX
    case 0xC27362: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:71 LDY @LOCAL05
    case 0xC27363: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/revive_target.asm:72 TYA
    case 0xC27365: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/revive_target.asm:73 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC27366: cpu.execute_instruction<0x9D>(0x009CC5, 3); return true;
    // src/battle/revive_target.asm:74 LDX @LOCAL04
    case 0xC27369: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/revive_target.asm:75 LDA __BSS_START__,X
    case 0xC2736B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/revive_target.asm:76 AND #$00FF
    case 0xC2736E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2736E.
    case 0xC27370: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC27371: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27371.
    case 0xC27373: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:78 JSL MULT168
    case 0xC27374: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/revive_target.asm:79 TAX
    case 0xC27378: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:80 LDA #1
    case 0xC27379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:80 LDA #1
    // Overlapping static entry reached from 0xC27379.
    case 0xC2737B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:81 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC2737C: cpu.execute_instruction<0x9D>(0x009CC3, 3); return true;
    // src/battle/revive_target.asm:83 LDX @VIRTUAL04
    case 0xC2737F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:84 LDA a:battler::ally_or_enemy,X
    case 0xC27381: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/revive_target.asm:85 AND #$00FF
    case 0xC27384: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC27384.
    case 0xC27386: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/revive_target.asm:86 CMP #1
    case 0xC27387: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:86 CMP #1
    // Overlapping static entry reached from 0xC27387.
    case 0xC27389: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC2738A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC2738C: cpu.execute_instruction<0x4C>(0x00748C, 3); return true;
    // src/battle/revive_target.asm:88 LDX @VIRTUAL04
    case 0xC2738F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:89 LDA a:battler::npc_id,X
    case 0xC27391: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/revive_target.asm:90 AND #$00FF
    case 0xC27394: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC27394.
    case 0xC27396: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27397: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27399: cpu.execute_instruction<0x4C>(0x00748C, 3); return true;
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC2739C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2739C.
    case 0xC2739E: cpu.execute_instruction<0xA1>(0x0000A2, 2); return true;
    // src/battle/revive_target.asm:93 LDX #0
    case 0xC2739F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/revive_target.asm:93 LDX #0
    // Overlapping static entry reached from 0xC2739E.
    case 0xC273A0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/revive_target.asm:93 LDX #0
    // Overlapping static entry reached from 0xC2739F.
    case 0xC273A1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/revive_target.asm:94 STX @LOCAL05
    case 0xC273A2: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:95 BRA @UNKNOWN4
    case 0xC273A4: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/revive_target.asm:97 TAX
    case 0xC273A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:98 SEP #PROC_FLAGS::ACCUM8
    case 0xC273A7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:99 STZ a:battler::use_alt_spritemap,X
    case 0xC273A9: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/revive_target.asm:100 CLC
    case 0xC273AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC273AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    case 0xC273AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC273AF.
    case 0xC273B1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/revive_target.asm:103 LDX @LOCAL05
    case 0xC273B2: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/revive_target.asm:104 INX
    case 0xC273B4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:105 STX @LOCAL05
    case 0xC273B5: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    case 0xC273B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC273B7.
    case 0xC273B9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:108 BCC @UNKNOWN3
    case 0xC273BA: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/battle/revive_target.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC273BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:110 LDA #1
    case 0xC273BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    case 0xC273C0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC273BE.
    case 0xC273C1: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    case 0xC273C2: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC273C1.
    case 0xC273C3: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC273C3.
    case 0xC273C4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/revive_target.asm:114 TAX
    case 0xC273C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:118 STX @LOCAL05
    case 0xC273C6: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:119 BRA @UNKNOWN6
    case 0xC273C8: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/battle/revive_target.asm:121 STX @VIRTUAL02
    case 0xC273CA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/revive_target.asm:122 LDX @VIRTUAL04
    case 0xC273CC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC273CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:124 LDA a:battler::vram_sprite_index,X
    case 0xC273D0: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/revive_target.asm:125 AND #$00FF
    case 0xC273D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC273D3.
    case 0xC273D5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/revive_target.asm:126 ASL
    case 0xC273D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:127 ASL
    case 0xC273D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:128 ASL
    case 0xC273D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:129 ASL
    case 0xC273D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:130 CLC
    case 0xC273DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:131 ADC @VIRTUAL02
    case 0xC273DB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/revive_target.asm:132 ASL
    case 0xC273DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:133 TAX
    case 0xC273DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:134 STZ PALETTES + BPP4PALETTE_SIZE * 12,X
    case 0xC273DF: cpu.execute_instruction<0x9E>(0x000380, 3); return true;
    // src/battle/revive_target.asm:135 LDX @LOCAL05
    case 0xC273E2: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/revive_target.asm:136 INX
    case 0xC273E4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:137 STX @LOCAL05
    case 0xC273E5: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/revive_target.asm:139 CPX #16
    case 0xC273E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/revive_target.asm:139 CPX #16
    // Overlapping static entry reached from 0xC273E7.
    case 0xC273E9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:140 BCC @UNKNOWN5
    case 0xC273EA: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/battle/revive_target.asm:141 REP #PROC_FLAGS::ACCUM8
    case 0xC273EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:142 LDA #10
    case 0xC273EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/revive_target.asm:142 LDA #10
    // Overlapping static entry reached from 0xC273EE.
    case 0xC273F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:143 JSL UNKNOWN_C2FAD8
    case 0xC273F1: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/battle/revive_target.asm:144 LDA #1
    case 0xC273F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:144 LDA #1
    // Overlapping static entry reached from 0xC273F5.
    case 0xC273F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:145 STA @VIRTUAL02
    case 0xC273F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/revive_target.asm:146 BRA @UNKNOWN8
    case 0xC273FA: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/revive_target.asm:148 LDA #31
    case 0xC273FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:148 LDA #31
    // Overlapping static entry reached from 0xC273FC.
    case 0xC273FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:149 STA @LOCAL00
    case 0xC273FF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/revive_target.asm:150 TAY
    case 0xC27401: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:151 TAX
    case 0xC27402: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:152 STX @LOCAL03
    case 0xC27403: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/revive_target.asm:153 LDX @VIRTUAL04
    case 0xC27405: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:154 LDA a:battler::vram_sprite_index,X
    case 0xC27407: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/revive_target.asm:155 AND #$00FF
    case 0xC2740A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:155 AND #$00FF
    // Overlapping static entry reached from 0xC2740A.
    case 0xC2740C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/revive_target.asm:156 ASL
    case 0xC2740D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:157 ASL
    case 0xC2740E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:158 ASL
    case 0xC2740F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:159 ASL
    case 0xC27410: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:160 CLC
    case 0xC27411: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:161 ADC @VIRTUAL02
    case 0xC27412: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/revive_target.asm:162 LDX @LOCAL03
    case 0xC27414: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/revive_target.asm:163 JSL UNKNOWN_C2FB35
    case 0xC27416: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/battle/revive_target.asm:164 INC @VIRTUAL02
    case 0xC2741A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/revive_target.asm:166 LDA @VIRTUAL02
    case 0xC2741C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/revive_target.asm:167 CMP #16
    case 0xC2741E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/revive_target.asm:167 CMP #16
    // Overlapping static entry reached from 0xC2741E.
    case 0xC27420: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:168 BCC @UNKNOWN7
    case 0xC27421: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    case 0xC27423: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27423.
    case 0xC27425: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/revive_target.asm:170 JSR WAIT
    case 0xC27426: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/revive_target.asm:171 LDA #20
    case 0xC27429: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/revive_target.asm:171 LDA #20
    // Overlapping static entry reached from 0xC27429.
    case 0xC2742B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/revive_target.asm:172 JSL UNKNOWN_C2FAD8
    case 0xC2742C: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/battle/revive_target.asm:173 LDA #1
    case 0xC27430: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:173 LDA #1
    // Overlapping static entry reached from 0xC27430.
    case 0xC27432: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:174 STA @VIRTUAL02
    case 0xC27433: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/revive_target.asm:175 BRA @UNKNOWN10
    case 0xC27435: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/battle/revive_target.asm:177 LDX @VIRTUAL04
    case 0xC27437: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/revive_target.asm:178 LDA a:battler::vram_sprite_index,X
    case 0xC27439: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/revive_target.asm:179 AND #$00FF
    case 0xC2743C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/revive_target.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC2743C.
    case 0xC2743E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/revive_target.asm:180 ASL
    case 0xC2743F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:181 ASL
    case 0xC27440: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:182 ASL
    case 0xC27441: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:183 ASL
    case 0xC27442: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:184 CLC
    case 0xC27443: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/revive_target.asm:185 ADC @VIRTUAL02
    case 0xC27444: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/revive_target.asm:186 STA @LOCAL02ALT
    case 0xC27446: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/revive_target.asm:187 ASL
    case 0xC27448: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:188 TAX
    case 0xC27449: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:189 LDA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC2744A: cpu.execute_instruction<0xBD>(0x000300, 3); return true;
    // src/battle/revive_target.asm:190 TAX
    case 0xC2744D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:191 STX @LOCAL03ALT
    case 0xC2744E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/revive_target.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC27450: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:193 LDA #10
    case 0xC27452: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00480A, 3); return true;
    // src/battle/revive_target.asm:194 PHA
    case 0xC27454: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/revive_target.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC27455: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/revive_target.asm:196 TXA
    case 0xC27457: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC27458: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/revive_target.asm:198 PLY
    case 0xC2745A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:199 JSL ASR8_UNKNOWN1
    case 0xC2745B: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/battle/revive_target.asm:200 AND #$001F
    case 0xC2745F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:200 AND #$001F
    // Overlapping static entry reached from 0xC2745F.
    case 0xC27461: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/revive_target.asm:201 STA @LOCAL00
    case 0xC27462: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/revive_target.asm:202 REP #PROC_FLAGS::INDEX8
    case 0xC27464: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/revive_target.asm:203 LDX @LOCAL03ALT
    case 0xC27466: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/revive_target.asm:204 TXA
    case 0xC27468: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:205 LSR
    case 0xC27469: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:206 LSR
    case 0xC2746A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:207 LSR
    case 0xC2746B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:208 LSR
    case 0xC2746C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:209 LSR
    case 0xC2746D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:210 AND #$001F
    case 0xC2746E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:210 AND #$001F
    // Overlapping static entry reached from 0xC2746E.
    case 0xC27470: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/revive_target.asm:211 TAY
    case 0xC27471: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/revive_target.asm:212 TXA
    case 0xC27472: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/revive_target.asm:213 AND #$001F
    case 0xC27473: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/revive_target.asm:213 AND #$001F
    // Overlapping static entry reached from 0xC27473.
    case 0xC27475: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/revive_target.asm:214 TAX
    case 0xC27476: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/revive_target.asm:215 LDA @LOCAL02ALT
    case 0xC27477: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/revive_target.asm:216 JSL UNKNOWN_C2FB35
    case 0xC27479: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/battle/revive_target.asm:217 INC @VIRTUAL02
    case 0xC2747D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/revive_target.asm:219 LDA @VIRTUAL02
    case 0xC2747F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/revive_target.asm:220 CMP #16
    case 0xC27481: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/revive_target.asm:220 CMP #16
    // Overlapping static entry reached from 0xC27481.
    case 0xC27483: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/revive_target.asm:221 BCC @UNKNOWN9
    case 0xC27484: cpu.execute_instruction<0x90>(0x0000B1, 2); return true;
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC27486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC27486.
    case 0xC27488: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/revive_target.asm:223 JSR WAIT
    case 0xC27489: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/revive_target.asm:225 LDA #1
    case 0xC2748C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/revive_target.asm:225 LDA #1
    // Overlapping static entry reached from 0xC2748C.
    case 0xC2748E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC2748F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC27490: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/select_stealable_item.asm (source_named).
bool execute_battle_select_stealable_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/select_stealable_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC241D3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241D5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241D6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC241D7.
    case 0xC241D9: cpu.execute_instruction<0xFF>(0x90205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241DA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:8 JSR FIND_STEALABLE_ITEMS
    case 0xC241DB: cpu.execute_instruction<0x20>(0x004090, 3); return true;
    // src/battle/select_stealable_item.asm:8 JSR FIND_STEALABLE_ITEMS
    // Overlapping static entry reached from 0xC241D9.
    case 0xC241DD: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:9 TAX
    case 0xC241DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:10 STX @LOCAL00
    case 0xC241DF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/select_stealable_item.asm:11 BNE @UNKNOWN0
    case 0xC241E1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/select_stealable_item.asm:12 LDA #0
    case 0xC241E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/select_stealable_item.asm:12 LDA #0
    // Overlapping static entry reached from 0xC241E3.
    case 0xC241E5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/select_stealable_item.asm:13 BRA @UNKNOWN2
    case 0xC241E6: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/battle/select_stealable_item.asm:15 JSL RAND
    case 0xC241E8: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/select_stealable_item.asm:16 AND #$0080
    case 0xC241EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/battle/select_stealable_item.asm:16 AND #$0080
    // Overlapping static entry reached from 0xC241EC.
    case 0xC241EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/select_stealable_item.asm:17 BEQ @UNKNOWN1
    case 0xC241EF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/select_stealable_item.asm:18 LDA #0
    case 0xC241F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/select_stealable_item.asm:18 LDA #0
    // Overlapping static entry reached from 0xC241F1.
    case 0xC241F3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/select_stealable_item.asm:19 BRA @UNKNOWN2
    case 0xC241F4: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/select_stealable_item.asm:21 LDX @LOCAL00
    case 0xC241F6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/select_stealable_item.asm:22 TXA
    case 0xC241F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:23 JSR RAND_LIMIT
    case 0xC241F9: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/select_stealable_item.asm:24 TAX
    case 0xC241FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/select_stealable_item.asm:25 LDA STEALABLE_ITEM_CANDIDATES,X
    case 0xC241FD: cpu.execute_instruction<0xBD>(0x00ABA9, 3); return true;
    // src/battle/select_stealable_item.asm:26 AND #$00FF
    case 0xC24200: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/select_stealable_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC24200.
    case 0xC24202: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/select_stealable_item.asm:28 END_C_FUNCTION
    case 0xC24203: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/select_stealable_item.asm:28 END_C_FUNCTION
    case 0xC24204: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/set_hp.asm (source_named).
bool execute_battle_set_hp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/set_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC27065: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27067: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27068: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC27069: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2706A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2706A.
    case 0xC2706C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2706D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/set_hp.asm:9 END_STACK_VARS
    case 0xC2706E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/set_hp.asm:10 TXY
    case 0xC2706F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/set_hp.asm:11 STY @LOCAL01
    case 0xC27070: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_hp.asm:12 TAX
    case 0xC27072: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_hp.asm:13 LDA a:battler::hp_max,X
    case 0xC27073: cpu.execute_instruction<0xBD>(0x000015, 3); return true;
    // src/battle/set_hp.asm:14 STA @LOCAL00
    case 0xC27076: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/set_hp.asm:15 STA @VIRTUAL02
    case 0xC27078: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/set_hp.asm:16 TYA
    case 0xC2707A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:17 CMP @VIRTUAL02
    case 0xC2707B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/set_hp.asm:18 BLTEQ @UNKNOWN0
    case 0xC2707D: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/set_hp.asm:18 BLTEQ @UNKNOWN0
    case 0xC2707F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/set_hp.asm:19 LDA @LOCAL00
    case 0xC27081: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/set_hp.asm:20 TAY
    case 0xC27083: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/set_hp.asm:21 STY @LOCAL01
    case 0xC27084: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_hp.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC27086: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/set_hp.asm:24 AND #$00FF
    case 0xC27089: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC27089.
    case 0xC2708B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_hp.asm:25 BNE @UNKNOWN2
    case 0xC2708C: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/battle/set_hp.asm:26 LDA a:battler::npc_id,X
    case 0xC2708E: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/set_hp.asm:27 AND #$00FF
    case 0xC27091: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC27091.
    case 0xC27093: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_hp.asm:28 BNE @UNKNOWN1
    case 0xC27094: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/set_hp.asm:29 TYA
    case 0xC27096: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:30 STA a:battler::hp_target,X
    case 0xC27097: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/set_hp.asm:31 LDA a:battler::row,X
    case 0xC2709A: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/set_hp.asm:32 AND #$00FF
    case 0xC2709D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC2709D.
    case 0xC2709F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/set_hp.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC270A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/set_hp.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC270A0.
    case 0xC270A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/set_hp.asm:34 JSL MULT168
    case 0xC270A3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/set_hp.asm:35 TAX
    case 0xC270A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_hp.asm:36 LDY @LOCAL01
    case 0xC270A8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/set_hp.asm:37 TYA
    case 0xC270AA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:38 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC270AB: cpu.execute_instruction<0x9D>(0x009CC5, 3); return true;
    // src/battle/set_hp.asm:39 BRA @UNKNOWN3
    case 0xC270AE: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/set_hp.asm:41 TYA
    case 0xC270B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:42 STA a:battler::hp,X
    case 0xC270B1: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/set_hp.asm:43 TYA
    case 0xC270B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:44 STA a:battler::hp_target,X
    case 0xC270B5: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/set_hp.asm:45 LDA a:battler::row,X
    case 0xC270B8: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/set_hp.asm:46 AND #$00FF
    case 0xC270BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_hp.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC270BB.
    case 0xC270BD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/set_hp.asm:47 ASL
    case 0xC270BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/set_hp.asm:49 CLC
    case 0xC270BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/set_hp.asm:50 ADC #.LOWORD(GAME_STATE)
    case 0xC270C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/set_hp.asm:50 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC270C0.
    case 0xC270C2: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/set_hp.asm:51 TAX
    case 0xC270C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_hp.asm:52 TYA
    case 0xC270C4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:53 STA a:game_state::party_npc_1_hp,X
    case 0xC270C5: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/battle/set_hp.asm:59 BRA @UNKNOWN3
    case 0xC270C8: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/set_hp.asm:61 TYA
    case 0xC270CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:62 STA a:battler::hp,X
    case 0xC270CB: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/set_hp.asm:63 TYA
    case 0xC270CE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_hp.asm:64 STA a:battler::hp_target,X
    case 0xC270CF: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/set_hp.asm:66 END_C_FUNCTION
    case 0xC270D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/set_hp.asm:66 END_C_FUNCTION
    case 0xC270D3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/set_pp.asm (source_named).
bool execute_battle_set_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/set_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC270D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC270D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC270D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC270D8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC270D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC270D9.
    case 0xC270DB: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC270DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/set_pp.asm:9 END_STACK_VARS
    case 0xC270DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/set_pp.asm:10 TXY
    case 0xC270DE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/set_pp.asm:11 STY @LOCAL01
    case 0xC270DF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_pp.asm:12 TAX
    case 0xC270E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_pp.asm:13 LDA a:battler::pp_max,X
    case 0xC270E2: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/set_pp.asm:14 STA @LOCAL00
    case 0xC270E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/set_pp.asm:15 STA @VIRTUAL02
    case 0xC270E7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/set_pp.asm:16 TYA
    case 0xC270E9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:17 CMP @VIRTUAL02
    case 0xC270EA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/set_pp.asm:18 BLTEQ @UNKNOWN0
    case 0xC270EC: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/set_pp.asm:18 BLTEQ @UNKNOWN0
    case 0xC270EE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/set_pp.asm:19 LDA @LOCAL00
    case 0xC270F0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/set_pp.asm:20 TAY
    case 0xC270F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/set_pp.asm:21 STY @LOCAL01
    case 0xC270F3: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/set_pp.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC270F5: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/set_pp.asm:24 AND #$00FF
    case 0xC270F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_pp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC270F8.
    case 0xC270FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_pp.asm:25 BNE @UNKNOWN2
    case 0xC270FB: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/battle/set_pp.asm:26 LDA a:battler::npc_id,X
    case 0xC270FD: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/set_pp.asm:27 AND #$00FF
    case 0xC27100: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_pp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC27100.
    case 0xC27102: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/set_pp.asm:28 BNE @UNKNOWN1
    case 0xC27103: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/set_pp.asm:29 TYA
    case 0xC27105: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:30 STA a:battler::pp_target,X
    case 0xC27106: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // src/battle/set_pp.asm:31 LDA a:battler::row,X
    case 0xC27109: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/set_pp.asm:32 AND #$00FF
    case 0xC2710C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/set_pp.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC2710C.
    case 0xC2710E: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/set_pp.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC2710F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/set_pp.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2710F.
    case 0xC27111: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/set_pp.asm:34 JSL MULT168
    case 0xC27112: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/set_pp.asm:35 TAX
    case 0xC27116: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/set_pp.asm:36 LDY @LOCAL01
    case 0xC27117: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/set_pp.asm:37 TYA
    case 0xC27119: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:38 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC2711A: cpu.execute_instruction<0x9D>(0x009CCB, 3); return true;
    // src/battle/set_pp.asm:39 BRA @UNKNOWN3
    case 0xC2711D: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/battle/set_pp.asm:41 TYA
    case 0xC2711F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:42 STA a:battler::pp,X
    case 0xC27120: cpu.execute_instruction<0x9D>(0x000017, 3); return true;
    // src/battle/set_pp.asm:43 TYA
    case 0xC27123: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:44 STA a:battler::pp_target,X
    case 0xC27124: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // src/battle/set_pp.asm:45 BRA @UNKNOWN3
    case 0xC27127: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/set_pp.asm:47 TYA
    case 0xC27129: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:48 STA a:battler::pp,X
    case 0xC2712A: cpu.execute_instruction<0x9D>(0x000017, 3); return true;
    // src/battle/set_pp.asm:49 TYA
    case 0xC2712D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/set_pp.asm:50 STA a:battler::pp_target,X
    case 0xC2712E: cpu.execute_instruction<0x9D>(0x000019, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/set_pp.asm:52 END_C_FUNCTION
    case 0xC27131: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/set_pp.asm:52 END_C_FUNCTION
    case 0xC27132: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/show_psi_animation-jp.asm (source_named).
bool execute_battle_show_psi_animation_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/show_psi_animation-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E06B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E06D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E06E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E06F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E070: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E070.
    case 0xC2E072: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E073: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/show_psi_animation-jp.asm:13 END_STACK_VARS
    case 0xC2E074: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:14 STA @VIRTUAL02
    case 0xC2E075: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E072.
    case 0xC2E076: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/battle/show_psi_animation-jp.asm:15 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E077: cpu.execute_instruction<0xAD>(0x00AFAA, 3); return true;
    // src/battle/show_psi_animation-jp.asm:16 AND #$00FF
    case 0xC2E07A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2E07A.
    case 0xC2E07C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:17 CMP #2
    case 0xC2E07D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/show_psi_animation-jp.asm:17 CMP #2
    // Overlapping static entry reached from 0xC2E07D.
    case 0xC2E07F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:18 BNE @UNKNOWN1
    case 0xC2E080: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E082: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E082.
    case 0xC2E084: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E085: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E087.
    case 0xC2E089: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:19 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2E08A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E08C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E08C.
    case 0xC2E08E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E08F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E091: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E091.
    case 0xC2E093: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:20 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E094: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:21 LDA @VIRTUAL02
    case 0xC2E096: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E098: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:22 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E09E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:23 TAX
    case 0xC2E09F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:24 LDA f:PSI_ANIM_CFG,X
    case 0xC2E0A0: cpu.execute_instruction<0xBF>(0xCCF164, 4); return true;
    // src/battle/show_psi_animation-jp.asm:25 CLC
    case 0xC2E0A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:26 ADC @VIRTUAL0A
    case 0xC2E0A5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:27 STA @VIRTUAL0A
    case 0xC2E0A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:28 STA @LOCAL00
    case 0xC2E0A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:29 LDA @VIRTUAL0A+2
    case 0xC2E0AB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:29 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC2E0C8.
    case 0xC2E0AC: cpu.execute_instruction<0x0C>(0x001085, 3); return true;
    // src/battle/show_psi_animation-jp.asm:30 STA @LOCAL00+2
    case 0xC2E0AD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0B1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E0B5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/show_psi_animation-jp.asm:32 JSL DECOMP
    case 0xC2E0B7: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0C3.
    case 0xC2E0C5: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0C6.
    case 0xC2E0C8: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0C8.
    case 0xC2E0CA: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    case 0xC2E0CC: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0CA.
    case 0xC2E0CD: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:33 COPY_TO_VRAM3P @VIRTUAL06, $0000, $1000, 0
    // Overlapping static entry reached from 0xC2E0CD.
    case 0xC2E0CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0060A9, 3); return true;
    // src/battle/show_psi_animation-jp.asm:35 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    case 0xC2E0D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x000260, 3); return true;
    // src/battle/show_psi_animation-jp.asm:35 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E0CF.
    case 0xC2E0D1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:35 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC2E0D0.
    case 0xC2E0D2: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:36 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E0D3: cpu.execute_instruction<0x8D>(0x001B70, 3); return true;
    // src/battle/show_psi_animation-jp.asm:37 JMP @UNKNOWN6
    case 0xC2E0D6: cpu.execute_instruction<0x4C>(0x00E20D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E0D9.
    case 0xC2E0DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E0DE.
    case 0xC2E0E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:39 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2E0E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E0E3.
    case 0xC2E0E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0E6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E0E8.
    case 0xC2E0EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:40 LOADPTR PSI_ANIM_GFX_SET_1 & $FF0000, @VIRTUAL0A
    case 0xC2E0EB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:41 LDA @VIRTUAL02
    case 0xC2E0ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0EF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:42 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E0F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:43 TAX
    case 0xC2E0F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:44 LDA f:PSI_ANIM_CFG,X
    case 0xC2E0F7: cpu.execute_instruction<0xBF>(0xCCF164, 4); return true;
    // src/battle/show_psi_animation-jp.asm:45 CLC
    case 0xC2E0FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:46 ADC @VIRTUAL0A
    case 0xC2E0FC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:47 STA @VIRTUAL0A
    case 0xC2E0FE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:48 STA @LOCAL00
    case 0xC2E100: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:49 LDA @VIRTUAL0A+2
    case 0xC2E102: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:50 STA @LOCAL00+2
    case 0xC2E104: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E106: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E108: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E10A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2E10C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/show_psi_animation-jp.asm:52 JSL DECOMP
    case 0xC2E10E: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E112.
    case 0xC2E114: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E115: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E117.
    case 0xC2E119: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:53 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC2E11A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:54 LDX #0
    case 0xC2E11C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/show_psi_animation-jp.asm:54 LDX #0
    // Overlapping static entry reached from 0xC2E11C.
    case 0xC2E11E: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:55 JMP @UNKNOWN4
    case 0xC2E11F: cpu.execute_instruction<0x4C>(0x00E1E6, 3); return true;
    // src/battle/show_psi_animation-jp.asm:57 LDA [@VIRTUAL06]
    case 0xC2E122: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:58 STA [@VIRTUAL0A]
    case 0xC2E124: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:59 INC @VIRTUAL06
    case 0xC2E126: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:60 INC @VIRTUAL06
    case 0xC2E128: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:61 INC @VIRTUAL0A
    case 0xC2E12A: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:62 INC @VIRTUAL0A
    case 0xC2E12C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:63 LDA [@VIRTUAL06]
    case 0xC2E12E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:64 STA [@VIRTUAL0A]
    case 0xC2E130: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:65 INC @VIRTUAL06
    case 0xC2E132: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:66 INC @VIRTUAL06
    case 0xC2E134: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E136: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E138: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E13A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:67 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC2E13C: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E13E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E140: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E142: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:68 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E144: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:69 INC @VIRTUAL06
    case 0xC2E146: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:70 INC @VIRTUAL06
    case 0xC2E148: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:71 LDA [@LOCAL06]
    case 0xC2E14A: cpu.execute_instruction<0xA7>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:72 STA [@VIRTUAL06]
    case 0xC2E14C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E14E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E150: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E152: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:73 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC2E154: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:74 INC @VIRTUAL0A
    case 0xC2E156: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:75 INC @VIRTUAL0A
    case 0xC2E158: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:76 INC @VIRTUAL06
    case 0xC2E15A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:77 INC @VIRTUAL06
    case 0xC2E15C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E15E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E160: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E162: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E164: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:79 LDA [@VIRTUAL0A]
    case 0xC2E166: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:80 STA [@LOCAL05]
    case 0xC2E168: cpu.execute_instruction<0x87>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E16A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E16C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E16E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:81 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E170: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:82 INC @VIRTUAL06
    case 0xC2E172: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:83 INC @VIRTUAL06
    case 0xC2E174: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E176: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E178: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E1F2.
    case 0xC2E179: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E17A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:84 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC2E17C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:85 INC @VIRTUAL0A
    case 0xC2E17E: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:86 INC @VIRTUAL0A
    case 0xC2E180: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:87 LDA [@VIRTUAL06]
    case 0xC2E182: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:88 STA [@VIRTUAL0A]
    case 0xC2E184: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:89 INC @VIRTUAL06
    case 0xC2E186: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:90 INC @VIRTUAL06
    case 0xC2E188: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:91 INC @VIRTUAL0A
    case 0xC2E18A: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:92 INC @VIRTUAL0A
    case 0xC2E18C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:93 LDA [@VIRTUAL06]
    case 0xC2E18E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:94 STA [@VIRTUAL0A]
    case 0xC2E190: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:95 INC @VIRTUAL06
    case 0xC2E192: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:96 INC @VIRTUAL06
    case 0xC2E194: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:97 INC @VIRTUAL0A
    case 0xC2E196: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:98 INC @VIRTUAL0A
    case 0xC2E198: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:99 LDA [@VIRTUAL06]
    case 0xC2E19A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:100 STA [@VIRTUAL0A]
    case 0xC2E19C: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:101 INC @VIRTUAL06
    case 0xC2E19E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:102 INC @VIRTUAL06
    case 0xC2E1A0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:103 INC @VIRTUAL0A
    case 0xC2E1A2: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:104 INC @VIRTUAL0A
    case 0xC2E1A4: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:105 LDA [@VIRTUAL06]
    case 0xC2E1A6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:106 STA [@VIRTUAL0A]
    case 0xC2E1A8: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:107 INC @VIRTUAL06
    case 0xC2E1AA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:108 INC @VIRTUAL06
    case 0xC2E1AC: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:109 INC @VIRTUAL0A
    case 0xC2E1AE: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:110 INC @VIRTUAL0A
    case 0xC2E1B0: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:111 LDA #0
    case 0xC2E1B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/show_psi_animation-jp.asm:111 LDA #0
    // Overlapping static entry reached from 0xC2E1B2.
    case 0xC2E1B4: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/battle/show_psi_animation-jp.asm:112 STA [@VIRTUAL0A]
    case 0xC2E1B5: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:113 INC @VIRTUAL0A
    case 0xC2E1B7: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:114 INC @VIRTUAL0A
    case 0xC2E1B9: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:115 STA [@VIRTUAL0A]
    case 0xC2E1BB: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:116 INC @VIRTUAL0A
    case 0xC2E1BD: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:117 INC @VIRTUAL0A
    case 0xC2E1BF: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:118 STA [@VIRTUAL0A]
    case 0xC2E1C1: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:119 INC @VIRTUAL0A
    case 0xC2E1C3: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:120 INC @VIRTUAL0A
    case 0xC2E1C5: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:121 STA [@VIRTUAL0A]
    case 0xC2E1C7: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:122 INC @VIRTUAL0A
    case 0xC2E1C9: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:123 INC @VIRTUAL0A
    case 0xC2E1CB: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:124 STA [@VIRTUAL0A]
    case 0xC2E1CD: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:125 INC @VIRTUAL0A
    case 0xC2E1CF: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:126 INC @VIRTUAL0A
    case 0xC2E1D1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:127 STA [@VIRTUAL0A]
    case 0xC2E1D3: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:128 INC @VIRTUAL0A
    case 0xC2E1D5: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:129 INC @VIRTUAL0A
    case 0xC2E1D7: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:130 STA [@VIRTUAL0A]
    case 0xC2E1D9: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:131 INC @VIRTUAL0A
    case 0xC2E1DB: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:132 INC @VIRTUAL0A
    case 0xC2E1DD: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:133 STA [@VIRTUAL0A]
    case 0xC2E1DF: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:134 INC @VIRTUAL0A
    case 0xC2E1E1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:135 INC @VIRTUAL0A
    case 0xC2E1E3: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:136 INX
    case 0xC2E1E5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:138 CPX #256
    case 0xC2E1E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/battle/show_psi_animation-jp.asm:138 CPX #256
    // Overlapping static entry reached from 0xC2E1E6.
    case 0xC2E1E8: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    case 0xC2E1E9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E1E8.
    case 0xC2E1EA: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    case 0xC2E1EB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E1EA.
    case 0xC2E1EC: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    case 0xC2E1ED: cpu.execute_instruction<0x4C>(0x00E122, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:139 BCCL @UNKNOWN2
    // Overlapping static entry reached from 0xC2E1EC.
    case 0xC2E1EE: cpu.execute_instruction<0x22>(0x00A9E1, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1F0.
    case 0xC2E1F2: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1F5.
    case 0xC2E1F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1FA.
    case 0xC2E1FC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E1FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2E1FD.
    case 0xC2E1FF: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E200: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1207 TYA
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E202: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/battle/show_psi_animation-jp.asm:140 COPY_TO_VRAM3 BUFFER + $8000, $0000, $2000, 0
    case 0xC2E203: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // src/battle/show_psi_animation-jp.asm:142 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2E207: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/show_psi_animation-jp.asm:142 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2E207.
    case 0xC2E209: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:143 STA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E20A: cpu.execute_instruction<0x8D>(0x001B70, 3); return true;
    // src/battle/show_psi_animation-jp.asm:145 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC2E20D: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x00F596, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E211.
    case 0xC2E213: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E214: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E213.
    case 0xC2E215: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E216: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E215.
    case 0xC2E217: cpu.execute_instruction<0xCC>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E216.
    case 0xC2E218: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    case 0xC2E219: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:146 LOADPTR PSI_ANIM_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E217.
    case 0xC2E21A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:147 LDA @VIRTUAL02
    case 0xC2E21B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:148 ASL
    case 0xC2E21D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:149 ASL
    case 0xC2E21E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:150 ASL
    case 0xC2E21F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:151 CLC
    case 0xC2E220: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:152 ADC @VIRTUAL06
    case 0xC2E221: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:153 STA @VIRTUAL06
    case 0xC2E223: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:154 STA @LOCAL00
    case 0xC2E225: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:155 LDA @VIRTUAL06+2
    case 0xC2E227: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:156 STA @LOCAL00+2
    case 0xC2E229: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/show_psi_animation-jp.asm:157 LDX #8
    case 0xC2E22B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:157 LDX #8
    // Overlapping static entry reached from 0xC2E22B.
    case 0xC2E22D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:158 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    case 0xC2E22E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x001B50, 3); return true;
    // src/battle/show_psi_animation-jp.asm:158 LDA #.LOWORD(PSI_ANIMATION_STATE) + psi_animation_state::palette
    // Overlapping static entry reached from 0xC2E22E.
    case 0xC2E230: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:159 JSL MEMCPY16
    case 0xC2E231: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E235: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E237: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E239: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:160 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E23B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/show_psi_animation-jp.asm:161 LDX #8
    case 0xC2E23D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:161 LDX #8
    // Overlapping static entry reached from 0xC2E23D.
    case 0xC2E23F: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/show_psi_animation-jp.asm:162 LDA PSI_ANIMATION_STATE + psi_animation_state::displayed_palette
    case 0xC2E240: cpu.execute_instruction<0xAD>(0x001B70, 3); return true;
    // src/battle/show_psi_animation-jp.asm:163 JSL MEMCPY16
    case 0xC2E243: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E247: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E247.
    case 0xC2E249: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E24A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E24C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2E24C.
    case 0xC2E24E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:164 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2E24F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E251: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E253: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E255: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:165 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2E257: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E259: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E25B: cpu.execute_instruction<0x8D>(0x001B47, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E25E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:166 MOVE_INT @VIRTUAL06, PSI_ANIMATION_STATE + psi_animation_state::frame_data
    case 0xC2E260: cpu.execute_instruction<0x8D>(0x001B49, 3); return true;
    // src/battle/show_psi_animation-jp.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E263: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:168 LDA #1
    case 0xC2E265: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/show_psi_animation-jp.asm:169 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    case 0xC2E267: cpu.execute_instruction<0x8D>(0x001B44, 3); return true;
    // src/battle/show_psi_animation-jp.asm:169 STA PSI_ANIMATION_STATE + psi_animation_state::time_until_next_frame
    // Overlapping static entry reached from 0xC2E265.
    case 0xC2E268: cpu.execute_instruction<0x44>(0x00C21B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:170 REP #PROC_FLAGS::ACCUM8
    case 0xC2E26A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:170 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E268.
    case 0xC2E26B: cpu.execute_instruction<0x20>(0x0064A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E26C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x00F164, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E26C.
    case 0xC2E26E: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E26F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E26E.
    case 0xC2E270: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E270.
    case 0xC2E272: cpu.execute_instruction<0xCC>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E271.
    case 0xC2E273: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    case 0xC2E274: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:171 LOADPTR PSI_ANIM_CFG, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E272.
    case 0xC2E275: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E276: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E278: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E27A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:172 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC2E27C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:173 LDA @VIRTUAL02
    case 0xC2E27E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E280: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E282: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E283: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E285: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:174 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E286: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:175 STA @LOCAL04
    case 0xC2E287: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:176 INC
    case 0xC2E289: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:177 INC
    case 0xC2E28A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:178 CLC
    case 0xC2E28B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:179 ADC @VIRTUAL06
    case 0xC2E28C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:180 STA @VIRTUAL06
    case 0xC2E28E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E290: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:182 LDA [@VIRTUAL06]
    case 0xC2E292: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:183 STA PSI_ANIMATION_STATE + psi_animation_state::frame_hold_frames
    case 0xC2E294: cpu.execute_instruction<0x8D>(0x001B45, 3); return true;
    // src/battle/show_psi_animation-jp.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC2E297: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:185 LDA @LOCAL04
    case 0xC2E299: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:186 CLC
    case 0xC2E29B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:187 ADC #6
    case 0xC2E29C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/battle/show_psi_animation-jp.asm:187 ADC #6
    // Overlapping static entry reached from 0xC2E29C.
    case 0xC2E29E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E29F: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2A1: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2A3: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:188 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2A5: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:189 CLC
    case 0xC2E2A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:190 ADC @VIRTUAL06
    case 0xC2E2A8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:191 STA @VIRTUAL06
    case 0xC2E2AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:193 LDA [@VIRTUAL06]
    case 0xC2E2AE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:194 STA PSI_ANIMATION_STATE + psi_animation_state::total_frames
    case 0xC2E2B0: cpu.execute_instruction<0x8D>(0x001B46, 3); return true;
    // src/battle/show_psi_animation-jp.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC2E2B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:196 LDA @LOCAL04
    case 0xC2E2B5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:197 INC
    case 0xC2E2B7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:198 INC
    case 0xC2E2B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:199 INC
    case 0xC2E2B9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2BA: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2BC: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2BE: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:200 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2C0: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:201 CLC
    case 0xC2E2C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:202 ADC @VIRTUAL06
    case 0xC2E2C3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:203 STA @VIRTUAL06
    case 0xC2E2C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:205 LDA [@VIRTUAL06]
    case 0xC2E2C9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:206 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_frames
    case 0xC2E2CB: cpu.execute_instruction<0x8D>(0x001B4E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC2E2CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:208 LDA @LOCAL04
    case 0xC2E2D0: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:209 INC
    case 0xC2E2D2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:210 INC
    case 0xC2E2D3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:211 INC
    case 0xC2E2D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:212 INC
    case 0xC2E2D5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2D6: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2D8: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2DA: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:213 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2DC: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:214 CLC
    case 0xC2E2DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:215 ADC @VIRTUAL06
    case 0xC2E2DF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:216 STA @VIRTUAL06
    case 0xC2E2E1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:217 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:218 LDA [@VIRTUAL06]
    case 0xC2E2E5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:219 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_lower_index
    case 0xC2E2E7: cpu.execute_instruction<0x8D>(0x001B4B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2E2EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:221 LDA @LOCAL04
    case 0xC2E2EC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:222 CLC
    case 0xC2E2EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:223 ADC #5
    case 0xC2E2EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/battle/show_psi_animation-jp.asm:223 ADC #5
    // Overlapping static entry reached from 0xC2E2EF.
    case 0xC2E2F1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F2: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F4: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F6: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:224 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E2F8: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:225 CLC
    case 0xC2E2FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:226 ADC @VIRTUAL06
    case 0xC2E2FB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:227 STA @VIRTUAL06
    case 0xC2E2FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:228 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E2FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:229 LDA [@VIRTUAL06]
    case 0xC2E301: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:230 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_upper_index
    case 0xC2E303: cpu.execute_instruction<0x8D>(0x001B4C, 3); return true;
    // src/battle/show_psi_animation-jp.asm:231 STZ PSI_ANIMATION_STATE + psi_animation_state::palette_animation_current_index
    case 0xC2E306: cpu.execute_instruction<0x9C>(0x001B4D, 3); return true;
    // src/battle/show_psi_animation-jp.asm:232 LDA #1
    case 0xC2E309: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/show_psi_animation-jp.asm:233 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    case 0xC2E30B: cpu.execute_instruction<0x8D>(0x001B4F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:233 STA PSI_ANIMATION_STATE + psi_animation_state::palette_animation_time_until_next_frame
    // Overlapping static entry reached from 0xC2E309.
    case 0xC2E30C: cpu.execute_instruction<0x4F>(0x20C21B, 4); return true;
    // src/battle/show_psi_animation-jp.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC2E30E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:235 LDA @LOCAL04
    case 0xC2E310: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:236 CLC
    case 0xC2E312: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:237 ADC #8
    case 0xC2E313: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:237 ADC #8
    // Overlapping static entry reached from 0xC2E313.
    case 0xC2E315: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E316: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E318: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E31A: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:238 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E31C: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:239 CLC
    case 0xC2E31E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:240 ADC @VIRTUAL06
    case 0xC2E31F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:241 STA @VIRTUAL06
    case 0xC2E321: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:242 LDA [@VIRTUAL06]
    case 0xC2E323: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:243 AND #$00FF
    case 0xC2E325: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:243 AND #$00FF
    // Overlapping static entry reached from 0xC2E325.
    case 0xC2E327: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:244 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_start_frames_left
    case 0xC2E328: cpu.execute_instruction<0x8D>(0x001B72, 3); return true;
    // src/battle/show_psi_animation-jp.asm:245 LDA @LOCAL04
    case 0xC2E32B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:246 CLC
    case 0xC2E32D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:247 ADC #9
    case 0xC2E32E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/battle/show_psi_animation-jp.asm:247 ADC #9
    // Overlapping static entry reached from 0xC2E32E.
    case 0xC2E330: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E331: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E333: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E335: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:248 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E337: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:249 CLC
    case 0xC2E339: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:250 ADC @VIRTUAL06
    case 0xC2E33A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:251 STA @VIRTUAL06
    case 0xC2E33C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:252 LDA [@VIRTUAL06]
    case 0xC2E33E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:253 AND #$00FF
    case 0xC2E340: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:253 AND #$00FF
    // Overlapping static entry reached from 0xC2E340.
    case 0xC2E342: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:254 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_frames_left
    case 0xC2E343: cpu.execute_instruction<0x8D>(0x001B74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:255 LDA @LOCAL04
    case 0xC2E346: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:256 CLC
    case 0xC2E348: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:257 ADC #10
    case 0xC2E349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/battle/show_psi_animation-jp.asm:257 ADC #10
    // Overlapping static entry reached from 0xC2E349.
    case 0xC2E34B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E34C: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E34E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E350: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:258 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC2E352: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/show_psi_animation-jp.asm:259 CLC
    case 0xC2E354: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:260 ADC @VIRTUAL06
    case 0xC2E355: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:261 STA @VIRTUAL06
    case 0xC2E357: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:262 LDA [@VIRTUAL06]
    case 0xC2E359: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:263 AND #$001F
    case 0xC2E35B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:263 AND #$001F
    // Overlapping static entry reached from 0xC2E35B.
    case 0xC2E35D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:264 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_red
    case 0xC2E35E: cpu.execute_instruction<0x8D>(0x001B76, 3); return true;
    // src/battle/show_psi_animation-jp.asm:265 LDA [@VIRTUAL06]
    case 0xC2E361: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:266 LSR
    case 0xC2E363: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:267 LSR
    case 0xC2E364: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:268 LSR
    case 0xC2E365: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:269 LSR
    case 0xC2E366: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:270 LSR
    case 0xC2E367: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:271 AND #$001F
    case 0xC2E368: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:271 AND #$001F
    // Overlapping static entry reached from 0xC2E368.
    case 0xC2E36A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:272 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_green
    case 0xC2E36B: cpu.execute_instruction<0x8D>(0x001B78, 3); return true;
    // src/battle/show_psi_animation-jp.asm:273 SEP #PROC_FLAGS::INDEX8
    case 0xC2E36E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/show_psi_animation-jp.asm:274 LDY #10
    case 0xC2E370: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00A70A, 3); return true;
    // src/battle/show_psi_animation-jp.asm:275 LDA [@VIRTUAL06]
    case 0xC2E372: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:275 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2E370.
    case 0xC2E373: cpu.execute_instruction<0x06>(0x000022, 2); return true;
    // src/battle/show_psi_animation-jp.asm:276 JSL ASR8_UNKNOWN1
    case 0xC2E374: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/battle/show_psi_animation-jp.asm:276 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E373.
    case 0xC2E375: cpu.execute_instruction<0x33>(0x000092, 2); return true;
    // src/battle/show_psi_animation-jp.asm:276 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC2E375.
    case 0xC2E377: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000029, 2); else cpu.execute_instruction<0xC0>(0x001F29, 3); return true;
    // src/battle/show_psi_animation-jp.asm:277 AND #$001F
    case 0xC2E378: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:277 AND #$001F
    // Overlapping static entry reached from 0xC2E377.
    case 0xC2E379: cpu.execute_instruction<0x1F>(0x7A8D00, 4); return true;
    // src/battle/show_psi_animation-jp.asm:277 AND #$001F
    // Overlapping static entry reached from 0xC2E378.
    case 0xC2E37A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:278 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    case 0xC2E37B: cpu.execute_instruction<0x8D>(0x001B7A, 3); return true;
    // src/battle/show_psi_animation-jp.asm:278 STA PSI_ANIMATION_STATE + psi_animation_state::enemy_colour_change_blue
    // Overlapping static entry reached from 0xC2E379.
    case 0xC2E37D: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E37E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A6, 2); else cpu.execute_instruction<0xA9>(0x00F6A6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E37E.
    case 0xC2E380: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E381: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E380.
    case 0xC2E382: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E382.
    case 0xC2E384: cpu.execute_instruction<0xCC>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E383.
    case 0xC2E385: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    case 0xC2E386: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:279 LOADPTR PSI_ANIM_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E384.
    case 0xC2E387: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:280 LDA @VIRTUAL02
    case 0xC2E388: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:281 ASL
    case 0xC2E38A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:282 ASL
    case 0xC2E38B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:283 CLC
    case 0xC2E38C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:284 ADC @VIRTUAL06
    case 0xC2E38D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:285 STA @VIRTUAL06
    case 0xC2E38F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/show_psi_animation-jp.asm:286 REP #PROC_FLAGS::INDEX8
    case 0xC2E391: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E393: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E393.
    case 0xC2E395: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E396: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E398: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E399: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E39B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:287 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2E39D: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E39F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:288 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3A7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3A9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3AB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:289 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2E3AD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/show_psi_animation-jp.asm:290 JSL DECOMP
    case 0xC2E3AF: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/battle/show_psi_animation-jp.asm:291 JSL UNKNOWN_C2DE0F
    case 0xC2E3B3: cpu.execute_instruction<0x22>(0xC2DD84, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E3B7.
    case 0xC2E3B9: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2E3B9.
    case 0xC2E3BB: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/show_psi_animation-jp.asm:292 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 8, @VIRTUAL06
    case 0xC2E3C2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/show_psi_animation-jp.asm:293 REP #PROC_FLAGS::ACCUM8
    case 0xC2E3C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/show_psi_animation-jp.asm:294 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2E3CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/show_psi_animation-jp.asm:295 LDX #128
    case 0xC2E3CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/battle/show_psi_animation-jp.asm:295 LDX #128
    // Overlapping static entry reached from 0xC2E3CE.
    case 0xC2E3D0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:296 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC2E3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000380, 3); return true;
    // src/battle/show_psi_animation-jp.asm:296 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC2E3D1.
    case 0xC2E3D3: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/battle/show_psi_animation-jp.asm:297 JSL MEMCPY16
    case 0xC2E3D4: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/show_psi_animation-jp.asm:297 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E3D3.
    case 0xC2E3D5: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:297 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2E3D5.
    case 0xC2E3D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/battle/show_psi_animation-jp.asm:298 LDA #0
    case 0xC2E3D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/show_psi_animation-jp.asm:298 LDA #0
    // Overlapping static entry reached from 0xC2E3D7.
    case 0xC2E3D9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/show_psi_animation-jp.asm:298 LDA #0
    // Overlapping static entry reached from 0xC2E3D8.
    case 0xC2E3DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation-jp.asm:299 STA @LOCAL04
    case 0xC2E3DB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:300 BRA @UNKNOWN8
    case 0xC2E3DD: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:302 ASL
    case 0xC2E3DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:303 TAX
    case 0xC2E3E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:304 STZ PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E3E1: cpu.execute_instruction<0x9E>(0x00B0BC, 3); return true;
    // src/battle/show_psi_animation-jp.asm:305 LDA @LOCAL04
    case 0xC2E3E4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:306 INC
    case 0xC2E3E6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:307 STA @LOCAL04
    case 0xC2E3E7: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:309 CMP #4
    case 0xC2E3E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/show_psi_animation-jp.asm:309 CMP #4
    // Overlapping static entry reached from 0xC2E3E9.
    case 0xC2E3EB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/show_psi_animation-jp.asm:310 BCC @UNKNOWN7
    case 0xC2E3EC: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/battle/show_psi_animation-jp.asm:311 LDX CURRENT_TARGET
    case 0xC2E3EE: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:312 LDA a:battler::consciousness,X
    case 0xC2E3F1: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/show_psi_animation-jp.asm:313 AND #$00FF
    case 0xC2E3F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC2E3F4.
    case 0xC2E3F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:314 BEQL @UNKNOWN26
    case 0xC2E3F7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:314 BEQL @UNKNOWN26
    case 0xC2E3F9: cpu.execute_instruction<0x4C>(0x00E5C6, 3); return true;
    // src/battle/show_psi_animation-jp.asm:315 LDX CURRENT_TARGET
    case 0xC2E3FC: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:316 LDA a:battler::ally_or_enemy,X
    case 0xC2E3FF: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:317 AND #$00FF
    case 0xC2E402: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:317 AND #$00FF
    // Overlapping static entry reached from 0xC2E402.
    case 0xC2E404: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:318 CMP #1
    case 0xC2E405: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:318 CMP #1
    // Overlapping static entry reached from 0xC2E405.
    case 0xC2E407: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:319 BNEL @UNKNOWN26
    case 0xC2E408: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:319 BNEL @UNKNOWN26
    case 0xC2E40A: cpu.execute_instruction<0x4C>(0x00E5C6, 3); return true;
    // src/battle/show_psi_animation-jp.asm:320 STZ PSI_ANIMATION_X_OFFSET
    case 0xC2E40D: cpu.execute_instruction<0x9C>(0x00AF6F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:321 LDA @VIRTUAL02
    case 0xC2E410: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E412: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E414: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E415: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E417: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/show_psi_animation-jp.asm:322 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2E418: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:323 CLC
    case 0xC2E419: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:324 ADC #7
    case 0xC2E41A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/battle/show_psi_animation-jp.asm:324 ADC #7
    // Overlapping static entry reached from 0xC2E41A.
    case 0xC2E41C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/show_psi_animation-jp.asm:325 TAX
    case 0xC2E41D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:326 LDA f:PSI_ANIM_CFG,X
    case 0xC2E41E: cpu.execute_instruction<0xBF>(0xCCF164, 4); return true;
    // src/battle/show_psi_animation-jp.asm:327 AND #$00FF
    case 0xC2E422: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:327 AND #$00FF
    // Overlapping static entry reached from 0xC2E422.
    case 0xC2E424: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:328 BEQ @UNKNOWN12
    case 0xC2E425: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/show_psi_animation-jp.asm:329 CMP #3
    case 0xC2E427: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/show_psi_animation-jp.asm:329 CMP #3
    // Overlapping static entry reached from 0xC2E427.
    case 0xC2E429: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:330 BEQ @UNKNOWN12
    case 0xC2E42A: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/show_psi_animation-jp.asm:331 CMP #1
    case 0xC2E42C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:331 CMP #1
    // Overlapping static entry reached from 0xC2E42C.
    case 0xC2E42E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:332 BEQ @UNKNOWN14
    case 0xC2E42F: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/battle/show_psi_animation-jp.asm:333 CMP #2
    case 0xC2E431: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/show_psi_animation-jp.asm:333 CMP #2
    // Overlapping static entry reached from 0xC2E431.
    case 0xC2E433: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:334 BEQL @UNKNOWN20
    case 0xC2E434: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:334 BEQL @UNKNOWN20
    case 0xC2E436: cpu.execute_instruction<0x4C>(0x00E54C, 3); return true;
    // src/battle/show_psi_animation-jp.asm:335 JMP @UNKNOWN24
    case 0xC2E439: cpu.execute_instruction<0x4C>(0x00E5A1, 3); return true;
    // src/battle/show_psi_animation-jp.asm:337 LDX CURRENT_TARGET
    case 0xC2E43C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:338 LDA a:battler::sprite_x,X
    case 0xC2E43F: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/show_psi_animation-jp.asm:339 AND #$00FF
    case 0xC2E442: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:339 AND #$00FF
    // Overlapping static entry reached from 0xC2E442.
    case 0xC2E444: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation-jp.asm:340 STA @VIRTUAL02
    case 0xC2E445: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:341 LDA #128
    case 0xC2E447: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/show_psi_animation-jp.asm:341 LDA #128
    // Overlapping static entry reached from 0xC2E447.
    case 0xC2E449: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/show_psi_animation-jp.asm:342 SEC
    case 0xC2E44A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:343 SBC @VIRTUAL02
    case 0xC2E44B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:344 STA PSI_ANIMATION_X_OFFSET
    case 0xC2E44D: cpu.execute_instruction<0x8D>(0x00AF6F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:345 LDX CURRENT_TARGET
    case 0xC2E450: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:346 LDA a:battler::sprite_y,X
    case 0xC2E453: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/show_psi_animation-jp.asm:347 AND #$00FF
    case 0xC2E456: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:347 AND #$00FF
    // Overlapping static entry reached from 0xC2E456.
    case 0xC2E458: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation-jp.asm:348 STA @VIRTUAL02
    case 0xC2E459: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:349 LDA #144
    case 0xC2E45B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000090, 3); return true;
    // src/battle/show_psi_animation-jp.asm:349 LDA #144
    // Overlapping static entry reached from 0xC2E45B.
    case 0xC2E45D: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/show_psi_animation-jp.asm:350 SEC
    case 0xC2E45E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:351 SBC @VIRTUAL02
    case 0xC2E45F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:352 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E461: cpu.execute_instruction<0x8D>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:353 LDX CURRENT_TARGET
    case 0xC2E464: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:354 LDA a:battler::sprite,X
    case 0xC2E467: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/show_psi_animation-jp.asm:355 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E46A: cpu.execute_instruction<0x20>(0x00EF6B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:356 CMP #8
    case 0xC2E46D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:356 CMP #8
    // Overlapping static entry reached from 0xC2E46D.
    case 0xC2E46F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:357 BNE @UNKNOWN13
    case 0xC2E470: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:358 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E472: cpu.execute_instruction<0xAD>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:359 CLC
    case 0xC2E475: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:360 ADC #16
    case 0xC2E476: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/show_psi_animation-jp.asm:360 ADC #16
    // Overlapping static entry reached from 0xC2E476.
    case 0xC2E478: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:361 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E479: cpu.execute_instruction<0x8D>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:363 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E47C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:364 LDA #1
    case 0xC2E47E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/show_psi_animation-jp.asm:365 LDX CURRENT_TARGET
    case 0xC2E480: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:365 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2E47E.
    case 0xC2E481: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/show_psi_animation-jp.asm:366 STA a:battler::use_alt_spritemap,X
    case 0xC2E483: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:367 LDX CURRENT_TARGET
    case 0xC2E486: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:368 REP #PROC_FLAGS::ACCUM8
    case 0xC2E489: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:369 LDA a:battler::vram_sprite_index,X
    case 0xC2E48B: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/show_psi_animation-jp.asm:370 AND #$00FF
    case 0xC2E48E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC2E48E.
    case 0xC2E490: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:371 ASL
    case 0xC2E491: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:372 TAX
    case 0xC2E492: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:373 LDA #1
    case 0xC2E493: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:373 LDA #1
    // Overlapping static entry reached from 0xC2E493.
    case 0xC2E495: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:374 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E496: cpu.execute_instruction<0x9D>(0x00B0BC, 3); return true;
    // src/battle/show_psi_animation-jp.asm:375 JMP @UNKNOWN24
    case 0xC2E499: cpu.execute_instruction<0x4C>(0x00E5A1, 3); return true;
    // src/battle/show_psi_animation-jp.asm:377 LDX CURRENT_TARGET
    case 0xC2E49C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:378 LDA a:battler::sprite_y,X
    case 0xC2E49F: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/show_psi_animation-jp.asm:379 AND #$00FF
    case 0xC2E4A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:379 AND #$00FF
    // Overlapping static entry reached from 0xC2E4A2.
    case 0xC2E4A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation-jp.asm:380 STA @VIRTUAL02
    case 0xC2E4A5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:381 LDA #144
    case 0xC2E4A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000090, 3); return true;
    // src/battle/show_psi_animation-jp.asm:381 LDA #144
    // Overlapping static entry reached from 0xC2E4A7.
    case 0xC2E4A9: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/show_psi_animation-jp.asm:382 SEC
    case 0xC2E4AA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:383 SBC @VIRTUAL02
    case 0xC2E4AB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:384 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E4AD: cpu.execute_instruction<0x8D>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:385 LDY #0
    case 0xC2E4B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/show_psi_animation-jp.asm:385 LDY #0
    // Overlapping static entry reached from 0xC2E4B0.
    case 0xC2E4B2: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/show_psi_animation-jp.asm:386 STY @LOCAL04
    case 0xC2E4B3: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:387 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2E4B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A41E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:387 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2E4B5.
    case 0xC2E4B7: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // src/battle/show_psi_animation-jp.asm:388 STA @VIRTUAL02
    case 0xC2E4B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:388 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2E4B7.
    case 0xC2E4B9: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/battle/show_psi_animation-jp.asm:389 LDX #8
    case 0xC2E4BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:389 LDX #8
    // Overlapping static entry reached from 0xC2E4BA.
    case 0xC2E4BC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/show_psi_animation-jp.asm:390 STX @LOCAL03
    case 0xC2E4BD: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/show_psi_animation-jp.asm:391 BRA @UNKNOWN18
    case 0xC2E4BF: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/battle/show_psi_animation-jp.asm:393 LDX @VIRTUAL02
    case 0xC2E4C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:394 LDA a:battler::consciousness,X
    case 0xC2E4C3: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/show_psi_animation-jp.asm:395 AND #$00FF
    case 0xC2E4C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:395 AND #$00FF
    // Overlapping static entry reached from 0xC2E4C6.
    case 0xC2E4C8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:396 BEQ @UNKNOWN17
    case 0xC2E4C9: cpu.execute_instruction<0xF0>(0x000058, 2); return true;
    // src/battle/show_psi_animation-jp.asm:397 LDX @VIRTUAL02
    case 0xC2E4CB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:398 LDA a:battler::ally_or_enemy,X
    case 0xC2E4CD: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:399 AND #$00FF
    case 0xC2E4D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:399 AND #$00FF
    // Overlapping static entry reached from 0xC2E4D0.
    case 0xC2E4D2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:400 CMP #1
    case 0xC2E4D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:400 CMP #1
    // Overlapping static entry reached from 0xC2E4D3.
    case 0xC2E4D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:401 BNE @UNKNOWN17
    case 0xC2E4D6: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/battle/show_psi_animation-jp.asm:402 LDX @VIRTUAL02
    case 0xC2E4D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:403 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2E4DA: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/show_psi_animation-jp.asm:404 AND #$00FF
    case 0xC2E4DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC2E4DD.
    case 0xC2E4DF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:405 CMP #1
    case 0xC2E4E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:405 CMP #1
    // Overlapping static entry reached from 0xC2E4E0.
    case 0xC2E4E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:406 BEQ @UNKNOWN17
    case 0xC2E4E3: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:407 LDX @VIRTUAL02
    case 0xC2E4E5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:408 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E4E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:409 LDA a:battler::sprite_y,X
    case 0xC2E4E9: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/show_psi_animation-jp.asm:410 LDX CURRENT_TARGET
    case 0xC2E4EC: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/show_psi_animation-jp.asm:411 CMP a:battler::sprite_y,X
    case 0xC2E4EF: cpu.execute_instruction<0xDD>(0x000045, 3); return true;
    // src/battle/show_psi_animation-jp.asm:412 BNE @UNKNOWN17
    case 0xC2E4F2: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/battle/show_psi_animation-jp.asm:413 LDX @VIRTUAL02
    case 0xC2E4F4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC2E4F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:415 LDA a:battler::sprite,X
    case 0xC2E4F8: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/show_psi_animation-jp.asm:416 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2E4FB: cpu.execute_instruction<0x20>(0x00EF6B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:417 CMP #8
    case 0xC2E4FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:417 CMP #8
    // Overlapping static entry reached from 0xC2E4FE.
    case 0xC2E500: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:418 BNE @UNKNOWN16
    case 0xC2E501: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/show_psi_animation-jp.asm:419 LDY #1
    case 0xC2E503: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:419 LDY #1
    // Overlapping static entry reached from 0xC2E503.
    case 0xC2E505: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/show_psi_animation-jp.asm:420 STY @LOCAL04
    case 0xC2E506: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:422 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E508: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:423 LDA #1
    case 0xC2E50A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/show_psi_animation-jp.asm:424 LDX @VIRTUAL02
    case 0xC2E50C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:424 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2E50A.
    case 0xC2E50D: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:425 STA a:battler::use_alt_spritemap,X
    case 0xC2E50E: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:426 LDX @VIRTUAL02
    case 0xC2E511: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:427 REP #PROC_FLAGS::ACCUM8
    case 0xC2E513: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:428 LDA a:battler::vram_sprite_index,X
    case 0xC2E515: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/show_psi_animation-jp.asm:429 AND #$00FF
    case 0xC2E518: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:429 AND #$00FF
    // Overlapping static entry reached from 0xC2E518.
    case 0xC2E51A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:430 ASL
    case 0xC2E51B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:431 TAX
    case 0xC2E51C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:432 LDA #1
    case 0xC2E51D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:432 LDA #1
    // Overlapping static entry reached from 0xC2E51D.
    case 0xC2E51F: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:433 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E520: cpu.execute_instruction<0x9D>(0x00B0BC, 3); return true;
    // src/battle/show_psi_animation-jp.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC2E523: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:436 LDA @VIRTUAL02
    case 0xC2E525: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:437 CLC
    case 0xC2E527: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:438 ADC #.SIZEOF(battler)
    case 0xC2E528: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:438 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E528.
    case 0xC2E52A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/show_psi_animation-jp.asm:439 STA @VIRTUAL02
    case 0xC2E52B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/show_psi_animation-jp.asm:440 LDX @LOCAL03
    case 0xC2E52D: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/show_psi_animation-jp.asm:441 INX
    case 0xC2E52F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:442 STX @LOCAL03
    case 0xC2E530: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/show_psi_animation-jp.asm:444 CPX #32
    case 0xC2E532: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/show_psi_animation-jp.asm:444 CPX #32
    // Overlapping static entry reached from 0xC2E532.
    case 0xC2E534: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:445 BCCL @UNKNOWN15
    case 0xC2E535: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/show_psi_animation-jp.asm:445 BCCL @UNKNOWN15
    case 0xC2E537: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/show_psi_animation-jp.asm:445 BCCL @UNKNOWN15
    case 0xC2E539: cpu.execute_instruction<0x4C>(0x00E4C1, 3); return true;
    // src/battle/show_psi_animation-jp.asm:446 LDY @LOCAL04
    case 0xC2E53C: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:447 BEQ @UNKNOWN24
    case 0xC2E53E: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/battle/show_psi_animation-jp.asm:448 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E540: cpu.execute_instruction<0xAD>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:449 CLC
    case 0xC2E543: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:450 ADC #16
    case 0xC2E544: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/show_psi_animation-jp.asm:450 ADC #16
    // Overlapping static entry reached from 0xC2E544.
    case 0xC2E546: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:451 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E547: cpu.execute_instruction<0x8D>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:452 BRA @UNKNOWN24
    case 0xC2E54A: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/battle/show_psi_animation-jp.asm:454 LDA #16
    case 0xC2E54C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/show_psi_animation-jp.asm:454 LDA #16
    // Overlapping static entry reached from 0xC2E54C.
    case 0xC2E54E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:455 STA PSI_ANIMATION_Y_OFFSET
    case 0xC2E54F: cpu.execute_instruction<0x8D>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:456 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    case 0xC2E552: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00A41E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:456 LDY #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 8
    // Overlapping static entry reached from 0xC2E552.
    case 0xC2E554: cpu.execute_instruction<0xA4>(0x0000A2, 2); return true;
    // src/battle/show_psi_animation-jp.asm:457 LDX #8
    case 0xC2E555: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/show_psi_animation-jp.asm:457 LDX #8
    // Overlapping static entry reached from 0xC2E554.
    case 0xC2E556: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:457 LDX #8
    // Overlapping static entry reached from 0xC2E555.
    case 0xC2E557: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/show_psi_animation-jp.asm:458 STX @LOCAL02
    case 0xC2E558: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/show_psi_animation-jp.asm:459 BRA @UNKNOWN23
    case 0xC2E55A: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/battle/show_psi_animation-jp.asm:461 LDA a:battler::consciousness,Y
    case 0xC2E55C: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/show_psi_animation-jp.asm:462 AND #$00FF
    case 0xC2E55F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:462 AND #$00FF
    // Overlapping static entry reached from 0xC2E55F.
    case 0xC2E561: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:463 BEQ @UNKNOWN22
    case 0xC2E562: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:464 LDA a:battler::ally_or_enemy,Y
    case 0xC2E564: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:465 AND #$00FF
    case 0xC2E567: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:465 AND #$00FF
    // Overlapping static entry reached from 0xC2E567.
    case 0xC2E569: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:466 CMP #1
    case 0xC2E56A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:466 CMP #1
    // Overlapping static entry reached from 0xC2E56A.
    case 0xC2E56C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:467 BNE @UNKNOWN22
    case 0xC2E56D: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/show_psi_animation-jp.asm:468 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC2E56F: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/show_psi_animation-jp.asm:469 AND #$00FF
    case 0xC2E572: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:469 AND #$00FF
    // Overlapping static entry reached from 0xC2E572.
    case 0xC2E574: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:470 CMP #1
    case 0xC2E575: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:470 CMP #1
    // Overlapping static entry reached from 0xC2E575.
    case 0xC2E577: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:471 BEQ @UNKNOWN22
    case 0xC2E578: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/show_psi_animation-jp.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E57A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:473 LDA #1
    case 0xC2E57C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/battle/show_psi_animation-jp.asm:474 STA a:battler::use_alt_spritemap,Y
    case 0xC2E57E: cpu.execute_instruction<0x99>(0x00004B, 3); return true;
    // src/battle/show_psi_animation-jp.asm:474 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E57C.
    case 0xC2E57F: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:474 STA a:battler::use_alt_spritemap,Y
    // Overlapping static entry reached from 0xC2E57F.
    case 0xC2E580: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/show_psi_animation-jp.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC2E581: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/show_psi_animation-jp.asm:476 LDA a:battler::vram_sprite_index,Y
    case 0xC2E583: cpu.execute_instruction<0xB9>(0x000043, 3); return true;
    // src/battle/show_psi_animation-jp.asm:477 AND #$00FF
    case 0xC2E586: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:477 AND #$00FF
    // Overlapping static entry reached from 0xC2E586.
    case 0xC2E588: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/show_psi_animation-jp.asm:478 ASL
    case 0xC2E589: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:479 TAX
    case 0xC2E58A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:480 LDA #1
    case 0xC2E58B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/show_psi_animation-jp.asm:480 LDA #1
    // Overlapping static entry reached from 0xC2E58B.
    case 0xC2E58D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/show_psi_animation-jp.asm:481 STA PSI_ANIMATION_ENEMY_TARGETS,X
    case 0xC2E58E: cpu.execute_instruction<0x9D>(0x00B0BC, 3); return true;
    // src/battle/show_psi_animation-jp.asm:483 TYA
    case 0xC2E591: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:484 CLC
    case 0xC2E592: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:485 ADC #.SIZEOF(battler)
    case 0xC2E593: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/show_psi_animation-jp.asm:485 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2E593.
    case 0xC2E595: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/show_psi_animation-jp.asm:486 TAY
    case 0xC2E596: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:487 LDX @LOCAL02
    case 0xC2E597: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/show_psi_animation-jp.asm:488 INX
    case 0xC2E599: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/show_psi_animation-jp.asm:489 STX @LOCAL02
    case 0xC2E59A: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/show_psi_animation-jp.asm:491 CPX #32
    case 0xC2E59C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/show_psi_animation-jp.asm:491 CPX #32
    // Overlapping static entry reached from 0xC2E59C.
    case 0xC2E59E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/show_psi_animation-jp.asm:492 BCC @UNKNOWN21
    case 0xC2E59F: cpu.execute_instruction<0x90>(0x0000BB, 2); return true;
    // src/battle/show_psi_animation-jp.asm:494 LDA LOADED_BG_DATA_LAYER1 + loaded_bg_data::bitdepth
    case 0xC2E5A1: cpu.execute_instruction<0xAD>(0x00AFAA, 3); return true;
    // src/battle/show_psi_animation-jp.asm:495 AND #$00FF
    case 0xC2E5A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/show_psi_animation-jp.asm:495 AND #$00FF
    // Overlapping static entry reached from 0xC2E5A4.
    case 0xC2E5A6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/show_psi_animation-jp.asm:496 CMP #2
    case 0xC2E5A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/show_psi_animation-jp.asm:496 CMP #2
    // Overlapping static entry reached from 0xC2E5A7.
    case 0xC2E5A9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/show_psi_animation-jp.asm:497 BNE @UNKNOWN25
    case 0xC2E5AA: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/battle/show_psi_animation-jp.asm:498 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E5AC: cpu.execute_instruction<0xAD>(0x00AF6F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:499 STA BG2_X_POS
    case 0xC2E5AF: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/battle/show_psi_animation-jp.asm:500 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E5B2: cpu.execute_instruction<0xAD>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:501 STA BG2_Y_POS
    case 0xC2E5B5: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/battle/show_psi_animation-jp.asm:502 BRA @UNKNOWN26
    case 0xC2E5B8: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/show_psi_animation-jp.asm:504 LDA PSI_ANIMATION_X_OFFSET
    case 0xC2E5BA: cpu.execute_instruction<0xAD>(0x00AF6F, 3); return true;
    // src/battle/show_psi_animation-jp.asm:505 STA BG1_X_POS
    case 0xC2E5BD: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/battle/show_psi_animation-jp.asm:506 LDA PSI_ANIMATION_Y_OFFSET
    case 0xC2E5C0: cpu.execute_instruction<0xAD>(0x00AF71, 3); return true;
    // src/battle/show_psi_animation-jp.asm:507 STA BG1_Y_POS
    case 0xC2E5C3: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/show_psi_animation-jp.asm:509 END_C_FUNCTION
    case 0xC2E5C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/show_psi_animation-jp.asm:509 END_C_FUNCTION
    case 0xC2E5C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/smaaaash.asm (source_named).
bool execute_battle_smaaaash_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/smaaaash.asm:3 BEGIN_C_FUNCTION
    case 0xC2839F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC283A3.
    case 0xC283A5: cpu.execute_instruction<0xFF>(0x639C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/smaaaash.asm:8 END_STACK_VARS
    case 0xC283A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    case 0xC283A7: cpu.execute_instruction<0x9C>(0x00AC63, 3); return true;
    // src/battle/smaaaash.asm:9 STZ IS_SMAAAAASH_ATTACK
    // Overlapping static entry reached from 0xC283A5.
    case 0xC283A9: cpu.execute_instruction<0xAC>(0x0072AE, 3); return true;
    // src/battle/smaaaash.asm:10 LDX CURRENT_ATTACKER
    case 0xC283AA: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/smaaaash.asm:10 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC283A9.
    case 0xC283AC: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:11 LDA __BSS_START__ + battler::guts,X
    case 0xC283AD: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/smaaaash.asm:12 STA @LOCAL01
    case 0xC283B0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:13 LDX CURRENT_ATTACKER
    case 0xC283B2: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/smaaaash.asm:14 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC283B5: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/smaaaash.asm:15 AND #$00FF
    case 0xC283B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC283B8.
    case 0xC283BA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/smaaaash.asm:16 BNE @BYPASS_MINIMUM_GUTS
    case 0xC283BB: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/smaaaash.asm:17 LDA @LOCAL01
    case 0xC283BD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC283BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/battle/smaaaash.asm:18 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC283BF.
    case 0xC283C1: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/smaaaash.asm:19 BCS @BYPASS_MINIMUM_GUTS
    case 0xC283C2: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC283C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/battle/smaaaash.asm:20 LDA #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC283C4.
    case 0xC283C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/smaaaash.asm:21 STA @LOCAL01
    case 0xC283C7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:23 LDA @LOCAL01
    case 0xC283C9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:24 JSR SUCCESS_500
    case 0xC283CB: cpu.execute_instruction<0x20>(0x006B1A, 3); return true;
    // src/battle/smaaaash.asm:25 CMP #0
    case 0xC283CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/smaaaash.asm:25 CMP #0
    // Overlapping static entry reached from 0xC283CE.
    case 0xC283D0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC283D1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/smaaaash.asm:26 BEQL @FAILED
    case 0xC283D3: cpu.execute_instruction<0x4C>(0x00844F, 3); return true;
    // src/battle/smaaaash.asm:27 LDX CURRENT_ATTACKER
    case 0xC283D6: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/smaaaash.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,X
    case 0xC283D9: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/smaaaash.asm:29 AND #$00FF
    case 0xC283DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC283DC.
    case 0xC283DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/smaaaash.asm:30 BNE @ATTACKER_IS_ENEMY
    case 0xC283DF: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    case 0xC283E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/smaaaash.asm:31 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC283E1.
    case 0xC283E3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/smaaaash.asm:32 STA GREEN_FLASH_DURATION
    case 0xC283E4: cpu.execute_instruction<0x8D>(0x00AF73, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x002D8D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC283E7.
    case 0xC283E9: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    // Overlapping static entry reached from 0xC283EC.
    case 0xC283EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:33 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_PLAYER
    case 0xC283F1: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/smaaaash.asm:34 BRA @SKIP_ENEMY_FLASH
    case 0xC283F5: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    case 0xC283F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/smaaaash.asm:36 LDA #SMAAAASH_FLASH_DURATION
    // Overlapping static entry reached from 0xC283F7.
    case 0xC283F9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/smaaaash.asm:37 STA RED_FLASH_DURATION
    case 0xC283FA: cpu.execute_instruction<0x8D>(0x00AF75, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC283FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x002D97, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC283FD.
    case 0xC283FF: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28400: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    // Overlapping static entry reached from 0xC28402.
    case 0xC28404: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28405: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/smaaaash.asm:38 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SMASH_MONSTER
    case 0xC28407: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/smaaaash.asm:40 LDX CURRENT_TARGET
    case 0xC2840B: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/smaaaash.asm:41 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2840E: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/smaaaash.asm:42 AND #$00FF
    case 0xC28411: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC28411.
    case 0xC28413: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/smaaaash.asm:43 TAX
    case 0xC28414: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    case 0xC28415: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/smaaaash.asm:44 CPX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC28415.
    case 0xC28417: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/smaaaash.asm:45 BEQ @TARGET_HAS_SHIELD
    case 0xC28418: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    case 0xC2841A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/battle/smaaaash.asm:46 CPX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC2841A.
    case 0xC2841C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/smaaaash.asm:47 BNE @TARGET_DOES_NOT_HAVE_SHIELD
    case 0xC2841D: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/smaaaash.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC2841F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/smaaaash.asm:50 LDA #1
    case 0xC28421: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    case 0xC28423: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/smaaaash.asm:51 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28421.
    case 0xC28424: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/smaaaash.asm:52 STA __BSS_START__ + battler::shield_hp,X
    case 0xC28426: cpu.execute_instruction<0x9D>(0x000025, 3); return true;
    // src/battle/smaaaash.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC28429: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/smaaaash.asm:55 LDA #1
    case 0xC2842B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/smaaaash.asm:55 LDA #1
    // Overlapping static entry reached from 0xC2842B.
    case 0xC2842D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/smaaaash.asm:56 STA IS_SMAAAAASH_ATTACK
    case 0xC2842E: cpu.execute_instruction<0x8D>(0x00AC63, 3); return true;
    // src/battle/smaaaash.asm:57 LDX #$00FF
    case 0xC28431: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/smaaaash.asm:57 LDX #$00FF
    // Overlapping static entry reached from 0xC28431.
    case 0xC28433: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/smaaaash.asm:58 STX @LOCAL01
    case 0xC28434: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:59 LDX CURRENT_ATTACKER
    case 0xC28436: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/smaaaash.asm:60 LDA __BSS_START__ + battler::offense,X
    case 0xC28439: cpu.execute_instruction<0xBD>(0x000026, 3); return true;
    // src/battle/smaaaash.asm:61 ASL
    case 0xC2843C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:62 ASL
    case 0xC2843D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:63 LDX CURRENT_TARGET
    case 0xC2843E: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/smaaaash.asm:64 SEC
    case 0xC28441: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/smaaaash.asm:65 SBC __BSS_START__ + battler::defense,X
    case 0xC28442: cpu.execute_instruction<0xFD>(0x000028, 3); return true;
    // src/battle/smaaaash.asm:66 LDX @LOCAL01
    case 0xC28445: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/smaaaash.asm:67 JSR CALC_RESIST_DAMAGE
    case 0xC28447: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/smaaaash.asm:68 LDA #1
    case 0xC2844A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/smaaaash.asm:68 LDA #1
    // Overlapping static entry reached from 0xC2844A.
    case 0xC2844C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/smaaaash.asm:69 BRA @RETURN
    case 0xC2844D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/smaaaash.asm:71 LDA #0
    case 0xC2844F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/smaaaash.asm:71 LDA #0
    // Overlapping static entry reached from 0xC2844F.
    case 0xC28451: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC28452: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/smaaaash.asm:73 END_C_FUNCTION
    case 0xC28453: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_255.asm (source_named).
bool execute_battle_success_255_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_255.asm:3 BEGIN_C_FUNCTION
    case 0xC26AF7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AF9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26AFC.
    case 0xC26AFE: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26B00: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/success_255.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC26B01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/success_255.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC26AFE.
    case 0xC26B02: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/battle/success_255.asm:9 STA @VIRTUAL00
    case 0xC26B03: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/success_255.asm:10 JSR RAND_LONG
    case 0xC26B05: cpu.execute_instruction<0x20>(0x00692E, 3); return true;
    // src/battle/success_255.asm:11 CMP @VIRTUAL00
    case 0xC26B08: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/battle/success_255.asm:12 BCS @UNKNOWN0
    case 0xC26B0A: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/battle/success_255.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC26B0C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/success_255.asm:14 LDA #1
    case 0xC26B0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_255.asm:14 LDA #1
    // Overlapping static entry reached from 0xC26B0E.
    case 0xC26B10: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_255.asm:15 BRA @RETURN
    case 0xC26B11: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/success_255.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC26B13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/success_255.asm:18 LDA #0
    case 0xC26B15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_255.asm:18 LDA #0
    // Overlapping static entry reached from 0xC26B15.
    case 0xC26B17: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_255.asm:20 END_C_FUNCTION
    case 0xC26B18: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_255.asm:20 END_C_FUNCTION
    case 0xC26B19: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_500.asm (source_named).
bool execute_battle_success_500_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_500.asm:3 BEGIN_C_FUNCTION
    case 0xC26B1A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26B1C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26B1D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26B1E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26B1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26B1F.
    case 0xC26B21: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26B22: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_500.asm:7 END_STACK_VARS
    case 0xC26B23: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/success_500.asm:8 STA @VIRTUAL02
    case 0xC26B24: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/success_500.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC26B21.
    case 0xC26B25: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/battle/success_500.asm:9 LDA #500
    case 0xC26B26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x0001F4, 3); return true;
    // src/battle/success_500.asm:9 LDA #500
    // Overlapping static entry reached from 0xC26B26.
    case 0xC26B28: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/success_500.asm:10 JSR RAND_LIMIT
    case 0xC26B29: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/success_500.asm:10 JSR RAND_LIMIT
    // Overlapping static entry reached from 0xC26B28.
    case 0xC26B2A: cpu.execute_instruction<0x6C>(0x00C569, 3); return true;
    // src/battle/success_500.asm:10 JSR RAND_LIMIT
    // Overlapping static entry reached from 0xC4B8DF.
    case 0xC26B2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x0002C5, 3); return true;
    // src/battle/success_500.asm:11 CMP @VIRTUAL02
    case 0xC26B2C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/success_500.asm:11 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC26B2B.
    case 0xC26B2D: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // src/battle/success_500.asm:12 BCS @UNKNOWN0
    case 0xC26B2E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/success_500.asm:13 LDA #1
    case 0xC26B30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_500.asm:13 LDA #1
    // Overlapping static entry reached from 0xC26B30.
    case 0xC26B32: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_500.asm:14 BRA @RETURN
    case 0xC26B33: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_500.asm:16 LDA #0
    case 0xC26B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_500.asm:16 LDA #0
    // Overlapping static entry reached from 0xC26B35.
    case 0xC26B37: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_500.asm:18 END_C_FUNCTION
    case 0xC26B38: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_500.asm:18 END_C_FUNCTION
    case 0xC26B39: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_luck40.asm (source_named).
bool execute_battle_success_luck40_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_luck40.asm:3 BEGIN_C_FUNCTION
    case 0xC28CD8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/success_luck40.asm:6 LDA #40
    case 0xC28CDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/battle/success_luck40.asm:6 LDA #40
    // Overlapping static entry reached from 0xC28CDA.
    case 0xC28CDC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/success_luck40.asm:7 JSR RAND_LIMIT
    case 0xC28CDD: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/success_luck40.asm:8 LDX CURRENT_TARGET
    case 0xC28CE0: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/success_luck40.asm:9 CMP a:battler::luck,X
    case 0xC28CE3: cpu.execute_instruction<0xDD>(0x00002E, 3); return true;
    // src/battle/success_luck40.asm:10 BCS @SUCCESS
    case 0xC28CE6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/success_luck40.asm:11 LDA #0
    case 0xC28CE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_luck40.asm:11 LDA #0
    // Overlapping static entry reached from 0xC28CE8.
    case 0xC28CEA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_luck40.asm:12 BRA @RETURN
    case 0xC28CEB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_luck40.asm:14 LDA #1
    case 0xC28CED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_luck40.asm:14 LDA #1
    // Overlapping static entry reached from 0xC28CED.
    case 0xC28CEF: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_luck40.asm:16 END_C_FUNCTION
    case 0xC28CF0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_luck80.asm (source_named).
bool execute_battle_success_luck80_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_luck80.asm:3 BEGIN_C_FUNCTION
    case 0xC27C2D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/success_luck80.asm:6 LDA #80
    case 0xC27C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/battle/success_luck80.asm:6 LDA #80
    // Overlapping static entry reached from 0xC27C2F.
    case 0xC27C31: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/success_luck80.asm:7 JSR RAND_LIMIT
    case 0xC27C32: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/success_luck80.asm:8 LDX CURRENT_TARGET
    case 0xC27C35: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/success_luck80.asm:9 CMP a:battler::luck,X
    case 0xC27C38: cpu.execute_instruction<0xDD>(0x00002E, 3); return true;
    // src/battle/success_luck80.asm:10 BCS @SUCCESS
    case 0xC27C3B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/success_luck80.asm:11 LDA #0
    case 0xC27C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_luck80.asm:11 LDA #0
    // Overlapping static entry reached from 0xC27C3D.
    case 0xC27C3F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_luck80.asm:12 BRA @RETURN
    case 0xC27C40: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_luck80.asm:14 LDA #1
    case 0xC27C42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_luck80.asm:14 LDA #1
    // Overlapping static entry reached from 0xC27C42.
    case 0xC27C44: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_luck80.asm:16 END_C_FUNCTION
    case 0xC27C45: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/success_speed.asm (source_named).
bool execute_battle_success_speed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_speed.asm:3 BEGIN_C_FUNCTION
    case 0xC27C46: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27C48: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27C49: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27C4A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27C4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC27C4B.
    case 0xC27C4D: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27C4E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_speed.asm:9 END_STACK_VARS
    case 0xC27C4F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/success_speed.asm:10 TAY
    case 0xC27C50: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/success_speed.asm:11 LDX CURRENT_TARGET
    case 0xC27C51: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/success_speed.asm:12 LDA a:battler::speed,X
    case 0xC27C54: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/success_speed.asm:13 ASL
    case 0xC27C57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/success_speed.asm:14 TAX
    case 0xC27C58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/success_speed.asm:15 STX @LOCAL01
    case 0xC27C59: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/success_speed.asm:16 LDX CURRENT_ATTACKER
    case 0xC27C5B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/success_speed.asm:17 LDA a:battler::speed,X
    case 0xC27C5E: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/success_speed.asm:18 STA @LOCAL00
    case 0xC27C61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/success_speed.asm:19 STA @VIRTUAL02
    case 0xC27C63: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/success_speed.asm:20 LDX @LOCAL01
    case 0xC27C65: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/success_speed.asm:21 TXA
    case 0xC27C67: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/success_speed.asm:22 CMP @VIRTUAL02
    case 0xC27C68: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/success_speed.asm:23 BCC @UNKNOWN0
    case 0xC27C6A: cpu.execute_instruction<0x90>(0x00000D, 2); return true;
    // src/battle/success_speed.asm:24 LDA @LOCAL00
    case 0xC27C6C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/success_speed.asm:25 STA @VIRTUAL02
    case 0xC27C6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/success_speed.asm:26 TXA
    case 0xC27C70: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/success_speed.asm:27 SEC
    case 0xC27C71: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/success_speed.asm:28 SBC @VIRTUAL02
    case 0xC27C72: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/success_speed.asm:29 TAX
    case 0xC27C74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/success_speed.asm:30 STX @LOCAL01
    case 0xC27C75: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/success_speed.asm:31 BRA @UNKNOWN1
    case 0xC27C77: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/success_speed.asm:33 LDX #0
    case 0xC27C79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/success_speed.asm:33 LDX #0
    // Overlapping static entry reached from 0xC27C79.
    case 0xC27C7B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/success_speed.asm:34 STX @LOCAL01
    case 0xC27C7C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/success_speed.asm:36 TYA
    case 0xC27C7E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/success_speed.asm:37 JSR RAND_LIMIT
    case 0xC27C7F: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/success_speed.asm:38 LDX @LOCAL01
    case 0xC27C82: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/success_speed.asm:39 STX @VIRTUAL02
    case 0xC27C84: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/success_speed.asm:40 CMP @VIRTUAL02
    case 0xC27C86: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/success_speed.asm:41 BCC @UNKNOWN2
    case 0xC27C88: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/battle/success_speed.asm:42 LDA #1
    case 0xC27C8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/success_speed.asm:42 LDA #1
    // Overlapping static entry reached from 0xC27C8A.
    case 0xC27C8C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/success_speed.asm:43 BRA @UNKNOWN3
    case 0xC27C8D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/success_speed.asm:45 LDA #0
    case 0xC27C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/success_speed.asm:45 LDA #0
    // Overlapping static entry reached from 0xC27C8F.
    case 0xC27C91: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_speed.asm:47 END_C_FUNCTION
    case 0xC27C92: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_speed.asm:47 END_C_FUNCTION
    case 0xC27C93: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/swap_attacker_with_target.asm (source_named).
bool execute_battle_swap_attacker_with_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/swap_attacker_with_target.asm:3 BEGIN_C_FUNCTION
    case 0xC27E21: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E23: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC27E25.
    case 0xC27E27: cpu.execute_instruction<0xFF>(0x72AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/swap_attacker_with_target.asm:7 LDA CURRENT_ATTACKER
    case 0xC27E29: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/swap_attacker_with_target.asm:7 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC27E27.
    case 0xC27E2B: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/swap_attacker_with_target.asm:8 STA @LOCAL00
    case 0xC27E2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/swap_attacker_with_target.asm:9 LDA CURRENT_TARGET
    case 0xC27E2E: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/swap_attacker_with_target.asm:10 STA CURRENT_ATTACKER
    case 0xC27E31: cpu.execute_instruction<0x8D>(0x00AB72, 3); return true;
    // src/battle/swap_attacker_with_target.asm:11 LDA @LOCAL00
    case 0xC27E34: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/swap_attacker_with_target.asm:12 STA CURRENT_TARGET
    case 0xC27E36: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    case 0xC27E39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    // Overlapping static entry reached from 0xC27E39.
    case 0xC27E3B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/swap_attacker_with_target.asm:14 JSL FIX_ATTACKER_NAME
    case 0xC27E3C: cpu.execute_instruction<0x22>(0xC23AB9, 4); return true;
    // src/battle/swap_attacker_with_target.asm:15 JSL FIX_TARGET_NAME
    case 0xC27E40: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/swap_attacker_with_target.asm:16 END_C_FUNCTION
    case 0xC27E44: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/swap_attacker_with_target.asm:16 END_C_FUNCTION
    case 0xC27E45: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_all.asm (source_named).
bool execute_battle_target_all_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_all.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26D3F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26D41: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26D42: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26D43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26D43.
    case 0xC26D45: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_all.asm:6 END_STACK_VARS
    case 0xC26D46: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26D47.
    case 0xC26D49: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D4A: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26D4D.
    case 0xC26D4F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_all.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26D50: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_all.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26D53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/target_all.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26D53.
    case 0xC26D55: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/target_all.asm:9 LDA #0
    case 0xC26D56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_all.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26D55.
    case 0xC26D57: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/target_all.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26D56.
    case 0xC26D58: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_all.asm:10 STA @LOCAL00
    case 0xC26D59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all.asm:11 BRA @UNKNOWN2
    case 0xC26D5B: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/target_all.asm:13 LDA a:battler::consciousness,X
    case 0xC26D5D: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_all.asm:14 AND #$00FF
    case 0xC26D60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_all.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26D60.
    case 0xC26D62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_all.asm:15 BEQ @UNKNOWN1
    case 0xC26D63: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D65.
    case 0xC26D67: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D67.
    case 0xC26D69: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D69.
    case 0xC26D6B: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26D6A.
    case 0xC26D6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_all.asm:16 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26D6D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_all.asm:17 LDA @LOCAL00
    case 0xC26D6F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all.asm:18 ASL
    case 0xC26D71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all.asm:19 ASL
    case 0xC26D72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all.asm:20 CLC
    case 0xC26D73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all.asm:21 ADC @VIRTUAL06
    case 0xC26D74: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_all.asm:22 STA @VIRTUAL06
    case 0xC26D76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26D78.
    case 0xC26D7A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D7B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D7D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D7E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D80: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_all.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D82: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D84: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D89: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all.asm:24 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D90: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D94: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D96: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_all.asm:25 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D98: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D9A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D9C: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all.asm:26 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26DA1: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_all.asm:28 TXA
    case 0xC26DA4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_all.asm:29 CLC
    case 0xC26DA5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all.asm:30 ADC #.SIZEOF(battler)
    case 0xC26DA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_all.asm:30 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26DA6.
    case 0xC26DA8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_all.asm:31 TAX
    case 0xC26DA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_all.asm:32 LDA @LOCAL00
    case 0xC26DAA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all.asm:33 INC
    case 0xC26DAC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_all.asm:34 STA @LOCAL00
    case 0xC26DAD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all.asm:36 CMP #BATTLER_COUNT
    case 0xC26DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_all.asm:36 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26DAF.
    case 0xC26DB1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/target_all.asm:37 BCC @UNKNOWN0
    case 0xC26DB2: cpu.execute_instruction<0x90>(0x0000A9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_all.asm:38 END_C_FUNCTION
    case 0xC26DB4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_all.asm:38 END_C_FUNCTION
    case 0xC26DB5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_all_enemies.asm (source_named).
bool execute_battle_target_all_enemies_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_all_enemies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26BC1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26BC3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26BC4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26BC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26BC5.
    case 0xC26BC7: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26BC8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26BC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26BC9.
    case 0xC26BCB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26BCC: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26BCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26BCF.
    case 0xC26BD1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26BD2: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_all_enemies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26BD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/target_all_enemies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26BD5.
    case 0xC26BD7: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/target_all_enemies.asm:9 LDA #0
    case 0xC26BD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_all_enemies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26BD7.
    case 0xC26BD9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/target_all_enemies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26BD8.
    case 0xC26BDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_all_enemies.asm:10 STA @LOCAL00
    case 0xC26BDB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:11 BRA @UNKNOWN2
    case 0xC26BDD: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/battle/target_all_enemies.asm:13 LDA a:battler::consciousness,X
    case 0xC26BDF: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_all_enemies.asm:14 AND #$00FF
    case 0xC26BE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_all_enemies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26BE2.
    case 0xC26BE4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_all_enemies.asm:15 BEQ @UNKNOWN1
    case 0xC26BE5: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/battle/target_all_enemies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26BE7: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_all_enemies.asm:17 AND #$00FF
    case 0xC26BEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_all_enemies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26BEA.
    case 0xC26BEC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/target_all_enemies.asm:18 CMP #1
    case 0xC26BED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/target_all_enemies.asm:18 CMP #1
    // Overlapping static entry reached from 0xC26BED.
    case 0xC26BEF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/target_all_enemies.asm:19 BNE @UNKNOWN1
    case 0xC26BF0: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26BF2.
    case 0xC26BF4: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26BF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26BF4.
    case 0xC26BF6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26BF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26BF6.
    case 0xC26BF8: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26BF7.
    case 0xC26BF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26BFA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_all_enemies.asm:21 LDA @LOCAL00
    case 0xC26BFC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:22 ASL
    case 0xC26BFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:23 ASL
    case 0xC26BFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:24 CLC
    case 0xC26C00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:25 ADC @VIRTUAL06
    case 0xC26C01: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_all_enemies.asm:26 STA @VIRTUAL06
    case 0xC26C03: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26C05.
    case 0xC26C07: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C08: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C0A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C0B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C0D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C0F: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C11: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C16: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C19: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C1B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C1D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C21: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C23: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C25: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C29: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C2C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C2E: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_all_enemies.asm:32 TXA
    case 0xC26C31: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:33 CLC
    case 0xC26C32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:34 ADC #.SIZEOF(battler)
    case 0xC26C33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_all_enemies.asm:34 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26C33.
    case 0xC26C35: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_all_enemies.asm:35 TAX
    case 0xC26C36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:36 LDA @LOCAL00
    case 0xC26C37: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:37 INC
    case 0xC26C39: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_all_enemies.asm:38 STA @LOCAL00
    case 0xC26C3A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_all_enemies.asm:40 CMP #BATTLER_COUNT
    case 0xC26C3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_all_enemies.asm:40 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26C3C.
    case 0xC26C3E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/target_all_enemies.asm:41 BCC @UNKNOWN0
    case 0xC26C3F: cpu.execute_instruction<0x90>(0x00009E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_all_enemies.asm:42 END_C_FUNCTION
    case 0xC26C41: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_all_enemies.asm:42 END_C_FUNCTION
    case 0xC26C42: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_allies.asm (source_named).
bool execute_battle_target_allies_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_allies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26B3A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B3C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B3D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26B3E.
    case 0xC26B40: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B41: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26B42.
    case 0xC26B44: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B45: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26B48.
    case 0xC26B4A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B4B: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26B4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26B4E.
    case 0xC26B50: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/target_allies.asm:9 LDA #0
    case 0xC26B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_allies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26B50.
    case 0xC26B52: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/target_allies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26B51.
    case 0xC26B53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_allies.asm:10 STA @LOCAL00
    case 0xC26B54: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:11 BRA @UNKNOWN3
    case 0xC26B56: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/battle/target_allies.asm:13 LDA a:battler::consciousness,X
    case 0xC26B58: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_allies.asm:14 AND #$00FF
    case 0xC26B5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_allies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26B5B.
    case 0xC26B5D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_allies.asm:15 BEQ @UNKNOWN2
    case 0xC26B5E: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/battle/target_allies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26B60: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_allies.asm:17 AND #$00FF
    case 0xC26B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_allies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26B63.
    case 0xC26B65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_allies.asm:18 BEQ @UNKNOWN1
    case 0xC26B66: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/battle/target_allies.asm:19 LDA a:battler::npc_id,X
    case 0xC26B68: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/target_allies.asm:20 AND #$00FF
    case 0xC26B6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_allies.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC26B6B.
    case 0xC26B6D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_allies.asm:21 BEQ @UNKNOWN2
    case 0xC26B6E: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B70.
    case 0xC26B72: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B73: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B72.
    case 0xC26B74: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B74.
    case 0xC26B76: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B75.
    case 0xC26B77: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B78: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_allies.asm:24 LDA @LOCAL00
    case 0xC26B7A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:25 ASL
    case 0xC26B7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:26 ASL
    case 0xC26B7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:27 CLC
    case 0xC26B7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_allies.asm:28 ADC @VIRTUAL06
    case 0xC26B7F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_allies.asm:29 STA @VIRTUAL06
    case 0xC26B81: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26B83.
    case 0xC26B85: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B86: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B88: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B89: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B8B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B8D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B8F: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B94: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B97: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B99: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B9B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26BA1: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26BA3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BA5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BA7: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BAA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BAC: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_allies.asm:35 TXA
    case 0xC26BAF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:36 CLC
    case 0xC26BB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    case 0xC26BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26BB1.
    case 0xC26BB3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_allies.asm:38 TAX
    case 0xC26BB4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_allies.asm:39 LDA @LOCAL00
    case 0xC26BB5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:40 INC
    case 0xC26BB7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_allies.asm:41 STA @LOCAL00
    case 0xC26BB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    case 0xC26BBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26BBA.
    case 0xC26BBC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/target_allies.asm:44 BCC @UNKNOWN0
    case 0xC26BBD: cpu.execute_instruction<0x90>(0x000099, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26BBF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26BC0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_battler.asm (source_named).
bool execute_battle_target_battler_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_battler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26F1B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26F1D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26F1E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26F1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26F20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26F20.
    case 0xC26F22: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26F23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/target_battler.asm:7 END_STACK_VARS
    case 0xC26F24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/target_battler.asm:8 STA @LOCAL00
    case 0xC26F25: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_battler.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC26F22.
    case 0xC26F26: cpu.execute_instruction<0x0E>(0x00E6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F27.
    case 0xC26F29: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F29.
    case 0xC26F2B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F2B.
    case 0xC26F2D: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F2C.
    case 0xC26F2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_battler.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_battler.asm:10 LDA @LOCAL00
    case 0xC26F31: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_battler.asm:11 ASL
    case 0xC26F33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_battler.asm:12 ASL
    case 0xC26F34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_battler.asm:13 CLC
    case 0xC26F35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_battler.asm:14 ADC @VIRTUAL06
    case 0xC26F36: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_battler.asm:15 STA @VIRTUAL06
    case 0xC26F38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26F3A.
    case 0xC26F3C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F3D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F3F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F40: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F42: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_battler.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F44: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F46: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F4B: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_battler.asm:17 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F4E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F50: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F52: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F56: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F58: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_battler.asm:18 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26F5A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26F5C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26F5E: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26F61: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_battler.asm:19 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26F63: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_battler.asm:20 END_C_FUNCTION
    case 0xC26F66: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_battler.asm:20 END_C_FUNCTION
    case 0xC26F67: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/target_row.asm (source_named).
bool execute_battle_target_row_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_row.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26C43: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26C45: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26C46: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26C47: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26C48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC26C48.
    case 0xC26C4A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26C4B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/target_row.asm:8 END_STACK_VARS
    case 0xC26C4C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/target_row.asm:9 TAY
    case 0xC26C4D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/target_row.asm:10 STY @LOCAL01
    case 0xC26C4E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C50.
    case 0xC26C52: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C53: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C56.
    case 0xC26C58: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_row.asm:11 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C59: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_row.asm:12 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26C5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/target_row.asm:12 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26C5C.
    case 0xC26C5E: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/target_row.asm:13 LDA #0
    case 0xC26C5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/target_row.asm:13 LDA #0
    // Overlapping static entry reached from 0xC26C5E.
    case 0xC26C60: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/target_row.asm:13 LDA #0
    // Overlapping static entry reached from 0xC26C5F.
    case 0xC26C61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/target_row.asm:14 STA @LOCAL00
    case 0xC26C62: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_row.asm:15 JMP @UNKNOWN6
    case 0xC26C64: cpu.execute_instruction<0x4C>(0x006D33, 3); return true;
    // src/battle/target_row.asm:17 LDA a:battler::consciousness,X
    case 0xC26C67: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/target_row.asm:18 AND #$00FF
    case 0xC26C6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC26C6A.
    case 0xC26C6C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/target_row.asm:19 BEQL @UNKNOWN5
    case 0xC26C6D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/target_row.asm:19 BEQL @UNKNOWN5
    case 0xC26C6F: cpu.execute_instruction<0x4C>(0x006D28, 3); return true;
    // src/battle/target_row.asm:20 LDY @LOCAL01
    case 0xC26C72: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/target_row.asm:21 TYA
    case 0xC26C74: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/target_row.asm:22 BEQ @UNKNOWN2
    case 0xC26C75: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/target_row.asm:23 CMP #1
    case 0xC26C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/target_row.asm:23 CMP #1
    // Overlapping static entry reached from 0xC26C77.
    case 0xC26C79: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_row.asm:24 BEQ @UNKNOWN4
    case 0xC26C7A: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/target_row.asm:25 CMP #2
    case 0xC26C7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/target_row.asm:25 CMP #2
    // Overlapping static entry reached from 0xC26C7C.
    case 0xC26C7E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/target_row.asm:26 BEQ @UNKNOWN4
    case 0xC26C7F: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/battle/target_row.asm:27 JMP @UNKNOWN5
    case 0xC26C81: cpu.execute_instruction<0x4C>(0x006D28, 3); return true;
    // src/battle/target_row.asm:29 LDA a:battler::ally_or_enemy,X
    case 0xC26C84: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_row.asm:30 AND #$00FF
    case 0xC26C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC26C87.
    case 0xC26C89: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/target_row.asm:31 BNEL @UNKNOWN5
    case 0xC26C8A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/target_row.asm:31 BNEL @UNKNOWN5
    case 0xC26C8C: cpu.execute_instruction<0x4C>(0x006D28, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C8F.
    case 0xC26C91: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C91.
    case 0xC26C93: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C93.
    case 0xC26C95: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C94.
    case 0xC26C96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_row.asm:32 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C97: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_row.asm:33 LDA @LOCAL00
    case 0xC26C99: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_row.asm:34 ASL
    case 0xC26C9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:35 ASL
    case 0xC26C9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:36 CLC
    case 0xC26C9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_row.asm:37 ADC @VIRTUAL06
    case 0xC26C9E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_row.asm:38 STA @VIRTUAL06
    case 0xC26CA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26CA2.
    case 0xC26CA4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CA5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CA7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CA8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CAA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_row.asm:39 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CAC: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CAE: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CB1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CB3: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:40 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CB8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CBA: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CBC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CBE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CC0: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_row.asm:41 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CC2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CC4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CC6: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CC9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:42 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CCB: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_row.asm:43 BRA @UNKNOWN5
    case 0xC26CCE: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/battle/target_row.asm:45 LDA a:battler::ally_or_enemy,X
    case 0xC26CD0: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/target_row.asm:46 AND #$00FF
    case 0xC26CD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC26CD3.
    case 0xC26CD5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/target_row.asm:47 CMP #1
    case 0xC26CD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/target_row.asm:47 CMP #1
    // Overlapping static entry reached from 0xC26CD6.
    case 0xC26CD8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/target_row.asm:48 BNE @UNKNOWN5
    case 0xC26CD9: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/battle/target_row.asm:49 TYA
    case 0xC26CDB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/target_row.asm:50 DEC
    case 0xC26CDC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/target_row.asm:51 STA @VIRTUAL02
    case 0xC26CDD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/target_row.asm:52 LDA a:battler::row,X
    case 0xC26CDF: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/target_row.asm:53 AND #$00FF
    case 0xC26CE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/target_row.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC26CE2.
    case 0xC26CE4: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/target_row.asm:54 CMP @VIRTUAL02
    case 0xC26CE5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/target_row.asm:55 BNE @UNKNOWN5
    case 0xC26CE7: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CE9.
    case 0xC26CEB: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CEC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CEB.
    case 0xC26CED: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CED.
    case 0xC26CEF: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CEE.
    case 0xC26CF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_row.asm:56 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CF1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/target_row.asm:57 LDA @LOCAL00
    case 0xC26CF3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_row.asm:58 ASL
    case 0xC26CF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:59 ASL
    case 0xC26CF6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/target_row.asm:60 CLC
    case 0xC26CF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_row.asm:61 ADC @VIRTUAL06
    case 0xC26CF8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/target_row.asm:62 STA @VIRTUAL06
    case 0xC26CFA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26CFC.
    case 0xC26CFE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CFF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D01: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D02: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D04: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_row.asm:63 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26D06: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D08: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D0B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D0D: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:64 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26D10: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D12: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D14: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D16: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D18: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D1A: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_row.asm:65 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26D1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D1E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D20: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D23: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_row.asm:66 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26D25: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/target_row.asm:68 TXA
    case 0xC26D28: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/target_row.asm:69 CLC
    case 0xC26D29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/target_row.asm:70 ADC #.SIZEOF(battler)
    case 0xC26D2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/target_row.asm:70 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26D2A.
    case 0xC26D2C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/target_row.asm:71 TAX
    case 0xC26D2D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/target_row.asm:72 LDA @LOCAL00
    case 0xC26D2E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/target_row.asm:73 INC
    case 0xC26D30: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/target_row.asm:74 STA @LOCAL00
    case 0xC26D31: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/target_row.asm:76 CMP #BATTLER_COUNT
    case 0xC26D33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/target_row.asm:76 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26D33.
    case 0xC26D35: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/target_row.asm:77 BCCL @UNKNOWN0
    case 0xC26D36: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/target_row.asm:77 BCCL @UNKNOWN0
    case 0xC26D38: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/target_row.asm:77 BCCL @UNKNOWN0
    case 0xC26D3A: cpu.execute_instruction<0x4C>(0x006C67, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_row.asm:78 END_C_FUNCTION
    case 0xC26D3D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_row.asm:78 END_C_FUNCTION
    case 0xC26D3E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/weaken_shield.asm (source_named).
bool execute_battle_weaken_shield_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/weaken_shield.asm:3 BEGIN_C_FUNCTION
    case 0xC29477: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC29479: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC2947A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC2947B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2947B.
    case 0xC2947D: cpu.execute_instruction<0xFF>(0x699C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC2947E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC2947F: cpu.execute_instruction<0x9C>(0x00AC69, 3); return true;
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    // Overlapping static entry reached from 0xC2947D.
    case 0xC29481: cpu.execute_instruction<0xAC>(0x006BAD, 3); return true;
    // src/battle/weaken_shield.asm:8 LDA DAMAGE_IS_REFLECTED
    case 0xC29482: cpu.execute_instruction<0xAD>(0x00AC6B, 3); return true;
    // src/battle/weaken_shield.asm:8 LDA DAMAGE_IS_REFLECTED
    // Overlapping static entry reached from 0xC29481.
    case 0xC29484: cpu.execute_instruction<0xAC>(0x0036F0, 3); return true;
    // src/battle/weaken_shield.asm:9 BEQ @UNKNOWN1
    case 0xC29485: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/weaken_shield.asm:10 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC29487: cpu.execute_instruction<0x20>(0x007E21, 3); return true;
    // src/battle/weaken_shield.asm:11 LDA CURRENT_TARGET
    case 0xC2948A: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/weaken_shield.asm:12 CLC
    case 0xC2948D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    case 0xC2948E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC2948E.
    case 0xC29490: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/weaken_shield.asm:14 TAX
    case 0xC29491: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC29492: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/weaken_shield.asm:16 LDA __BSS_START__,X
    case 0xC29494: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/weaken_shield.asm:17 DEC
    case 0xC29497: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/weaken_shield.asm:18 STA __BSS_START__,X
    case 0xC29498: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/weaken_shield.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC2949B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/weaken_shield.asm:20 AND #$00FF
    case 0xC2949D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/weaken_shield.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2949D.
    case 0xC2949F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/weaken_shield.asm:21 BNE @UNKNOWN0
    case 0xC294A0: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/weaken_shield.asm:22 LDX CURRENT_TARGET
    case 0xC294A2: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/weaken_shield.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC294A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/weaken_shield.asm:24 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC294A7: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/weaken_shield.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC294AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00356E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294AC.
    case 0xC294AE: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294AF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294AE.
    case 0xC294B0: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294B1.
    case 0xC294B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B6: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/weaken_shield.asm:28 STZ DAMAGE_IS_REFLECTED
    case 0xC294BA: cpu.execute_instruction<0x9C>(0x00AC6B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC294BD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC294BE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
