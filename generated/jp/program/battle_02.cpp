// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/battle/actions/psi_rockin_common.asm (source_named).
bool execute_battle_actions_psi_rockin_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_common.asm:3 BEGIN_C_FUNCTION
    case 0xC294BF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC294C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC294C2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC294C3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC294C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC294C4.
    case 0xC294C6: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC294C7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC294C8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:10 TAX
    case 0xC294C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:11 STX @LOCAL02
    case 0xC294CA: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:12 JSR PSI_SHIELD_NULLIFY
    case 0xC294CC: cpu.execute_instruction<0x20>(0x0093C6, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:13 CMP #0
    case 0xC294CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:13 CMP #0
    // Overlapping static entry reached from 0xC294CF.
    case 0xC294D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:14 BNE @RETURN
    case 0xC294D2: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:15 LDX @LOCAL02
    case 0xC294D4: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:16 TXA
    case 0xC294D6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:17 JSR FIFTY_PERCENT_VARIANCE
    case 0xC294D7: cpu.execute_instruction<0x20>(0x006983, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:18 STA @LOCAL01
    case 0xC294DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:19 JSR DETERMINE_DODGE
    case 0xC294DC: cpu.execute_instruction<0x20>(0x008454, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:20 TAX
    case 0xC294DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:21 BEQ @UNKNOWN0
    case 0xC294E0: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC294E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC294E2.
    case 0xC294E4: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC294E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC294E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC294E7.
    case 0xC294E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC294EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC294EC: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_rockin_common.asm:23 BRA @UNKNOWN1
    case 0xC294F0: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:25 LDX #$00FF
    case 0xC294F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:25 LDX #$00FF
    // Overlapping static entry reached from 0xC294F2.
    case 0xC294F4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:26 LDA @LOCAL01
    case 0xC294F5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:27 JSR CALC_RESIST_DAMAGE
    case 0xC294F7: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:29 JSR WEAKEN_SHIELD
    case 0xC294FA: cpu.execute_instruction<0x20>(0x009477, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_rockin_common.asm:31 END_C_FUNCTION
    case 0xC294FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_rockin_common.asm:31 END_C_FUNCTION
    case 0xC294FE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_rockin_gamma.asm (source_named).
bool execute_battle_actions_psi_rockin_gamma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29511: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_rockin_gamma.asm:5 LDA #ROCKIN_GAMMA_DAMAGE
    case 0xC29513: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000140, 3); return true;
    // src/battle/actions/psi_rockin_gamma.asm:5 LDA #ROCKIN_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC29513.
    case 0xC29515: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/psi_rockin_gamma.asm:6 JSR PSI_ROCKIN_COMMON
    case 0xC29516: cpu.execute_instruction<0x20>(0x0094BF, 3); return true;
    // src/battle/actions/psi_rockin_gamma.asm:6 JSR PSI_ROCKIN_COMMON
    // Overlapping static entry reached from 0xC29515.
    case 0xC29517: cpu.execute_instruction<0xBF>(0xC26B94, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_rockin_gamma.asm:7 END_C_FUNCTION
    case 0xC29519: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_rockin_omega.asm (source_named).
bool execute_battle_actions_psi_rockin_omega_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2951A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC29517.
    case 0xC2951B: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    case 0xC2951C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC2951B.
    case 0xC2951D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC2951C.
    case 0xC2951E: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/battle/actions/psi_rockin_omega.asm:6 JSR PSI_ROCKIN_COMMON
    case 0xC2951F: cpu.execute_instruction<0x20>(0x0094BF, 3); return true;
    // src/battle/actions/psi_rockin_omega.asm:6 JSR PSI_ROCKIN_COMMON
    // Overlapping static entry reached from 0xC2951D.
    case 0xC29521: cpu.execute_instruction<0x94>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:7 END_C_FUNCTION
    case 0xC29522: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_alpha.asm (source_named).
bool execute_battle_actions_psi_shield_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D67: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D69: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D6A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29D6B.
    case 0xC29D6D: cpu.execute_instruction<0xFF>(0x02A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D6E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/psi_shield_alpha.asm:7 LDX #STATUS_6::PSI_SHIELD
    case 0xC29D6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:7 LDX #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC29D6F.
    case 0xC29D71: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/psi_shield_alpha.asm:8 LDA CURRENT_TARGET
    case 0xC29D72: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:9 JSR SHIELDS_COMMON
    case 0xC29D75: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:10 CMP #0
    case 0xC29D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29D78.
    case 0xC29D7A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_shield_alpha.asm:11 BEQ @UNKNOWN0
    case 0xC29D7B: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29D7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x003510, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29D7D.
    case 0xC29D7F: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29D80: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29D7F.
    case 0xC29D81: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29D82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29D82.
    case 0xC29D84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29D85: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29D87: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_shield_alpha.asm:13 BRA @UNKNOWN1
    case 0xC29D8B: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29D8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x0034F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29D8D.
    case 0xC29D8F: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29D90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29D8F.
    case 0xC29D91: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29D92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29D92.
    case 0xC29D94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29D95: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29D97: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D9B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D9C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_alpha_redirect.asm (source_named).
bool execute_battle_actions_psi_shield_alpha_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_alpha_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_shield_alpha_redirect.asm:5 JSL BTLACT_PSI_SHIELD_A
    case 0xC29D9F: cpu.execute_instruction<0x22>(0xC29D67, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_alpha_redirect.asm:6 END_C_FUNCTION
    case 0xC29DA3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_beta.asm (source_named).
bool execute_battle_actions_psi_shield_beta_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DA4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DA6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DA7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29DA8.
    case 0xC29DAA: cpu.execute_instruction<0xFF>(0x01A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DAB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/psi_shield_beta.asm:7 LDX #STATUS_6::PSI_SHIELD_POWER
    case 0xC29DAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:7 LDX #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC29DAC.
    case 0xC29DAE: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/psi_shield_beta.asm:8 LDA CURRENT_TARGET
    case 0xC29DAF: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:9 JSR SHIELDS_COMMON
    case 0xC29DB2: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:10 CMP #0
    case 0xC29DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29DB5.
    case 0xC29DB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_shield_beta.asm:11 BEQ @UNKNOWN0
    case 0xC29DB8: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29DBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00354C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    // Overlapping static entry reached from 0xC29DBA.
    case 0xC29DBC: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29DBD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    // Overlapping static entry reached from 0xC29DBC.
    case 0xC29DBE: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29DBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    // Overlapping static entry reached from 0xC29DBF.
    case 0xC29DC1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29DC2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29DC4: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_shield_beta.asm:13 BRA @UNKNOWN1
    case 0xC29DC8: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00352B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    // Overlapping static entry reached from 0xC29DCA.
    case 0xC29DCC: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29DCD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    // Overlapping static entry reached from 0xC29DCC.
    case 0xC29DCE: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    // Overlapping static entry reached from 0xC29DCF.
    case 0xC29DD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29DD2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29DD4: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_shield_beta.asm:17 END_C_FUNCTION
    case 0xC29DD8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_beta.asm:17 END_C_FUNCTION
    case 0xC29DD9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_beta_redirect.asm (source_named).
bool execute_battle_actions_psi_shield_beta_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_beta_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DDA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_shield_beta_redirect.asm:5 JSL BTLACT_PSI_SHIELD_B
    case 0xC29DDC: cpu.execute_instruction<0x22>(0xC29DA4, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_beta_redirect.asm:6 END_C_FUNCTION
    case 0xC29DE0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_starstorm_alpha.asm (source_named).
bool execute_battle_actions_psi_starstorm_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29A4F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:5 LDA #STARSTORM_ALPHA_DAMAGE
    case 0xC29A51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x000168, 3); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:5 LDA #STARSTORM_ALPHA_DAMAGE
    // Overlapping static entry reached from 0xC29A51.
    case 0xC29A53: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:6 JSR PSI_STARSTORM_COMMON
    case 0xC29A54: cpu.execute_instruction<0x20>(0x009A29, 3); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:6 JSR PSI_STARSTORM_COMMON
    // Overlapping static entry reached from 0xC29A53.
    case 0xC29A55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00009A, 2); else cpu.execute_instruction<0x29>(0x006B9A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_starstorm_alpha.asm:7 END_C_FUNCTION
    case 0xC29A57: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_starstorm_common.asm (source_named).
bool execute_battle_actions_psi_starstorm_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29A29: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A2B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A2C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A2D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC29A2E.
    case 0xC29A30: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A31: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A32: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/psi_starstorm_common.asm:8 TAX
    case 0xC29A33: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_starstorm_common.asm:9 STX @LOCAL00
    case 0xC29A34: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:10 JSR PSI_SHIELD_NULLIFY
    case 0xC29A36: cpu.execute_instruction<0x20>(0x0093C6, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:11 CMP #0
    case 0xC29A39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:11 CMP #0
    // Overlapping static entry reached from 0xC29A39.
    case 0xC29A3B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:12 BNE @UNKNOWN0
    case 0xC29A3C: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:13 LDX @LOCAL00
    case 0xC29A3E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:14 TXA
    case 0xC29A40: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_starstorm_common.asm:15 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC29A41: cpu.execute_instruction<0x20>(0x006A3C, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:16 LDX #$00FF
    case 0xC29A44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:16 LDX #$00FF
    // Overlapping static entry reached from 0xC29A44.
    case 0xC29A46: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:17 JSR CALC_RESIST_DAMAGE
    case 0xC29A47: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:18 JSR WEAKEN_SHIELD
    case 0xC29A4A: cpu.execute_instruction<0x20>(0x009477, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:20 END_C_FUNCTION
    case 0xC29A4D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:20 END_C_FUNCTION
    case 0xC29A4E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_starstorm_omega.asm (source_named).
bool execute_battle_actions_psi_starstorm_omega_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29A58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_starstorm_omega.asm:5 LDA #STARSTORM_OMEGA_DAMAGE
    case 0xC29A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0002D0, 3); return true;
    // src/battle/actions/psi_starstorm_omega.asm:5 LDA #STARSTORM_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC29A5A.
    case 0xC29A5C: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/battle/actions/psi_starstorm_omega.asm:6 JSR PSI_STARSTORM_COMMON
    case 0xC29A5D: cpu.execute_instruction<0x20>(0x009A29, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_starstorm_omega.asm:7 END_C_FUNCTION
    case 0xC29A60: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_alpha.asm (source_named).
bool execute_battle_actions_psi_thunder_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2981A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_alpha.asm:5 LDX #THUNDER_ALPHA_HITS
    case 0xC2981C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_alpha.asm:5 LDX #THUNDER_ALPHA_HITS
    // Overlapping static entry reached from 0xC2981C.
    case 0xC2981E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_alpha.asm:6 LDA #THUNDER_ALPHA_DAMAGE
    case 0xC2981F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/actions/psi_thunder_alpha.asm:6 LDA #THUNDER_ALPHA_DAMAGE
    // Overlapping static entry reached from 0xC2981F.
    case 0xC29821: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_alpha.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC29822: cpu.execute_instruction<0x20>(0x009614, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_alpha.asm:8 END_C_FUNCTION
    case 0xC29825: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_beta.asm (source_named).
bool execute_battle_actions_psi_thunder_beta_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29826: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_beta.asm:5 LDX #THUNDER_BETA_HITS
    case 0xC29828: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/psi_thunder_beta.asm:5 LDX #THUNDER_BETA_HITS
    // Overlapping static entry reached from 0xC29828.
    case 0xC2982A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_beta.asm:6 LDA #THUNDER_BETA_DAMAGE
    case 0xC2982B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/actions/psi_thunder_beta.asm:6 LDA #THUNDER_BETA_DAMAGE
    // Overlapping static entry reached from 0xC2982B.
    case 0xC2982D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_beta.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC2982E: cpu.execute_instruction<0x20>(0x009614, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_beta.asm:8 END_C_FUNCTION
    case 0xC29831: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_common.asm (source_named).
bool execute_battle_actions_psi_thunder_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29614: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29616: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29617: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29618: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29619: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC29619.
    case 0xC2961B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2961C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2961D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    case 0xC2961E: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC2961B.
    case 0xC2961F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:14 STA @VIRTUAL04
    case 0xC29620: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    case 0xC29622: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    // Overlapping static entry reached from 0xC29622.
    case 0xC29624: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:16 STY @LOCAL03
    case 0xC29625: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:17 TYX
    case 0xC29627: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:18 STX @LOCAL02
    case 0xC29628: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:19 BRA @UNKNOWN2
    case 0xC2962A: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:21 TXA
    case 0xC2962C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:22 JSL IS_CHAR_TARGETTED
    case 0xC2962D: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    case 0xC29631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    // Overlapping static entry reached from 0xC29631.
    case 0xC29633: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:24 BEQ @UNKNOWN1
    case 0xC29634: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:25 LDY @LOCAL03
    case 0xC29636: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:26 INY
    case 0xC29638: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:27 STY @LOCAL03
    case 0xC29639: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:29 LDX @LOCAL02
    case 0xC2963B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:30 INX
    case 0xC2963D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:31 STX @LOCAL02
    case 0xC2963E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    case 0xC29640: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29640.
    case 0xC29642: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:34 BCC @UNKNOWN0
    case 0xC29643: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:35 LDY @LOCAL03
    case 0xC29645: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:36 TYA
    case 0xC29647: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC29648: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC29649: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2964D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:38 STA @VIRTUAL02
    case 0xC2964E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    case 0xC29650: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    // Overlapping static entry reached from 0xC29650.
    case 0xC29652: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    case 0xC29653: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC29652.
    case 0xC29654: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    case 0xC29655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC29654.
    case 0xC29656: cpu.execute_instruction<0xFF>(0x028500, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC29655.
    case 0xC29657: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:42 STA @VIRTUAL02
    case 0xC29658: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2965A: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2965D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2965F: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29662: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29664: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29666: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29668: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2966A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    case 0xC2966C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    // Overlapping static entry reached from 0xC2966C.
    case 0xC2966E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:47 STY @LOCAL03
    case 0xC2966F: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:48 JMP @UNKNOWN20
    case 0xC29671: cpu.execute_instruction<0x4C>(0x009803, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC29674: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC29676: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC29678: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2967A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2967C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2967E: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC29681: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC29683: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:52 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC29686: cpu.execute_instruction<0x22>(0xC24023, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    case 0xC2968A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    // Overlapping static entry reached from 0xC2968A.
    case 0xC2968C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:54 STA @VIRTUAL06
    case 0xC2968D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    case 0xC2968F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    // Overlapping static entry reached from 0xC2968F.
    case 0xC29691: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:56 STA @VIRTUAL06+2
    case 0xC29692: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC29694: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC29697: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC29699: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC2969C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:58 CMP @VIRTUAL06+2
    case 0xC2969E: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:59 BNE @UNKNOWN5
    case 0xC296A0: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:60 LDA @VIRTUAL0A
    case 0xC296A2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:61 CMP @VIRTUAL06
    case 0xC296A4: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296A8: cpu.execute_instruction<0x4C>(0x00980C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296AB: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296AE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296B0: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:65 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296B3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296B5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296B7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296B9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:66 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC296BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:71 JSL RANDOM_TARGETTING
    case 0xC296BD: cpu.execute_instruction<0x22>(0xC26E37, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC296C7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296C9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296CD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC296CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D3: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D8: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    case 0xC296DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    // Overlapping static entry reached from 0xC296DB.
    case 0xC296DD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:76 STX @LOCAL02
    case 0xC296DE: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:77 BRA @UNKNOWN8
    case 0xC296E0: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:79 TXA
    case 0xC296E2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:80 JSL IS_CHAR_TARGETTED
    case 0xC296E3: cpu.execute_instruction<0x22>(0xC26F68, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    case 0xC296E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    // Overlapping static entry reached from 0xC296E7.
    case 0xC296E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:82 BNE @UNKNOWN9
    case 0xC296EA: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:83 LDX @LOCAL02
    case 0xC296EC: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:84 INX
    case 0xC296EE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:85 STX @LOCAL02
    case 0xC296EF: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    case 0xC296F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC296F1.
    case 0xC296F3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:88 BCC @UNKNOWN7
    case 0xC296F4: cpu.execute_instruction<0x90>(0x0000EC, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:90 LDX @LOCAL02
    case 0xC296F6: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:91 TXA
    case 0xC296F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    case 0xC296F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC296F9.
    case 0xC296FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:93 JSL MULT168
    case 0xC296FC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:94 CLC
    case 0xC29700: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC29701: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC29701.
    case 0xC29703: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:96 STA CURRENT_TARGET
    case 0xC29704: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:96 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29703.
    case 0xC29705: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:97 JSL FIX_TARGET_NAME
    case 0xC29707: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:98 LDA @VIRTUAL02
    case 0xC2970B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC2970D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:100 JSR SUCCESS_255
    case 0xC2970F: cpu.execute_instruction<0x20>(0x006AF7, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    case 0xC29712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    // Overlapping static entry reached from 0xC29712.
    case 0xC29714: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC29715: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC29717: cpu.execute_instruction<0x4C>(0x0097CA, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:105 LDA @VIRTUAL04
    case 0xC2971A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    case 0xC2971C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000078, 2); else cpu.execute_instruction<0xC9>(0x000078, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    // Overlapping static entry reached from 0xC2971C.
    case 0xC2971E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:107 BNE @UNKNOWN11
    case 0xC2971F: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29721: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0003E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29721.
    case 0xC29723: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29724: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29723.
    case 0xC29725: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29726: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29726.
    case 0xC29728: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29729: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC2972B: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:109 BRA @UNKNOWN13
    case 0xC2972F: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29731: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0003F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29731.
    case 0xC29733: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29734: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29733.
    case 0xC29735: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29736.
    case 0xC29738: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29739: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC2973B: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:112 BRA @UNKNOWN13
    case 0xC2973F: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:114 JSL WINDOW_TICK
    case 0xC29741: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:116 JSL UNKNOWN_C2EACF
    case 0xC29745: cpu.execute_instruction<0x22>(0xC2E9E8, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    case 0xC29749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    // Overlapping static entry reached from 0xC29749.
    case 0xC2974B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:118 BNE @UNKNOWN12
    case 0xC2974C: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:119 LDX CURRENT_TARGET
    case 0xC2974E: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC29751: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:121 STZ a:battler::use_alt_spritemap,X
    case 0xC29753: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:122 LDX CURRENT_TARGET
    case 0xC29756: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC29759: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:124 LDA a:battler::ally_or_enemy,X
    case 0xC2975B: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    case 0xC2975E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC2975E.
    case 0xC29760: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:126 BNE @UNKNOWN14
    case 0xC29761: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    case 0xC29763: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    // Overlapping static entry reached from 0xC29763.
    case 0xC29765: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:128 STX @LOCAL02
    case 0xC29766: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:129 LDX CURRENT_TARGET
    case 0xC29768: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:130 LDA a:battler::row,X
    case 0xC2976B: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    case 0xC2976E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC2976E.
    case 0xC29770: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:132 INC
    case 0xC29771: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:133 LDX @LOCAL02
    case 0xC29772: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:134 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC29774: cpu.execute_instruction<0x22>(0xC43479, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    case 0xC29778: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    // Overlapping static entry reached from 0xC29778.
    case 0xC2977A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:136 BEQ @UNKNOWN14
    case 0xC2977B: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC2977D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x003628, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC2977D.
    case 0xC2977F: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29780: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC2977F.
    case 0xC29781: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC29782.
    case 0xC29784: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29785: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC29787: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    case 0xC2978B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    // Overlapping static entry reached from 0xC2978B.
    case 0xC2978D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:139 STA DAMAGE_IS_REFLECTED
    case 0xC2978E: cpu.execute_instruction<0x8D>(0x00AC6B, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:140 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC29791: cpu.execute_instruction<0x20>(0x007E21, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:142 LDX CURRENT_TARGET
    case 0xC29794: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:143 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC29797: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    case 0xC2979A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC2979A.
    case 0xC2979C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:145 TAX
    case 0xC2979D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    case 0xC2979E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    // Overlapping static entry reached from 0xC2979E.
    case 0xC297A0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:147 BEQ @UNKNOWN15
    case 0xC297A1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    case 0xC297A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    // Overlapping static entry reached from 0xC297A3.
    case 0xC297A5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:149 BNE @UNKNOWN16
    case 0xC297A6: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC297A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:152 LDA #1
    case 0xC297AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    case 0xC297AC: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC297AA.
    case 0xC297AD: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:154 STA a:battler::shield_hp,X
    case 0xC297AF: cpu.execute_instruction<0x9D>(0x000025, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:156 JSR PSI_SHIELD_NULLIFY
    case 0xC297B2: cpu.execute_instruction<0x20>(0x0093C6, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    case 0xC297B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    // Overlapping static entry reached from 0xC297B5.
    case 0xC297B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:159 BNE @UNKNOWN17
    case 0xC297B8: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:160 LDA @VIRTUAL04
    case 0xC297BA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:161 JSR FIFTY_PERCENT_VARIANCE
    case 0xC297BC: cpu.execute_instruction<0x20>(0x006983, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    case 0xC297BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    // Overlapping static entry reached from 0xC297BF.
    case 0xC297C1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:163 JSR CALC_RESIST_DAMAGE
    case 0xC297C2: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:165 JSR WEAKEN_SHIELD
    case 0xC297C5: cpu.execute_instruction<0x20>(0x009477, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:166 BRA @UNKNOWN19
    case 0xC297C8: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000404, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC297CA.
    case 0xC297CC: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC297CC.
    case 0xC297CE: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC297CF.
    case 0xC297D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC297D4: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00392E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC297D8.
    case 0xC297DA: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC297DD.
    case 0xC297DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC297E2: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    case 0xC297E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    // Overlapping static entry reached from 0xC297E6.
    case 0xC297E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:173 JSL COUNT_CHARS
    case 0xC297E9: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    case 0xC297ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    // Overlapping static entry reached from 0xC297ED.
    case 0xC297EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:175 BEQ @UNKNOWN21
    case 0xC297F0: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    case 0xC297F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    // Overlapping static entry reached from 0xC297F2.
    case 0xC297F4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:177 JSL COUNT_CHARS
    case 0xC297F5: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    case 0xC297F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    // Overlapping static entry reached from 0xC297F9.
    case 0xC297FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:179 BEQ @UNKNOWN21
    case 0xC297FC: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:180 LDY @LOCAL03
    case 0xC297FE: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:181 INY
    case 0xC29800: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:182 STY @LOCAL03
    case 0xC29801: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:184 CPY @LOCAL04
    case 0xC29803: cpu.execute_instruction<0xC4>(0x00001A, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29805: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29807: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29809: cpu.execute_instruction<0x4C>(0x009674, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2980C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC2980C.
    case 0xC2980E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2980F: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29812.
    case 0xC29814: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29815: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC29818: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC29819: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_gamma.asm (source_named).
bool execute_battle_actions_psi_thunder_gamma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29832: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_gamma.asm:5 LDX #THUNDER_GAMMA_HITS
    case 0xC29834: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/actions/psi_thunder_gamma.asm:5 LDX #THUNDER_GAMMA_HITS
    // Overlapping static entry reached from 0xC29834.
    case 0xC29836: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_gamma.asm:6 LDA #THUNDER_GAMMA_DAMAGE
    case 0xC29837: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/psi_thunder_gamma.asm:6 LDA #THUNDER_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC29837.
    case 0xC29839: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_gamma.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC2983A: cpu.execute_instruction<0x20>(0x009614, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_gamma.asm:8 END_C_FUNCTION
    case 0xC2983D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_omega.asm (source_named).
bool execute_battle_actions_psi_thunder_omega_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2983E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_omega.asm:5 LDX #THUNDER_OMEGA_HITS
    case 0xC29840: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/actions/psi_thunder_omega.asm:5 LDX #THUNDER_OMEGA_HITS
    // Overlapping static entry reached from 0xC29840.
    case 0xC29842: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_omega.asm:6 LDA #THUNDER_OMEGA_DAMAGE
    case 0xC29843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/psi_thunder_omega.asm:6 LDA #THUNDER_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC29843.
    case 0xC29845: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_omega.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC29846: cpu.execute_instruction<0x20>(0x009614, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_omega.asm:8 END_C_FUNCTION
    case 0xC29849: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rainbow_of_colours.asm (source_named).
bool execute_battle_actions_rainbow_of_colours_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C0F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C0FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C0FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C0FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C0FD.
    case 0xC2C0FF: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C100: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:8 LDX CURRENT_ATTACKER
    case 0xC2C101: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:8 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2C0FF.
    case 0xC2C103: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    case 0xC2C104: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    case 0xC2C107: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2C107.
    case 0xC2C109: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:11 STA @VIRTUAL02
    case 0xC2C10A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:12 LDX CURRENT_ATTACKER
    case 0xC2C10C: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:13 LDA a:battler::sprite_y,X
    case 0xC2C10F: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:14 AND #$00FF
    case 0xC2C112: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2C112.
    case 0xC2C114: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:15 TAY
    case 0xC2C115: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:16 STY @LOCAL01
    case 0xC2C116: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:17 LDX CURRENT_ATTACKER
    case 0xC2C118: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:18 STX @LOCAL00
    case 0xC2C11B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:19 LDX CURRENT_ATTACKER
    case 0xC2C11D: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2C120: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:21 AND #$00FF
    case 0xC2C123: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2C123.
    case 0xC2C125: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:22 LDX @LOCAL00
    case 0xC2C126: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:23 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C128: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/actions/rainbow_of_colours.asm:24 LDA @VIRTUAL02
    case 0xC2C12C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C12E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:26 LDX CURRENT_ATTACKER
    case 0xC2C130: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:27 STA a:battler::sprite_x,X
    case 0xC2C133: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:28 LDY @LOCAL01
    case 0xC2C136: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2C138: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:30 TYA
    case 0xC2C13A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C13B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:32 LDX CURRENT_ATTACKER
    case 0xC2C13D: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:33 STA a:battler::sprite_y,X
    case 0xC2C140: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:34 LDX CURRENT_ATTACKER
    case 0xC2C143: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC2C146: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:36 LDA __BSS_START__,X
    case 0xC2C148: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:37 JSR UNKNOWN_C2F09F
    case 0xC2C14B: cpu.execute_instruction<0x20>(0x00EFBC, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C14E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:39 LDX CURRENT_ATTACKER
    case 0xC2C150: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:40 STA a:battler::vram_sprite_index,X
    case 0xC2C153: cpu.execute_instruction<0x9D>(0x000043, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:41 LDA #1
    case 0xC2C156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:42 LDX CURRENT_ATTACKER
    case 0xC2C158: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:42 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2C156.
    case 0xC2C159: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:43 STA a:battler::has_taken_turn,X
    case 0xC2C15B: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC2C15E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:45 LDA #1
    case 0xC2C160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:45 LDA #1
    // Overlapping static entry reached from 0xC2C160.
    case 0xC2C162: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:46 STA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2C163: cpu.execute_instruction<0x8D>(0x00AC67, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:47 END_C_FUNCTION
    case 0xC2C166: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:47 END_C_FUNCTION
    case 0xC2C167: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/random_stat_up_1d4.asm (source_named).
bool execute_battle_actions_random_stat_up_1d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A228: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A22A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A22B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A22C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A22C.
    case 0xC2A22E: cpu.execute_instruction<0xFF>(0x07A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A22F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:9 LDA #7
    case 0xC2A230: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:9 LDA #7
    // Overlapping static entry reached from 0xC2A230.
    case 0xC2A232: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A233: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:11 CMP #0
    case 0xC2A236: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:11 CMP #0
    // Overlapping static entry reached from 0xC2A236.
    case 0xC2A238: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:12 BEQ @UNKNOWN5
    case 0xC2A239: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:13 CMP #1
    case 0xC2A23B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:13 CMP #1
    // Overlapping static entry reached from 0xC2A23B.
    case 0xC2A23D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:14 BEQ @UNKNOWN7
    case 0xC2A23E: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:15 CMP #2
    case 0xC2A240: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:15 CMP #2
    // Overlapping static entry reached from 0xC2A240.
    case 0xC2A242: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:16 BEQL @UNKNOWN9
    case 0xC2A243: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:16 BEQL @UNKNOWN9
    case 0xC2A245: cpu.execute_instruction<0x4C>(0x00A2EB, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:17 CMP #3
    case 0xC2A248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:17 CMP #3
    // Overlapping static entry reached from 0xC2A248.
    case 0xC2A24A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:18 BEQL @UNKNOWN10
    case 0xC2A24B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:18 BEQL @UNKNOWN10
    case 0xC2A24D: cpu.execute_instruction<0x4C>(0x00A2F1, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:19 CMP #4
    case 0xC2A250: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:19 CMP #4
    // Overlapping static entry reached from 0xC2A250.
    case 0xC2A252: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:20 BEQL @UNKNOWN11
    case 0xC2A253: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:20 BEQL @UNKNOWN11
    case 0xC2A255: cpu.execute_instruction<0x4C>(0x00A2F7, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:21 CMP #5
    case 0xC2A258: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:21 CMP #5
    // Overlapping static entry reached from 0xC2A258.
    case 0xC2A25A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:22 BEQL @UNKNOWN12
    case 0xC2A25B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:22 BEQL @UNKNOWN12
    case 0xC2A25D: cpu.execute_instruction<0x4C>(0x00A2FD, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:23 CMP #6
    case 0xC2A260: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:23 CMP #6
    // Overlapping static entry reached from 0xC2A260.
    case 0xC2A262: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:24 BEQL @UNKNOWN13
    case 0xC2A263: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:24 BEQL @UNKNOWN13
    case 0xC2A265: cpu.execute_instruction<0x4C>(0x00A303, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:25 JMP @UNKNOWN14
    case 0xC2A268: cpu.execute_instruction<0x4C>(0x00A307, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:27 LDA #4
    case 0xC2A26B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:27 LDA #4
    // Overlapping static entry reached from 0xC2A26B.
    case 0xC2A26D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:28 JSR RAND_LIMIT
    case 0xC2A26E: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:29 INC
    case 0xC2A271: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:30 STA @LOCAL02
    case 0xC2A272: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:31 LDA CURRENT_TARGET
    case 0xC2A274: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:32 CLC
    case 0xC2A277: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:33 ADC #battler::defense
    case 0xC2A278: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:33 ADC #battler::defense
    // Overlapping static entry reached from 0xC2A278.
    case 0xC2A27A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:34 TAX
    case 0xC2A27B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:35 LDA @LOCAL02
    case 0xC2A27C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:36 STA @VIRTUAL02
    case 0xC2A27E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:37 LDA __BSS_START__,X
    case 0xC2A280: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:38 CLC
    case 0xC2A283: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:39 ADC @VIRTUAL02
    case 0xC2A284: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:40 STA __BSS_START__,X
    case 0xC2A286: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A289: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x003662, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A289.
    case 0xC2A28B: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A28C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A28B.
    case 0xC2A28D: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A28E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A28E.
    case 0xC2A290: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A291: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A293: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A295: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A297: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A299: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A29B: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A29D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A29F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2A3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:44 JSL DISPLAY_TEXT_WAIT
    case 0xC2A2A5: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:45 BRA @UNKNOWN14
    case 0xC2A2A9: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:47 LDA #4
    case 0xC2A2AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:47 LDA #4
    // Overlapping static entry reached from 0xC2A2AB.
    case 0xC2A2AD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:48 JSR RAND_LIMIT
    case 0xC2A2AE: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:49 INC
    case 0xC2A2B1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:50 STA @LOCAL02
    case 0xC2A2B2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:51 LDA CURRENT_TARGET
    case 0xC2A2B4: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:52 CLC
    case 0xC2A2B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:53 ADC #battler::offense
    case 0xC2A2B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:53 ADC #battler::offense
    // Overlapping static entry reached from 0xC2A2B8.
    case 0xC2A2BA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:54 TAX
    case 0xC2A2BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:55 LDA @LOCAL02
    case 0xC2A2BC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:56 STA @VIRTUAL02
    case 0xC2A2BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:57 LDA __BSS_START__,X
    case 0xC2A2C0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:58 CLC
    case 0xC2A2C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:59 ADC @VIRTUAL02
    case 0xC2A2C4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:60 STA __BSS_START__,X
    case 0xC2A2C6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A2C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000048, 2); else cpu.execute_instruction<0xA9>(0x003648, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2C9.
    case 0xC2A2CB: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A2CC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2CB.
    case 0xC2A2CD: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A2CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2CE.
    case 0xC2A2D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A2D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2D3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2D7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2D9: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2DB: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2DF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2E3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:64 JSL DISPLAY_TEXT_WAIT
    case 0xC2A2E5: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:65 BRA @UNKNOWN14
    case 0xC2A2E9: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:67 JSL BTLACT_SPEED_UP_1D4
    case 0xC2A2EB: cpu.execute_instruction<0x22>(0xC2A13C, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:68 BRA @UNKNOWN14
    case 0xC2A2EF: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:70 JSL BTLACT_GUTS_UP_1D4
    case 0xC2A2F1: cpu.execute_instruction<0x22>(0xC2A0F4, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:71 BRA @UNKNOWN14
    case 0xC2A2F5: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:73 JSL BTLACT_VITALITY_UP_1D4
    case 0xC2A2F7: cpu.execute_instruction<0x22>(0xC2A184, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:74 BRA @UNKNOWN14
    case 0xC2A2FB: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:76 JSL BTLACT_IQ_UP_1D4
    case 0xC2A2FD: cpu.execute_instruction<0x22>(0xC2A0A8, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:77 BRA @UNKNOWN14
    case 0xC2A301: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:79 JSL BTLACT_LUCK_UP_1D4
    case 0xC2A303: cpu.execute_instruction<0x22>(0xC2A1D0, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:81 END_C_FUNCTION
    case 0xC2A307: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:81 END_C_FUNCTION
    case 0xC2A308: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/reduce_offense.asm (source_named).
bool execute_battle_actions_reduce_offense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC291EB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC291ED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC291EE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC291EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC291EF.
    case 0xC291F1: cpu.execute_instruction<0xFF>(0x94205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC291F2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC291F3: cpu.execute_instruction<0x20>(0x007C94, 3); return true;
    // src/battle/actions/reduce_offense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC291F1.
    case 0xC291F5: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/reduce_offense.asm:10 CMP #0
    case 0xC291F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/reduce_offense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC291F6.
    case 0xC291F8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/reduce_offense.asm:11 BNE @UNKNOWN0
    case 0xC291F9: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/battle/actions/reduce_offense.asm:12 LDX CURRENT_TARGET
    case 0xC291FB: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense.asm:13 LDY a:battler::offense,X
    case 0xC291FE: cpu.execute_instruction<0xBC>(0x000026, 3); return true;
    // src/battle/actions/reduce_offense.asm:14 STY @LOCAL02
    case 0xC29201: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense.asm:15 LDA CURRENT_TARGET
    case 0xC29203: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC29206: cpu.execute_instruction<0x20>(0x007D73, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00372B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29209.
    case 0xC2920B: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC2920C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC2920B.
    case 0xC2920D: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC2920E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC2920E.
    case 0xC29210: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29211: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_offense.asm:18 LDX CURRENT_TARGET
    case 0xC29213: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense.asm:19 LDY @LOCAL02
    case 0xC29216: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense.asm:20 TYA
    case 0xC29218: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense.asm:21 SEC
    case 0xC29219: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense.asm:22 SBC a:battler::offense,X
    case 0xC2921A: cpu.execute_instruction<0xFD>(0x000026, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2921D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2921F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29221: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29223: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29225: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29227: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_offense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC29229: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense.asm:27 END_C_FUNCTION
    case 0xC2922D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense.asm:27 END_C_FUNCTION
    case 0xC2922E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/reduce_offense_defense.asm (source_named).
bool execute_battle_actions_reduce_offense_defense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28EB8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28EBC.
    case 0xC28EBE: cpu.execute_instruction<0xFF>(0x94205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28EC0: cpu.execute_instruction<0x20>(0x007C94, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28EBE.
    case 0xC28EC2: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    case 0xC28EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC28EC3.
    case 0xC28EC5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:11 BNE @UNKNOWN0
    case 0xC28EC6: cpu.execute_instruction<0xD0>(0x000064, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:12 LDX CURRENT_TARGET
    case 0xC28EC8: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:13 LDY a:battler::offense,X
    case 0xC28ECB: cpu.execute_instruction<0xBC>(0x000026, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:14 STY @LOCAL02
    case 0xC28ECE: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:15 LDA CURRENT_TARGET
    case 0xC28ED0: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC28ED3: cpu.execute_instruction<0x20>(0x007D73, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28ED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00372B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28ED6.
    case 0xC28ED8: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28ED9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28ED8.
    case 0xC28EDA: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28EDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28EDB.
    case 0xC28EDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28EDE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:18 LDX CURRENT_TARGET
    case 0xC28EE0: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:19 LDY @LOCAL02
    case 0xC28EE3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:20 TYA
    case 0xC28EE5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:21 SEC
    case 0xC28EE6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:22 SBC a:battler::offense,X
    case 0xC28EE7: cpu.execute_instruction<0xFD>(0x000026, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28EEA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28EEC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EEE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EF0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EF2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EF4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC28EF6: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/actions/reduce_offense_defense.asm:25 JSL DISPLAY_TEXT_WAIT
    // Overlapping static entry reached from 0xC28F72.
    case 0xC28EF9: cpu.execute_instruction<0xC1>(0x0000AE, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:26 LDX CURRENT_TARGET
    case 0xC28EFA: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:26 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28EF9.
    case 0xC28EFB: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:27 LDY a:battler::defense,X
    case 0xC28EFD: cpu.execute_instruction<0xBC>(0x000028, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:28 STY @LOCAL02
    case 0xC28F00: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:29 LDA CURRENT_TARGET
    case 0xC28F02: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:30 JSR HEXADECIMATE_DEFENSE
    case 0xC28F05: cpu.execute_instruction<0x20>(0x007DCA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x003744, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F08.
    case 0xC28F0A: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F0B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F0A.
    case 0xC28F0C: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F0D.
    case 0xC28F0F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F10: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:32 LDX CURRENT_TARGET
    case 0xC28F12: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:33 LDY @LOCAL02
    case 0xC28F15: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:34 TYA
    case 0xC28F17: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:35 SEC
    case 0xC28F18: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:36 SBC a:battler::defense,X
    case 0xC28F19: cpu.execute_instruction<0xFD>(0x000028, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F1C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F1E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F20: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F22: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F24: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F26: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:39 JSL DISPLAY_TEXT_WAIT
    case 0xC28F28: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F2C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F2D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/reduce_pp.asm (source_named).
bool execute_battle_actions_reduce_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_pp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28DD9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28DDB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28DDC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28DDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28DDD.
    case 0xC28DDF: cpu.execute_instruction<0xFF>(0x74AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28DE0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:9 LDX CURRENT_TARGET
    case 0xC28DE1: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_pp.asm:9 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28DDF.
    case 0xC28DE3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    case 0xC28DE4: cpu.execute_instruction<0xBD>(0x000019, 3); return true;
    // src/battle/actions/reduce_pp.asm:11 BNE @UNKNOWN0
    case 0xC28DE7: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00393F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28DE9.
    case 0xC28DEB: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28DEC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28DEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28DEE.
    case 0xC28DF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28DF1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28DF3: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/reduce_pp.asm:13 BRA @UNKNOWN3
    case 0xC28DF7: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/battle/actions/reduce_pp.asm:15 LDX CURRENT_TARGET
    case 0xC28DF9: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_pp.asm:16 LDA a:battler::pp_max,X
    case 0xC28DFC: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/actions/reduce_pp.asm:17 LSR
    case 0xC28DFF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:18 LSR
    case 0xC28E00: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:19 LSR
    case 0xC28E01: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:20 LSR
    case 0xC28E02: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:21 BEQ @UNKNOWN2
    case 0xC28E03: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/actions/reduce_pp.asm:22 JSR FIFTY_PERCENT_VARIANCE
    case 0xC28E05: cpu.execute_instruction<0x20>(0x006983, 3); return true;
    // src/battle/actions/reduce_pp.asm:23 TAY
    case 0xC28E08: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:24 STY @LOCAL02
    case 0xC28E09: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_pp.asm:25 TYX
    case 0xC28E0B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:26 LDA CURRENT_TARGET
    case 0xC28E0C: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/reduce_pp.asm:27 JSR REDUCE_PP
    case 0xC28E0F: cpu.execute_instruction<0x20>(0x007160, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000095, 2); else cpu.execute_instruction<0xA9>(0x002E95, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E12.
    case 0xC28E14: cpu.execute_instruction<0x2E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E15: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E17.
    case 0xC28E19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E1A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_pp.asm:29 LDY @LOCAL02
    case 0xC28E1C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_pp.asm:30 TYA
    case 0xC28E1E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E21: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E23: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E25: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E29: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E2B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E2D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_pp.asm:33 JSL DISPLAY_TEXT_WAIT
    case 0xC28E2F: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/actions/reduce_pp.asm:34 BRA @UNKNOWN3
    case 0xC28E33: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28E35.
    case 0xC28E37: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E38: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28E3A.
    case 0xC28E3C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E3D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E3F: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_pp.asm:38 END_C_FUNCTION
    case 0xC28E43: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_pp.asm:38 END_C_FUNCTION
    case 0xC28E44: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rust_promoter.asm (source_named).
bool execute_battle_actions_rust_promoter_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA20: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/rust_promoter.asm:5 LDA #200
    case 0xC2AA22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/rust_promoter.asm:5 LDA #200
    // Overlapping static entry reached from 0xC2AA22.
    case 0xC2AA24: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/rust_promoter.asm:6 JSR RUST_SPRAY_COMMON
    case 0xC2AA25: cpu.execute_instruction<0x20>(0x00A9D1, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rust_promoter.asm:7 END_C_FUNCTION
    case 0xC2AA28: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rust_promoter_common.asm (source_named).
bool execute_battle_actions_rust_promoter_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2A9D1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2A9D3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2A9D4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2A9D5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2A9D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A9D6.
    case 0xC2A9D8: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2A9D9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2A9DA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/rust_promoter_common.asm:9 TAX
    case 0xC2A9DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/rust_promoter_common.asm:10 STX @LOCAL01
    case 0xC2A9DC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:11 JSR SUCCESS_LUCK80
    case 0xC2A9DE: cpu.execute_instruction<0x20>(0x007C2D, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:12 CMP #0
    case 0xC2A9E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:12 CMP #0
    // Overlapping static entry reached from 0xC2A9E1.
    case 0xC2A9E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:13 BEQ @FAILURE
    case 0xC2A9E4: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:14 LDX CURRENT_TARGET
    case 0xC2A9E6: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:15 LDA a:battler::ally_or_enemy,X
    case 0xC2A9E9: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:16 AND #$00FF
    case 0xC2A9EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2A9EC.
    case 0xC2A9EE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:17 CMP #1
    case 0xC2A9EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:17 CMP #1
    // Overlapping static entry reached from 0xC2A9EF.
    case 0xC2A9F1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:18 BNE @FAILURE
    case 0xC2A9F2: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:19 LDX CURRENT_TARGET
    case 0xC2A9F4: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:20 LDA a:battler::id,X
    case 0xC2A9F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:21 JSR GET_ENEMY_TYPE
    case 0xC2A9FA: cpu.execute_instruction<0x20>(0x0068E7, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:22 CMP #2
    case 0xC2A9FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:22 CMP #2
    // Overlapping static entry reached from 0xC2A9FD.
    case 0xC2A9FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:23 BNE @FAILURE
    case 0xC2AA00: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:24 LDX @LOCAL01
    case 0xC2AA02: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:25 TXA
    case 0xC2AA04: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/rust_promoter_common.asm:26 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2AA05: cpu.execute_instruction<0x20>(0x006983, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:27 LDX #$00FF
    case 0xC2AA08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:27 LDX #$00FF
    // Overlapping static entry reached from 0xC2AA08.
    case 0xC2AA0A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:28 JSR CALC_RESIST_DAMAGE
    case 0xC2AA0B: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:29 BRA @RETURN
    case 0xC2AA0E: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA10.
    case 0xC2AA12: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA13: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA15.
    case 0xC2AA17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA18: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA1A: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:33 END_C_FUNCTION
    case 0xC2AA1E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/rust_promoter_common.asm:33 END_C_FUNCTION
    case 0xC2AA1F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rust_promoter_dx.asm (source_named).
bool execute_battle_actions_rust_promoter_dx_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter_dx.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA29: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/rust_promoter_dx.asm:5 LDA #400
    case 0xC2AA2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000190, 3); return true;
    // src/battle/actions/rust_promoter_dx.asm:5 LDA #400
    // Overlapping static entry reached from 0xC2AA2B.
    case 0xC2AA2D: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/rust_promoter_dx.asm:6 JSR RUST_SPRAY_COMMON
    case 0xC2AA2E: cpu.execute_instruction<0x20>(0x00A9D1, 3); return true;
    // src/battle/actions/rust_promoter_dx.asm:6 JSR RUST_SPRAY_COMMON
    // Overlapping static entry reached from 0xC2AA2D.
    case 0xC2AA2F: cpu.execute_instruction<0xD1>(0x0000A9, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rust_promoter_dx.asm:7 END_C_FUNCTION
    case 0xC2AA31: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_alpha.asm (source_named).
bool execute_battle_actions_shield_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29CED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CEF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CF0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29CF1.
    case 0xC29CF3: cpu.execute_instruction<0xFF>(0x04A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CF4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shield_alpha.asm:7 LDX #STATUS_6::SHIELD
    case 0xC29CF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/actions/shield_alpha.asm:7 LDX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC29CF5.
    case 0xC29CF7: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/shield_alpha.asm:8 LDA CURRENT_TARGET
    case 0xC29CF8: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/shield_alpha.asm:9 JSR SHIELDS_COMMON
    case 0xC29CFB: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/actions/shield_alpha.asm:10 CMP #0
    case 0xC29CFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shield_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29CFE.
    case 0xC29D00: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_alpha.asm:11 BEQ @UNKNOWN0
    case 0xC29D01: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00349E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D03.
    case 0xC29D05: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D06: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D05.
    case 0xC29D07: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D08.
    case 0xC29D0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D0D: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/shield_alpha.asm:13 BRA @UNKNOWN1
    case 0xC29D11: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x003481, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D13.
    case 0xC29D15: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D15.
    case 0xC29D17: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D18.
    case 0xC29D1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D1B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D1D: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_alpha_redirect.asm (source_named).
bool execute_battle_actions_shield_alpha_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_alpha_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/shield_alpha_redirect.asm:5 JSL BTLACT_SHIELD_A
    case 0xC29D25: cpu.execute_instruction<0x22>(0xC29CED, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_alpha_redirect.asm:6 END_C_FUNCTION
    case 0xC29D29: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_beta.asm (source_named).
bool execute_battle_actions_shield_beta_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D2A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D2C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D2D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29D2E.
    case 0xC29D30: cpu.execute_instruction<0xFF>(0x03A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D31: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    case 0xC29D32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC29D32.
    case 0xC29D34: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/shield_beta.asm:8 LDA CURRENT_TARGET
    case 0xC29D35: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/shield_beta.asm:9 JSR SHIELDS_COMMON
    case 0xC29D38: cpu.execute_instruction<0x20>(0x009C85, 3); return true;
    // src/battle/actions/shield_beta.asm:10 CMP #0
    case 0xC29D3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shield_beta.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29D3B.
    case 0xC29D3D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_beta.asm:11 BEQ @UNKNOWN0
    case 0xC29D3E: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0034D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D40.
    case 0xC29D42: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D43: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D42.
    case 0xC29D44: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D45.
    case 0xC29D47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D48: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D4A: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/shield_beta.asm:13 BRA @UNKNOWN1
    case 0xC29D4E: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x0034B9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC200A1.
    case 0xC29D51: cpu.execute_instruction<0xB9>(0x008534, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29D50.
    case 0xC29D52: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D53: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29D52.
    case 0xC29D54: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29D55.
    case 0xC29D57: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D58: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D5A: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29D5E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29D5F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_beta_redirect.asm (source_named).
bool execute_battle_actions_shield_beta_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_beta_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D60: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/shield_beta_redirect.asm:5 JSL BTLACT_SHIELD_B
    case 0xC29D62: cpu.execute_instruction<0x22>(0xC29D2A, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_beta_redirect.asm:6 END_C_FUNCTION
    case 0xC29D66: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_common.asm (source_named).
bool execute_battle_actions_shield_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29C85: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C87: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C88: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C89: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29C8A.
    case 0xC29C8C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C8D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:9 TXY
    case 0xC29C8F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:10 STA @LOCAL00
    case 0xC29C90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/shield_common.asm:11 CLC
    case 0xC29C92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    case 0xC29C93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x000023, 3); return true;
    // src/battle/actions/shield_common.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    // Overlapping static entry reached from 0xC29C93.
    case 0xC29C95: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/shield_common.asm:13 TAX
    case 0xC29C96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:14 STY @VIRTUAL02
    case 0xC29C97: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/actions/shield_common.asm:15 LDA __BSS_START__,X
    case 0xC29C99: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:16 AND #$00FF
    case 0xC29C9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/shield_common.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC29C9C.
    case 0xC29C9E: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/actions/shield_common.asm:17 CMP @VIRTUAL02
    case 0xC29C9F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/actions/shield_common.asm:18 BNE @UNKNOWN3
    case 0xC29CA1: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/actions/shield_common.asm:19 LDA @LOCAL00
    case 0xC29CA3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/actions/shield_common.asm:20 CLC
    case 0xC29CA5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:21 ADC #battler::shield_hp
    case 0xC29CA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/actions/shield_common.asm:21 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29CA6.
    case 0xC29CA8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/shield_common.asm:22 TAX
    case 0xC29CA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CAA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:24 LDA __BSS_START__,X
    case 0xC29CAC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:25 INC
    case 0xC29CAF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:26 INC
    case 0xC29CB0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:27 INC
    case 0xC29CB1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:28 STA __BSS_START__,X
    case 0xC29CB2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29CB5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:30 AND #$00FF
    case 0xC29CB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/shield_common.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC29CB7.
    case 0xC29CB9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/shield_common.asm:31 CLC
    case 0xC29CBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:32 SBC #8
    case 0xC29CBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/battle/actions/shield_common.asm:32 SBC #8
    // Overlapping static entry reached from 0xC29CBB.
    case 0xC29CBD: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CBE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CC0: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CC2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CC4: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/battle/actions/shield_common.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:35 LDA #8
    case 0xC29CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x009D08, 3); return true;
    // src/battle/actions/shield_common.asm:36 STA __BSS_START__,X
    case 0xC29CCA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:36 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29CC8.
    case 0xC29CCB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/actions/shield_common.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC29CCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:39 LDA #1
    case 0xC29CCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/shield_common.asm:39 LDA #1
    // Overlapping static entry reached from 0xC29CCF.
    case 0xC29CD1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/actions/shield_common.asm:40 BRA @UNKNOWN4
    case 0xC29CD2: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/actions/shield_common.asm:42 TYA
    case 0xC29CD4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CD5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:44 STA __BSS_START__,X
    case 0xC29CD7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC29CDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:46 LDA @LOCAL00
    case 0xC29CDC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/actions/shield_common.asm:47 TAX
    case 0xC29CDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:49 LDA #3
    case 0xC29CE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009D03, 3); return true;
    // src/battle/actions/shield_common.asm:50 STA a:battler::shield_hp,X
    case 0xC29CE3: cpu.execute_instruction<0x9D>(0x000025, 3); return true;
    // src/battle/actions/shield_common.asm:50 STA a:battler::shield_hp,X
    // Overlapping static entry reached from 0xC29CE1.
    case 0xC29CE4: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/battle/actions/shield_common.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC29CE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:52 LDA #0
    case 0xC29CE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:52 LDA #0
    // Overlapping static entry reached from 0xC29CE8.
    case 0xC29CEA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_common.asm:54 END_C_FUNCTION
    case 0xC29CEB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/shield_common.asm:54 END_C_FUNCTION
    case 0xC29CEC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_killer.asm (source_named).
bool execute_battle_actions_shield_killer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_killer.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A3CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A3CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A3CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A3CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A3CF.
    case 0xC2A3D1: cpu.execute_instruction<0xFF>(0x2D205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A3D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shield_killer.asm:7 JSR SUCCESS_LUCK80
    case 0xC2A3D3: cpu.execute_instruction<0x20>(0x007C2D, 3); return true;
    // src/battle/actions/shield_killer.asm:7 JSR SUCCESS_LUCK80
    // Overlapping static entry reached from 0xC2A3D1.
    case 0xC2A3D5: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/shield_killer.asm:8 CMP #0
    case 0xC2A3D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shield_killer.asm:8 CMP #0
    // Overlapping static entry reached from 0xC2A3D6.
    case 0xC2A3D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_killer.asm:9 BEQ @UNKNOWN0
    case 0xC2A3D9: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/actions/shield_killer.asm:10 LDA CURRENT_TARGET
    case 0xC2A3DB: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/shield_killer.asm:11 CLC
    case 0xC2A3DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_killer.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    case 0xC2A3DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x000023, 3); return true;
    // src/battle/actions/shield_killer.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    // Overlapping static entry reached from 0xC2A3DF.
    case 0xC2A3E1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/shield_killer.asm:13 TAX
    case 0xC2A3E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_killer.asm:14 LDA __BSS_START__,X
    case 0xC2A3E3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/shield_killer.asm:15 AND #$00FF
    case 0xC2A3E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/shield_killer.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2A3E6.
    case 0xC2A3E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_killer.asm:16 BEQ @UNKNOWN0
    case 0xC2A3E9: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/actions/shield_killer.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A3EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_killer.asm:18 LDA #0
    case 0xC2A3ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/actions/shield_killer.asm:19 STA __BSS_START__,X
    case 0xC2A3EF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_killer.asm:19 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2A3ED.
    case 0xC2A3F0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/actions/shield_killer.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC2A3F2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A3F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00356E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2A3F4.
    case 0xC2A3F6: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A3F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2A3F6.
    case 0xC2A3F8: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A3F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2A3F9.
    case 0xC2A3FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A3FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A3FE: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/shield_killer.asm:22 BRA @UNKNOWN1
    case 0xC2A402: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A404: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A404.
    case 0xC2A406: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A407: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A409.
    case 0xC2A40B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A40C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A40E: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_killer.asm:26 END_C_FUNCTION
    case 0xC2A412: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_killer.asm:26 END_C_FUNCTION
    case 0xC2A413: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shoot.asm (source_named).
bool execute_battle_actions_shoot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shoot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC286E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shoot.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2EAD9.
    case 0xC286E8: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC286E9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC286EA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC286EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC286EB.
    case 0xC286ED: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC286EE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shoot.asm:7 LDA #1
    case 0xC286EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/shoot.asm:7 LDA #1
    // Overlapping static entry reached from 0xC286EF.
    case 0xC286F1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/shoot.asm:8 JSR MISS_CALC
    case 0xC286F2: cpu.execute_instruction<0x20>(0x00829E, 3); return true;
    // src/battle/actions/shoot.asm:9 CMP #0
    case 0xC286F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shoot.asm:9 CMP #0
    // Overlapping static entry reached from 0xC286F5.
    case 0xC286F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/shoot.asm:10 BNE @UNKNOWN1
    case 0xC286F8: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/battle/actions/shoot.asm:11 JSR DETERMINE_DODGE
    case 0xC286FA: cpu.execute_instruction<0x20>(0x008454, 3); return true;
    // src/battle/actions/shoot.asm:12 CMP #0
    case 0xC286FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shoot.asm:12 CMP #0
    // Overlapping static entry reached from 0xC286FD.
    case 0xC286FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/shoot.asm:13 BNE @UNKNOWN0
    case 0xC28700: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/actions/shoot.asm:14 JSR BTLACT_LEVEL_2_ATK
    case 0xC28702: cpu.execute_instruction<0x20>(0x0084CA, 3); return true;
    // src/battle/actions/shoot.asm:15 BRA @UNKNOWN1
    case 0xC28705: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC28707: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x002DA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    // Overlapping static entry reached from 0xC28707.
    case 0xC28709: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC2870A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC2870C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    // Overlapping static entry reached from 0xC2870C.
    case 0xC2870E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC2870F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC28711: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shoot.asm:19 END_C_FUNCTION
    case 0xC28715: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shoot.asm:19 END_C_FUNCTION
    case 0xC28716: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/snake.asm (source_named).
bool execute_battle_actions_snake_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/snake.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A850: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A852: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A853: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A854: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A854.
    case 0xC2A856: cpu.execute_instruction<0xFF>(0x94205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A857: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/snake.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2A858: cpu.execute_instruction<0x20>(0x007C94, 3); return true;
    // src/battle/actions/snake.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2A856.
    case 0xC2A85A: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/snake.asm:8 CMP #00
    case 0xC2A85B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:8 CMP #00
    // Overlapping static entry reached from 0xC2A85B.
    case 0xC2A85D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/snake.asm:9 BNE @UNKNOWN1
    case 0xC2A85E: cpu.execute_instruction<0xD0>(0x000053, 2); return true;
    // src/battle/actions/snake.asm:10 LDA #250
    case 0xC2A860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0000FA, 3); return true;
    // src/battle/actions/snake.asm:10 LDA #250
    // Overlapping static entry reached from 0xC2A860.
    case 0xC2A862: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/snake.asm:11 JSR SUCCESS_SPEED
    case 0xC2A863: cpu.execute_instruction<0x20>(0x007C46, 3); return true;
    // src/battle/actions/snake.asm:12 CMP #0
    case 0xC2A866: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:12 CMP #0
    // Overlapping static entry reached from 0xC2A866.
    case 0xC2A868: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/snake.asm:13 BEQ @UNKNOWN0
    case 0xC2A869: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/actions/snake.asm:14 LDA #4
    case 0xC2A86B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/snake.asm:14 LDA #4
    // Overlapping static entry reached from 0xC2A86B.
    case 0xC2A86D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/snake.asm:15 JSR RAND_LIMIT
    case 0xC2A86E: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/snake.asm:16 LDX #$00FF
    case 0xC2A871: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/snake.asm:16 LDX #$00FF
    // Overlapping static entry reached from 0xC2A871.
    case 0xC2A873: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/actions/snake.asm:17 INC
    case 0xC2A874: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/snake.asm:18 JSR CALC_RESIST_DAMAGE
    case 0xC2A875: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/actions/snake.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A878: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/snake.asm:20 LDA #128
    case 0xC2A87A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x002080, 3); return true;
    // src/battle/actions/snake.asm:21 JSR SUCCESS_255
    case 0xC2A87C: cpu.execute_instruction<0x20>(0x006AF7, 3); return true;
    // src/battle/actions/snake.asm:21 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC2A87A.
    case 0xC2A87D: cpu.execute_instruction<0xF7>(0x00006A, 2); return true;
    // src/battle/actions/snake.asm:23 CMP #0
    case 0xC2A87F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:23 CMP #0
    // Overlapping static entry reached from 0xC2A87F.
    case 0xC2A881: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/snake.asm:24 BEQ @UNKNOWN1
    case 0xC2A882: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/actions/snake.asm:25 LDY #STATUS_0::POISONED
    case 0xC2A884: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/actions/snake.asm:25 LDY #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC2A884.
    case 0xC2A886: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/actions/snake.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC2A887: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC2A887.
    case 0xC2A889: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/snake.asm:27 LDA CURRENT_TARGET
    case 0xC2A88A: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/snake.asm:28 JSR INFLICT_STATUS_BATTLE
    case 0xC2A88D: cpu.execute_instruction<0x20>(0x00718D, 3); return true;
    // src/battle/actions/snake.asm:30 CMP #0
    case 0xC2A890: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:30 CMP #0
    // Overlapping static entry reached from 0xC2A890.
    case 0xC2A892: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/snake.asm:31 BEQ @UNKNOWN1
    case 0xC2A893: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A895: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000067, 2); else cpu.execute_instruction<0xA9>(0x003067, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    // Overlapping static entry reached from 0xC2A895.
    case 0xC2A897: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A898: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    // Overlapping static entry reached from 0xC2A897.
    case 0xC2A899: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A89A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    // Overlapping static entry reached from 0xC2A89A.
    case 0xC2A89C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A89D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A89F: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/snake.asm:33 BRA @UNKNOWN1
    case 0xC2A8A3: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A8A5.
    case 0xC2A8A7: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A8AA.
    case 0xC2A8AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8AD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8AF: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/snake.asm:37 END_C_FUNCTION
    case 0xC2A8B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/snake.asm:37 END_C_FUNCTION
    case 0xC2A8B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/solidify.asm (source_named).
bool execute_battle_actions_solidify_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/solidify.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28C88: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28C8C.
    case 0xC28C8E: cpu.execute_instruction<0xFF>(0x94205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28C8F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/solidify.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28C90: cpu.execute_instruction<0x20>(0x007C94, 3); return true;
    // src/battle/actions/solidify.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28C8E.
    case 0xC28C92: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/solidify.asm:8 CMP #0
    case 0xC28C93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28C93.
    case 0xC28C95: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/solidify.asm:9 BNE @UNKNOWN1
    case 0xC28C96: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/actions/solidify.asm:10 JSR SUCCESS_LUCK80
    case 0xC28C98: cpu.execute_instruction<0x20>(0x007C2D, 3); return true;
    // src/battle/actions/solidify.asm:11 CMP #0
    case 0xC28C9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify.asm:11 CMP #0
    // Overlapping static entry reached from 0xC28C9B.
    case 0xC28C9D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify.asm:12 BEQ @UNKNOWN0
    case 0xC28C9E: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/actions/solidify.asm:13 LDY #STATUS_2::SOLIDIFIED
    case 0xC28CA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/actions/solidify.asm:13 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC28CA0.
    case 0xC28CA2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/actions/solidify.asm:14 LDX #STATUS_GROUP::TEMPORARY
    case 0xC28CA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/solidify.asm:14 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC28CA3.
    case 0xC28CA5: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/solidify.asm:15 LDA CURRENT_TARGET
    case 0xC28CA6: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/solidify.asm:16 JSR INFLICT_STATUS_BATTLE
    case 0xC28CA9: cpu.execute_instruction<0x20>(0x00718D, 3); return true;
    // src/battle/actions/solidify.asm:17 CMP #0
    case 0xC28CAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify.asm:17 CMP #0
    // Overlapping static entry reached from 0xC28CAC.
    case 0xC28CAE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify.asm:18 BEQ @UNKNOWN0
    case 0xC28CAF: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003103, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28CB1.
    case 0xC28CB3: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28CB3.
    case 0xC28CB5: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28CB6.
    case 0xC28CB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CB9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28CBB: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/solidify.asm:20 BRA @UNKNOWN1
    case 0xC28CBF: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28CC1.
    case 0xC28CC3: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28CC6.
    case 0xC28CC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CC9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28CCB: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/solidify.asm:24 END_C_FUNCTION
    case 0xC28CCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/solidify.asm:24 END_C_FUNCTION
    case 0xC28CD0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/solidify_2.asm (source_named).
bool execute_battle_actions_solidify_2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/solidify_2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A7DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A7DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A7E0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A7E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A7E1.
    case 0xC2A7E3: cpu.execute_instruction<0xFF>(0x2D205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A7E4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/solidify_2.asm:7 JSR SUCCESS_LUCK80
    case 0xC2A7E5: cpu.execute_instruction<0x20>(0x007C2D, 3); return true;
    // src/battle/actions/solidify_2.asm:7 JSR SUCCESS_LUCK80
    // Overlapping static entry reached from 0xC2A7E3.
    case 0xC2A7E7: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/solidify_2.asm:8 CMP #0
    case 0xC2A7E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify_2.asm:8 CMP #0
    // Overlapping static entry reached from 0xC2A7E8.
    case 0xC2A7EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify_2.asm:9 BEQ @UNKNOWN0
    case 0xC2A7EB: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/actions/solidify_2.asm:10 LDY #STATUS_2::SOLIDIFIED
    case 0xC2A7ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/actions/solidify_2.asm:10 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2A7ED.
    case 0xC2A7EF: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/actions/solidify_2.asm:11 LDX #STATUS_GROUP::TEMPORARY
    case 0xC2A7F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/solidify_2.asm:11 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC2A7F0.
    case 0xC2A7F2: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/solidify_2.asm:12 LDA CURRENT_TARGET
    case 0xC2A7F3: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/solidify_2.asm:13 JSR INFLICT_STATUS_BATTLE
    case 0xC2A7F6: cpu.execute_instruction<0x20>(0x00718D, 3); return true;
    // src/battle/actions/solidify_2.asm:14 CMP #0
    case 0xC2A7F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify_2.asm:14 CMP #0
    // Overlapping static entry reached from 0xC2A7F9.
    case 0xC2A7FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify_2.asm:15 BEQ @UNKNOWN0
    case 0xC2A7FC: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A7FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003103, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A7FE.
    case 0xC2A800: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A801: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A800.
    case 0xC2A802: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A803.
    case 0xC2A805: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A806: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A808: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/solidify_2.asm:17 BRA @UNKNOWN1
    case 0xC2A80C: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A80E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A80E.
    case 0xC2A810: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A811: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A813: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A813.
    case 0xC2A815: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A816: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A818: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/solidify_2.asm:21 END_C_FUNCTION
    case 0xC2A81C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/solidify_2.asm:21 END_C_FUNCTION
    case 0xC2A81D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/sow_seeds.asm (source_named).
bool execute_battle_actions_sow_seeds_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/sow_seeds.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C0E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/sow_seeds.asm:5 LDA #1
    case 0xC2C0E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/sow_seeds.asm:5 LDA #1
    // Overlapping static entry reached from 0xC2C0E9.
    case 0xC2C0EB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/sow_seeds.asm:6 JSR CALL_FOR_HELP_COMMON
    case 0xC2C0EC: cpu.execute_instruction<0x20>(0x00BD09, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/sow_seeds.asm:7 END_C_FUNCTION
    case 0xC2C0EF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/speed_up_1d4.asm (source_named).
bool execute_battle_actions_speed_up_1d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/speed_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A13C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A13E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A13F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A140: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A140.
    case 0xC2A142: cpu.execute_instruction<0xFF>(0x04A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A143: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:9 LDA #4
    case 0xC2A144: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:9 LDA #4
    // Overlapping static entry reached from 0xC2A144.
    case 0xC2A146: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A147: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:11 INC
    case 0xC2A14A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:12 STA @LOCAL02
    case 0xC2A14B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:13 LDA CURRENT_TARGET
    case 0xC2A14D: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:14 CLC
    case 0xC2A150: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:15 ADC #battler::speed
    case 0xC2A151: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002A, 2); else cpu.execute_instruction<0x69>(0x00002A, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:15 ADC #battler::speed
    // Overlapping static entry reached from 0xC2A151.
    case 0xC2A153: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:16 TAX
    case 0xC2A154: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:17 LDA @LOCAL02
    case 0xC2A155: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:18 STA @VIRTUAL02
    case 0xC2A157: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:19 LDA __BSS_START__,X
    case 0xC2A159: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:20 CLC
    case 0xC2A15C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:21 ADC @VIRTUAL02
    case 0xC2A15D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:22 STA __BSS_START__,X
    case 0xC2A15F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A162: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x0036DF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A162.
    case 0xC2A164: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A165: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A164.
    case 0xC2A166: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A167: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A167.
    case 0xC2A169: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A16A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A16C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A16E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A170: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A172: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A174: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A176: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A178: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A17A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A17C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:26 JSL DISPLAY_TEXT_WAIT
    case 0xC2A17E: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/speed_up_1d4.asm:27 END_C_FUNCTION
    case 0xC2A182: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/speed_up_1d4.asm:27 END_C_FUNCTION
    case 0xC2A183: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/spy.asm (source_named).
bool execute_battle_actions_spy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/spy.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28717: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC28719: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC2871A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC2871B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2871B.
    case 0xC2871D: cpu.execute_instruction<0xFF>(0x51A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC2871E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC2871F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x002F51, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2871F.
    case 0xC28721: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28722: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28721.
    case 0xC28725: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28724.
    case 0xC28726: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28727: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/spy.asm:9 LDX CURRENT_TARGET
    case 0xC28729: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:10 LDA a:battler::offense,X
    case 0xC2872C: cpu.execute_instruction<0xBD>(0x000026, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/spy.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC2872F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/spy.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC28731: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28733: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28735: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28737: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28739: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/spy.asm:13 JSL DISPLAY_TEXT_WAIT
    case 0xC2873B: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC2873F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x002F63, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2873F.
    case 0xC28741: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28742: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28744: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28741.
    case 0xC28745: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28744.
    case 0xC28746: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28747: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/spy.asm:15 LDX CURRENT_TARGET
    case 0xC28749: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:16 LDA a:battler::defense,X
    case 0xC2874C: cpu.execute_instruction<0xBD>(0x000028, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/spy.asm:17 STORE_INT1632 @VIRTUAL06
    case 0xC2874F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/spy.asm:17 STORE_INT1632 @VIRTUAL06
    case 0xC28751: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28753: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28755: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28757: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28759: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/spy.asm:19 JSL DISPLAY_TEXT_WAIT
    case 0xC2875B: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/actions/spy.asm:20 LDX CURRENT_TARGET
    case 0xC2875F: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:21 LDA a:battler::fire_resist,X
    case 0xC28762: cpu.execute_instruction<0xBD>(0x00003A, 3); return true;
    // src/battle/actions/spy.asm:22 AND #$00FF
    case 0xC28765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC28765.
    case 0xC28767: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:23 CMP #$00FF
    case 0xC28768: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:23 CMP #$00FF
    // Overlapping static entry reached from 0xC28768.
    case 0xC2876A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:24 BNE @UNKNOWN0
    case 0xC2876B: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC2876D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000071, 2); else cpu.execute_instruction<0xA9>(0x002F71, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC2876D.
    case 0xC2876F: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28770: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC2876F.
    case 0xC28773: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC28772.
    case 0xC28774: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28775: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC28777: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:27 LDX CURRENT_TARGET
    case 0xC2877B: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:28 LDA a:battler::freeze_resist,X
    case 0xC2877E: cpu.execute_instruction<0xBD>(0x000038, 3); return true;
    // src/battle/actions/spy.asm:29 AND #$00FF
    case 0xC28781: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC28781.
    case 0xC28783: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:30 CMP #$00FF
    case 0xC28784: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:30 CMP #$00FF
    // Overlapping static entry reached from 0xC28784.
    case 0xC28786: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:31 BNE @UNKNOWN1
    case 0xC28787: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC28789: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x002F82, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC28789.
    case 0xC2878B: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC2878C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC2878E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC2878B.
    case 0xC2878F: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC2878E.
    case 0xC28790: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC28791: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC28793: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:34 LDX CURRENT_TARGET
    case 0xC28797: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:35 LDA a:battler::flash_resist,X
    case 0xC2879A: cpu.execute_instruction<0xBD>(0x000039, 3); return true;
    // src/battle/actions/spy.asm:36 AND #$00FF
    case 0xC2879D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2879D.
    case 0xC2879F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:37 CMP #$00FF
    case 0xC287A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:37 CMP #$00FF
    // Overlapping static entry reached from 0xC287A0.
    case 0xC287A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:38 BNE @UNKNOWN2
    case 0xC287A3: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x002F92, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287A5.
    case 0xC287A7: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287A7.
    case 0xC287AB: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287AA.
    case 0xC287AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287AD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287AF: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:41 LDX CURRENT_TARGET
    case 0xC287B3: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:42 LDA a:battler::paralysis_resist,X
    case 0xC287B6: cpu.execute_instruction<0xBD>(0x000037, 3); return true;
    // src/battle/actions/spy.asm:43 AND #$00FF
    case 0xC287B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC287B9.
    case 0xC287BB: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:44 CMP #$00FF
    case 0xC287BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:44 CMP #$00FF
    // Overlapping static entry reached from 0xC287BC.
    case 0xC287BE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:45 BNE @UNKNOWN3
    case 0xC287BF: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x002FA3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC287C1.
    case 0xC287C3: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC287C3.
    case 0xC287C7: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC287C6.
    case 0xC287C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC287CB: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:48 LDX CURRENT_TARGET
    case 0xC287CF: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:49 LDA a:battler::hypnosis_resist,X
    case 0xC287D2: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // src/battle/actions/spy.asm:50 AND #$00FF
    case 0xC287D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC287D5.
    case 0xC287D7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:51 CMP #$00FF
    case 0xC287D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:51 CMP #$00FF
    // Overlapping static entry reached from 0xC287D8.
    case 0xC287DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:52 BNE @UNKNOWN4
    case 0xC287DB: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x002FB3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC287DD.
    case 0xC287DF: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC287DF.
    case 0xC287E3: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC287E2.
    case 0xC287E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC287E7: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:55 LDX CURRENT_TARGET
    case 0xC287EB: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:56 LDA a:battler::brainshock_resist,X
    case 0xC287EE: cpu.execute_instruction<0xBD>(0x00003B, 3); return true;
    // src/battle/actions/spy.asm:57 AND #$00FF
    case 0xC287F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC287F1.
    case 0xC287F3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:58 CMP #$00FF
    case 0xC287F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:58 CMP #$00FF
    // Overlapping static entry reached from 0xC287F4.
    case 0xC287F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:59 BNE @UNKNOWN5
    case 0xC287F7: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC287F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x002FC4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC287F9.
    case 0xC287FB: cpu.execute_instruction<0x2F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC287FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC287FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC287FB.
    case 0xC287FF: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC287FE.
    case 0xC28800: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28801: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28803: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:62 LDX CURRENT_TARGET
    case 0xC28807: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/spy.asm:63 LDA a:battler::ally_or_enemy,X
    case 0xC2880A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/spy.asm:64 AND #$00FF
    case 0xC2880D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2880D.
    case 0xC2880F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:65 CMP #1
    case 0xC28810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/spy.asm:65 CMP #1
    // Overlapping static entry reached from 0xC28810.
    case 0xC28812: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:66 BNE @UNKNOWN6
    case 0xC28813: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/battle/actions/spy.asm:67 LDA #3
    case 0xC28815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/actions/spy.asm:67 LDA #3
    // Overlapping static entry reached from 0xC28815.
    case 0xC28817: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/spy.asm:68 JSL FIND_INVENTORY_SPACE2
    case 0xC28818: cpu.execute_instruction<0x22>(0xC43525, 4); return true;
    // src/battle/actions/spy.asm:69 CMP #0
    case 0xC2881C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/spy.asm:69 CMP #0
    // Overlapping static entry reached from 0xC2881C.
    case 0xC2881E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/spy.asm:70 BEQ @UNKNOWN6
    case 0xC2881F: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/actions/spy.asm:71 LDA ITEM_DROPPED
    case 0xC28821: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // src/battle/actions/spy.asm:72 BEQ @UNKNOWN6
    case 0xC28824: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/actions/spy.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC28826: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/spy.asm:74 LDA ITEM_DROPPED
    case 0xC28828: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // src/battle/actions/spy.asm:75 JSL REDIRECT_C1ACF8
    case 0xC2882B: cpu.execute_instruction<0x22>(0xC1DB59, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC2882F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x004AF0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    // Overlapping static entry reached from 0xC2882F.
    case 0xC28831: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28832: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28834: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    // Overlapping static entry reached from 0xC28834.
    case 0xC28836: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28837: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28839: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/spy.asm:78 STZ ITEM_DROPPED
    case 0xC2883D: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/spy.asm:80 END_C_FUNCTION
    case 0xC28840: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/spy.asm:80 END_C_FUNCTION
    case 0xC28841: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/steal.asm (source_named).
bool execute_battle_actions_steal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/steal.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28845: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/steal.asm:5 LDX CURRENT_TARGET
    case 0xC28847: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/steal.asm:6 LDA a:battler::ally_or_enemy,X
    case 0xC2884A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/steal.asm:7 AND #$00FF
    case 0xC2884D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC2884D.
    case 0xC2884F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/steal.asm:8 CMP #1
    case 0xC28850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/steal.asm:8 CMP #1
    // Overlapping static entry reached from 0xC28850.
    case 0xC28852: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/steal.asm:9 BEQ @UNKNOWN1
    case 0xC28853: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/actions/steal.asm:10 LDX CURRENT_TARGET
    case 0xC28855: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/steal.asm:11 LDA a:battler::npc_id,X
    case 0xC28858: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/actions/steal.asm:12 AND #$00FF
    case 0xC2885B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2885B.
    case 0xC2885D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/steal.asm:13 BNE @UNKNOWN1
    case 0xC2885E: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/actions/steal.asm:14 LDA MIRROR_ENEMY
    case 0xC28860: cpu.execute_instruction<0xAD>(0x00ABE7, 3); return true;
    // src/battle/actions/steal.asm:15 BEQ @UNKNOWN0
    case 0xC28863: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/actions/steal.asm:16 LDX CURRENT_ATTACKER
    case 0xC28865: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/steal.asm:17 LDA a:battler::ally_or_enemy,X
    case 0xC28868: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/steal.asm:18 AND #$00FF
    case 0xC2886B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2886B.
    case 0xC2886D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/steal.asm:19 BNE @UNKNOWN0
    case 0xC2886E: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/actions/steal.asm:20 LDX CURRENT_ATTACKER
    case 0xC28870: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/steal.asm:21 LDA __BSS_START__,X
    case 0xC28873: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/steal.asm:22 CMP #4
    case 0xC28876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/actions/steal.asm:22 CMP #4
    // Overlapping static entry reached from 0xC28876.
    case 0xC28878: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/steal.asm:23 BEQ @UNKNOWN1
    case 0xC28879: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/actions/steal.asm:25 LDX CURRENT_ATTACKER
    case 0xC2887B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/steal.asm:26 LDA a:battler::current_action_argument,X
    case 0xC2887E: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/steal.asm:27 AND #$00FF
    case 0xC28881: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC28881.
    case 0xC28883: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/steal.asm:28 BEQ @UNKNOWN1
    case 0xC28884: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/actions/steal.asm:29 AND #$00FF
    case 0xC28886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC28886.
    case 0xC28888: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/steal.asm:30 TAX
    case 0xC28889: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/steal.asm:31 LDA #$00FF
    case 0xC2888A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:31 LDA #$00FF
    // Overlapping static entry reached from 0xC2888A.
    case 0xC2888C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/steal.asm:32 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC2888D: cpu.execute_instruction<0x22>(0xC18F56, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/steal.asm:34 END_C_FUNCTION
    case 0xC28891: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/sudden_guts_pill.asm (source_named).
bool execute_battle_actions_sudden_guts_pill_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA32: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA34: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AA36.
    case 0xC2AA38: cpu.execute_instruction<0xFF>(0x94205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/sudden_guts_pill.asm:8 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2AA3A: cpu.execute_instruction<0x20>(0x007C94, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:8 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2AA38.
    case 0xC2AA3C: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:9 CMP #0
    case 0xC2AA3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2AA3D.
    case 0xC2AA3F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:10 BNE @UNKNOWN1
    case 0xC2AA40: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:11 LDX CURRENT_TARGET
    case 0xC2AA42: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:12 LDA a:battler::guts,X
    case 0xC2AA45: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:13 ASL
    case 0xC2AA48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/actions/sudden_guts_pill.asm:14 CMP #$00FF
    case 0xC2AA49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC2AA49.
    case 0xC2AA4B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:15 BCC @UNKNOWN0
    case 0xC2AA4C: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:16 LDA #$00FF
    case 0xC2AA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:16 LDA #$00FF
    // Overlapping static entry reached from 0xC2AA4E.
    case 0xC2AA50: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:18 LDX CURRENT_TARGET
    case 0xC2AA51: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:19 STA a:battler::guts,X
    case 0xC2AA54: cpu.execute_instruction<0x9D>(0x00002C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0036C3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AA57.
    case 0xC2AA59: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AA59.
    case 0xC2AA5B: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AA5C.
    case 0xC2AA5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA5F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:21 LDX CURRENT_TARGET
    case 0xC2AA61: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:22 LDA a:battler::guts,X
    case 0xC2AA64: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2AA67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2AA69: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA6B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA6D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA6F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA71: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC2AA73: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    // Overlapping static entry reached from 0xC2AAD3.
    case 0xC2AA75: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    // Overlapping static entry reached from 0xC2AA75.
    case 0xC2AA76: cpu.execute_instruction<0xC1>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:27 END_C_FUNCTION
    case 0xC2AA77: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:27 END_C_FUNCTION
    case 0xC2AA78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/super_bomb.asm (source_named).
bool execute_battle_actions_super_bomb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/super_bomb.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A7D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/super_bomb.asm:5 LDA #270
    case 0xC2A7D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00010E, 3); return true;
    // src/battle/actions/super_bomb.asm:5 LDA #270
    // Overlapping static entry reached from 0xC2A7D6.
    case 0xC2A7D8: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    case 0xC2A7D9: cpu.execute_instruction<0x20>(0x00A601, 3); return true;
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    // Overlapping static entry reached from 0xC2A7D8.
    case 0xC2A7DA: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/super_bomb.asm:7 END_C_FUNCTION
    case 0xC2A7DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/switch_armor.asm (source_named).
bool execute_battle_actions_switch_armor_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_armor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DDD3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDD5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDD6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DDD7.
    case 0xC1DDD9: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDDA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:12 LDA #1
    case 0xC1DDDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/switch_armor.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1DDDB.
    case 0xC1DDDD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:13 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DDDE: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // src/battle/actions/switch_armor.asm:14 LDX CURRENT_ATTACKER
    case 0xC1DDE1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:15 LDA a:battler::current_action_argument,X
    case 0xC1DDE4: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    case 0xC1DDE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1DDE7.
    case 0xC1DDE9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_armor.asm:17 TAX
    case 0xC1DDEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:18 STX @LOCAL05
    case 0xC1DDEB: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/actions/switch_armor.asm:19 LDX CURRENT_ATTACKER
    case 0xC1DDED: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:20 LDA a:battler::id,X
    case 0xC1DDF0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:21 LDX @LOCAL05
    case 0xC1DDF3: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/actions/switch_armor.asm:22 JSL UNKNOWN_C3EE14
    case 0xC1DDF5: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // src/battle/actions/switch_armor.asm:23 CMP #0
    case 0xC1DDF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:23 CMP #0
    // Overlapping static entry reached from 0xC1DDF9.
    case 0xC1DDFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1DDFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1DDFE: cpu.execute_instruction<0x4C>(0x00DF53, 3); return true;
    // src/battle/actions/switch_armor.asm:25 LDX CURRENT_ATTACKER
    case 0xC1DE01: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:26 LDA a:battler::row,X
    case 0xC1DE04: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    case 0xC1DE07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1DE07.
    case 0xC1DE09: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    case 0xC1DE0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DE0A.
    case 0xC1DE0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/switch_armor.asm:29 JSL MULT168
    case 0xC1DE0D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/actions/switch_armor.asm:30 CLC
    case 0xC1DE11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DE12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DE12.
    case 0xC1DE14: cpu.execute_instruction<0x9C>(0x0084A8, 3); return true;
    // src/battle/actions/switch_armor.asm:32 TAY
    case 0xC1DE15: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    case 0xC1DE16: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DE14.
    case 0xC1DE17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:34 LDX CURRENT_ATTACKER
    case 0xC1DE18: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:35 LDA a:battler::base_defense,X
    case 0xC1DE1B: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    case 0xC1DE1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1DE1E.
    case 0xC1DE20: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_armor.asm:37 STA @VIRTUAL04
    case 0xC1DE21: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:38 LDX CURRENT_ATTACKER
    case 0xC1DE23: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:39 LDA a:battler::defense,X
    case 0xC1DE26: cpu.execute_instruction<0xBD>(0x000028, 3); return true;
    // src/battle/actions/switch_armor.asm:40 SEC
    case 0xC1DE29: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:41 SBC @VIRTUAL04
    case 0xC1DE2A: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:42 STA @VIRTUAL02
    case 0xC1DE2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:43 STA @LOCAL03
    case 0xC1DE2E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/switch_armor.asm:44 LDX CURRENT_ATTACKER
    case 0xC1DE30: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:45 LDA a:battler::base_speed,X
    case 0xC1DE33: cpu.execute_instruction<0xBD>(0x000034, 3); return true;
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    case 0xC1DE36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1DE36.
    case 0xC1DE38: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_armor.asm:47 STA @VIRTUAL02
    case 0xC1DE39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:48 LDX CURRENT_ATTACKER
    case 0xC1DE3B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:49 LDA a:battler::speed,X
    case 0xC1DE3E: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/actions/switch_armor.asm:50 SEC
    case 0xC1DE41: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:51 SBC @VIRTUAL02
    case 0xC1DE42: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:52 STA @VIRTUAL04
    case 0xC1DE44: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:53 LDX CURRENT_ATTACKER
    case 0xC1DE46: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:54 LDA a:battler::base_luck,X
    case 0xC1DE49: cpu.execute_instruction<0xBD>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    case 0xC1DE4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1DE4C.
    case 0xC1DE4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_armor.asm:56 STA @VIRTUAL02
    case 0xC1DE4F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:57 LDX CURRENT_ATTACKER
    case 0xC1DE51: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:58 LDA a:battler::luck,X
    case 0xC1DE54: cpu.execute_instruction<0xBD>(0x00002E, 3); return true;
    // src/battle/actions/switch_armor.asm:59 SEC
    case 0xC1DE57: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:60 SBC @VIRTUAL02
    case 0xC1DE58: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:61 STA @LOCAL02
    case 0xC1DE5A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:62 LDX CURRENT_ATTACKER
    case 0xC1DE5C: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:63 LDA a:battler::action_item_slot,X
    case 0xC1DE5F: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    case 0xC1DE62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC1DE62.
    case 0xC1DE64: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_armor.asm:65 TAX
    case 0xC1DE65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:66 STX @LOCAL01
    case 0xC1DE66: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/actions/switch_armor.asm:67 LDX CURRENT_ATTACKER
    case 0xC1DE68: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:68 LDA a:battler::id,X
    case 0xC1DE6B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:69 LDX @LOCAL01
    case 0xC1DE6E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/actions/switch_armor.asm:70 JSR EQUIP_ITEM
    case 0xC1DE70: cpu.execute_instruction<0x20>(0x00911F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00287B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DE73.
    case 0xC1DE75: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE76: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DE78.
    case 0xC1DE7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE7B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE7D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/battle/actions/switch_armor.asm:72 LDY @LOCAL04
    case 0xC1DE81: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DE83: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:74 LDA a:char_struct::defense,Y
    case 0xC1DE85: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // src/battle/actions/switch_armor.asm:75 LDX CURRENT_ATTACKER
    case 0xC1DE88: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:76 STA a:battler::base_defense,X
    case 0xC1DE8B: cpu.execute_instruction<0x9D>(0x000033, 3); return true;
    // src/battle/actions/switch_armor.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC1DE8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:78 LDA @LOCAL03
    case 0xC1DE90: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/switch_armor.asm:79 STA @VIRTUAL02
    case 0xC1DE92: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:80 LDX CURRENT_ATTACKER
    case 0xC1DE94: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:81 LDA a:battler::base_defense,X
    case 0xC1DE97: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    case 0xC1DE9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1DE9A.
    case 0xC1DE9C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:83 CLC
    case 0xC1DE9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:84 ADC @VIRTUAL02
    case 0xC1DE9E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:85 LDX CURRENT_ATTACKER
    case 0xC1DEA0: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:86 STA a:battler::defense,X
    case 0xC1DEA3: cpu.execute_instruction<0x9D>(0x000028, 3); return true;
    // src/battle/actions/switch_armor.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEA6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:88 LDA a:char_struct::speed,Y
    case 0xC1DEA8: cpu.execute_instruction<0xB9>(0x000016, 3); return true;
    // src/battle/actions/switch_armor.asm:89 LDX CURRENT_ATTACKER
    case 0xC1DEAB: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:90 STA a:battler::base_speed,X
    case 0xC1DEAE: cpu.execute_instruction<0x9D>(0x000034, 3); return true;
    // src/battle/actions/switch_armor.asm:91 LDX CURRENT_ATTACKER
    case 0xC1DEB1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1DEB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:93 LDA a:battler::base_speed,X
    case 0xC1DEB6: cpu.execute_instruction<0xBD>(0x000034, 3); return true;
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    case 0xC1DEB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC1DEB9.
    case 0xC1DEBB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:95 CLC
    case 0xC1DEBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:96 ADC @VIRTUAL04
    case 0xC1DEBD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:97 LDX CURRENT_ATTACKER
    case 0xC1DEBF: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:98 STA a:battler::speed,X
    case 0xC1DEC2: cpu.execute_instruction<0x9D>(0x00002A, 3); return true;
    // src/battle/actions/switch_armor.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEC5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:100 LDA a:char_struct::luck,Y
    case 0xC1DEC7: cpu.execute_instruction<0xB9>(0x000018, 3); return true;
    // src/battle/actions/switch_armor.asm:101 LDX CURRENT_ATTACKER
    case 0xC1DECA: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:102 STA a:battler::base_luck,X
    case 0xC1DECD: cpu.execute_instruction<0x9D>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:103 LDX CURRENT_ATTACKER
    case 0xC1DED0: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC1DED3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:105 LDA a:battler::base_luck,X
    case 0xC1DED5: cpu.execute_instruction<0xBD>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    case 0xC1DED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC1DED8.
    case 0xC1DEDA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:107 CLC
    case 0xC1DEDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:108 ADC @LOCAL02
    case 0xC1DEDC: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:109 LDX CURRENT_ATTACKER
    case 0xC1DEDE: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:110 STA a:battler::luck,X
    case 0xC1DEE1: cpu.execute_instruction<0x9D>(0x00002E, 3); return true;
    // src/battle/actions/switch_armor.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:112 LDA a:char_struct::fire_resist,Y
    case 0xC1DEE6: cpu.execute_instruction<0xB9>(0x000051, 3); return true;
    // src/battle/actions/switch_armor.asm:113 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1DEE9: cpu.execute_instruction<0x22>(0xC2B5AD, 4); return true;
    // src/battle/actions/switch_armor.asm:114 LDX CURRENT_ATTACKER
    case 0xC1DEED: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:115 STA a:battler::fire_resist,X
    case 0xC1DEF0: cpu.execute_instruction<0x9D>(0x00003A, 3); return true;
    // src/battle/actions/switch_armor.asm:116 LDY @LOCAL04
    case 0xC1DEF3: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:117 LDA a:char_struct::freeze_resist,Y
    case 0xC1DEF5: cpu.execute_instruction<0xB9>(0x000052, 3); return true;
    // src/battle/actions/switch_armor.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1DEF8: cpu.execute_instruction<0x22>(0xC2B5AD, 4); return true;
    // src/battle/actions/switch_armor.asm:119 LDX CURRENT_ATTACKER
    case 0xC1DEFC: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:120 STA a:battler::freeze_resist,X
    case 0xC1DEFF: cpu.execute_instruction<0x9D>(0x000038, 3); return true;
    // src/battle/actions/switch_armor.asm:121 LDY @LOCAL04
    case 0xC1DF02: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:122 LDA a:char_struct::flash_resist,Y
    case 0xC1DF04: cpu.execute_instruction<0xB9>(0x000053, 3); return true;
    // src/battle/actions/switch_armor.asm:123 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF07: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/actions/switch_armor.asm:124 LDX CURRENT_ATTACKER
    case 0xC1DF0B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:125 STA a:battler::flash_resist,X
    case 0xC1DF0E: cpu.execute_instruction<0x9D>(0x000039, 3); return true;
    // src/battle/actions/switch_armor.asm:126 LDY @LOCAL04
    case 0xC1DF11: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:127 LDA a:char_struct::paralysis_resist,Y
    case 0xC1DF13: cpu.execute_instruction<0xB9>(0x000054, 3); return true;
    // src/battle/actions/switch_armor.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF16: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/actions/switch_armor.asm:129 LDX CURRENT_ATTACKER
    case 0xC1DF1A: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:130 STA a:battler::paralysis_resist,X
    case 0xC1DF1D: cpu.execute_instruction<0x9D>(0x000037, 3); return true;
    // src/battle/actions/switch_armor.asm:131 LDY @LOCAL04
    case 0xC1DF20: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1DF22: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:133 TYA
    case 0xC1DF24: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:134 CLC
    case 0xC1DF25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC1DF26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000055, 2); else cpu.execute_instruction<0x69>(0x000055, 3); return true;
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC1DF26.
    case 0xC1DF28: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_armor.asm:136 TAX
    case 0xC1DF29: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:137 STX @LOCAL02
    case 0xC1DF2A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DF2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:139 LDA __BSS_START__,X
    case 0xC1DF2E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:140 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF31: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/actions/switch_armor.asm:141 LDX CURRENT_ATTACKER
    case 0xC1DF35: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:142 STA a:battler::hypnosis_resist,X
    case 0xC1DF38: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/battle/actions/switch_armor.asm:143 LDX @LOCAL02
    case 0xC1DF3B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:144 LDA __BSS_START__,X
    case 0xC1DF3D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:145 STA @VIRTUAL00
    case 0xC1DF40: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/actions/switch_armor.asm:146 LDA #3
    case 0xC1DF42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003803, 3); return true;
    // src/battle/actions/switch_armor.asm:147 SEC
    case 0xC1DF44: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:148 SBC @VIRTUAL00
    case 0xC1DF45: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/battle/actions/switch_armor.asm:149 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF47: cpu.execute_instruction<0x22>(0xC2B5DE, 4); return true;
    // src/battle/actions/switch_armor.asm:150 LDX CURRENT_ATTACKER
    case 0xC1DF4B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_armor.asm:151 STA a:battler::brainshock_resist,X
    case 0xC1DF4E: cpu.execute_instruction<0x9D>(0x00003B, 3); return true;
    // src/battle/actions/switch_armor.asm:152 BRA @UNKNOWN2
    case 0xC1DF51: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00289A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF53.
    case 0xC1DF55: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF58.
    case 0xC1DF5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF5B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF5D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/battle/actions/switch_armor.asm:157 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DF61: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1DF64: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1DF65: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/switch_weapon.asm (source_named).
bool execute_battle_actions_switch_weapon_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_weapon.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DC06: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC08: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC09: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DC0A.
    case 0xC1DC0C: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC0D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    case 0xC1DC0E: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1DC0C.
    case 0xC1DC10: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    case 0xC1DC11: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_weapon.asm:19 STA @LOCAL05
    case 0xC1DC14: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    case 0xC1DC16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1DC16.
    case 0xC1DC18: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:21 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DC19: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:22 LDX CURRENT_ATTACKER
    case 0xC1DC1C: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:23 LDA a:battler::current_action_argument,X
    case 0xC1DC1F: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    case 0xC1DC22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1DC22.
    case 0xC1DC24: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:25 TAX
    case 0xC1DC25: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:26 LDA @LOCAL05
    case 0xC1DC26: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:27 JSL UNKNOWN_C3EE14
    case 0xC1DC28: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    case 0xC1DC2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1DC2C.
    case 0xC1DC2E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DC2F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DC31: cpu.execute_instruction<0x4C>(0x00DCD6, 3); return true;
    // src/battle/actions/switch_weapon.asm:30 LDA @LOCAL05
    case 0xC1DC34: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:31 DEC
    case 0xC1DC36: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1DC37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DC37.
    case 0xC1DC39: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/switch_weapon.asm:33 JSL MULT168
    case 0xC1DC3A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/actions/switch_weapon.asm:34 CLC
    case 0xC1DC3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DC3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DC3F.
    case 0xC1DC41: cpu.execute_instruction<0x9C>(0x0084A8, 3); return true;
    // src/battle/actions/switch_weapon.asm:36 TAY
    case 0xC1DC42: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    case 0xC1DC43: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DC41.
    case 0xC1DC44: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:38 LDX CURRENT_ATTACKER
    case 0xC1DC45: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:39 LDA a:battler::base_offense,X
    case 0xC1DC48: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    case 0xC1DC4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1DC4B.
    case 0xC1DC4D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_weapon.asm:41 STA @VIRTUAL04
    case 0xC1DC4E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:42 LDX CURRENT_ATTACKER
    case 0xC1DC50: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:43 LDA a:battler::offense,X
    case 0xC1DC53: cpu.execute_instruction<0xBD>(0x000026, 3); return true;
    // src/battle/actions/switch_weapon.asm:44 SEC
    case 0xC1DC56: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:45 SBC @VIRTUAL04
    case 0xC1DC57: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:46 STA @VIRTUAL02
    case 0xC1DC59: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:47 STA @LOCAL03
    case 0xC1DC5B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:48 LDX CURRENT_ATTACKER
    case 0xC1DC5D: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:49 LDA a:battler::base_guts,X
    case 0xC1DC60: cpu.execute_instruction<0xBD>(0x000035, 3); return true;
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    case 0xC1DC63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1DC63.
    case 0xC1DC65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_weapon.asm:51 STA @VIRTUAL02
    case 0xC1DC66: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:52 LDX CURRENT_ATTACKER
    case 0xC1DC68: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:53 LDA a:battler::guts,X
    case 0xC1DC6B: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/actions/switch_weapon.asm:54 SEC
    case 0xC1DC6E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:55 SBC @VIRTUAL02
    case 0xC1DC6F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:56 STA @VIRTUAL04
    case 0xC1DC71: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:57 LDX CURRENT_ATTACKER
    case 0xC1DC73: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:58 LDA a:battler::action_item_slot,X
    case 0xC1DC76: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    case 0xC1DC79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1DC79.
    case 0xC1DC7B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:60 TAX
    case 0xC1DC7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:61 LDA @LOCAL05
    case 0xC1DC7D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:62 JSR EQUIP_ITEM
    case 0xC1DC7F: cpu.execute_instruction<0x20>(0x00911F, 3); return true;
    // src/battle/actions/switch_weapon.asm:63 LDY @LOCAL04
    case 0xC1DC82: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/actions/switch_weapon.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DC84: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:65 LDA a:char_struct::offense,Y
    case 0xC1DC86: cpu.execute_instruction<0xB9>(0x000014, 3); return true;
    // src/battle/actions/switch_weapon.asm:66 LDX CURRENT_ATTACKER
    case 0xC1DC89: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:67 STA a:battler::base_offense,X
    case 0xC1DC8C: cpu.execute_instruction<0x9D>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC1DC8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:69 LDA @LOCAL03
    case 0xC1DC91: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:70 STA @VIRTUAL02
    case 0xC1DC93: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:71 LDX CURRENT_ATTACKER
    case 0xC1DC95: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:72 LDA a:battler::base_offense,X
    case 0xC1DC98: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    case 0xC1DC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1DC9B.
    case 0xC1DC9D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:74 CLC
    case 0xC1DC9E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:75 ADC @VIRTUAL02
    case 0xC1DC9F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:76 LDX CURRENT_ATTACKER
    case 0xC1DCA1: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:77 STA a:battler::offense,X
    case 0xC1DCA4: cpu.execute_instruction<0x9D>(0x000026, 3); return true;
    // src/battle/actions/switch_weapon.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DCA7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:79 LDA a:char_struct::guts,Y
    case 0xC1DCA9: cpu.execute_instruction<0xB9>(0x000017, 3); return true;
    // src/battle/actions/switch_weapon.asm:80 LDX CURRENT_ATTACKER
    case 0xC1DCAC: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:81 STA a:battler::base_guts,X
    case 0xC1DCAF: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/battle/actions/switch_weapon.asm:82 LDX CURRENT_ATTACKER
    case 0xC1DCB2: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1DCB5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:84 LDA a:battler::base_guts,X
    case 0xC1DCB7: cpu.execute_instruction<0xBD>(0x000035, 3); return true;
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    case 0xC1DCBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC1DCBA.
    case 0xC1DCBC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:86 CLC
    case 0xC1DCBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:87 ADC @VIRTUAL04
    case 0xC1DCBE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:88 LDX CURRENT_ATTACKER
    case 0xC1DCC0: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/switch_weapon.asm:89 STA a:battler::guts,X
    case 0xC1DCC3: cpu.execute_instruction<0x9D>(0x00002C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00287B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DCC6.
    case 0xC1DCC8: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DCCB.
    case 0xC1DCCD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCCE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCD0: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/battle/actions/switch_weapon.asm:91 BRA @SKIPTEXT
    case 0xC1DCD4: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00289A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DCD6.
    case 0xC1DCD8: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCD9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DCDB.
    case 0xC1DCDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCDE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCE0: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/battle/actions/switch_weapon.asm:95 LDA @LOCAL05
    case 0xC1DCE4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:96 DEC
    case 0xC1DCE6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    case 0xC1DCE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DCE7.
    case 0xC1DCE9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/switch_weapon.asm:98 JSL MULT168
    case 0xC1DCEA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/actions/switch_weapon.asm:99 STA @LOCAL02
    case 0xC1DCEE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/switch_weapon.asm:100 TAX
    case 0xC1DCF0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:101 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1DCF1: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    case 0xC1DCF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC1DCF4.
    case 0xC1DCF6: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/actions/switch_weapon.asm:103 DEC
    case 0xC1DCF7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:104 STA @VIRTUAL02
    case 0xC1DCF8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:105 LDA @LOCAL02
    case 0xC1DCFA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/switch_weapon.asm:106 CLC
    case 0xC1DCFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1DCFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1DCFD.
    case 0xC1DCFF: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/actions/switch_weapon.asm:108 CLC
    case 0xC1DD00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    case 0xC1DD01: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DCFF.
    case 0xC1DD02: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:110 TAX
    case 0xC1DD03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:111 LDA __BSS_START__,X
    case 0xC1DD04: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    case 0xC1DD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC1DD07.
    case 0xC1DD09: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/switch_weapon.asm:113 BEQ @NOTSHOOT
    case 0xC1DD0A: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD0F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:115 CLC
    case 0xC1DD14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    case 0xC1DD15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    // Overlapping static entry reached from 0xC1DD15.
    case 0xC1DD17: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:117 TAX
    case 0xC1DD18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:118 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1DD19: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    case 0xC1DD1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1DD1D.
    case 0xC1DD1F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    case 0xC1DD20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    // Overlapping static entry reached from 0xC1DD20.
    case 0xC1DD22: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    case 0xC1DD23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    // Overlapping static entry reached from 0xC1DD23.
    case 0xC1DD25: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/switch_weapon.asm:122 BNE @NOTSHOOT
    case 0xC1DD26: cpu.execute_instruction<0xD0>(0x000054, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD28.
    case 0xC1DD2A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD2B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD2D.
    case 0xC1DD2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD30: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD32: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD34: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD36: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD38: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    case 0xC1DD3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DD3A.
    case 0xC1DD3C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:126 LDA [@VIRTUAL06],Y
    case 0xC1DD3D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:127 PHA
    case 0xC1DD3F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:128 INY
    case 0xC1DD40: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:129 INY
    case 0xC1DD41: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:130 LDA [@VIRTUAL06],Y
    case 0xC1DD42: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:131 STA @TMP+2
    case 0xC1DD44: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/actions/switch_weapon.asm:132 PLA
    case 0xC1DD46: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:133 STA @TMP
    case 0xC1DD47: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/actions/switch_weapon.asm:134 STA @LOCAL00
    case 0xC1DD49: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/switch_weapon.asm:135 LDA @TMP+2
    case 0xC1DD4B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/actions/switch_weapon.asm:136 STA @LOCAL00+2
    case 0xC1DD4D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/switch_weapon.asm:137 JSL DISPLAY_TEXT
    case 0xC1DD4F: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD53: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD57: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD59: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    case 0xC1DD5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DD5B.
    case 0xC1DD5D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:140 LDA [@VIRTUAL06],Y
    case 0xC1DD5E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:141 PHA
    case 0xC1DD60: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:142 INY
    case 0xC1DD61: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:143 INY
    case 0xC1DD62: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:144 LDA [@VIRTUAL06],Y
    case 0xC1DD63: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:145 STA @VIRTUAL06+2
    case 0xC1DD65: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:146 PLA
    case 0xC1DD67: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:147 STA @VIRTUAL06
    case 0xC1DD68: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:148 PHA
    case 0xC1DD6A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD6B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD6D: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD70: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD72: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/battle/actions/switch_weapon.asm:150 PLA
    case 0xC1DD75: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:151 JSL UNKNOWN_C09279
    case 0xC1DD76: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/actions/switch_weapon.asm:152 BRA @RETURN
    case 0xC1DD7A: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD7C.
    case 0xC1DD7E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD81.
    case 0xC1DD83: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD84: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD86: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD88: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD8A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD8C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    case 0xC1DD8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x000034, 3); return true;
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DD8E.
    case 0xC1DD90: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:157 LDA [@VIRTUAL06],Y
    case 0xC1DD91: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:158 PHA
    case 0xC1DD93: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:159 INY
    case 0xC1DD94: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:160 INY
    case 0xC1DD95: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:161 LDA [@VIRTUAL06],Y
    case 0xC1DD96: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:162 STA @TMP+2
    case 0xC1DD98: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/actions/switch_weapon.asm:163 PLA
    case 0xC1DD9A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:164 STA @TMP
    case 0xC1DD9B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/actions/switch_weapon.asm:165 STA @LOCAL00
    case 0xC1DD9D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/switch_weapon.asm:166 LDA @TMP+2
    case 0xC1DD9F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/actions/switch_weapon.asm:167 STA @LOCAL00+2
    case 0xC1DDA1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/switch_weapon.asm:168 JSL DISPLAY_TEXT
    case 0xC1DDA3: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDA7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDAB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDAD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    case 0xC1DDAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000038, 2); else cpu.execute_instruction<0xA0>(0x000038, 3); return true;
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DDAF.
    case 0xC1DDB1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:171 LDA [@VIRTUAL06],Y
    case 0xC1DDB2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:172 PHA
    case 0xC1DDB4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:173 INY
    case 0xC1DDB5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:174 INY
    case 0xC1DDB6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:175 LDA [@VIRTUAL06],Y
    case 0xC1DDB7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:176 STA @VIRTUAL06+2
    case 0xC1DDB9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:177 PLA
    case 0xC1DDBB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:178 STA @VIRTUAL06
    case 0xC1DDBC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:179 PHA
    case 0xC1DDBE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDBF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDC1: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDC6: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/battle/actions/switch_weapon.asm:181 PLA
    case 0xC1DDC9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:182 JSL UNKNOWN_C09279
    case 0xC1DDCA: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/actions/switch_weapon.asm:184 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DDCE: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1DDD1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1DDD2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/teleport_box.asm (source_named).
bool execute_battle_actions_teleport_box_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/teleport_box.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AB24: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB26: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB27: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AB28.
    case 0xC2AB2A: cpu.execute_instruction<0xFF>(0x2CAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB2B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC2AB2C: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC2AB2A.
    case 0xC2AB2E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC2AB2F: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/battle/actions/teleport_box.asm:11 JSL LOAD_SECTOR_ATTRS
    case 0xC2AB32: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    case 0xC2AB36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    // Overlapping static entry reached from 0xC2AB36.
    case 0xC2AB38: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB39: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB3B: cpu.execute_instruction<0x4C>(0x00ABCE, 3); return true;
    // src/battle/actions/teleport_box.asm:14 LDA BATTLE_MODE_FLAG
    case 0xC2AB3E: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/battle/actions/teleport_box.asm:15 BEQ @UNKNOWN1
    case 0xC2AB41: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/actions/teleport_box.asm:16 LDA #100
    case 0xC2AB43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/actions/teleport_box.asm:16 LDA #100
    // Overlapping static entry reached from 0xC2AB43.
    case 0xC2AB45: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:17 JSR RAND_LIMIT
    case 0xC2AB46: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/teleport_box.asm:18 STA @LOCAL02
    case 0xC2AB49: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/teleport_box.asm:19 LDX CURRENT_ATTACKER
    case 0xC2AB4B: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/teleport_box.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2AB4E: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    case 0xC2AB51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2AB51.
    case 0xC2AB53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB54: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB56: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB57: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:23 CLC
    case 0xC2AB5C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    case 0xC2AB5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC2AB5D.
    case 0xC2AB5F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/teleport_box.asm:25 TAX
    case 0xC2AB60: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2AB61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:27 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2AB63: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/actions/teleport_box.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC2AB67: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:29 SEC
    case 0xC2AB69: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    case 0xC2AB6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2AB6A.
    case 0xC2AB6C: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    case 0xC2AB6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    // Overlapping static entry reached from 0xC2AB6D.
    case 0xC2AB6F: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    case 0xC2AB70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    // Overlapping static entry reached from 0xC2AB70.
    case 0xC2AB72: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/battle/actions/teleport_box.asm:33 STA @VIRTUAL02
    case 0xC2AB73: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    case 0xC2AB75: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    // Overlapping static entry reached from 0xC2AB72.
    case 0xC2AB76: cpu.execute_instruction<0x14>(0x0000C5, 2); return true;
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    case 0xC2AB77: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC2AB76.
    case 0xC2AB78: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // src/battle/actions/teleport_box.asm:36 BCS @TELEPORT_BOX_FAILURE
    case 0xC2AB79: cpu.execute_instruction<0xB0>(0x000043, 2); return true;
    // src/battle/actions/teleport_box.asm:37 JSR BOSS_BATTLE_CHECK
    case 0xC2AB7B: cpu.execute_instruction<0x20>(0x00AAC7, 3); return true;
    // src/battle/actions/teleport_box.asm:38 CMP #0
    case 0xC2AB7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/teleport_box.asm:38 CMP #0
    // Overlapping static entry reached from 0xC2AB7E.
    case 0xC2AB80: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/teleport_box.asm:39 BEQ @TELEPORT_BOX_FAILURE
    case 0xC2AB81: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/actions/teleport_box.asm:41 LDX CURRENT_ATTACKER
    case 0xC2AB83: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/teleport_box.asm:42 LDA a:battler::action_item_slot,X
    case 0xC2AB86: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    case 0xC2AB89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC2AB89.
    case 0xC2AB8B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/teleport_box.asm:44 TAX
    case 0xC2AB8C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:45 STX @LOCAL01
    case 0xC2AB8D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/actions/teleport_box.asm:46 LDX CURRENT_ATTACKER
    case 0xC2AB8F: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/actions/teleport_box.asm:47 LDA a:battler::id,X
    case 0xC2AB92: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/teleport_box.asm:48 LDX @LOCAL01
    case 0xC2AB95: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/actions/teleport_box.asm:49 JSL REDIRECT_REMOVE_ITEM_FROM_INVENTORY
    case 0xC2AB97: cpu.execute_instruction<0x22>(0xC1DBA3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2AB9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001D1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2AB9B.
    case 0xC2AB9D: cpu.execute_instruction<0x1D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2AB9E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2ABA0.
    case 0xC2ABA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABA3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABA5: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/teleport_box.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ABA9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:52 LDA #TELEPORT_STYLE::INSTANT
    case 0xC2ABAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008503, 3); return true;
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    case 0xC2ABAD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    // Overlapping static entry reached from 0xC2ABAB.
    case 0xC2ABAE: cpu.execute_instruction<0x0E>(0x0069AD, 3); return true;
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    case 0xC2ABAF: cpu.execute_instruction<0xAD>(0x009B69, 3); return true;
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC2ABAE.
    case 0xC2ABB1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:55 JSL SET_TELEPORT_STATE
    case 0xC2ABB2: cpu.execute_instruction<0x22>(0xC0DD1B, 4); return true;
    // src/battle/actions/teleport_box.asm:57 LDA #1
    case 0xC2ABB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/teleport_box.asm:57 LDA #1
    // Overlapping static entry reached from 0xC2ABB6.
    case 0xC2ABB8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/actions/teleport_box.asm:58 STA SPECIAL_DEFEAT
    case 0xC2ABB9: cpu.execute_instruction<0x8D>(0x00ABE3, 3); return true;
    // src/battle/actions/teleport_box.asm:59 BRA @RETURN
    case 0xC2ABBC: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x001D60, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2ABBE.
    case 0xC2ABC0: cpu.execute_instruction<0x1D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2ABC3.
    case 0xC2ABC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC8: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/actions/teleport_box.asm:63 BRA @RETURN
    case 0xC2ABCC: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x001D9D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2ABCE.
    case 0xC2ABD0: cpu.execute_instruction<0x1D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2ABD3.
    case 0xC2ABD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD8: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2ABDC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2ABDD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/vitality_up_1d4.asm (source_named).
bool execute_battle_actions_vitality_up_1d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A184: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A186: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A187: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A188: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A188.
    case 0xC2A18A: cpu.execute_instruction<0xFF>(0x04A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A18B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:9 LDA #4
    case 0xC2A18C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:9 LDA #4
    // Overlapping static entry reached from 0xC2A18C.
    case 0xC2A18E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A18F: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:11 INC
    case 0xC2A192: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:12 STA @LOCAL02
    case 0xC2A193: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:13 LDA CURRENT_TARGET
    case 0xC2A195: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:14 CLC
    case 0xC2A198: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:15 ADC #battler::vitality
    case 0xC2A199: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:15 ADC #battler::vitality
    // Overlapping static entry reached from 0xC2A199.
    case 0xC2A19B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:16 TAX
    case 0xC2A19C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:17 LDA @LOCAL02
    case 0xC2A19D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A19F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:19 STA @VIRTUAL00
    case 0xC2A1A1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:20 LDA __BSS_START__,X
    case 0xC2A1A3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:21 CLC
    case 0xC2A1A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:22 ADC @VIRTUAL00
    case 0xC2A1A7: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:23 STA __BSS_START__,X
    case 0xC2A1A9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2A1AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A1AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x0036F8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1AE.
    case 0xC2A1B0: cpu.execute_instruction<0x36>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A1B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1B0.
    case 0xC2A1B2: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A1B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1B3.
    case 0xC2A1B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A1B6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1B8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1BC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1BE: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1C0: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1C4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1C8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:28 JSL DISPLAY_TEXT_WAIT
    case 0xC2A1CA: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:29 END_C_FUNCTION
    case 0xC2A1CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:29 END_C_FUNCTION
    case 0xC2A1CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/xterminator_spray.asm (source_named).
bool execute_battle_actions_xterminator_spray_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/xterminator_spray.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A9C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/xterminator_spray.asm:5 LDA #200
    case 0xC2A9CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/xterminator_spray.asm:5 LDA #200
    // Overlapping static entry reached from 0xC2A9CA.
    case 0xC2A9CC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/xterminator_spray.asm:6 JSR INSECT_SPRAY_COMMON
    case 0xC2A9CD: cpu.execute_instruction<0x20>(0x00A970, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/xterminator_spray.asm:7 END_C_FUNCTION
    case 0xC2A9D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/yogurt_dispenser.asm (source_named).
bool execute_battle_actions_yogurt_dispenser_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A81E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A820: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A821: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A822: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A822.
    case 0xC2A824: cpu.execute_instruction<0xFF>(0xFAA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A825: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/yogurt_dispenser.asm:7 LDA #250
    case 0xC2A826: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0000FA, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:7 LDA #250
    // Overlapping static entry reached from 0xC2A826.
    case 0xC2A828: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:8 JSR SUCCESS_SPEED
    case 0xC2A829: cpu.execute_instruction<0x20>(0x007C46, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:9 CMP #0
    case 0xC2A82C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2A82C.
    case 0xC2A82E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:10 BEQ @UNKNOWN0
    case 0xC2A82F: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:11 LDA #4
    case 0xC2A831: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:11 LDA #4
    // Overlapping static entry reached from 0xC2A831.
    case 0xC2A833: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:12 JSR RAND_LIMIT
    case 0xC2A834: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:13 LDX #$00FF
    case 0xC2A837: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:13 LDX #$00FF
    // Overlapping static entry reached from 0xC2A837.
    case 0xC2A839: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:14 INC
    case 0xC2A83A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/yogurt_dispenser.asm:15 JSR CALC_RESIST_DAMAGE
    case 0xC2A83B: cpu.execute_instruction<0x20>(0x0080CB, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:16 BRA @UNKNOWN1
    case 0xC2A83E: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A840: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A840.
    case 0xC2A842: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A843: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A845: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A845.
    case 0xC2A847: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A848: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A84A: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:20 END_C_FUNCTION
    case 0xC2A84E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:20 END_C_FUNCTION
    case 0xC2A84F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/apply_condiment.asm (source_named).
bool execute_battle_apply_condiment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/apply_condiment.asm:3 BEGIN_C_FUNCTION
    case 0xC2B126: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B128: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B129: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B12A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B12A.
    case 0xC2B12C: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B12D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    case 0xC2B12E: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2B12C.
    case 0xC2B130: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    case 0xC2B131: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/apply_condiment.asm:14 AND #$00FF
    case 0xC2B134: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2B134.
    case 0xC2B136: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/apply_condiment.asm:15 STA @VIRTUAL04
    case 0xC2B137: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:16 STA @LOCAL04
    case 0xC2B139: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/apply_condiment.asm:17 LDA @VIRTUAL04
    case 0xC2B13B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B13D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/apply_condiment.asm:19 JSL FIND_CONDIMENT
    case 0xC2B13F: cpu.execute_instruction<0x22>(0xC1D92E, 4); return true;
    // src/battle/apply_condiment.asm:21 STA @VIRTUAL02
    case 0xC2B143: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:22 CMP #$0000
    case 0xC2B145: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/apply_condiment.asm:22 CMP #$0000
    // Overlapping static entry reached from 0xC2B145.
    case 0xC2B147: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B148: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B14A: cpu.execute_instruction<0x4C>(0x00B20B, 3); return true;
    // src/battle/apply_condiment.asm:24 LDX @VIRTUAL02
    case 0xC2B14D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:25 STX @LOCAL03
    case 0xC2B14F: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/apply_condiment.asm:26 LDX CURRENT_ATTACKER
    case 0xC2B151: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/apply_condiment.asm:27 LDA a:battler::id,X
    case 0xC2B154: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/apply_condiment.asm:28 LDX @LOCAL03
    case 0xC2B157: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/apply_condiment.asm:29 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC2B159: cpu.execute_instruction<0x22>(0xC18F56, 4); return true;
    // src/battle/apply_condiment.asm:30 LDY #$0000
    case 0xC2B15D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/apply_condiment.asm:30 LDY #$0000
    // Overlapping static entry reached from 0xC2B15D.
    case 0xC2B15F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/apply_condiment.asm:31 STY @LOCAL02
    case 0xC2B160: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/battle/apply_condiment.asm:32 BRA @UNKNOWN4
    case 0xC2B162: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/battle/apply_condiment.asm:34 PHA
    case 0xC2B164: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:35 LDA @LOCAL04
    case 0xC2B165: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/apply_condiment.asm:36 STA @VIRTUAL04
    case 0xC2B167: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:37 PLA
    case 0xC2B169: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:38 AND #$00FF
    case 0xC2B16A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC2B16A.
    case 0xC2B16C: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/apply_condiment.asm:39 CMP @VIRTUAL04
    case 0xC2B16D: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:40 BNE @UNKNOWN3
    case 0xC2B16F: cpu.execute_instruction<0xD0>(0x00005C, 2); return true;
    // src/battle/apply_condiment.asm:41 TXA
    case 0xC2B171: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:42 INC
    case 0xC2B172: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B173: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B175: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B177: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B179: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/apply_condiment.asm:44 CLC
    case 0xC2B17B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:45 ADC @VIRTUAL0A
    case 0xC2B17C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:46 STA @VIRTUAL0A
    case 0xC2B17E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:47 LDA [@VIRTUAL0A]
    case 0xC2B180: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:48 AND #$00FF
    case 0xC2B182: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC2B182.
    case 0xC2B184: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/apply_condiment.asm:49 CMP @VIRTUAL02
    case 0xC2B185: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:50 BEQ @UNKNOWN2
    case 0xC2B187: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/apply_condiment.asm:51 TXA
    case 0xC2B189: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:52 INC
    case 0xC2B18A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:53 INC
    case 0xC2B18B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:54 CLC
    case 0xC2B18C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:55 ADC @VIRTUAL06
    case 0xC2B18D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:56 STA @VIRTUAL06
    case 0xC2B18F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:57 LDA [@VIRTUAL06]
    case 0xC2B191: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:58 AND #$00FF
    case 0xC2B193: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B20D.
    case 0xC2B194: cpu.execute_instruction<0xFF>(0x02C500, 4); return true;
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B193.
    case 0xC2B195: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/apply_condiment.asm:59 CMP @VIRTUAL02
    case 0xC2B196: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:60 BNE @UNKNOWN5
    case 0xC2B198: cpu.execute_instruction<0xD0>(0x000063, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B19A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00152F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B19A.
    case 0xC2B19C: cpu.execute_instruction<0x15>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B19D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B19C.
    case 0xC2B19E: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B19F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B19F.
    case 0xC2B1A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1A2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1A4: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x00E9D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1A8.
    case 0xC2B1AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1AA.
    case 0xC2B1AC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1AC.
    case 0xC2B1AE: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1AD.
    case 0xC2B1AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:65 LDY @LOCAL02
    case 0xC2B1B2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/battle/apply_condiment.asm:66 TYA
    case 0xC2B1B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1B5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1B8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1BB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:68 INC
    case 0xC2B1BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:69 INC
    case 0xC2B1BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:70 INC
    case 0xC2B1BF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:71 CLC
    case 0xC2B1C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:72 ADC @VIRTUAL06
    case 0xC2B1C1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:73 STA @VIRTUAL06
    case 0xC2B1C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:74 STA @RETURNVAL
    case 0xC2B1C5: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/apply_condiment.asm:75 LDA @VIRTUAL08
    case 0xC2B1C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:76 STA @RETURNVAL+2
    case 0xC2B1C9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/apply_condiment.asm:77 BRA @UNKNOWN7
    case 0xC2B1CB: cpu.execute_instruction<0x80>(0x000063, 2); return true;
    // src/battle/apply_condiment.asm:79 INY
    case 0xC2B1CD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:80 STY @LOCAL02
    case 0xC2B1CE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x00E9D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D0.
    case 0xC2B1D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D2.
    case 0xC2B1D4: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D4.
    case 0xC2B1D6: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D5.
    case 0xC2B1D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:83 TYA
    case 0xC2B1DA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1DB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1DE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1E1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:85 TAX
    case 0xC2B1E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:86 PHA
    case 0xC2B1E4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1E5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1E7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1EB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/apply_condiment.asm:88 PLA
    case 0xC2B1ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:89 CLC
    case 0xC2B1EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:90 ADC @VIRTUAL0A
    case 0xC2B1EF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:91 STA @VIRTUAL0A
    case 0xC2B1F1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:92 LDA [@VIRTUAL0A]
    case 0xC2B1F3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:93 AND #$00FF
    case 0xC2B1F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2B1F5.
    case 0xC2B1F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B1F8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B1FA: cpu.execute_instruction<0x4C>(0x00B164, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B1FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x001547, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B1FD.
    case 0xC2B1FF: cpu.execute_instruction<0x15>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B200: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B1FF.
    case 0xC2B201: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B202: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B202.
    case 0xC2B204: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B205: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B207: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B20B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B20B.
    case 0xC2B20D: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B20E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B20D.
    case 0xC2B20F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B20F.
    case 0xC2B211: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B210.
    case 0xC2B212: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B213: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:99 LDA @LOCAL04
    case 0xC2B215: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/apply_condiment.asm:100 STA @VIRTUAL04
    case 0xC2B217: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B219: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B220: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:102 CLC
    case 0xC2B221: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:103 ADC #item::params
    case 0xC2B222: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/apply_condiment.asm:103 ADC #item::params
    // Overlapping static entry reached from 0xC2B222.
    case 0xC2B224: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/apply_condiment.asm:104 CLC
    case 0xC2B225: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:105 ADC @VIRTUAL06
    case 0xC2B226: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:106 STA @VIRTUAL06
    case 0xC2B228: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:107 STA @RETURNVAL
    case 0xC2B22A: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/apply_condiment.asm:108 LDA @VIRTUAL08
    case 0xC2B22C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:109 STA @RETURNVAL+2
    case 0xC2B22E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B230: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B231: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/autohealing.asm (source_named).
bool execute_battle_autohealing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autohealing.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47532: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47534: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47535: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47536: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47537: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC47537.
    case 0xC47539: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4753A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4753B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/autohealing.asm:14 STX @LOCAL04
    case 0xC4753C: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/autohealing.asm:14 STX @LOCAL04
    // Overlapping static entry reached from 0xC47539.
    case 0xC4753D: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/battle/autohealing.asm:15 STA @LOCAL03
    case 0xC4753E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/autohealing.asm:15 STA @LOCAL03
    // Overlapping static entry reached from 0xC4753D.
    case 0xC4753F: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/battle/autohealing.asm:16 LDA #9999
    case 0xC47540: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00270F, 3); return true;
    // src/battle/autohealing.asm:16 LDA #9999
    // Overlapping static entry reached from 0xC4753F.
    case 0xC47541: cpu.execute_instruction<0x0F>(0x128527, 4); return true;
    // src/battle/autohealing.asm:16 LDA #9999
    // Overlapping static entry reached from 0xC47540.
    case 0xC47542: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // src/battle/autohealing.asm:17 STA @LOCAL02
    case 0xC47543: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autohealing.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xC47542.
    case 0xC47544: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/battle/autohealing.asm:18 LDA #$0000
    case 0xC47545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/autohealing.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC47544.
    case 0xC47546: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/autohealing.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC47545.
    case 0xC47547: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/autohealing.asm:19 STA @VIRTUAL04
    case 0xC47548: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/autohealing.asm:20 STA @VIRTUAL02
    case 0xC4754A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autohealing.asm:21 BRA @UNKNOWN3
    case 0xC4754C: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/battle/autohealing.asm:24 LDA @VIRTUAL02
    case 0xC4754E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autohealing.asm:25 CLC
    case 0xC47550: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/autohealing.asm:26 ADC #.LOWORD(GAME_STATE)
    case 0xC47551: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/autohealing.asm:26 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC47551.
    case 0xC47553: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:27 TAX
    case 0xC47554: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:28 LDA a:game_state::party_members,X
    case 0xC47555: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/autohealing.asm:33 AND #$00FF
    case 0xC47558: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autohealing.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC47558.
    case 0xC4755A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/autohealing.asm:34 TAY
    case 0xC4755B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/autohealing.asm:35 STY @LOCAL01
    case 0xC4755C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/autohealing.asm:36 CPY #PARTY_MEMBER::NESS
    case 0xC4755E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/battle/autohealing.asm:36 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC4755E.
    case 0xC47560: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autohealing.asm:37 BCC @UNKNOWN2
    case 0xC47561: cpu.execute_instruction<0x90>(0x00003D, 2); return true;
    // src/battle/autohealing.asm:38 CPY #PARTY_MEMBER::POO
    case 0xC47563: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/battle/autohealing.asm:38 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC47563.
    case 0xC47565: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autohealing.asm:39 BGT @UNKNOWN2
    case 0xC47566: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autohealing.asm:39 BGT @UNKNOWN2
    case 0xC47568: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/battle/autohealing.asm:40 TYA
    case 0xC4756A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/autohealing.asm:41 DEC
    case 0xC4756B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:42 LDY #.SIZEOF(char_struct)
    case 0xC4756C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/autohealing.asm:42 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4756C.
    case 0xC4756E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autohealing.asm:43 JSL MULT168
    case 0xC4756F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/autohealing.asm:44 TAX
    case 0xC47573: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:45 STX @LOCAL00
    case 0xC47574: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/autohealing.asm:46 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC47576: cpu.execute_instruction<0xBD>(0x009CDC, 3); return true;
    // src/battle/autohealing.asm:47 AND #$00FF
    case 0xC47579: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autohealing.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC47579.
    case 0xC4757B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/autohealing.asm:48 BNE @UNKNOWN2
    case 0xC4757C: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/autohealing.asm:49 TXA
    case 0xC4757E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:50 CLC
    case 0xC4757F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/autohealing.asm:51 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC47580: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/battle/autohealing.asm:51 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC47580.
    case 0xC47582: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/autohealing.asm:52 CLC
    case 0xC47583: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/autohealing.asm:53 ADC @LOCAL03
    case 0xC47584: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/battle/autohealing.asm:53 ADC @LOCAL03
    // Overlapping static entry reached from 0xC47582.
    case 0xC47585: cpu.execute_instruction<0x14>(0x0000AA, 2); return true;
    // src/battle/autohealing.asm:54 TAX
    case 0xC47586: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:55 LDA __BSS_START__,X
    case 0xC47587: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/autohealing.asm:56 AND #$00FF
    case 0xC4758A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autohealing.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC4758A.
    case 0xC4758C: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/autohealing.asm:57 CMP @LOCAL04
    case 0xC4758D: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/battle/autohealing.asm:58 BNE @UNKNOWN2
    case 0xC4758F: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/battle/autohealing.asm:59 LDX @LOCAL00
    case 0xC47591: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/autohealing.asm:60 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC47593: cpu.execute_instruction<0xBD>(0x009CC5, 3); return true;
    // src/battle/autohealing.asm:61 CMP @LOCAL02
    case 0xC47596: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/battle/autohealing.asm:62 BCS @UNKNOWN2
    case 0xC47598: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/autohealing.asm:63 STA @LOCAL02
    case 0xC4759A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autohealing.asm:64 LDY @LOCAL01
    case 0xC4759C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/autohealing.asm:65 STY @VIRTUAL04
    case 0xC4759E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/autohealing.asm:67 INC @VIRTUAL02
    case 0xC475A0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/autohealing.asm:69 LDA @VIRTUAL02
    case 0xC475A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autohealing.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC475A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/autohealing.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC475A4.
    case 0xC475A6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autohealing.asm:71 BCC @UNKNOWN0
    case 0xC475A7: cpu.execute_instruction<0x90>(0x0000A5, 2); return true;
    // src/battle/autohealing.asm:72 LDA @VIRTUAL04
    case 0xC475A9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autohealing.asm:73 BEQ @UNKNOWN4
    case 0xC475AB: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/autohealing.asm:74 LDA @VIRTUAL04
    case 0xC475AD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autohealing.asm:75 DEC
    case 0xC475AF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC475B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/autohealing.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC475B0.
    case 0xC475B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autohealing.asm:77 JSL MULT168
    case 0xC475B3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/autohealing.asm:78 TAX
    case 0xC475B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC475B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/autohealing.asm:80 LDA #$01
    case 0xC475BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/autohealing.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC475BC: cpu.execute_instruction<0x9D>(0x009CDC, 3); return true;
    // src/battle/autohealing.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC475BA.
    case 0xC475BD: cpu.execute_instruction<0xDC>(0x00C29C, 3); return true;
    // src/battle/autohealing.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC475BF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/autohealing.asm:84 LDA @VIRTUAL04
    case 0xC475C1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autohealing.asm:85 END_C_FUNCTION
    case 0xC475C3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autohealing.asm:85 END_C_FUNCTION
    case 0xC475C4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/autolifeup.asm (source_named).
bool execute_battle_autolifeup_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autolifeup.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC475C5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475C7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475C8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC475C9.
    case 0xC475CB: cpu.execute_instruction<0xFF>(0x0FA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475CC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:11 LDA #9999
    case 0xC475CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00270F, 3); return true;
    // src/battle/autolifeup.asm:11 LDA #9999
    // Overlapping static entry reached from 0xC475CD.
    case 0xC475CF: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    case 0xC475D0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    // Overlapping static entry reached from 0xC475CF.
    case 0xC475D1: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/battle/autolifeup.asm:13 LDA #$0000
    case 0xC475D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC475D1.
    case 0xC475D3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC475D2.
    case 0xC475D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/autolifeup.asm:14 STA @VIRTUAL04
    case 0xC475D5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:15 STA @VIRTUAL02
    case 0xC475D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:16 STA @LOCAL02
    case 0xC475D9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:17 BRA @UNKNOWN3
    case 0xC475DB: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/battle/autolifeup.asm:20 LDA @VIRTUAL02
    case 0xC475DD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:21 CLC
    case 0xC475DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:22 ADC #.LOWORD(GAME_STATE)
    case 0xC475E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/autolifeup.asm:22 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC475E0.
    case 0xC475E2: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:23 TAX
    case 0xC475E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:24 LDA a:game_state::party_members,X
    case 0xC475E4: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/autolifeup.asm:29 AND #$00FF
    case 0xC475E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autolifeup.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC475E7.
    case 0xC475E9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/autolifeup.asm:30 TAY
    case 0xC475EA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:31 STY @LOCAL01
    case 0xC475EB: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    case 0xC475ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC475ED.
    case 0xC475EF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autolifeup.asm:33 BCC @UNKNOWN2
    case 0xC475F0: cpu.execute_instruction<0x90>(0x000040, 2); return true;
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    case 0xC475F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC475F2.
    case 0xC475F4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC475F5: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC475F7: cpu.execute_instruction<0xB0>(0x000039, 2); return true;
    // src/battle/autolifeup.asm:36 TYA
    case 0xC475F9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:37 DEC
    case 0xC475FA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC475FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC475FB.
    case 0xC475FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autolifeup.asm:39 JSL MULT168
    case 0xC475FE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/autolifeup.asm:40 TAX
    case 0xC47602: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:41 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC47603: cpu.execute_instruction<0xBD>(0x009CDC, 3); return true;
    // src/battle/autolifeup.asm:42 AND #$00FF
    case 0xC47606: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autolifeup.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC47606.
    case 0xC47608: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/autolifeup.asm:43 BNE @UNKNOWN2
    case 0xC47609: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/battle/autolifeup.asm:44 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC4760B: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/battle/autolifeup.asm:45 AND #$00FF
    case 0xC4760E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autolifeup.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4760E.
    case 0xC47610: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    case 0xC47611: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC47611.
    case 0xC47613: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/autolifeup.asm:47 BEQ @UNKNOWN2
    case 0xC47614: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/battle/autolifeup.asm:48 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC47616: cpu.execute_instruction<0xBD>(0x009CC5, 3); return true;
    // src/battle/autolifeup.asm:49 STA @LOCAL00
    case 0xC47619: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/autolifeup.asm:50 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC4761B: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // src/battle/autolifeup.asm:51 LSR
    case 0xC4761E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:52 LSR
    case 0xC4761F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:53 STA @VIRTUAL02
    case 0xC47620: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:54 LDA @LOCAL00
    case 0xC47622: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/autolifeup.asm:55 CMP @VIRTUAL02
    case 0xC47624: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:56 BCS @UNKNOWN2
    case 0xC47626: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/battle/autolifeup.asm:57 CMP @LOCAL03
    case 0xC47628: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/battle/autolifeup.asm:58 BCS @UNKNOWN2
    case 0xC4762A: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/autolifeup.asm:59 STA @LOCAL03
    case 0xC4762C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/autolifeup.asm:60 LDY @LOCAL01
    case 0xC4762E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/autolifeup.asm:61 STY @VIRTUAL04
    case 0xC47630: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:63 LDA @LOCAL02
    case 0xC47632: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:64 STA @VIRTUAL02
    case 0xC47634: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:65 INC @VIRTUAL02
    case 0xC47636: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:66 LDA @VIRTUAL02
    case 0xC47638: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:67 STA @LOCAL02
    case 0xC4763A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:69 LDA @VIRTUAL02
    case 0xC4763C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC4763E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC4763E.
    case 0xC47640: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autolifeup.asm:71 BCC @UNKNOWN0
    case 0xC47641: cpu.execute_instruction<0x90>(0x00009A, 2); return true;
    // src/battle/autolifeup.asm:72 LDA @VIRTUAL04
    case 0xC47643: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:73 BEQ @UNKNOWN4
    case 0xC47645: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:74 LDA @VIRTUAL04
    case 0xC47647: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:75 DEC
    case 0xC47649: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC4764A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4764A.
    case 0xC4764C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autolifeup.asm:77 JSL MULT168
    case 0xC4764D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/autolifeup.asm:78 TAX
    case 0xC47651: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC47652: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/autolifeup.asm:80 LDA #$01
    case 0xC47654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC47656: cpu.execute_instruction<0x9D>(0x009CDC, 3); return true;
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC47654.
    case 0xC47657: cpu.execute_instruction<0xDC>(0x00C29C, 3); return true;
    // src/battle/autolifeup.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC47659: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/autolifeup.asm:84 LDA @VIRTUAL04
    case 0xC4765B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4765D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4765E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/battle_psi_menu.asm (source_named).
bool execute_battle_battle_psi_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/battle_psi_menu.asm:4 BEGIN_C_FUNCTION
    case 0xC1C98A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C98F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C98F.
    case 0xC1C991: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C992: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1C993: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    case 0xC1C994: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1C991.
    case 0xC1C995: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    case 0xC1C996: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    // Overlapping static entry reached from 0xC1C995.
    case 0xC1C997: cpu.execute_instruction<0x1E>(0x0010A9, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1C998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    // Overlapping static entry reached from 0xC1C998.
    case 0xC1C99A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1C99B: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    case 0xC1C99E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    // Overlapping static entry reached from 0xC1C99E.
    case 0xC1C9A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:30 STA @LOCAL05
    case 0xC1C9A1: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:31 BRA @UNKNOWN2
    case 0xC1C9A3: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/battle/battle_psi_menu.asm:33 TAX
    case 0xC1C9A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:34 INX
    case 0xC1C9A6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:35 STX @LOCAL04
    case 0xC1C9A7: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00EC1B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C9A9.
    case 0xC1C9AB: cpu.execute_instruction<0xEC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C9AE.
    case 0xC1C9B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1C9B1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:37 LDA @LOCAL05
    case 0xC1C9B3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1C9B9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:39 CLC
    case 0xC1C9BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:40 ADC @VIRTUAL06
    case 0xC1C9BC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:41 STA @VIRTUAL06
    case 0xC1C9BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:42 STA @LOCAL00
    case 0xC1C9C0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/battle_psi_menu.asm:43 LDA @VIRTUAL06+2
    case 0xC1C9C2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:44 STA @LOCAL00+2
    case 0xC1C9C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C9C6.
    case 0xC1C9C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9C9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C9CB.
    case 0xC1C9CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C9CE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/battle_psi_menu.asm:46 TXA
    case 0xC1C9D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:47 JSR UNKNOWN_C115F4
    case 0xC1C9D1: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/battle/battle_psi_menu.asm:48 LDX @LOCAL04
    case 0xC1C9D4: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:49 TXA
    case 0xC1C9D6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:50 STA @LOCAL05
    case 0xC1C9D7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    case 0xC1C9D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    // Overlapping static entry reached from 0xC1C9D9.
    case 0xC1C9DB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/battle_psi_menu.asm:53 BCC @UNKNOWN1
    case 0xC1C9DC: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    case 0xC1C9DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    // Overlapping static entry reached from 0xC1C9DE.
    case 0xC1C9E0: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/battle_psi_menu.asm:55 TYX
    case 0xC1C9E1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    case 0xC1C9E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    // Overlapping static entry reached from 0xC1C9E2.
    case 0xC1C9E4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:57 JSR UNKNOWN_C1180D
    case 0xC1C9E5: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    case 0xC1C9E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    // Overlapping static entry reached from 0xC1C9E8.
    case 0xC1C9EA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:60 JSR SET_WINDOW_FOCUS
    case 0xC1C9EB: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/battle/battle_psi_menu.asm:65 JSR PRINT_MENU_ITEMS
    case 0xC1C9EE: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00C8AE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1C9F1.
    case 0xC1C9F3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1C9F6.
    case 0xC1C9F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1C9F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:71 JSR UNKNOWN_C11F5A
    case 0xC1C9FB: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    case 0xC1C9FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    // Overlapping static entry reached from 0xC1C9FE.
    case 0xC1CA00: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:73 JSR SELECTION_MENU
    case 0xC1CA01: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/battle/battle_psi_menu.asm:74 STA @VIRTUAL02
    case 0xC1CA04: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:75 JSR UNKNOWN_C11F8A
    case 0xC1CA06: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/battle/battle_psi_menu.asm:76 LDA @VIRTUAL02
    case 0xC1CA09: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CA0B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CA0D: cpu.execute_instruction<0x4C>(0x00CC2B, 3); return true;
    // src/battle/battle_psi_menu.asm:78 LDA @LOCAL06
    case 0xC1CA10: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:79 STA @VIRTUAL04
    case 0xC1CA12: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:80 LDX @VIRTUAL04
    case 0xC1CA14: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:81 LDA a:battle_menu_selection::user,X
    case 0xC1CA16: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    case 0xC1CA19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1CA19.
    case 0xC1CA1B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/battle_psi_menu.asm:83 TAX
    case 0xC1CA1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:84 LDA @VIRTUAL02
    case 0xC1CA1D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:85 JSR UNKNOWN_C1CB7F
    case 0xC1CA1F: cpu.execute_instruction<0x20>(0x00C93C, 3); return true;
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    case 0xC1CA22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    // Overlapping static entry reached from 0xC1CA22.
    case 0xC1CA24: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/battle_psi_menu.asm:87 BEQ @UNKNOWN3
    case 0xC1CA25: cpu.execute_instruction<0xF0>(0x0000C1, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CA27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1CA27.
    case 0xC1CA29: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CA2A: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/battle/battle_psi_menu.asm:90 LDA @VIRTUAL02
    case 0xC1CA2D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:91 JSL UNKNOWN_C1CAF5
    case 0xC1CA2F: cpu.execute_instruction<0x22>(0xC1C8AE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E3, 2); else cpu.execute_instruction<0xA9>(0x00C6E3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CA33.
    case 0xC1CA35: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA36: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CA35.
    case 0xC1CA37: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CA38.
    case 0xC1CA3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CA3B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:93 JSR UNKNOWN_C11F5A
    case 0xC1CA3D: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    case 0xC1CA40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    // Overlapping static entry reached from 0xC1CA40.
    case 0xC1CA42: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:95 JSR SELECTION_MENU
    case 0xC1CA43: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/battle/battle_psi_menu.asm:96 TAY
    case 0xC1CA46: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:97 STY @LOCAL04_2
    case 0xC1CA47: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:98 JSR UNKNOWN_C11F8A
    case 0xC1CA49: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/battle/battle_psi_menu.asm:99 LDY @LOCAL04_2
    case 0xC1CA4C: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CA4E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CA50: cpu.execute_instruction<0x4C>(0x00CBBC, 3); return true;
    // src/battle/battle_psi_menu.asm:102 LDX #$0006
    case 0xC1CA53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/battle/battle_psi_menu.asm:102 LDX #$0006
    // Overlapping static entry reached from 0xC1CA53.
    case 0xC1CA55: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/battle/battle_psi_menu.asm:103 TYA
    case 0xC1CA56: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:104 JSR UNKNOWN_C1CA72
    case 0xC1CA57: cpu.execute_instruction<0x20>(0x00C869, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA5A.
    case 0xC1CA5C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA5F.
    case 0xC1CA61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CA62: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:108 LDY @LOCAL04_2
    case 0xC1CA64: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:110 TYA
    case 0xC1CA66: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA67: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CA70: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:112 TAX
    case 0xC1CA72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:113 INX
    case 0xC1CA73: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:114 INX
    case 0xC1CA74: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:115 INX
    case 0xC1CA75: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:116 INX
    case 0xC1CA76: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:117 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CA77: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA7B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA7E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CA81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:119 STA @LOCAL03
    case 0xC1CA82: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/battle_psi_menu.asm:120 LDA @LOCAL06
    case 0xC1CA84: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:121 STA @VIRTUAL04
    case 0xC1CA86: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:122 LDX @VIRTUAL04
    case 0xC1CA88: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:123 LDA a:battle_menu_selection::user,X
    case 0xC1CA8A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    case 0xC1CA8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC1CA8D.
    case 0xC1CA8F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/battle_psi_menu.asm:125 DEC
    case 0xC1CA90: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    case 0xC1CA91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CA91.
    case 0xC1CA93: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:127 JSL MULT168
    case 0xC1CA94: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/battle_psi_menu.asm:128 TAX
    case 0xC1CA98: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:129 LDA @LOCAL03
    case 0xC1CA99: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/battle_psi_menu.asm:130 INC
    case 0xC1CA9B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:131 INC
    case 0xC1CA9C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:132 INC
    case 0xC1CA9D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CA9E: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CAA0: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CAA2: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CAA4: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/battle_psi_menu.asm:134 CLC
    case 0xC1CAA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:135 ADC @VIRTUAL0A
    case 0xC1CAA7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/battle_psi_menu.asm:136 STA @VIRTUAL0A
    case 0xC1CAA9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/battle_psi_menu.asm:137 LDA [@VIRTUAL0A]
    case 0xC1CAAB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    case 0xC1CAAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC1CAAD.
    case 0xC1CAAF: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/battle_psi_menu.asm:139 CMP PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC1CAB0: cpu.execute_instruction<0xDD>(0x009CCB, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CAB3: cpu.execute_instruction<0x90>(0x00002A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CAB5: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CAB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1CAB7.
    case 0xC1CAB9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CABA: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    case 0xC1CABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    // Overlapping static entry reached from 0xC1CABD.
    case 0xC1CABF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:143 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1CAC0: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CAC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0038E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CAC3.
    case 0xC1CAC5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CAC6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CAC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CAC8.
    case 0xC1CACA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CACB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CACD: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/battle/battle_psi_menu.asm:145 JSR CLEAR_BLINKING_PROMPT
    case 0xC1CAD1: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // src/battle/battle_psi_menu.asm:146 JSR CLOSE_FOCUS_WINDOW
    case 0xC1CAD4: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    case 0xC1CAD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    // Overlapping static entry reached from 0xC1CAD7.
    case 0xC1CAD9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/battle_psi_menu.asm:148 STX @LOCAL02
    case 0xC1CADA: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:149 JMP @UNKNOWN15
    case 0xC1CADC: cpu.execute_instruction<0x4C>(0x00CBC1, 3); return true;
    // src/battle/battle_psi_menu.asm:151 LDA @LOCAL03
    case 0xC1CADF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/battle_psi_menu.asm:152 INC
    case 0xC1CAE1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:153 CLC
    case 0xC1CAE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:154 ADC @VIRTUAL06
    case 0xC1CAE3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:155 STA @VIRTUAL06
    case 0xC1CAE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:156 LDA [@VIRTUAL06]
    case 0xC1CAE7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    case 0xC1CAE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    // Overlapping static entry reached from 0xC1CAE9.
    case 0xC1CAEB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/battle_psi_menu.asm:158 TAX
    case 0xC1CAEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    case 0xC1CAED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    // Overlapping static entry reached from 0xC1CAED.
    case 0xC1CAEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/battle_psi_menu.asm:160 BEQ @UNKNOWN9
    case 0xC1CAF0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    case 0xC1CAF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    // Overlapping static entry reached from 0xC1CAF2.
    case 0xC1CAF4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/battle_psi_menu.asm:162 BNE @UNKNOWN10
    case 0xC1CAF5: cpu.execute_instruction<0xD0>(0x000055, 2); return true;
    // src/battle/battle_psi_menu.asm:164 LDY @LOCAL04_2
    case 0xC1CAF7: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:165 TYA
    case 0xC1CAF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CAFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB00: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB03: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:167 TAX
    case 0xC1CB05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:168 INX
    case 0xC1CB06: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:169 INX
    case 0xC1CB07: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:170 INX
    case 0xC1CB08: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:171 INX
    case 0xC1CB09: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:172 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CB0A: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB0E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB11: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:174 TAX
    case 0xC1CB15: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:175 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CB16: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    case 0xC1CB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    // Overlapping static entry reached from 0xC1CB1A.
    case 0xC1CB1C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/battle_psi_menu.asm:177 BNE @UNKNOWN10
    case 0xC1CB1D: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    case 0xC1CB1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    // Overlapping static entry reached from 0xC1CB1F.
    case 0xC1CB21: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:179 JSR CLOSE_WINDOW
    case 0xC1CB22: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    case 0xC1CB25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    // Overlapping static entry reached from 0xC1CB25.
    case 0xC1CB27: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:181 JSR CLOSE_WINDOW
    case 0xC1CB28: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    case 0xC1CB2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    // Overlapping static entry reached from 0xC1CB2B.
    case 0xC1CB2D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:183 JSR CLOSE_WINDOW
    case 0xC1CB2E: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CB31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1CB31.
    case 0xC1CB33: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CB34: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/battle/battle_psi_menu.asm:185 JSR SET_INSTANT_PRINTING
    case 0xC1CB37: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    case 0xC1CB3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    // Overlapping static entry reached from 0xC1CB3A.
    case 0xC1CB3C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:187 JSR UNKNOWN_C10FEA
    case 0xC1CB3D: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/battle/battle_psi_menu.asm:188 LDY @LOCAL04_2
    case 0xC1CB40: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:189 TYA
    case 0xC1CB42: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:190 JSR UNKNOWN_C1CA06
    case 0xC1CB43: cpu.execute_instruction<0x20>(0x00C810, 3); return true;
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    case 0xC1CB46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    // Overlapping static entry reached from 0xC1CB46.
    case 0xC1CB48: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:192 JSR UNKNOWN_C10FEA
    case 0xC1CB49: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CB4C.
    case 0xC1CB4E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CB51.
    case 0xC1CB53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CB54: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:195 LDY @LOCAL04_2
    case 0xC1CB56: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:196 TYA
    case 0xC1CB58: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB59: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB5F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CB62: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:198 INC
    case 0xC1CB64: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:199 INC
    case 0xC1CB65: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:200 INC
    case 0xC1CB66: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:201 INC
    case 0xC1CB67: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:202 CLC
    case 0xC1CB68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:203 ADC @VIRTUAL06
    case 0xC1CB69: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:204 STA @VIRTUAL06
    case 0xC1CB6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:205 LDA @LOCAL06
    case 0xC1CB6D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:206 STA @VIRTUAL04
    case 0xC1CB6F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:207 LDX @VIRTUAL04
    case 0xC1CB71: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:208 LDA a:battle_menu_selection::user,X
    case 0xC1CB73: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    case 0xC1CB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC1CB76.
    case 0xC1CB78: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/battle_psi_menu.asm:210 TAX
    case 0xC1CB79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:211 LDA [@VIRTUAL06]
    case 0xC1CB7A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:212 JSR DETERMINE_TARGETTING
    case 0xC1CB7C: cpu.execute_instruction<0x20>(0x00AC70, 3); return true;
    // src/battle/battle_psi_menu.asm:213 TAX
    case 0xC1CB7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:214 STX @LOCAL02
    case 0xC1CB80: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:215 LDA [@VIRTUAL06]
    case 0xC1CB82: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB84: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB87: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CB8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:217 TAX
    case 0xC1CB8B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:218 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CB8C: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    case 0xC1CB90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC1CB90.
    case 0xC1CB92: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/battle_psi_menu.asm:220 BNE @UNKNOWN11
    case 0xC1CB93: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    case 0xC1CB95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    // Overlapping static entry reached from 0xC1CB95.
    case 0xC1CB97: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:222 JSR CLOSE_WINDOW
    case 0xC1CB98: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:223 BRA @UNKNOWN12
    case 0xC1CB9B: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    case 0xC1CB9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    // Overlapping static entry reached from 0xC1CB9D.
    case 0xC1CB9F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:226 JSR CLOSE_WINDOW
    case 0xC1CBA0: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    case 0xC1CBA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    // Overlapping static entry reached from 0xC1CBA3.
    case 0xC1CBA5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:228 JSR CLOSE_WINDOW
    case 0xC1CBA6: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    case 0xC1CBA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    // Overlapping static entry reached from 0xC1CBA9.
    case 0xC1CBAB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:230 JSR CLOSE_WINDOW
    case 0xC1CBAC: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:232 LDX @LOCAL02
    case 0xC1CBAF: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:233 TXA
    case 0xC1CBB1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    case 0xC1CBB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC1CBB2.
    case 0xC1CBB4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CBB5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CBB7: cpu.execute_instruction<0x4C>(0x00C998, 3); return true;
    // src/battle/battle_psi_menu.asm:236 BRA @UNKNOWN15
    case 0xC1CBBA: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    case 0xC1CBBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    // Overlapping static entry reached from 0xC1CBBC.
    case 0xC1CBBE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/battle_psi_menu.asm:239 STX @LOCAL02
    case 0xC1CBBF: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    case 0xC1CBC1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    // Overlapping static entry reached from 0xC1CBC1.
    case 0xC1CBC3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CBC4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CBC6: cpu.execute_instruction<0x4C>(0x00CA27, 3); return true;
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    case 0xC1CBC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    // Overlapping static entry reached from 0xC1CBC9.
    case 0xC1CBCB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:244 JSR CLOSE_WINDOW
    case 0xC1CBCC: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:245 LDY @LOCAL04_2
    case 0xC1CBCF: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CBD1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CBD3: cpu.execute_instruction<0x4C>(0x00C9E8, 3); return true;
    // src/battle/battle_psi_menu.asm:247 TYA
    case 0xC1CBD6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CBD7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:249 LDX @LOCAL06
    case 0xC1CBD9: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:250 STX @VIRTUAL04
    case 0xC1CBDB: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:251 STA a:battle_menu_selection::param1,X
    case 0xC1CBDD: cpu.execute_instruction<0x9D>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC1CBE0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:253 TYA
    case 0xC1CBE2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBE9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CBEC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:255 TAX
    case 0xC1CBEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:256 INX
    case 0xC1CBEF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:257 INX
    case 0xC1CBF0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:258 INX
    case 0xC1CBF1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:259 INX
    case 0xC1CBF2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:260 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CBF3: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/battle/battle_psi_menu.asm:261 LDX @LOCAL06
    case 0xC1CBF7: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:262 STX @VIRTUAL04
    case 0xC1CBF9: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:263 STA a:battle_menu_selection::selected_action,X
    case 0xC1CBFB: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/battle/battle_psi_menu.asm:264 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CBFE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:265 LDA #$08
    case 0xC1CC00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x004808, 3); return true;
    // src/battle/battle_psi_menu.asm:266 PHA
    case 0xC1CC02: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:267 LDX @LOCAL02
    case 0xC1CC03: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:268 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC05: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:269 TXA
    case 0xC1CC07: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:270 SEP #PROC_FLAGS::INDEX8
    case 0xC1CC08: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:271 PLY
    case 0xC1CC0A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:272 JSL ASR8_UNKNOWN1
    case 0xC1CC0B: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/battle/battle_psi_menu.asm:273 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CC0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:274 REP #PROC_FLAGS::INDEX8
    case 0xC1CC11: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:275 LDX @VIRTUAL04
    case 0xC1CC13: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:276 STA a:battle_menu_selection::targetting,X
    case 0xC1CC15: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:277 LDX @LOCAL02
    case 0xC1CC18: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:278 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:279 TXA
    case 0xC1CC1C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:280 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CC1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:281 LDX @VIRTUAL04
    case 0xC1CC1F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:282 STA a:battle_menu_selection::selected_target,X
    case 0xC1CC21: cpu.execute_instruction<0x9D>(0x000005, 3); return true;
    // src/battle/battle_psi_menu.asm:283 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC24: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    case 0xC1CC26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    // Overlapping static entry reached from 0xC1CC26.
    case 0xC1CC28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:285 STA @VIRTUAL02
    case 0xC1CC29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    case 0xC1CC2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    // Overlapping static entry reached from 0xC1CC2B.
    case 0xC1CC2D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:288 JSR CLOSE_WINDOW
    case 0xC1CC2E: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    case 0xC1CC31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    // Overlapping static entry reached from 0xC1CC31.
    case 0xC1CC33: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:290 JSR CLOSE_WINDOW
    case 0xC1CC34: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/battle/battle_psi_menu.asm:291 LDA @VIRTUAL02
    case 0xC1CC37: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CC39: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CC3A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/battle_psi_menu_redirect.asm (source_named).
bool execute_battle_battle_psi_menu_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/battle_psi_menu_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DC00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/battle_psi_menu_redirect.asm:7 JSR BATTLE_PSI_MENU
    case 0xC1DC02: cpu.execute_instruction<0x20>(0x00C98A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/battle_psi_menu_redirect.asm:8 END_C_FUNCTION
    case 0xC1DC05: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/boss_battle_check.asm (source_named).
bool execute_battle_boss_battle_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/boss_battle_check.asm:3 BEGIN_C_FUNCTION
    case 0xC2AAC7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AAC9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AACA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AACB.
    case 0xC2AACD: cpu.execute_instruction<0xFF>(0xAEA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AACE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2AACF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2AACF.
    case 0xC2AAD1: cpu.execute_instruction<0xA1>(0x000086, 2); return true;
    // src/battle/boss_battle_check.asm:10 STX @LOCAL01
    case 0xC2AAD2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/boss_battle_check.asm:10 STX @LOCAL01
    // Overlapping static entry reached from 0xC2AAD1.
    case 0xC2AAD3: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    case 0xC2AAD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AAD3.
    case 0xC2AAD5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AAD4.
    case 0xC2AAD6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/boss_battle_check.asm:12 STY @LOCAL00
    case 0xC2AAD7: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/boss_battle_check.asm:13 BRA @BEGIN_LOOP
    case 0xC2AAD9: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/battle/boss_battle_check.asm:15 LDA a:battler::consciousness,X
    case 0xC2AADB: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    case 0xC2AADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2AADE.
    case 0xC2AAE0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/boss_battle_check.asm:17 BEQ @NOT_BOSS
    case 0xC2AAE1: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/boss_battle_check.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2AAE3: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    case 0xC2AAE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2AAE6.
    case 0xC2AAE8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    case 0xC2AAE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    // Overlapping static entry reached from 0xC2AAE9.
    case 0xC2AAEB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/boss_battle_check.asm:21 BNE @NOT_BOSS
    case 0xC2AAEC: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/battle/boss_battle_check.asm:22 LDA a:battler::id,X
    case 0xC2AAEE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    case 0xC2AAF1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2AAF1.
    case 0xC2AAF3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/boss_battle_check.asm:24 JSL MULT168
    case 0xC2AAF4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/boss_battle_check.asm:25 CLC
    case 0xC2AAF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    case 0xC2AAF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000045, 2); else cpu.execute_instruction<0x69>(0x000045, 3); return true;
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC2AAF9.
    case 0xC2AAFB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/boss_battle_check.asm:27 TAX
    case 0xC2AAFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:28 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2AAFD: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    case 0xC2AB01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2AB01.
    case 0xC2AB03: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/boss_battle_check.asm:30 BEQ @NOT_BOSS
    case 0xC2AB04: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    case 0xC2AB06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    // Overlapping static entry reached from 0xC2AB06.
    case 0xC2AB08: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/boss_battle_check.asm:32 BRA @RETURN
    case 0xC2AB09: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/boss_battle_check.asm:34 LDY @LOCAL00
    case 0xC2AB0B: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/boss_battle_check.asm:35 INY
    case 0xC2AB0D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:36 STY @LOCAL00
    case 0xC2AB0E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/boss_battle_check.asm:37 LDX @LOCAL01
    case 0xC2AB10: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/boss_battle_check.asm:38 TXA
    case 0xC2AB12: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:39 CLC
    case 0xC2AB13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    case 0xC2AB14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2AB14.
    case 0xC2AB16: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/boss_battle_check.asm:41 TAX
    case 0xC2AB17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:42 STX @LOCAL01
    case 0xC2AB18: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    case 0xC2AB1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    // Overlapping static entry reached from 0xC2AB1A.
    case 0xC2AB1C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/boss_battle_check.asm:45 BCC @NEXT_ENEMY
    case 0xC2AB1D: cpu.execute_instruction<0x90>(0x0000BC, 2); return true;
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    case 0xC2AB1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    // Overlapping static entry reached from 0xC2AB1F.
    case 0xC2AB21: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB22: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB23: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_damage.asm (source_named).
bool execute_battle_calc_damage_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_damage.asm:4 BEGIN_C_FUNCTION
    case 0xC27E46: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E48: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E49: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC27E4B.
    case 0xC27E4D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:18 STX @VIRTUAL04
    case 0xC27E50: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/calc_damage.asm:18 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC27E4D.
    case 0xC27E51: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/battle/calc_damage.asm:19 TAY
    case 0xC27E52: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:20 STY @LOCAL05
    case 0xC27E53: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:21 STZ @LOCAL04
    case 0xC27E55: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:22 LDA @VIRTUAL04
    case 0xC27E57: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/calc_damage.asm:23 BNE @UNKNOWN0
    case 0xC27E59: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x002DCB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27E5B.
    case 0xC27E5D: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E5E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27E60.
    case 0xC27E62: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E63: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E65: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/calc_damage.asm:25 LDA #0
    case 0xC27E69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:25 LDA #0
    // Overlapping static entry reached from 0xC27E69.
    case 0xC27E6B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/calc_damage.asm:26 JMP @RETURN
    case 0xC27E6C: cpu.execute_instruction<0x4C>(0x0080C9, 3); return true;
    // src/battle/calc_damage.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27E6F: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:29 AND #$00FF
    case 0xC27E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC27E72.
    case 0xC27E74: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage.asm:30 CMP #1
    case 0xC27E75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:30 CMP #1
    // Overlapping static entry reached from 0xC27E75.
    case 0xC27E77: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:31 BNE @UNKNOWN2
    case 0xC27E78: cpu.execute_instruction<0xD0>(0x000065, 2); return true;
    // src/battle/calc_damage.asm:32 LDA __BSS_START__ + battler::id,Y
    case 0xC27E7A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:33 CMP #ENEMY::GIYGAS_2
    case 0xC27E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DA, 2); else cpu.execute_instruction<0xC9>(0x0000DA, 3); return true;
    // src/battle/calc_damage.asm:33 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC27E7D.
    case 0xC27E7F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:34 BNE @UNKNOWN2
    case 0xC27E80: cpu.execute_instruction<0xD0>(0x00005D, 2); return true;
    // src/battle/calc_damage.asm:35 LDA #$0001
    case 0xC27E82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:35 LDA #$0001
    // Overlapping static entry reached from 0xC27E82.
    case 0xC27E84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage.asm:36 STA @LOCAL04
    case 0xC27E85: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:37 LDA CURRENT_TARGET
    case 0xC27E87: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/calc_damage.asm:38 STA @LOCAL03
    case 0xC27E8A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/calc_damage.asm:40 JSL RAND
    case 0xC27E8C: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/calc_damage.asm:41 AND #$0003
    case 0xC27E90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/calc_damage.asm:41 AND #$0003
    // Overlapping static entry reached from 0xC27E90.
    case 0xC27E92: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/calc_damage.asm:42 LDY #.SIZEOF(battler)
    case 0xC27E93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/calc_damage.asm:42 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27E93.
    case 0xC27E95: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:43 JSL MULT168
    case 0xC27E96: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_damage.asm:44 CLC
    case 0xC27E9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:45 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC27E9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/calc_damage.asm:45 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27E9B.
    case 0xC27E9D: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/calc_damage.asm:46 TAX
    case 0xC27E9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:47 STX CURRENT_TARGET
    case 0xC27E9F: cpu.execute_instruction<0x8E>(0x00AB74, 3); return true;
    // src/battle/calc_damage.asm:48 LDA __BSS_START__ + battler::consciousness,X
    case 0xC27EA2: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/calc_damage.asm:49 AND #$00FF
    case 0xC27EA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC27EA5.
    case 0xC27EA7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:50 BEQ @UNKNOWN1
    case 0xC27EA8: cpu.execute_instruction<0xF0>(0x0000E2, 2); return true;
    // src/battle/calc_damage.asm:51 LDA __BSS_START__ + battler::npc_id,X
    case 0xC27EAA: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/calc_damage.asm:52 AND #$00FF
    case 0xC27EAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC27EAD.
    case 0xC27EAF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:53 BNE @UNKNOWN1
    case 0xC27EB0: cpu.execute_instruction<0xD0>(0x0000DA, 2); return true;
    // src/battle/calc_damage.asm:54 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27EB2: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/calc_damage.asm:55 AND #$00FF
    case 0xC27EB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC27EB5.
    case 0xC27EB7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_damage.asm:56 TAX
    case 0xC27EB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:57 CPX #STATUS_0::UNCONSCIOUS
    case 0xC27EB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:57 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27EB9.
    case 0xC27EBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:58 BEQ @UNKNOWN1
    case 0xC27EBC: cpu.execute_instruction<0xF0>(0x0000CE, 2); return true;
    // src/battle/calc_damage.asm:59 CPX #STATUS_0::DIAMONDIZED
    case 0xC27EBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/calc_damage.asm:59 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC27EBE.
    case 0xC27EC0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:60 BEQ @UNKNOWN1
    case 0xC27EC1: cpu.execute_instruction<0xF0>(0x0000C9, 2); return true;
    // src/battle/calc_damage.asm:61 JSL FIX_TARGET_NAME
    case 0xC27EC3: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/calc_damage.asm:62 LDY CURRENT_TARGET
    case 0xC27EC7: cpu.execute_instruction<0xAC>(0x00AB74, 3); return true;
    // src/battle/calc_damage.asm:63 STY @LOCAL05
    case 0xC27ECA: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:64 LDA #$0010
    case 0xC27ECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/calc_damage.asm:64 LDA #$0010
    // Overlapping static entry reached from 0xC27ECC.
    case 0xC27ECE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:65 STA REFLECT_FLASH_DURATION
    case 0xC27ECF: cpu.execute_instruction<0x8D>(0x00AF7D, 3); return true;
    // src/battle/calc_damage.asm:66 LDA #SFX::REFLECT_DAMAGE
    case 0xC27ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/battle/calc_damage.asm:66 LDA #SFX::REFLECT_DAMAGE
    // Overlapping static entry reached from 0xC27ED2.
    case 0xC27ED4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:67 JSL PLAY_SOUND
    case 0xC27ED5: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/battle/calc_damage.asm:68 LDA #1*HALF_OF_A_SECOND
    case 0xC27ED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/battle/calc_damage.asm:68 LDA #1*HALF_OF_A_SECOND
    // Overlapping static entry reached from 0xC27ED9.
    case 0xC27EDB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/calc_damage.asm:69 JSR WAIT
    case 0xC27EDC: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/calc_damage.asm:71 LDY @LOCAL05
    case 0xC27EDF: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:72 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC27EE1: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/calc_damage.asm:73 STA @VIRTUAL02
    case 0xC27EE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:74 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27EE6: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:75 AND #$00FF
    case 0xC27EE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC27EE9.
    case 0xC27EEB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:76 BEQ @UNKNOWN3
    case 0xC27EEC: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/calc_damage.asm:77 LDA __BSS_START__ + battler::id,Y
    case 0xC27EEE: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:78 CMP #ENEMY::MASTER_BELCH_1
    case 0xC27EF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00005D, 2); else cpu.execute_instruction<0xC9>(0x00005D, 3); return true;
    // src/battle/calc_damage.asm:78 CMP #ENEMY::MASTER_BELCH_1
    // Overlapping static entry reached from 0xC27EF1.
    case 0xC27EF3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:79 BEQ @UNKNOWN4
    case 0xC27EF4: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/calc_damage.asm:80 CMP #ENEMY::MASTER_BELCH_3
    case 0xC27EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/battle/calc_damage.asm:80 CMP #ENEMY::MASTER_BELCH_3
    // Overlapping static entry reached from 0xC27EF6.
    case 0xC27EF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:81 BEQ @UNKNOWN4
    case 0xC27EF9: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:82 CMP #ENEMY::GIYGAS_2
    case 0xC27EFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DA, 2); else cpu.execute_instruction<0xC9>(0x0000DA, 3); return true;
    // src/battle/calc_damage.asm:82 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC27EFB.
    case 0xC27EFD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:83 BEQ @UNKNOWN4
    case 0xC27EFE: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/calc_damage.asm:84 CMP #ENEMY::GIYGAS_3
    case 0xC27F00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0000DB, 3); return true;
    // src/battle/calc_damage.asm:84 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27F00.
    case 0xC27F02: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:85 BEQ @UNKNOWN4
    case 0xC27F03: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/calc_damage.asm:86 CMP #ENEMY::GIYGAS_5
    case 0xC27F05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DD, 2); else cpu.execute_instruction<0xC9>(0x0000DD, 3); return true;
    // src/battle/calc_damage.asm:86 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC27F05.
    case 0xC27F07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:87 BEQ @UNKNOWN4
    case 0xC27F08: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/calc_damage.asm:88 CMP #ENEMY::GIYGAS_6
    case 0xC27F0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/battle/calc_damage.asm:88 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27F0A.
    case 0xC27F0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:89 BEQ @UNKNOWN4
    case 0xC27F0D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/calc_damage.asm:91 LDX @VIRTUAL04
    case 0xC27F0F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/calc_damage.asm:92 TYA
    case 0xC27F11: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:93 JSR REDUCE_HP
    case 0xC27F12: cpu.execute_instruction<0x20>(0x007133, 3); return true;
    // src/battle/calc_damage.asm:95 LDY @LOCAL05
    case 0xC27F15: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:96 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27F17: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:97 AND #$00FF
    case 0xC27F1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC27F1A.
    case 0xC27F1C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:98 BNE @UNKNOWN8
    case 0xC27F1D: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/battle/calc_damage.asm:99 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC27F1F: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/calc_damage.asm:100 BNE @UNKNOWN7
    case 0xC27F22: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/battle/calc_damage.asm:101 LDA @VIRTUAL02
    case 0xC27F24: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:102 CMP #$0001
    case 0xC27F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:102 CMP #$0001
    // Overlapping static entry reached from 0xC27F26.
    case 0xC27F28: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/calc_damage.asm:103 BLTEQ @UNKNOWN7
    case 0xC27F29: cpu.execute_instruction<0x90>(0x000025, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/calc_damage.asm:103 BLTEQ @UNKNOWN7
    case 0xC27F2B: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/calc_damage.asm:104 LDX CURRENT_ATTACKER
    case 0xC27F2D: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/calc_damage.asm:105 LDA __BSS_START__ + battler::guts,X
    case 0xC27F30: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/calc_damage.asm:106 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC27F33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/battle/calc_damage.asm:106 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC27F33.
    case 0xC27F35: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/calc_damage.asm:107 BCS @UNKNOWN5
    case 0xC27F36: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/calc_damage.asm:108 LDX #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC27F38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/battle/calc_damage.asm:108 LDX #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC27F38.
    case 0xC27F3A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/calc_damage.asm:109 BRA @UNKNOWN6
    case 0xC27F3B: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/battle/calc_damage.asm:111 TAX
    case 0xC27F3D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:113 TXA
    case 0xC27F3E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:114 JSR SUCCESS_500
    case 0xC27F3F: cpu.execute_instruction<0x20>(0x006B1A, 3); return true;
    // src/battle/calc_damage.asm:115 CMP #$0000
    case 0xC27F42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:115 CMP #$0000
    // Overlapping static entry reached from 0xC27F42.
    case 0xC27F44: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:116 BEQ @UNKNOWN7
    case 0xC27F45: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/calc_damage.asm:117 LDX #$0001
    case 0xC27F47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:117 LDX #$0001
    // Overlapping static entry reached from 0xC27F47.
    case 0xC27F49: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/calc_damage.asm:118 LDY @LOCAL05
    case 0xC27F4A: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:119 TYA
    case 0xC27F4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:120 JSR SET_HP
    case 0xC27F4D: cpu.execute_instruction<0x20>(0x007065, 3); return true;
    // src/battle/calc_damage.asm:122 LDA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC27F50: cpu.execute_instruction<0xAD>(0x00AC65, 3); return true;
    // src/battle/calc_damage.asm:123 BEQ @UNKNOWN8
    case 0xC27F53: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/calc_damage.asm:124 LDA #$0001
    case 0xC27F55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:124 LDA #$0001
    // Overlapping static entry reached from 0xC27F55.
    case 0xC27F57: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:125 JSL COUNT_CHARS
    case 0xC27F58: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/calc_damage.asm:126 CMP #$0001
    case 0xC27F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:126 CMP #$0001
    // Overlapping static entry reached from 0xC27F5C.
    case 0xC27F5E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:127 BNE @UNKNOWN8
    case 0xC27F5F: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/calc_damage.asm:128 LDA #$0000
    case 0xC27F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:128 LDA #$0000
    // Overlapping static entry reached from 0xC27F61.
    case 0xC27F63: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:129 JSL COUNT_CHARS
    case 0xC27F64: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/calc_damage.asm:130 CMP #$0001
    case 0xC27F68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:130 CMP #$0001
    // Overlapping static entry reached from 0xC27F68.
    case 0xC27F6A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:131 BNE @UNKNOWN8
    case 0xC27F6B: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/calc_damage.asm:132 LDX #$0001
    case 0xC27F6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:132 LDX #$0001
    // Overlapping static entry reached from 0xC27F6D.
    case 0xC27F6F: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/calc_damage.asm:133 LDY @LOCAL05
    case 0xC27F70: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:134 TYA
    case 0xC27F72: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:135 JSR SET_HP
    case 0xC27F73: cpu.execute_instruction<0x20>(0x007065, 3); return true;
    // src/battle/calc_damage.asm:137 LDY @LOCAL05
    case 0xC27F76: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/calc_damage.asm:138 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27F78: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:139 AND #$00FF
    case 0xC27F7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:139 AND #$00FF
    // Overlapping static entry reached from 0xC27F7B.
    case 0xC27F7D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage.asm:140 CMP #$0001
    case 0xC27F7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:140 CMP #$0001
    // Overlapping static entry reached from 0xC27F7E.
    case 0xC27F80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:141 BNE @UNKNOWN12
    case 0xC27F81: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/battle/calc_damage.asm:142 LDA __BSS_START__ + battler::id,Y
    case 0xC27F83: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:143 CMP #ENEMY::GIYGAS_3
    case 0xC27F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0000DB, 3); return true;
    // src/battle/calc_damage.asm:143 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27F86.
    case 0xC27F88: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:144 BEQ @UNKNOWN9
    case 0xC27F89: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/calc_damage.asm:145 CMP #ENEMY::GIYGAS_4
    case 0xC27F8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DC, 2); else cpu.execute_instruction<0xC9>(0x0000DC, 3); return true;
    // src/battle/calc_damage.asm:145 CMP #ENEMY::GIYGAS_4
    // Overlapping static entry reached from 0xC27F8B.
    case 0xC27F8D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:146 BEQ @UNKNOWN9
    case 0xC27F8E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/calc_damage.asm:147 CMP #ENEMY::GIYGAS_5
    case 0xC27F90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DD, 2); else cpu.execute_instruction<0xC9>(0x0000DD, 3); return true;
    // src/battle/calc_damage.asm:147 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC27F90.
    case 0xC27F92: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:148 BEQ @UNKNOWN9
    case 0xC27F93: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/calc_damage.asm:149 CMP #ENEMY::GIYGAS_6
    case 0xC27F95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/battle/calc_damage.asm:149 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27F95.
    case 0xC27F97: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:150 BNE @UNKNOWN10
    case 0xC27F98: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/calc_damage.asm:152 LDA #$0010
    case 0xC27F9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/calc_damage.asm:152 LDA #$0010
    // Overlapping static entry reached from 0xC27F9A.
    case 0xC27F9C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:153 STA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC27F9D: cpu.execute_instruction<0x8D>(0x00AF7F, 3); return true;
    // src/battle/calc_damage.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC27FA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage.asm:156 LDA #$0015
    case 0xC27FA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x009915, 3); return true;
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    case 0xC27FA4: cpu.execute_instruction<0x99>(0x000048, 3); return true;
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    // Overlapping static entry reached from 0xC27FA2.
    case 0xC27FA5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    // Overlapping static entry reached from 0xC27FA5.
    case 0xC27FA6: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/calc_damage.asm:158 REP #PROC_FLAGS::ACCUM8
    case 0xC27FA7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_damage.asm:159 LDA IS_SMAAAAASH_ATTACK
    case 0xC27FA9: cpu.execute_instruction<0xAD>(0x00AC63, 3); return true;
    // src/battle/calc_damage.asm:160 BEQ @UNKNOWN11
    case 0xC27FAC: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x002D5E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FAE.
    case 0xC27FB0: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FB3.
    case 0xC27FB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FB6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FB8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FBC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FBE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FC0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FC2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FC4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:164 JSL DISPLAY_TEXT_WAIT
    case 0xC27FC6: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/calc_damage.asm:165 STZ IS_SMAAAAASH_ATTACK
    case 0xC27FCA: cpu.execute_instruction<0x9C>(0x00AC63, 3); return true;
    // src/battle/calc_damage.asm:166 JMP @UNKNOWN20
    case 0xC27FCD: cpu.execute_instruction<0x4C>(0x0080B9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000036, 2); else cpu.execute_instruction<0xA9>(0x002D36, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FD0.
    case 0xC27FD2: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FD5.
    case 0xC27FD7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FDA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FDC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FDE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:171 JSL DISPLAY_TEXT_WAIT
    case 0xC27FE8: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/calc_damage.asm:172 JMP @UNKNOWN20
    case 0xC27FEC: cpu.execute_instruction<0x4C>(0x0080B9, 3); return true;
    // src/battle/calc_damage.asm:174 LDA __BSS_START__ + battler::npc_id,Y
    case 0xC27FEF: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/calc_damage.asm:175 AND #$00FF
    case 0xC27FF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:175 AND #$00FF
    // Overlapping static entry reached from 0xC27FF2.
    case 0xC27FF4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:176 BNE @UNKNOWN16
    case 0xC27FF5: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/battle/calc_damage.asm:177 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC27FF7: cpu.execute_instruction<0xAD>(0x00AF79, 3); return true;
    // src/battle/calc_damage.asm:178 BNE @UNKNOWN16
    case 0xC27FFA: cpu.execute_instruction<0xD0>(0x000034, 2); return true;
    // src/battle/calc_damage.asm:179 LDA #$0015
    case 0xC27FFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/calc_damage.asm:179 LDA #$0015
    // Overlapping static entry reached from 0xC27FFC.
    case 0xC27FFE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:180 STA HP_PP_BOX_BLINK_DURATION
    case 0xC27FFF: cpu.execute_instruction<0x8D>(0x00AF79, 3); return true;
    // src/battle/calc_damage.asm:182 LDA #$0000
    case 0xC28002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:182 LDA #$0000
    // Overlapping static entry reached from 0xC28002.
    case 0xC28004: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage.asm:183 STA @LOCAL02
    case 0xC28005: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:187 BRA @UNKNOWN15
    case 0xC28007: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:189 LDA __BSS_START__ + battler::id,Y
    case 0xC28009: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:190 STA @VIRTUAL02
    case 0xC2800C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:192 LDA @LOCAL02
    case 0xC2800E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:193 CLC
    case 0xC28010: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:194 ADC #.LOWORD(GAME_STATE)
    case 0xC28011: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/calc_damage.asm:194 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC28011.
    case 0xC28013: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:195 TAX
    case 0xC28014: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:196 LDA a:game_state::party_members,X
    case 0xC28015: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/calc_damage.asm:197 AND #$00FF
    case 0xC28018: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:197 AND #$00FF
    // Overlapping static entry reached from 0xC28018.
    case 0xC2801A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/calc_damage.asm:198 CMP @VIRTUAL02
    case 0xC2801B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:199 BNE @UNKNOWN14
    case 0xC2801D: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/calc_damage.asm:200 LDA @LOCAL02
    case 0xC2801F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:201 STA HP_PP_BOX_BLINK_TARGET
    case 0xC28021: cpu.execute_instruction<0x8D>(0x00AF7B, 3); return true;
    // src/battle/calc_damage.asm:209 BRA @UNKNOWN16
    case 0xC28024: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/calc_damage.asm:212 LDA @LOCAL02
    case 0xC28026: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:213 INC
    case 0xC28028: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:214 STA @LOCAL02
    case 0xC28029: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:220 CMP #TOTAL_PARTY_COUNT
    case 0xC2802B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/calc_damage.asm:220 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2802B.
    case 0xC2802D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/calc_damage.asm:224 BCC @UNKNOWN13
    case 0xC2802E: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/calc_damage.asm:226 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC28030: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/calc_damage.asm:227 BNE @TARGET_SURVIVED
    case 0xC28033: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/battle/calc_damage.asm:228 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL
    case 0xC28035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/calc_damage.asm:228 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL
    // Overlapping static entry reached from 0xC28035.
    case 0xC28037: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:229 STA VERTICAL_SHAKE_DURATION
    case 0xC28038: cpu.execute_instruction<0x8D>(0x00AF61, 3); return true;
    // src/battle/calc_damage.asm:230 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL_HOLD
    case 0xC2803B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/battle/calc_damage.asm:230 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL_HOLD
    // Overlapping static entry reached from 0xC2803B.
    case 0xC2803D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:231 STA VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2803E: cpu.execute_instruction<0x8D>(0x00AF63, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28041: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000072, 2); else cpu.execute_instruction<0xA9>(0x002D72, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC28041.
    case 0xC28043: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28044: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28046: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC28046.
    case 0xC28048: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28049: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2804B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2804D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2804F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28051: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28053: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28055: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28057: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:235 JSL DISPLAY_TEXT_WAIT
    case 0xC28059: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/calc_damage.asm:236 BRA @UNKNOWN19
    case 0xC2805D: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/battle/calc_damage.asm:238 LDA IS_SMAAAAASH_ATTACK
    case 0xC2805F: cpu.execute_instruction<0xAD>(0x00AC63, 3); return true;
    // src/battle/calc_damage.asm:239 BEQ @UNKNOWN18
    case 0xC28062: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/calc_damage.asm:240 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR
    case 0xC28064: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/calc_damage.asm:240 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR
    // Overlapping static entry reached from 0xC28064.
    case 0xC28066: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:241 STA VERTICAL_SHAKE_DURATION
    case 0xC28067: cpu.execute_instruction<0x8D>(0x00AF61, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC2806A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x002D4A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC2806A.
    case 0xC2806C: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC2806D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC2806F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC2806F.
    case 0xC28071: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC28072: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28074: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28076: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28078: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2807A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2807C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2807E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28080: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:245 JSL DISPLAY_TEXT_WAIT
    case 0xC28082: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/calc_damage.asm:246 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC28086: cpu.execute_instruction<0x9C>(0x00AF63, 3); return true;
    // src/battle/calc_damage.asm:247 STZ IS_SMAAAAASH_ATTACK
    case 0xC28089: cpu.execute_instruction<0x9C>(0x00AC63, 3); return true;
    // src/battle/calc_damage.asm:248 BRA @UNKNOWN19
    case 0xC2808C: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/battle/calc_damage.asm:250 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR_UNKNOWN
    case 0xC2808E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00002A, 3); return true;
    // src/battle/calc_damage.asm:250 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR_UNKNOWN
    // Overlapping static entry reached from 0xC2808E.
    case 0xC28090: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:251 STA VERTICAL_SHAKE_DURATION
    case 0xC28091: cpu.execute_instruction<0x8D>(0x00AF61, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC28094: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x002D22, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC28094.
    case 0xC28096: cpu.execute_instruction<0x2D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC28097: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC28099: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC28099.
    case 0xC2809B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC2809C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2809E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC2B5FD.
    case 0xC280A9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280AA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:255 JSL DISPLAY_TEXT_WAIT
    case 0xC280AC: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/calc_damage.asm:256 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC280B0: cpu.execute_instruction<0x9C>(0x00AF63, 3); return true;
    // src/battle/calc_damage.asm:258 LDA #$0028
    case 0xC280B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/battle/calc_damage.asm:258 LDA #$0028
    // Overlapping static entry reached from 0xC280B3.
    case 0xC280B5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:259 STA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC280B6: cpu.execute_instruction<0x8D>(0x00AF65, 3); return true;
    // src/battle/calc_damage.asm:261 LDA @LOCAL04
    case 0xC280B9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:262 BEQ @UNKNOWN21
    case 0xC280BB: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/calc_damage.asm:263 LDA @LOCAL03
    case 0xC280BD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/calc_damage.asm:264 STA CURRENT_TARGET
    case 0xC280BF: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/calc_damage.asm:265 JSL FIX_TARGET_NAME
    case 0xC280C2: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/calc_damage.asm:267 LDA #$0001
    case 0xC280C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:267 LDA #$0001
    // Overlapping static entry reached from 0xC280C6.
    case 0xC280C8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_damage.asm:269 END_C_FUNCTION
    case 0xC280C9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/calc_damage.asm:269 END_C_FUNCTION
    case 0xC280CA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_damage_reduction.asm (source_named).
bool execute_battle_calc_damage_reduction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_damage_reduction.asm:3 BEGIN_C_FUNCTION
    case 0xC280CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC280CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC280CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC280CF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC280D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC280D0.
    case 0xC280D2: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC280D3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC280D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:11 TXY
    case 0xC280D5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:12 STA @VIRTUAL02
    case 0xC280D6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:13 LDA #$0000
    case 0xC280D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC280D8.
    case 0xC280DA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/calc_damage_reduction.asm:14 CLC
    case 0xC280DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:15 SBC @VIRTUAL02
    case 0xC280DC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC280DE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC280E0: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC280E2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC280E4: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:17 LDA #0
    case 0xC280E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:17 LDA #0
    // Overlapping static entry reached from 0xC280E6.
    case 0xC280E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:18 STA @VIRTUAL02
    case 0xC280E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:20 CPY #$00FF
    case 0xC280EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:20 CPY #$00FF
    // Overlapping static entry reached from 0xC280EB.
    case 0xC280ED: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/calc_damage_reduction.asm:21 BCS @UNKNOWN3
    case 0xC280EE: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/battle/calc_damage_reduction.asm:22 LDX @VIRTUAL02
    case 0xC280F0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:23 TYA
    case 0xC280F2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC280F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:25 JSR TRUNCATE_16_TO_8
    case 0xC280F5: cpu.execute_instruction<0x20>(0x006937, 3); return true;
    // src/battle/calc_damage_reduction.asm:26 STA @VIRTUAL02
    case 0xC280F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:29 LDX CURRENT_TARGET
    case 0xC280FA: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:30 LDA a:battler::consciousness,X
    case 0xC280FD: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/calc_damage_reduction.asm:31 AND #$00FF
    case 0xC28100: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC28100.
    case 0xC28102: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:32 CMP #1
    case 0xC28103: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:32 CMP #1
    // Overlapping static entry reached from 0xC28103.
    case 0xC28105: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/calc_damage_reduction.asm:33 BNEL @UNKNOWN20
    case 0xC28106: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:33 BNEL @UNKNOWN20
    case 0xC28108: cpu.execute_instruction<0x4C>(0x00829A, 3); return true;
    // src/battle/calc_damage_reduction.asm:34 LDX CURRENT_TARGET
    case 0xC2810B: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:35 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2810E: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/calc_damage_reduction.asm:36 AND #$00FF
    case 0xC28111: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC28111.
    case 0xC28113: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:37 CMP #STATUS_0::UNCONSCIOUS
    case 0xC28114: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:37 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC28114.
    case 0xC28116: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/calc_damage_reduction.asm:38 BEQL @UNKNOWN20
    case 0xC28117: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:38 BEQL @UNKNOWN20
    case 0xC28119: cpu.execute_instruction<0x4C>(0x00829A, 3); return true;
    // src/battle/calc_damage_reduction.asm:39 LDX CURRENT_TARGET
    case 0xC2811C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:40 LDA a:battler::guarding,X
    case 0xC2811F: cpu.execute_instruction<0xBD>(0x000024, 3); return true;
    // src/battle/calc_damage_reduction.asm:41 AND #$00FF
    case 0xC28122: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC28122.
    case 0xC28124: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:42 CMP #1
    case 0xC28125: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:42 CMP #1
    // Overlapping static entry reached from 0xC28125.
    case 0xC28127: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:43 BNE @UNKNOWN6
    case 0xC28128: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/calc_damage_reduction.asm:44 LDX CURRENT_ATTACKER
    case 0xC2812A: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/calc_damage_reduction.asm:45 LDA a:battler::current_action,X
    case 0xC2812D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:46 JSR GET_BATTLE_ACTION_TYPE
    case 0xC28130: cpu.execute_instruction<0x20>(0x0068CA, 3); return true;
    // src/battle/calc_damage_reduction.asm:47 CMP #ACTION_TYPE::PHYSICAL
    case 0xC28133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:47 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC28133.
    case 0xC28135: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:48 BNE @UNKNOWN6
    case 0xC28136: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/calc_damage_reduction.asm:49 SEP #PROC_FLAGS::INDEX8
    case 0xC28138: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:50 LDY #1
    case 0xC2813A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00A501, 3); return true;
    // src/battle/calc_damage_reduction.asm:51 LDA @VIRTUAL02
    case 0xC2813C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:51 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2813A.
    case 0xC2813D: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:52 JSL ASR16
    case 0xC2813E: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_damage_reduction.asm:53 STA @VIRTUAL02
    case 0xC28142: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:55 REP #PROC_FLAGS::INDEX8
    case 0xC28144: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:56 LDX CURRENT_ATTACKER
    case 0xC28146: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/calc_damage_reduction.asm:57 LDA a:battler::current_action,X
    case 0xC28149: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:58 JSR GET_BATTLE_ACTION_TYPE
    case 0xC2814C: cpu.execute_instruction<0x20>(0x0068CA, 3); return true;
    // src/battle/calc_damage_reduction.asm:59 CMP #ACTION_TYPE::PHYSICAL
    case 0xC2814F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:59 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC2814F.
    case 0xC28151: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:60 BNE @UNKNOWN9
    case 0xC28152: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/battle/calc_damage_reduction.asm:61 LDX CURRENT_TARGET
    case 0xC28154: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:62 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28157: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/calc_damage_reduction.asm:63 AND #$00FF
    case 0xC2815A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC2815A.
    case 0xC2815C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:64 CMP #STATUS_6::SHIELD_POWER
    case 0xC2815D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_damage_reduction.asm:64 CMP #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2815D.
    case 0xC2815F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:65 BEQ @UNKNOWN8
    case 0xC28160: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:66 CMP #STATUS_6::SHIELD
    case 0xC28162: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:66 CMP #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC28162.
    case 0xC28164: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:67 BNE @UNKNOWN9
    case 0xC28165: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/calc_damage_reduction.asm:69 SEP #PROC_FLAGS::INDEX8
    case 0xC28167: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:70 LDY #1
    case 0xC28169: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00A501, 3); return true;
    // src/battle/calc_damage_reduction.asm:71 LDA @VIRTUAL02
    case 0xC2816B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:71 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC28169.
    case 0xC2816C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:72 JSL ASR16
    case 0xC2816D: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_damage_reduction.asm:73 STA @VIRTUAL02
    case 0xC28171: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:75 LDA @VIRTUAL02
    case 0xC28173: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:76 BNE @UNKNOWN10
    case 0xC28175: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:77 LDA #1
    case 0xC28177: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:77 LDA #1
    // Overlapping static entry reached from 0xC28177.
    case 0xC28179: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:78 STA @VIRTUAL02
    case 0xC2817A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:80 REP #PROC_FLAGS::INDEX8
    case 0xC2817C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:81 LDX @VIRTUAL02
    case 0xC2817E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:82 LDA CURRENT_TARGET
    case 0xC28180: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:83 JSR CALC_DAMAGE
    case 0xC28183: cpu.execute_instruction<0x20>(0x007E46, 3); return true;
    // src/battle/calc_damage_reduction.asm:84 CMP #0
    case 0xC28186: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:84 CMP #0
    // Overlapping static entry reached from 0xC28186.
    case 0xC28188: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:85 BEQ @UNKNOWN11
    case 0xC28189: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/calc_damage_reduction.asm:86 LDX CURRENT_TARGET
    case 0xC2818B: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:87 LDA a:battler::hp,X
    case 0xC2818E: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/calc_damage_reduction.asm:88 BNE @UNKNOWN11
    case 0xC28191: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/calc_damage_reduction.asm:89 LDA CURRENT_TARGET
    case 0xC28193: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:90 JSL KO_TARGET
    case 0xC28196: cpu.execute_instruction<0x22>(0xC27491, 4); return true;
    // src/battle/calc_damage_reduction.asm:92 LDA @VIRTUAL02
    case 0xC2819A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:93 BNE @UNKNOWN12
    case 0xC2819C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:94 LDA #1
    case 0xC2819E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:94 LDA #1
    // Overlapping static entry reached from 0xC2819E.
    case 0xC281A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:95 STA @VIRTUAL02
    case 0xC281A1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:97 LDA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC281A3: cpu.execute_instruction<0xAD>(0x00AC69, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/calc_damage_reduction.asm:98 BNEL @SHIELDS_DONE
    case 0xC281A6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:98 BNEL @SHIELDS_DONE
    case 0xC281A8: cpu.execute_instruction<0x4C>(0x008236, 3); return true;
    // src/battle/calc_damage_reduction.asm:99 LDX CURRENT_TARGET
    case 0xC281AB: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:100 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC281AE: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/calc_damage_reduction.asm:101 AND #$00FF
    case 0xC281B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC281B1.
    case 0xC281B3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:102 CMP #STATUS_6::SHIELD_POWER
    case 0xC281B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_damage_reduction.asm:102 CMP #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC281B4.
    case 0xC281B6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:103 BEQ @UNKNOWN14
    case 0xC281B7: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/calc_damage_reduction.asm:104 CMP #STATUS_6::SHIELD
    case 0xC281B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:104 CMP #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC281B9.
    case 0xC281BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:105 BEQ @WEAKEN_SHIELD
    case 0xC281BC: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/battle/calc_damage_reduction.asm:106 BRA @SHIELDS_DONE
    case 0xC281BE: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/battle/calc_damage_reduction.asm:108 LDA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC281C0: cpu.execute_instruction<0xAD>(0x00AC65, 3); return true;
    // src/battle/calc_damage_reduction.asm:109 BNE @WEAKEN_SHIELD
    case 0xC281C3: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/battle/calc_damage_reduction.asm:110 SEP #PROC_FLAGS::INDEX8
    case 0xC281C5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:111 LDY #1
    case 0xC281C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00A501, 3); return true;
    // src/battle/calc_damage_reduction.asm:112 LDA @VIRTUAL02
    case 0xC281C9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:112 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC281C7.
    case 0xC281CA: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:113 JSL ASR16
    case 0xC281CB: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_damage_reduction.asm:114 STA @VIRTUAL02
    case 0xC281CF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:115 CMP #0
    case 0xC281D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:115 CMP #0
    // Overlapping static entry reached from 0xC281D1.
    case 0xC281D3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:116 BNE @DAMAGE_ABOVE_ZERO_AFTER_SHIELD
    case 0xC281D4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:117 LDA #1
    case 0xC281D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:117 LDA #1
    // Overlapping static entry reached from 0xC281D6.
    case 0xC281D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:118 STA @VIRTUAL02
    case 0xC281D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC281DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x003586, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC281DB.
    case 0xC281DD: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC281DE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC281DD.
    case 0xC281DF: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC281E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC281E0.
    case 0xC281E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC281E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC281E5: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/calc_damage_reduction.asm:122 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC281E9: cpu.execute_instruction<0x20>(0x007E21, 3); return true;
    // src/battle/calc_damage_reduction.asm:123 LDX @VIRTUAL02
    case 0xC281EC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:124 LDA CURRENT_TARGET
    case 0xC281EE: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:125 JSR CALC_DAMAGE
    case 0xC281F1: cpu.execute_instruction<0x20>(0x007E46, 3); return true;
    // src/battle/calc_damage_reduction.asm:126 LDX CURRENT_TARGET
    case 0xC281F4: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:127 LDA a:battler::hp,X
    case 0xC281F7: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/calc_damage_reduction.asm:128 BNE @STILL_HAS_HP_AFTER_REFLECT
    case 0xC281FA: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/calc_damage_reduction.asm:129 LDA CURRENT_TARGET
    case 0xC281FC: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:130 JSL KO_TARGET
    case 0xC281FF: cpu.execute_instruction<0x22>(0xC27491, 4); return true;
    // src/battle/calc_damage_reduction.asm:132 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC28203: cpu.execute_instruction<0x20>(0x007E21, 3); return true;
    // src/battle/calc_damage_reduction.asm:134 LDA CURRENT_TARGET
    case 0xC28206: cpu.execute_instruction<0xAD>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:135 CLC
    case 0xC28209: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:136 ADC #battler::shield_hp
    case 0xC2820A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/calc_damage_reduction.asm:136 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC2820A.
    case 0xC2820C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_damage_reduction.asm:137 TAX
    case 0xC2820D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC2820E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:139 LDA __BSS_START__,X
    case 0xC28210: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:140 DEC
    case 0xC28213: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:141 STA __BSS_START__,X
    case 0xC28214: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:142 REP #PROC_FLAGS::ACCUM8
    case 0xC28217: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:143 AND #$00FF
    case 0xC28219: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC28219.
    case 0xC2821B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:144 BNE @SHIELDS_DONE
    case 0xC2821C: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/calc_damage_reduction.asm:145 LDX CURRENT_TARGET
    case 0xC2821E: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC28221: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:147 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28223: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/calc_damage_reduction.asm:148 REP #PROC_FLAGS::ACCUM8
    case 0xC28226: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28228: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00356E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28228.
    case 0xC2822A: cpu.execute_instruction<0x35>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2822B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2822A.
    case 0xC2822C: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2822D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2822D.
    case 0xC2822F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28230: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28232: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/calc_damage_reduction.asm:152 LDX CURRENT_TARGET
    case 0xC28236: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:153 LDA a:battler::ally_or_enemy,X
    case 0xC28239: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/calc_damage_reduction.asm:154 AND #$00FF
    case 0xC2823C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC2823C.
    case 0xC2823E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:155 BNE @UNKNOWN19
    case 0xC2823F: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/battle/calc_damage_reduction.asm:156 LDX CURRENT_TARGET
    case 0xC28241: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:157 LDA a:battler::npc_id,X
    case 0xC28244: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/calc_damage_reduction.asm:158 AND #$00FF
    case 0xC28247: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:158 AND #$00FF
    // Overlapping static entry reached from 0xC28247.
    case 0xC28249: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:159 BNE @UNKNOWN19
    case 0xC2824A: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/calc_damage_reduction.asm:160 LDX CURRENT_TARGET
    case 0xC2824C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:161 LDA a:battler::row,X
    case 0xC2824F: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/calc_damage_reduction.asm:162 AND #$00FF
    case 0xC28252: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC28252.
    case 0xC28254: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/calc_damage_reduction.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC28255: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_damage_reduction.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC28255.
    case 0xC28257: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:164 JSL MULT168
    case 0xC28258: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_damage_reduction.asm:165 TAX
    case 0xC2825C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:166 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC2825D: cpu.execute_instruction<0xBD>(0x009CC3, 3); return true;
    // src/battle/calc_damage_reduction.asm:167 BEQ @UNKNOWN20
    case 0xC28260: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/battle/calc_damage_reduction.asm:169 LDX CURRENT_TARGET
    case 0xC28262: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:170 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC28265: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/calc_damage_reduction.asm:171 AND #$00FF
    case 0xC28268: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC28268.
    case 0xC2826A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:172 CMP #STATUS_2::ASLEEP
    case 0xC2826B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:172 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC2826B.
    case 0xC2826D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:173 BNE @UNKNOWN20
    case 0xC2826E: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/battle/calc_damage_reduction.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC28270: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:175 LDA #CHANCE_OF_WAKING_UP_WHEN_ATTACKED
    case 0xC28272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x002080, 3); return true;
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    case 0xC28274: cpu.execute_instruction<0x20>(0x006AF7, 3); return true;
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC28272.
    case 0xC28275: cpu.execute_instruction<0xF7>(0x00006A, 2); return true;
    // src/battle/calc_damage_reduction.asm:178 CMP #$0000
    case 0xC28277: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:178 CMP #$0000
    // Overlapping static entry reached from 0xC28277.
    case 0xC28279: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:179 BEQ @UNKNOWN20
    case 0xC2827A: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/battle/calc_damage_reduction.asm:180 LDX CURRENT_TARGET
    case 0xC2827C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:181 STZ a:battler::current_action,X
    case 0xC2827F: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:182 LDX CURRENT_TARGET
    case 0xC28282: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/calc_damage_reduction.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC28285: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:184 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC28287: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/calc_damage_reduction.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC2828A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC2828C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00342E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC2828C.
    case 0xC2828E: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC2828F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC2828E.
    case 0xC28290: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC28291: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC28291.
    case 0xC28293: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC28294: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC28296: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/calc_damage_reduction.asm:188 LDA @VIRTUAL02
    case 0xC2829A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_damage_reduction.asm:189 END_C_FUNCTION
    case 0xC2829C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/calc_damage_reduction.asm:189 END_C_FUNCTION
    case 0xC2829D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_psi_damage_modifiers.asm (source_named).
bool execute_battle_calc_psi_damage_modifiers_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B5AD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B5CA.
    case 0xC2B5AE: cpu.execute_instruction<0x31>(0x000029, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    case 0xC2B5AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B5AE.
    case 0xC2B5B0: cpu.execute_instruction<0xFF>(0x11F000, 4); return true;
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B5AF.
    case 0xC2B5B1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:7 BEQ @UNKNOWN0
    case 0xC2B5B2: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:8 CMP #1
    case 0xC2B5B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:8 CMP #1
    // Overlapping static entry reached from 0xC2B5B4.
    case 0xC2B5B6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:9 BEQ @UNKNOWN1
    case 0xC2B5B7: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:10 CMP #2
    case 0xC2B5B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:10 CMP #2
    // Overlapping static entry reached from 0xC2B5B9.
    case 0xC2B5BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:11 BEQ @UNKNOWN2
    case 0xC2B5BC: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:12 CMP #3
    case 0xC2B5BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:12 CMP #3
    // Overlapping static entry reached from 0xC2B5BE.
    case 0xC2B5C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:13 BEQ @UNKNOWN3
    case 0xC2B5C1: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:14 BRA @UNKNOWN4
    case 0xC2B5C3: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:17 LDA #255
    case 0xC2B5C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0080FF, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:18 BRA @UNKNOWN4
    case 0xC2B5C9: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:18 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B5C7.
    case 0xC2B5CA: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B5CA.
    case 0xC2B5CC: cpu.execute_instruction<0x20>(0x00B3A9, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:21 LDA #179
    case 0xC2B5CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0080B3, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:22 BRA @UNKNOWN4
    case 0xC2B5CF: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B5CD.
    case 0xC2B5D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_psi_damage_modifiers.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:25 LDA #102
    case 0xC2B5D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x008066, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:26 BRA @UNKNOWN4
    case 0xC2B5D5: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:26 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B5D3.
    case 0xC2B5D6: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B5D6.
    case 0xC2B5D8: cpu.execute_instruction<0x20>(0x000DA9, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:29 LDA #13
    case 0xC2B5D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00E20D, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B5D9.
    case 0xC2B5DC: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:32 END_C_FUNCTION
    case 0xC2B5DD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_psi_resistance_modifiers.asm (source_named).
bool execute_battle_calc_psi_resistance_modifiers_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B5DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B5DC.
    case 0xC2B5DF: cpu.execute_instruction<0x31>(0x000029, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    case 0xC2B5E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B5DF.
    case 0xC2B5E1: cpu.execute_instruction<0xFF>(0x11F000, 4); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B5E0.
    case 0xC2B5E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:7 BEQ @UNKNOWN0
    case 0xC2B5E3: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:8 CMP #1
    case 0xC2B5E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:8 CMP #1
    // Overlapping static entry reached from 0xC2B5E5.
    case 0xC2B5E7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:9 BEQ @UNKNOWN1
    case 0xC2B5E8: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:10 CMP #2
    case 0xC2B5EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:10 CMP #2
    // Overlapping static entry reached from 0xC2B5EA.
    case 0xC2B5EC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:11 BEQ @UNKNOWN2
    case 0xC2B5ED: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:12 CMP #3
    case 0xC2B5EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:12 CMP #3
    // Overlapping static entry reached from 0xC2B5EF.
    case 0xC2B5F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:13 BEQ @UNKNOWN3
    case 0xC2B5F2: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:14 BRA @UNKNOWN4
    case 0xC2B5F4: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:17 LDA #255
    case 0xC2B5F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0080FF, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:18 BRA @UNKNOWN4
    case 0xC2B5FA: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:18 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B5F8.
    case 0xC2B5FB: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B5FB.
    case 0xC2B5FD: cpu.execute_instruction<0x20>(0x0080A9, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:21 LDA #128
    case 0xC2B5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008080, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:22 BRA @UNKNOWN4
    case 0xC2B600: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B5FE.
    case 0xC2B601: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B602: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:25 LDA #26
    case 0xC2B604: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00801A, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:26 BRA @UNKNOWN4
    case 0xC2B606: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:26 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B604.
    case 0xC2B607: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B608: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B607.
    case 0xC2B609: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:29 LDA #0
    case 0xC2B60A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00E200, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B60C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B60A.
    case 0xC2B60D: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:32 END_C_FUNCTION
    case 0xC2B60E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_resistances.asm (source_named).
bool execute_battle_calc_resistances_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_resistances.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21C99: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21C9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC21C9E.
    case 0xC21CA0: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21CA1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21CA2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:10 TAX
    case 0xC21CA3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:11 DEX
    case 0xC21CA4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:12 STX @LOCAL02
    case 0xC21CA5: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:13 TXA
    case 0xC21CA7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC21CA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21CA8.
    case 0xC21CAA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:15 JSL MULT168
    case 0xC21CAB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:16 STA @LOCAL01
    case 0xC21CAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:17 TAX
    case 0xC21CB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:18 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21CB2: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/battle/calc_resistances.asm:19 AND #$00FF
    case 0xC21CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC21CB5.
    case 0xC21CB7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:20 TAY
    case 0xC21CB8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:21 BEQ @UNKNOWN0
    case 0xC21CB9: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/battle/calc_resistances.asm:22 TYA
    case 0xC21CBB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:23 DEC
    case 0xC21CBC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:24 STA @VIRTUAL02
    case 0xC21CBD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:25 LDA @LOCAL01
    case 0xC21CBF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:26 CLC
    case 0xC21CC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21CC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21CC2.
    case 0xC21CC4: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:28 CLC
    case 0xC21CC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    case 0xC21CC6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21CC4.
    case 0xC21CC7: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:30 TAX
    case 0xC21CC8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:31 LDA __BSS_START__,X
    case 0xC21CC9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:32 AND #$00FF
    case 0xC21CCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC21CCC.
    case 0xC21CCE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CCF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21CD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:34 CLC
    case 0xC21CD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    case 0xC21CD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21CD8.
    case 0xC21CDA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:36 TAX
    case 0xC21CDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC21CDC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:38 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21CDE: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC21CE2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:40 SEC
    case 0xC21CE4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:41 AND #$00FF
    case 0xC21CE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC21CE5.
    case 0xC21CE7: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:42 SBC #$0080
    case 0xC21CE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:42 SBC #$0080
    // Overlapping static entry reached from 0xC21CE8.
    case 0xC21CEA: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    case 0xC21CEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    // Overlapping static entry reached from 0xC21CEB.
    case 0xC21CED: cpu.execute_instruction<0xFF>(0x000329, 4); return true;
    // src/battle/calc_resistances.asm:44 AND #$0003
    case 0xC21CEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:44 AND #$0003
    // Overlapping static entry reached from 0xC21CEE.
    case 0xC21CF0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/calc_resistances.asm:45 BRA @UNKNOWN1
    case 0xC21CF1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:47 LDA #$0000
    case 0xC21CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:47 LDA #$0000
    // Overlapping static entry reached from 0xC21CF3.
    case 0xC21CF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:49 STA @LOCAL00
    case 0xC21CF6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:50 LDX @LOCAL02
    case 0xC21CF8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:51 TXA
    case 0xC21CFA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC21CFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21CFB.
    case 0xC21CFD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:53 JSL MULT168
    case 0xC21CFE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:54 STA @VIRTUAL02
    case 0xC21D02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:55 LDX @VIRTUAL02
    case 0xC21D04: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:56 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21D06: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/battle/calc_resistances.asm:57 AND #$00FF
    case 0xC21D09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC21D09.
    case 0xC21D0B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:58 TAY
    case 0xC21D0C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:59 BEQ @UNKNOWN2
    case 0xC21D0D: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/battle/calc_resistances.asm:60 TYA
    case 0xC21D0F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:61 DEC
    case 0xC21D10: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:62 STA @VIRTUAL04
    case 0xC21D11: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:63 LDA @VIRTUAL02
    case 0xC21D13: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:64 CLC
    case 0xC21D15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21D16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21D16.
    case 0xC21D18: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:66 CLC
    case 0xC21D19: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    case 0xC21D1A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21D18.
    case 0xC21D1B: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:68 TAX
    case 0xC21D1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:69 LDA __BSS_START__,X
    case 0xC21D1D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:70 AND #$00FF
    case 0xC21D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC21D20.
    case 0xC21D22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D26: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21D2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:72 CLC
    case 0xC21D2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    case 0xC21D2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21D2C.
    case 0xC21D2E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:74 TAX
    case 0xC21D2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D30: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:76 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21D32: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC21D36: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:78 SEC
    case 0xC21D38: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:79 AND #$00FF
    case 0xC21D39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC21D39.
    case 0xC21D3B: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:80 SBC #$0080
    case 0xC21D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:80 SBC #$0080
    // Overlapping static entry reached from 0xC21D3C.
    case 0xC21D3E: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    case 0xC21D3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    // Overlapping static entry reached from 0xC21D3F.
    case 0xC21D41: cpu.execute_instruction<0xFF>(0x000329, 4); return true;
    // src/battle/calc_resistances.asm:82 AND #$0003
    case 0xC21D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:82 AND #$0003
    // Overlapping static entry reached from 0xC21D42.
    case 0xC21D44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:83 STA @VIRTUAL02
    case 0xC21D45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:84 LDA @LOCAL00
    case 0xC21D47: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:85 CLC
    case 0xC21D49: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:86 ADC @VIRTUAL02
    case 0xC21D4A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:87 STA @LOCAL00
    case 0xC21D4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:89 LDA @LOCAL00
    case 0xC21D4E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:90 CLC
    case 0xC21D50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:91 SBC #$0003
    case 0xC21D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:91 SBC #$0003
    // Overlapping static entry reached from 0xC21D51.
    case 0xC21D53: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D54: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D56: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D58: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21D5A: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:93 LDY #$0003
    case 0xC21D5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:93 LDY #$0003
    // Overlapping static entry reached from 0xC21D5C.
    case 0xC21D5E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:94 STY @LOCAL01
    case 0xC21D5F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:95 BRA @UNKNOWN6
    case 0xC21D61: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/calc_resistances.asm:97 LDA @LOCAL00
    case 0xC21D63: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:98 TAY
    case 0xC21D65: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:99 STY @LOCAL01
    case 0xC21D66: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:101 LDX @LOCAL02
    case 0xC21D68: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:102 TXA
    case 0xC21D6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21D6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21D6B.
    case 0xC21D6D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:104 JSL MULT168
    case 0xC21D6E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:105 STA @LOCAL00
    case 0xC21D72: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:106 TAX
    case 0xC21D74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:107 LDY @LOCAL01
    case 0xC21D75: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:108 TYA
    case 0xC21D77: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D78: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:110 STA PARTY_CHARACTERS+char_struct::fire_resist,X
    case 0xC21D7A: cpu.execute_instruction<0x9D>(0x009CD0, 3); return true;
    // src/battle/calc_resistances.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC21D7D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:112 LDA @LOCAL00
    case 0xC21D7F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:113 TAX
    case 0xC21D81: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:114 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21D82: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/battle/calc_resistances.asm:115 AND #$00FF
    case 0xC21D85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC21D85.
    case 0xC21D87: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:116 TAY
    case 0xC21D88: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:117 BEQ @UNKNOWN7
    case 0xC21D89: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/calc_resistances.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC21D8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:119 LDA #$0002
    case 0xC21D8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x004802, 3); return true;
    // src/battle/calc_resistances.asm:120 PHA
    case 0xC21D8F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:121 REP #PROC_FLAGS::ACCUM8
    case 0xC21D90: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:122 TYA
    case 0xC21D92: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:123 DEC
    case 0xC21D93: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:124 STA @VIRTUAL02
    case 0xC21D94: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:125 LDA @LOCAL00
    case 0xC21D96: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:126 CLC
    case 0xC21D98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21D99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21D99.
    case 0xC21D9B: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:128 CLC
    case 0xC21D9C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    case 0xC21D9D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21D9B.
    case 0xC21D9E: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:130 TAX
    case 0xC21D9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:131 LDA __BSS_START__,X
    case 0xC21DA0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:132 AND #$00FF
    case 0xC21DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC21DA3.
    case 0xC21DA5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DA6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DA9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21DAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:134 CLC
    case 0xC21DAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    case 0xC21DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21DAF.
    case 0xC21DB1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:136 TAX
    case 0xC21DB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:138 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21DB5: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC21DB9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:140 SEC
    case 0xC21DBB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:141 AND #$00FF
    case 0xC21DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC21DBC.
    case 0xC21DBE: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:142 SBC #$0080
    case 0xC21DBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:142 SBC #$0080
    // Overlapping static entry reached from 0xC21DBF.
    case 0xC21DC1: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    case 0xC21DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    // Overlapping static entry reached from 0xC21DC2.
    case 0xC21DC4: cpu.execute_instruction<0xFF>(0x000C29, 4); return true;
    // src/battle/calc_resistances.asm:144 AND #$000C
    case 0xC21DC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/battle/calc_resistances.asm:144 AND #$000C
    // Overlapping static entry reached from 0xC21DC5.
    case 0xC21DC7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:145 SEP #PROC_FLAGS::INDEX8
    case 0xC21DC8: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:146 PLY
    case 0xC21DCA: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:147 JSL ASR16
    case 0xC21DCB: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_resistances.asm:148 BRA @UNKNOWN8
    case 0xC21DCF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:150 LDA #$0000
    case 0xC21DD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:150 LDA #$0000
    // Overlapping static entry reached from 0xC21DD1.
    case 0xC21DD3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:152 STA @LOCAL00
    case 0xC21DD4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:153 REP #PROC_FLAGS::INDEX8
    case 0xC21DD6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:154 LDX @LOCAL02
    case 0xC21DD8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:155 TXA
    case 0xC21DDA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    case 0xC21DDB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21DDB.
    case 0xC21DDD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:157 JSL MULT168
    case 0xC21DDE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:158 STA @VIRTUAL02
    case 0xC21DE2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:159 LDX @VIRTUAL02
    case 0xC21DE4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:160 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21DE6: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/battle/calc_resistances.asm:161 AND #$00FF
    case 0xC21DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:161 AND #$00FF
    // Overlapping static entry reached from 0xC21DE9.
    case 0xC21DEB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:162 TAY
    case 0xC21DEC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:163 BEQ @UNKNOWN9
    case 0xC21DED: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/calc_resistances.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC21DEF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:165 LDA #$0002
    case 0xC21DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x004802, 3); return true;
    // src/battle/calc_resistances.asm:166 PHA
    case 0xC21DF3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC21DF4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:168 TYA
    case 0xC21DF6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:169 DEC
    case 0xC21DF7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:170 STA @VIRTUAL04
    case 0xC21DF8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:171 LDA @VIRTUAL02
    case 0xC21DFA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:172 CLC
    case 0xC21DFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21DFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21DFD.
    case 0xC21DFF: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:174 CLC
    case 0xC21E00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    case 0xC21E01: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21DFF.
    case 0xC21E02: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:176 TAX
    case 0xC21E03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:177 LDA __BSS_START__,X
    case 0xC21E04: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:178 AND #$00FF
    case 0xC21E07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC21E07.
    case 0xC21E09: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:180 CLC
    case 0xC21E12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    case 0xC21E13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21E13.
    case 0xC21E15: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:182 TAX
    case 0xC21E16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:184 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21E19: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC21E1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:186 SEC
    case 0xC21E1F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:187 AND #$00FF
    case 0xC21E20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:187 AND #$00FF
    // Overlapping static entry reached from 0xC21E20.
    case 0xC21E22: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:188 SBC #$0080
    case 0xC21E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:188 SBC #$0080
    // Overlapping static entry reached from 0xC21E23.
    case 0xC21E25: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    case 0xC21E26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    // Overlapping static entry reached from 0xC21E26.
    case 0xC21E28: cpu.execute_instruction<0xFF>(0x000C29, 4); return true;
    // src/battle/calc_resistances.asm:190 AND #$000C
    case 0xC21E29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/battle/calc_resistances.asm:190 AND #$000C
    // Overlapping static entry reached from 0xC21E29.
    case 0xC21E2B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:191 SEP #PROC_FLAGS::INDEX8
    case 0xC21E2C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:192 PLY
    case 0xC21E2E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:193 JSL ASR16
    case 0xC21E2F: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_resistances.asm:194 STA @VIRTUAL02
    case 0xC21E33: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:195 LDA @LOCAL00
    case 0xC21E35: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:196 CLC
    case 0xC21E37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:197 ADC @VIRTUAL02
    case 0xC21E38: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:198 STA @LOCAL00
    case 0xC21E3A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:200 LDA @LOCAL00
    case 0xC21E3C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:201 CLC
    case 0xC21E3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:202 SBC #$0003
    case 0xC21E3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:202 SBC #$0003
    // Overlapping static entry reached from 0xC21E3F.
    case 0xC21E41: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E42: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E44: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E46: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21E48: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/battle/calc_resistances.asm:204 REP #PROC_FLAGS::INDEX8
    case 0xC21E4A: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:205 LDY #$0003
    case 0xC21E4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:205 LDY #$0003
    // Overlapping static entry reached from 0xC21E4C.
    case 0xC21E4E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:206 STY @LOCAL01
    case 0xC21E4F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:207 BRA @UNKNOWN13
    case 0xC21E51: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:209 LDA @LOCAL00
    case 0xC21E53: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:210 REP #PROC_FLAGS::INDEX8
    case 0xC21E55: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:211 TAY
    case 0xC21E57: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:212 STY @LOCAL01
    case 0xC21E58: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:214 LDX @LOCAL02
    case 0xC21E5A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:215 TXA
    case 0xC21E5C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    case 0xC21E5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21E5D.
    case 0xC21E5F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:217 JSL MULT168
    case 0xC21E60: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:218 STA @LOCAL00
    case 0xC21E64: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:219 TAX
    case 0xC21E66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:220 LDY @LOCAL01
    case 0xC21E67: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:221 TYA
    case 0xC21E69: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:223 STA PARTY_CHARACTERS+char_struct::freeze_resist,X
    case 0xC21E6C: cpu.execute_instruction<0x9D>(0x009CD1, 3); return true;
    // src/battle/calc_resistances.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC21E6F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:225 LDA @LOCAL00
    case 0xC21E71: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:226 TAX
    case 0xC21E73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:227 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21E74: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/battle/calc_resistances.asm:228 AND #$00FF
    case 0xC21E77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC21E77.
    case 0xC21E79: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:229 TAY
    case 0xC21E7A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:230 BEQ @UNKNOWN14
    case 0xC21E7B: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/calc_resistances.asm:231 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:232 LDA #$0004
    case 0xC21E7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x004804, 3); return true;
    // src/battle/calc_resistances.asm:233 PHA
    case 0xC21E81: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC21E82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:235 TYA
    case 0xC21E84: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:236 DEC
    case 0xC21E85: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:237 STA @VIRTUAL02
    case 0xC21E86: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:238 LDA @LOCAL00
    case 0xC21E88: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:239 CLC
    case 0xC21E8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21E8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21E8B.
    case 0xC21E8D: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:241 CLC
    case 0xC21E8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    case 0xC21E8F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21E8D.
    case 0xC21E90: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:243 TAX
    case 0xC21E91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:244 LDA __BSS_START__,X
    case 0xC21E92: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:245 AND #$00FF
    case 0xC21E95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:245 AND #$00FF
    // Overlapping static entry reached from 0xC21E95.
    case 0xC21E97: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E98: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:247 CLC
    case 0xC21EA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    case 0xC21EA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21EA1.
    case 0xC21EA3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:249 TAX
    case 0xC21EA4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:251 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21EA7: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC21EAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:253 SEC
    case 0xC21EAD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:254 AND #$00FF
    case 0xC21EAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC21EAE.
    case 0xC21EB0: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:255 SBC #$0080
    case 0xC21EB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:255 SBC #$0080
    // Overlapping static entry reached from 0xC21EB1.
    case 0xC21EB3: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    case 0xC21EB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    // Overlapping static entry reached from 0xC21EB4.
    case 0xC21EB6: cpu.execute_instruction<0xFF>(0x003029, 4); return true;
    // src/battle/calc_resistances.asm:257 AND #$0030
    case 0xC21EB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/battle/calc_resistances.asm:257 AND #$0030
    // Overlapping static entry reached from 0xC21EB7.
    case 0xC21EB9: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:258 SEP #PROC_FLAGS::INDEX8
    case 0xC21EBA: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:259 PLY
    case 0xC21EBC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:260 JSL ASR16
    case 0xC21EBD: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_resistances.asm:261 BRA @UNKNOWN15
    case 0xC21EC1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:263 LDA #$0000
    case 0xC21EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:263 LDA #$0000
    // Overlapping static entry reached from 0xC21EC3.
    case 0xC21EC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:265 STA @LOCAL00
    case 0xC21EC6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:266 REP #PROC_FLAGS::INDEX8
    case 0xC21EC8: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:267 LDX @LOCAL02
    case 0xC21ECA: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:268 TXA
    case 0xC21ECC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    case 0xC21ECD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21ECD.
    case 0xC21ECF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:270 JSL MULT168
    case 0xC21ED0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:271 STA @VIRTUAL02
    case 0xC21ED4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:272 LDX @VIRTUAL02
    case 0xC21ED6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:273 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21ED8: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/battle/calc_resistances.asm:274 AND #$00FF
    case 0xC21EDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:274 AND #$00FF
    // Overlapping static entry reached from 0xC21EDB.
    case 0xC21EDD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:275 TAY
    case 0xC21EDE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:276 BEQ @UNKNOWN16
    case 0xC21EDF: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/calc_resistances.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EE1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:278 LDA #$0004
    case 0xC21EE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x004804, 3); return true;
    // src/battle/calc_resistances.asm:279 PHA
    case 0xC21EE5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC21EE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:281 TYA
    case 0xC21EE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:282 DEC
    case 0xC21EE9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:283 STA @VIRTUAL04
    case 0xC21EEA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:284 LDA @VIRTUAL02
    case 0xC21EEC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:285 CLC
    case 0xC21EEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21EEF.
    case 0xC21EF1: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:287 CLC
    case 0xC21EF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    case 0xC21EF3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21EF1.
    case 0xC21EF4: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:289 TAX
    case 0xC21EF5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:290 LDA __BSS_START__,X
    case 0xC21EF6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:291 AND #$00FF
    case 0xC21EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC21EF9.
    case 0xC21EFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21EFC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21EFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21EFF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:293 CLC
    case 0xC21F04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    case 0xC21F05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F05.
    case 0xC21F07: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:295 TAX
    case 0xC21F08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:296 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:297 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F0B: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:298 REP #PROC_FLAGS::ACCUM8
    case 0xC21F0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:299 SEC
    case 0xC21F11: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:300 AND #$00FF
    case 0xC21F12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:300 AND #$00FF
    // Overlapping static entry reached from 0xC21F12.
    case 0xC21F14: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:301 SBC #$0080
    case 0xC21F15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:301 SBC #$0080
    // Overlapping static entry reached from 0xC21F15.
    case 0xC21F17: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    case 0xC21F18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    // Overlapping static entry reached from 0xC21F18.
    case 0xC21F1A: cpu.execute_instruction<0xFF>(0x003029, 4); return true;
    // src/battle/calc_resistances.asm:303 AND #$0030
    case 0xC21F1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/battle/calc_resistances.asm:303 AND #$0030
    // Overlapping static entry reached from 0xC21F1B.
    case 0xC21F1D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:304 SEP #PROC_FLAGS::INDEX8
    case 0xC21F1E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:305 PLY
    case 0xC21F20: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:306 JSL ASR16
    case 0xC21F21: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_resistances.asm:307 STA @VIRTUAL02
    case 0xC21F25: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:308 LDA @LOCAL00
    case 0xC21F27: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:309 CLC
    case 0xC21F29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:310 ADC @VIRTUAL02
    case 0xC21F2A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:311 STA @LOCAL00
    case 0xC21F2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:313 LDA @LOCAL00
    case 0xC21F2E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:314 CLC
    case 0xC21F30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:315 SBC #$0003
    case 0xC21F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:315 SBC #$0003
    // Overlapping static entry reached from 0xC21F31.
    case 0xC21F33: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F34: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F36: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F38: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC21F3A: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/battle/calc_resistances.asm:317 REP #PROC_FLAGS::INDEX8
    case 0xC21F3C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:318 LDY #$0003
    case 0xC21F3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:318 LDY #$0003
    // Overlapping static entry reached from 0xC21F3E.
    case 0xC21F40: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:319 STY @LOCAL01
    case 0xC21F41: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:320 BRA @UNKNOWN20
    case 0xC21F43: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:322 LDA @LOCAL00
    case 0xC21F45: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:323 REP #PROC_FLAGS::INDEX8
    case 0xC21F47: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:324 TAY
    case 0xC21F49: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:325 STY @LOCAL01
    case 0xC21F4A: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:327 LDX @LOCAL02
    case 0xC21F4C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:328 TXA
    case 0xC21F4E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    case 0xC21F4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21F4F.
    case 0xC21F51: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:330 JSL MULT168
    case 0xC21F52: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:331 STA @LOCAL00
    case 0xC21F56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:332 TAX
    case 0xC21F58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:333 LDY @LOCAL01
    case 0xC21F59: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:334 TYA
    case 0xC21F5B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:335 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F5C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:336 STA PARTY_CHARACTERS+char_struct::flash_resist,X
    case 0xC21F5E: cpu.execute_instruction<0x9D>(0x009CD2, 3); return true;
    // src/battle/calc_resistances.asm:337 REP #PROC_FLAGS::ACCUM8
    case 0xC21F61: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:338 LDA @LOCAL00
    case 0xC21F63: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:339 TAX
    case 0xC21F65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:340 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21F66: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/battle/calc_resistances.asm:341 AND #$00FF
    case 0xC21F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC21F69.
    case 0xC21F6B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:342 TAY
    case 0xC21F6C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:343 BEQ @UNKNOWN21
    case 0xC21F6D: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/battle/calc_resistances.asm:344 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:345 LDA #$0006
    case 0xC21F71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x004806, 3); return true;
    // src/battle/calc_resistances.asm:346 PHA
    case 0xC21F73: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:347 REP #PROC_FLAGS::ACCUM8
    case 0xC21F74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:348 TYA
    case 0xC21F76: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:349 DEC
    case 0xC21F77: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:350 STA @VIRTUAL02
    case 0xC21F78: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:351 LDA @LOCAL00
    case 0xC21F7A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:352 CLC
    case 0xC21F7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21F7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21F7D.
    case 0xC21F7F: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:354 CLC
    case 0xC21F80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    case 0xC21F81: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21F7F.
    case 0xC21F82: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:356 TAX
    case 0xC21F83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:357 LDA __BSS_START__,X
    case 0xC21F84: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:358 AND #$00FF
    case 0xC21F87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:358 AND #$00FF
    // Overlapping static entry reached from 0xC21F87.
    case 0xC21F89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:360 CLC
    case 0xC21F92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    case 0xC21F93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F93.
    case 0xC21F95: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:362 TAX
    case 0xC21F96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:363 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:364 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F99: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC21F9D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:366 SEC
    case 0xC21F9F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:367 AND #$00FF
    case 0xC21FA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:367 AND #$00FF
    // Overlapping static entry reached from 0xC21FA0.
    case 0xC21FA2: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:368 SBC #$0080
    case 0xC21FA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:368 SBC #$0080
    // Overlapping static entry reached from 0xC21FA3.
    case 0xC21FA5: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    case 0xC21FA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    // Overlapping static entry reached from 0xC21FA6.
    case 0xC21FA8: cpu.execute_instruction<0xFF>(0x00C029, 4); return true;
    // src/battle/calc_resistances.asm:370 AND #$00C0
    case 0xC21FA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/battle/calc_resistances.asm:370 AND #$00C0
    // Overlapping static entry reached from 0xC21FA9.
    case 0xC21FAB: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:371 SEP #PROC_FLAGS::INDEX8
    case 0xC21FAC: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:372 PLY
    case 0xC21FAE: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:373 JSL ASR16
    case 0xC21FAF: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_resistances.asm:374 BRA @UNKNOWN22
    case 0xC21FB3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:376 LDA #$0000
    case 0xC21FB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:376 LDA #$0000
    // Overlapping static entry reached from 0xC21FB5.
    case 0xC21FB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:378 STA @LOCAL00
    case 0xC21FB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:379 REP #PROC_FLAGS::INDEX8
    case 0xC21FBA: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:380 LDX @LOCAL02
    case 0xC21FBC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:381 TXA
    case 0xC21FBE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    case 0xC21FBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21FBF.
    case 0xC21FC1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:383 JSL MULT168
    case 0xC21FC2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:384 STA @VIRTUAL02
    case 0xC21FC6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:385 LDX @VIRTUAL02
    case 0xC21FC8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:386 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21FCA: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/battle/calc_resistances.asm:387 AND #$00FF
    case 0xC21FCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC21FCD.
    case 0xC21FCF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:388 TAY
    case 0xC21FD0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:389 BEQ @UNKNOWN23
    case 0xC21FD1: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/calc_resistances.asm:390 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FD3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:391 LDA #$0006
    case 0xC21FD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x004806, 3); return true;
    // src/battle/calc_resistances.asm:392 PHA
    case 0xC21FD7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:393 REP #PROC_FLAGS::ACCUM8
    case 0xC21FD8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:394 TYA
    case 0xC21FDA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:395 DEC
    case 0xC21FDB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:396 STA @VIRTUAL04
    case 0xC21FDC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:397 LDA @VIRTUAL02
    case 0xC21FDE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:398 CLC
    case 0xC21FE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21FE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21FE1.
    case 0xC21FE3: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:400 CLC
    case 0xC21FE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    case 0xC21FE5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21FE3.
    case 0xC21FE6: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:402 TAX
    case 0xC21FE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:403 LDA __BSS_START__,X
    case 0xC21FE8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:404 AND #$00FF
    case 0xC21FEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC21FEB.
    case 0xC21FED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FEE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:406 CLC
    case 0xC21FF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    case 0xC21FF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21FF7.
    case 0xC21FF9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:408 TAX
    case 0xC21FFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:409 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:410 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21FFD: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:411 REP #PROC_FLAGS::ACCUM8
    case 0xC22001: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:412 SEC
    case 0xC22003: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:413 AND #$00FF
    case 0xC22004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC22004.
    case 0xC22006: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:414 SBC #$0080
    case 0xC22007: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:414 SBC #$0080
    // Overlapping static entry reached from 0xC22007.
    case 0xC22009: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    case 0xC2200A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    // Overlapping static entry reached from 0xC2200A.
    case 0xC2200C: cpu.execute_instruction<0xFF>(0x00C029, 4); return true;
    // src/battle/calc_resistances.asm:416 AND #$00C0
    case 0xC2200D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/battle/calc_resistances.asm:416 AND #$00C0
    // Overlapping static entry reached from 0xC2200D.
    case 0xC2200F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:417 SEP #PROC_FLAGS::INDEX8
    case 0xC22010: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:418 PLY
    case 0xC22012: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:419 JSL ASR16
    case 0xC22013: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/battle/calc_resistances.asm:420 STA @VIRTUAL02
    case 0xC22017: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:421 LDA @LOCAL00
    case 0xC22019: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:422 CLC
    case 0xC2201B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:423 ADC @VIRTUAL02
    case 0xC2201C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:424 STA @LOCAL00
    case 0xC2201E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:426 LDA @LOCAL00
    case 0xC22020: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:427 CLC
    case 0xC22022: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:428 SBC #$0003
    case 0xC22023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:428 SBC #$0003
    // Overlapping static entry reached from 0xC22023.
    case 0xC22025: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC22026: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC22028: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2202A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2202C: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/battle/calc_resistances.asm:430 REP #PROC_FLAGS::INDEX8
    case 0xC2202E: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:431 LDY #$0003
    case 0xC22030: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:431 LDY #$0003
    // Overlapping static entry reached from 0xC22030.
    case 0xC22032: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:432 STY @LOCAL01
    case 0xC22033: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:433 BRA @UNKNOWN27
    case 0xC22035: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:435 LDA @LOCAL00
    case 0xC22037: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:436 REP #PROC_FLAGS::INDEX8
    case 0xC22039: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:437 TAY
    case 0xC2203B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:438 STY @LOCAL01
    case 0xC2203C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:440 LDX @LOCAL02
    case 0xC2203E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:441 TXA
    case 0xC22040: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    case 0xC22041: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22041.
    case 0xC22043: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:443 JSL MULT168
    case 0xC22044: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:444 STA @LOCAL00
    case 0xC22048: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:445 TAX
    case 0xC2204A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:446 LDY @LOCAL01
    case 0xC2204B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:447 TYA
    case 0xC2204D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:448 SEP #PROC_FLAGS::ACCUM8
    case 0xC2204E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:449 STA PARTY_CHARACTERS+char_struct::paralysis_resist,X
    case 0xC22050: cpu.execute_instruction<0x9D>(0x009CD3, 3); return true;
    // src/battle/calc_resistances.asm:450 REP #PROC_FLAGS::ACCUM8
    case 0xC22053: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:451 LDA @LOCAL00
    case 0xC22055: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:452 TAX
    case 0xC22057: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:453 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC22058: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/battle/calc_resistances.asm:454 AND #$00FF
    case 0xC2205B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:454 AND #$00FF
    // Overlapping static entry reached from 0xC2205B.
    case 0xC2205D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:455 TAY
    case 0xC2205E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:456 BEQ @UNKNOWN28
    case 0xC2205F: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/battle/calc_resistances.asm:457 TYA
    case 0xC22061: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:458 DEC
    case 0xC22062: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:459 STA @VIRTUAL02
    case 0xC22063: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:460 LDA @LOCAL00
    case 0xC22065: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:461 CLC
    case 0xC22067: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC22068: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC22068.
    case 0xC2206A: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:463 CLC
    case 0xC2206B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    case 0xC2206C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2206A.
    case 0xC2206D: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:465 TAX
    case 0xC2206E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:466 LDA __BSS_START__,X
    case 0xC2206F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:467 AND #$00FF
    case 0xC22072: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:467 AND #$00FF
    // Overlapping static entry reached from 0xC22072.
    case 0xC22074: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22075: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22077: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22078: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2207A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2207B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2207C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:469 CLC
    case 0xC2207D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    case 0xC2207E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC2207E.
    case 0xC22080: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:471 TAX
    case 0xC22081: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC22082: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:473 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC22084: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/battle/calc_resistances.asm:474 REP #PROC_FLAGS::ACCUM8
    case 0xC22088: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:475 SEC
    case 0xC2208A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:476 AND #$00FF
    case 0xC2208B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:476 AND #$00FF
    // Overlapping static entry reached from 0xC2208B.
    case 0xC2208D: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:477 SBC #$0080
    case 0xC2208E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:477 SBC #$0080
    // Overlapping static entry reached from 0xC2208E.
    case 0xC22090: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    case 0xC22091: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    // Overlapping static entry reached from 0xC22091.
    case 0xC22093: cpu.execute_instruction<0xFF>(0x801085, 4); return true;
    // src/battle/calc_resistances.asm:479 STA @LOCAL01
    case 0xC22094: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    case 0xC22096: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    // Overlapping static entry reached from 0xC22093.
    case 0xC22097: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/battle/calc_resistances.asm:482 LDA #$0000
    case 0xC22098: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC22097.
    case 0xC22099: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC22098.
    case 0xC2209A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:483 STA @LOCAL01
    case 0xC2209B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:485 LDX @LOCAL02
    case 0xC2209D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:486 TXA
    case 0xC2209F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    case 0xC220A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC220A0.
    case 0xC220A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:488 JSL MULT168
    case 0xC220A3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/calc_resistances.asm:489 TAX
    case 0xC220A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:490 LDA @LOCAL01
    case 0xC220A8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:491 SEP #PROC_FLAGS::ACCUM8
    case 0xC220AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:492 STA PARTY_CHARACTERS+char_struct::hypnosis_brainshock_resist,X
    case 0xC220AC: cpu.execute_instruction<0x9D>(0x009CD4, 3); return true;
    // src/battle/calc_resistances.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC220AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC220B1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC220B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/call_for_help_common.asm (source_named).
bool execute_battle_call_for_help_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/call_for_help_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2BD09: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BD0E.
    case 0xC2BD10: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD11: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD12: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:20 STA @LOCAL0C
    case 0xC2BD13: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/call_for_help_common.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC2BD10.
    case 0xC2BD14: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:21 LDX CURRENT_ATTACKER
    case 0xC2BD15: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/call_for_help_common.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xC2BD18: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/call_for_help_common.asm:23 AND #$00FF
    case 0xC2BD1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BD1B.
    case 0xC2BD1D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:24 BEQ @UNKNOWN2
    case 0xC2BD1E: cpu.execute_instruction<0xF0>(0x000051, 2); return true;
    // src/battle/call_for_help_common.asm:25 LDX CURRENT_ATTACKER
    case 0xC2BD20: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/battle/call_for_help_common.asm:26 LDA a:battler::current_action_argument,X
    case 0xC2BD23: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:27 AND #$00FF
    case 0xC2BD26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC2BD26.
    case 0xC2BD28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:28 STA @LOCAL0B
    case 0xC2BD29: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD2B.
    case 0xC2BD2D: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD2E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD2D.
    case 0xC2BD2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD30.
    case 0xC2BD32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD33: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:30 LDA CURRENT_BATTLE_GROUP
    case 0xC2BD35: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:32 CLC
    case 0xC2BD3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:33 ADC @VIRTUAL0A
    case 0xC2BD3C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:34 STA @VIRTUAL0A
    case 0xC2BD3E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BD40.
    case 0xC2BD42: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD43: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD45: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD46: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD48: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD4A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/battle/call_for_help_common.asm:36 BRA @UNKNOWN1
    case 0xC2BD4C: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/call_for_help_common.asm:38 LDY #$0001
    case 0xC2BD4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:38 LDY #$0001
    // Overlapping static entry reached from 0xC2BD4E.
    case 0xC2BD50: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/call_for_help_common.asm:39 LDA [@VIRTUAL06],Y
    case 0xC2BD51: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:40 CMP @LOCAL0B
    case 0xC2BD53: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:41 BEQ @UNKNOWN4
    case 0xC2BD55: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/call_for_help_common.asm:42 LDA #$0003
    case 0xC2BD57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/call_for_help_common.asm:42 LDA #$0003
    // Overlapping static entry reached from 0xC2BD57.
    case 0xC2BD59: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:43 CLC
    case 0xC2BD5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:44 ADC @VIRTUAL06
    case 0xC2BD5B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:45 STA @VIRTUAL06
    case 0xC2BD5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD61: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD65: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:48 LDA [@VIRTUAL0A]
    case 0xC2BD67: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:49 AND #$00FF
    case 0xC2BD69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2BD69.
    case 0xC2BD6B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:50 CMP #$00FF
    case 0xC2BD6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:50 CMP #$00FF
    // Overlapping static entry reached from 0xC2BD6C.
    case 0xC2BD6E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:51 BNE @UNKNOWN0
    case 0xC2BD6F: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/battle/call_for_help_common.asm:53 LDA @LOCAL0C
    case 0xC2BD71: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/call_for_help_common.asm:54 BEQ @UNKNOWN3
    case 0xC2BD73: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A8, 2); else cpu.execute_instruction<0xA9>(0x0046A8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BD75.
    case 0xC2BD77: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD78: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BD77.
    case 0xC2BD79: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BD7A.
    case 0xC2BD7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD7D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD7F: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/call_for_help_common.asm:56 JMP @UNKNOWN33
    case 0xC2BD83: cpu.execute_instruction<0x4C>(0x00C0E5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x004692, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BD86.
    case 0xC2BD88: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BD88.
    case 0xC2BD8A: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BD8B.
    case 0xC2BD8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD8E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD90: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/call_for_help_common.asm:59 JMP @UNKNOWN33
    case 0xC2BD94: cpu.execute_instruction<0x4C>(0x00C0E5, 3); return true;
    // src/battle/call_for_help_common.asm:61 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2BD97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/call_for_help_common.asm:61 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BD97.
    case 0xC2BD99: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    case 0xC2BD9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    // Overlapping static entry reached from 0xC2BD99.
    case 0xC2BD9B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    // Overlapping static entry reached from 0xC2BD9A.
    case 0xC2BD9C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:63 STA @LOCAL0A
    case 0xC2BD9D: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:64 LDY #$0008
    case 0xC2BD9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:64 LDY #$0008
    // Overlapping static entry reached from 0xC2BD9F.
    case 0xC2BDA1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/call_for_help_common.asm:65 BRA @UNKNOWN7
    case 0xC2BDA2: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/call_for_help_common.asm:67 LDA a:battler::consciousness,X
    case 0xC2BDA4: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:68 AND #$00FF
    case 0xC2BDA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC2BDA7.
    case 0xC2BDA9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:69 CMP #$0001
    case 0xC2BDAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:69 CMP #$0001
    // Overlapping static entry reached from 0xC2BDAA.
    case 0xC2BDAC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:70 BNE @UNKNOWN6
    case 0xC2BDAD: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/battle/call_for_help_common.asm:71 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BDAF: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/call_for_help_common.asm:72 AND #$00FF
    case 0xC2BDB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC2BDB2.
    case 0xC2BDB4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:73 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BDB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:73 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BDB5.
    case 0xC2BDB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:74 BEQ @UNKNOWN6
    case 0xC2BDB8: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:75 LDA a:battler::unknown76,X
    case 0xC2BDBA: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/battle/call_for_help_common.asm:76 CMP @LOCAL0B
    case 0xC2BDBD: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:77 BNE @UNKNOWN6
    case 0xC2BDBF: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/call_for_help_common.asm:78 LDA @LOCAL0A
    case 0xC2BDC1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:79 INC
    case 0xC2BDC3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:80 STA @LOCAL0A
    case 0xC2BDC4: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:82 TXA
    case 0xC2BDC6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:83 CLC
    case 0xC2BDC7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:84 ADC #.SIZEOF(battler)
    case 0xC2BDC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:84 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BDC8.
    case 0xC2BDCA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/call_for_help_common.asm:85 TAX
    case 0xC2BDCB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:86 INY
    case 0xC2BDCC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:88 CPY #$0020
    case 0xC2BDCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:88 CPY #$0020
    // Overlapping static entry reached from 0xC2BDCD.
    case 0xC2BDCF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/call_for_help_common.asm:89 BCC @UNKNOWN5
    case 0xC2BDD0: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD2.
    case 0xC2BDD4: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDD5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD4.
    case 0xC2BDD6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD6.
    case 0xC2BDD8: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD7.
    case 0xC2BDD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDDA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/call_for_help_common.asm:91 LDA @LOCAL0B
    case 0xC2BDDC: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:92 LDY #.SIZEOF(enemy_data)
    case 0xC2BDDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/call_for_help_common.asm:92 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2BDDE.
    case 0xC2BDE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:93 JSL MULT168
    case 0xC2BDE1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/call_for_help_common.asm:94 TAX
    case 0xC2BDE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:95 STX @LOCAL09
    case 0xC2BDE6: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:96 TXA
    case 0xC2BDE8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:97 CLC
    case 0xC2BDE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:98 ADC #enemy_data::max_called
    case 0xC2BDEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004B, 2); else cpu.execute_instruction<0x69>(0x00004B, 3); return true;
    // src/battle/call_for_help_common.asm:98 ADC #enemy_data::max_called
    // Overlapping static entry reached from 0xC2BDEA.
    case 0xC2BDEC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDED: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDEF: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDF1: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDF3: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:100 CLC
    case 0xC2BDF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:101 ADC @VIRTUAL0A
    case 0xC2BDF6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:102 STA @VIRTUAL0A
    case 0xC2BDF8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:103 LDA [@VIRTUAL0A]
    case 0xC2BDFA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:104 AND #$00FF
    case 0xC2BDFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC2BDFC.
    case 0xC2BDFE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/call_for_help_common.asm:105 TAY
    case 0xC2BDFF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:106 STY @LOCAL08
    case 0xC2BE00: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:107 LDA @LOCAL0A
    case 0xC2BE02: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:108 STA @VIRTUAL02
    case 0xC2BE04: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:109 TYA
    case 0xC2BE06: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:110 SEC
    case 0xC2BE07: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:111 SBC @VIRTUAL02
    case 0xC2BE08: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:112 LDY #$00CD
    case 0xC2BE0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CD, 2); else cpu.execute_instruction<0xA0>(0x0000CD, 3); return true;
    // src/battle/call_for_help_common.asm:112 LDY #$00CD
    // Overlapping static entry reached from 0xC2BE0A.
    case 0xC2BE0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:113 JSL MULT168
    case 0xC2BE0D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/call_for_help_common.asm:114 LDY @LOCAL08
    case 0xC2BE11: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2BE13: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/battle/call_for_help_common.asm:116 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BE17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:117 JSR SUCCESS_255
    case 0xC2BE19: cpu.execute_instruction<0x20>(0x006AF7, 3); return true;
    // src/battle/call_for_help_common.asm:119 CMP #$0000
    case 0xC2BE1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:119 CMP #$0000
    // Overlapping static entry reached from 0xC2BE1C.
    case 0xC2BE1E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/call_for_help_common.asm:120 BEQL @UNKNOWN2
    case 0xC2BE1F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:120 BEQL @UNKNOWN2
    case 0xC2BE21: cpu.execute_instruction<0x4C>(0x00BD71, 3); return true;
    // src/battle/call_for_help_common.asm:121 LDX @LOCAL09
    case 0xC2BE24: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:122 TXA
    case 0xC2BE26: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:123 CLC
    case 0xC2BE27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:124 ADC #enemy_data::battle_sprite
    case 0xC2BE28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/battle/call_for_help_common.asm:124 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2BE28.
    case 0xC2BE2A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE2B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE2D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE2F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE31: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:126 CLC
    case 0xC2BE33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:127 ADC @VIRTUAL0A
    case 0xC2BE34: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:128 STA @VIRTUAL0A
    case 0xC2BE36: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:129 LDA [@VIRTUAL0A]
    case 0xC2BE38: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:130 STA @LOCAL08
    case 0xC2BE3A: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:131 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE3C: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:133 CLC
    case 0xC2BE42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:134 ADC #$0010
    case 0xC2BE43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:134 ADC #$0010
    // Overlapping static entry reached from 0xC2BE43.
    case 0xC2BE45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:135 STA @LOCAL07
    case 0xC2BE46: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:136 LDX @LOCAL09
    case 0xC2BE48: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:137 TXA
    case 0xC2BE4A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:138 CLC
    case 0xC2BE4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:139 ADC #enemy_data::row
    case 0xC2BE4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004A, 2); else cpu.execute_instruction<0x69>(0x00004A, 3); return true;
    // src/battle/call_for_help_common.asm:139 ADC #enemy_data::row
    // Overlapping static entry reached from 0xC2BE4C.
    case 0xC2BE4E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:140 CLC
    case 0xC2BE4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:141 ADC @VIRTUAL06
    case 0xC2BE50: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:142 STA @VIRTUAL06
    case 0xC2BE52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:143 LDA [@VIRTUAL06]
    case 0xC2BE54: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:144 AND #$00FF
    case 0xC2BE56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC2BE56.
    case 0xC2BE58: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:145 STA @LOCAL06
    case 0xC2BE59: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:146 JSR UNKNOWN_C2BD13
    case 0xC2BE5B: cpu.execute_instruction<0x20>(0x00BCBE, 3); return true;
    // src/battle/call_for_help_common.asm:147 TAX
    case 0xC2BE5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:148 STX @LOCAL05
    case 0xC2BE5F: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:149 LDA @LOCAL08
    case 0xC2BE61: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:150 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE63: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/battle/call_for_help_common.asm:151 STA @VIRTUAL02
    case 0xC2BE66: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:152 LDX @LOCAL05
    case 0xC2BE68: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:153 TXA
    case 0xC2BE6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:154 CLC
    case 0xC2BE6B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:155 ADC @VIRTUAL02
    case 0xC2BE6C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:156 CMP #$0020
    case 0xC2BE6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:156 CMP #$0020
    // Overlapping static entry reached from 0xC2BE6E.
    case 0xC2BE70: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BE71: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BE73: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BE75: cpu.execute_instruction<0x4C>(0x00BFA3, 3); return true;
    // src/battle/call_for_help_common.asm:158 LDA #$0080
    case 0xC2BE78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:158 LDA #$0080
    // Overlapping static entry reached from 0xC2BE78.
    case 0xC2BE7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:159 STA @LOCAL05
    case 0xC2BE7B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:160 STA @LOCAL04
    case 0xC2BE7D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:161 STA @VIRTUAL04
    case 0xC2BE7F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:162 LDY @VIRTUAL04
    case 0xC2BE81: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:163 STY @LOCAL03
    case 0xC2BE83: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:164 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2BE85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00A41E, 3); return true;
    // src/battle/call_for_help_common.asm:164 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2BE85.
    case 0xC2BE87: cpu.execute_instruction<0xA4>(0x000086, 2); return true;
    // src/battle/call_for_help_common.asm:165 STX @LOCAL02
    case 0xC2BE88: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:165 STX @LOCAL02
    // Overlapping static entry reached from 0xC2BE87.
    case 0xC2BE89: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    case 0xC2BE8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    // Overlapping static entry reached from 0xC2BE89.
    case 0xC2BE8B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    // Overlapping static entry reached from 0xC2BE8A.
    case 0xC2BE8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:167 STA @LOCAL09
    case 0xC2BE8D: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:168 BRA @UNKNOWN16
    case 0xC2BE8F: cpu.execute_instruction<0x80>(0x000077, 2); return true;
    // src/battle/call_for_help_common.asm:170 LDA a:battler::consciousness,X
    case 0xC2BE91: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:171 AND #$00FF
    case 0xC2BE94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC2BE94.
    case 0xC2BE96: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:172 BEQ @UNKNOWN15
    case 0xC2BE97: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/battle/call_for_help_common.asm:173 LDA a:battler::sprite,X
    case 0xC2BE99: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/call_for_help_common.asm:174 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE9C: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:176 LSR
    case 0xC2BEA2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:177 STA @VIRTUAL02
    case 0xC2BEA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:178 STA @LOCAL01
    case 0xC2BEA5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:179 LDX @LOCAL02
    case 0xC2BEA7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:180 LDA a:battler::row,X
    case 0xC2BEA9: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:181 AND #$00FF
    case 0xC2BEAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC2BEAC.
    case 0xC2BEAE: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/call_for_help_common.asm:182 CMP @LOCAL06
    case 0xC2BEAF: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:183 BNE @UNKNOWN12
    case 0xC2BEB1: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/battle/call_for_help_common.asm:184 LDA a:battler::sprite_x,X
    case 0xC2BEB3: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:185 AND #$00FF
    case 0xC2BEB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:185 AND #$00FF
    // Overlapping static entry reached from 0xC2BEB6.
    case 0xC2BEB8: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:186 SEC
    case 0xC2BEB9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:187 SBC @VIRTUAL02
    case 0xC2BEBA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:188 LDY @LOCAL03
    case 0xC2BEBC: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:189 STY @VIRTUAL02
    case 0xC2BEBE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:190 CMP @VIRTUAL02
    case 0xC2BEC0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:191 BCS @UNKNOWN11
    case 0xC2BEC2: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/battle/call_for_help_common.asm:192 TAY
    case 0xC2BEC4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:193 STY @LOCAL03
    case 0xC2BEC5: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:195 LDA @LOCAL01
    case 0xC2BEC7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:196 STA @VIRTUAL02
    case 0xC2BEC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:197 LDA a:battler::sprite_x,X
    case 0xC2BECB: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:198 AND #$00FF
    case 0xC2BECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:198 AND #$00FF
    // Overlapping static entry reached from 0xC2BECE.
    case 0xC2BED0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:199 CLC
    case 0xC2BED1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:200 ADC @VIRTUAL02
    case 0xC2BED2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:201 CMP @VIRTUAL04
    case 0xC2BED4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:202 BLTEQ @UNKNOWN15
    case 0xC2BED6: cpu.execute_instruction<0x90>(0x000026, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:202 BLTEQ @UNKNOWN15
    case 0xC2BED8: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:203 STA @VIRTUAL04
    case 0xC2BEDA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:204 BRA @UNKNOWN15
    case 0xC2BEDC: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:206 LDA a:battler::sprite_x,X
    case 0xC2BEDE: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:207 AND #$00FF
    case 0xC2BEE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC2BEE1.
    case 0xC2BEE3: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:208 SEC
    case 0xC2BEE4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:209 SBC @VIRTUAL02
    case 0xC2BEE5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:210 CMP @LOCAL04
    case 0xC2BEE7: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:211 BCS @UNKNOWN13
    case 0xC2BEE9: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:212 STA @LOCAL04
    case 0xC2BEEB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:214 LDA a:battler::sprite_x,X
    case 0xC2BEED: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    case 0xC2BEF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    // Overlapping static entry reached from 0xC2BF4A.
    case 0xC2BEF1: cpu.execute_instruction<0xFF>(0x651800, 4); return true;
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    // Overlapping static entry reached from 0xC2BEF0.
    case 0xC2BEF2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:216 CLC
    case 0xC2BEF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:217 ADC @VIRTUAL02
    case 0xC2BEF4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:217 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2BEF1.
    case 0xC2BEF5: cpu.execute_instruction<0x02>(0x0000C5, 2); return true;
    // src/battle/call_for_help_common.asm:218 CMP @LOCAL05
    case 0xC2BEF6: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:219 BLTEQ @UNKNOWN15
    case 0xC2BEF8: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:219 BLTEQ @UNKNOWN15
    case 0xC2BEFA: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:220 STA @LOCAL05
    case 0xC2BEFC: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:222 TXA
    case 0xC2BEFE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:223 CLC
    case 0xC2BEFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:224 ADC #.SIZEOF(battler)
    case 0xC2BF00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:224 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BF00.
    case 0xC2BF02: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/call_for_help_common.asm:225 TAX
    case 0xC2BF03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:226 STX @LOCAL02
    case 0xC2BF04: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:227 INC @LOCAL09
    case 0xC2BF06: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:229 LDA @LOCAL09
    case 0xC2BF08: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:230 CMP #$0020
    case 0xC2BF0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:230 CMP #$0020
    // Overlapping static entry reached from 0xC2BF0A.
    case 0xC2BF0C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF0D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF0F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF11: cpu.execute_instruction<0x4C>(0x00BE91, 3); return true;
    // src/battle/call_for_help_common.asm:232 LDA @VIRTUAL04
    case 0xC2BF14: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:233 SEC
    case 0xC2BF16: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:234 SBC #$0080
    case 0xC2BF17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:234 SBC #$0080
    // Overlapping static entry reached from 0xC2BF17.
    case 0xC2BF19: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/call_for_help_common.asm:235 PHA
    case 0xC2BF1A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:236 LDY @LOCAL03
    case 0xC2BF1B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:237 STY @VIRTUAL02
    case 0xC2BF1D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:238 LDA #$0080
    case 0xC2BF1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:238 LDA #$0080
    // Overlapping static entry reached from 0xC2BF1F.
    case 0xC2BF21: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:239 SEC
    case 0xC2BF22: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:240 SBC @VIRTUAL02
    case 0xC2BF23: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:241 PLX
    case 0xC2BF25: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:242 STX @VIRTUAL02
    case 0xC2BF26: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:243 CMP @VIRTUAL02
    case 0xC2BF28: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:244 BCS @UNKNOWN18
    case 0xC2BF2A: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/battle/call_for_help_common.asm:245 CPY @LOCAL07
    case 0xC2BF2C: cpu.execute_instruction<0xC4>(0x00001E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:246 BLTEQ @UNKNOWN19
    case 0xC2BF2E: cpu.execute_instruction<0x90>(0x00002B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:246 BLTEQ @UNKNOWN19
    case 0xC2BF30: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/call_for_help_common.asm:247 LDA @LOCAL07
    case 0xC2BF32: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:248 LSR
    case 0xC2BF34: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:249 STA @VIRTUAL02
    case 0xC2BF35: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:250 TYA
    case 0xC2BF37: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:251 SEC
    case 0xC2BF38: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:252 SBC @VIRTUAL02
    case 0xC2BF39: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:253 TAY
    case 0xC2BF3B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:254 STY @LOCAL0A
    case 0xC2BF3C: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:255 JMP @UNKNOWN25
    case 0xC2BF3E: cpu.execute_instruction<0x4C>(0x00C01C, 3); return true;
    // src/battle/call_for_help_common.asm:258 LDA @VIRTUAL04
    case 0xC2BF41: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:259 CLC
    case 0xC2BF43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:260 ADC @LOCAL07
    case 0xC2BF44: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:261 CMP #$0100
    case 0xC2BF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/battle/call_for_help_common.asm:261 CMP #$0100
    // Overlapping static entry reached from 0xC2BF46.
    case 0xC2BF48: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/call_for_help_common.asm:262 BCS @UNKNOWN19
    case 0xC2BF49: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/battle/call_for_help_common.asm:262 BCS @UNKNOWN19
    // Overlapping static entry reached from 0xC2BF48.
    case 0xC2BF4A: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/battle/call_for_help_common.asm:263 LDA @LOCAL07
    case 0xC2BF4B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:263 LDA @LOCAL07
    // Overlapping static entry reached from 0xC2BF4A.
    case 0xC2BF4C: cpu.execute_instruction<0x1E>(0x00854A, 3); return true;
    // src/battle/call_for_help_common.asm:264 LSR
    case 0xC2BF4D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:265 STA @VIRTUAL02
    case 0xC2BF4E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:265 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2BF4C.
    case 0xC2BF4F: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/battle/call_for_help_common.asm:266 LDA @VIRTUAL04
    case 0xC2BF50: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:267 CLC
    case 0xC2BF52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:268 ADC @VIRTUAL02
    case 0xC2BF53: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:269 TAY
    case 0xC2BF55: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:270 STY @LOCAL0A
    case 0xC2BF56: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:271 JMP @UNKNOWN25
    case 0xC2BF58: cpu.execute_instruction<0x4C>(0x00C01C, 3); return true;
    // src/battle/call_for_help_common.asm:273 LDA #$0001
    case 0xC2BF5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:273 LDA #$0001
    // Overlapping static entry reached from 0xC2BF5B.
    case 0xC2BF5D: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:274 SEC
    case 0xC2BF5E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:275 SBC @LOCAL06
    case 0xC2BF5F: cpu.execute_instruction<0xE5>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:276 STA @LOCAL06
    case 0xC2BF61: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:277 LDA @LOCAL05
    case 0xC2BF63: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:278 SEC
    case 0xC2BF65: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:279 SBC #$0080
    case 0xC2BF66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:279 SBC #$0080
    // Overlapping static entry reached from 0xC2BF66.
    case 0xC2BF68: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:280 STA @VIRTUAL02
    case 0xC2BF69: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:281 LDA #$0080
    case 0xC2BF6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:281 LDA #$0080
    // Overlapping static entry reached from 0xC2BF6B.
    case 0xC2BF6D: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:282 SEC
    case 0xC2BF6E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:283 SBC @LOCAL04
    case 0xC2BF6F: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:284 CMP @VIRTUAL02
    case 0xC2BF71: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:285 BCS @UNKNOWN20
    case 0xC2BF73: cpu.execute_instruction<0xB0>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:286 LDA @LOCAL04
    case 0xC2BF75: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:287 CMP @LOCAL07
    case 0xC2BF77: cpu.execute_instruction<0xC5>(0x00001E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:288 BLTEQ @UNKNOWN21
    case 0xC2BF79: cpu.execute_instruction<0x90>(0x000028, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:288 BLTEQ @UNKNOWN21
    case 0xC2BF7B: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:289 LDA @LOCAL07
    case 0xC2BF7D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:290 LSR
    case 0xC2BF7F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:291 STA @VIRTUAL02
    case 0xC2BF80: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:292 LDA @LOCAL04
    case 0xC2BF82: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:293 SEC
    case 0xC2BF84: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:294 SBC @VIRTUAL02
    case 0xC2BF85: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:295 TAY
    case 0xC2BF87: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:296 STY @LOCAL0A
    case 0xC2BF88: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:297 JMP @UNKNOWN25
    case 0xC2BF8A: cpu.execute_instruction<0x4C>(0x00C01C, 3); return true;
    // src/battle/call_for_help_common.asm:299 LDA @LOCAL05
    case 0xC2BF8D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:300 CLC
    case 0xC2BF8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:301 ADC @LOCAL07
    case 0xC2BF90: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:302 CMP #$0100
    case 0xC2BF92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/battle/call_for_help_common.asm:302 CMP #$0100
    // Overlapping static entry reached from 0xC2BF92.
    case 0xC2BF94: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/call_for_help_common.asm:303 BCS @UNKNOWN21
    case 0xC2BF95: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:303 BCS @UNKNOWN21
    // Overlapping static entry reached from 0xC2BF94.
    case 0xC2BF96: cpu.execute_instruction<0x0C>(0x001EA5, 3); return true;
    // src/battle/call_for_help_common.asm:304 LDA @LOCAL07
    case 0xC2BF97: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:305 LSR
    case 0xC2BF99: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:306 CLC
    case 0xC2BF9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:307 ADC @LOCAL05
    case 0xC2BF9B: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:308 TAY
    case 0xC2BF9D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:309 STY @LOCAL0A
    case 0xC2BF9E: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:310 JMP @UNKNOWN25
    case 0xC2BFA0: cpu.execute_instruction<0x4C>(0x00C01C, 3); return true;
    // src/battle/call_for_help_common.asm:312 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2BFA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00A41E, 3); return true;
    // src/battle/call_for_help_common.asm:312 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2BFA3.
    case 0xC2BFA5: cpu.execute_instruction<0xA4>(0x000086, 2); return true;
    // src/battle/call_for_help_common.asm:313 STX @LOCAL01
    case 0xC2BFA6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:313 STX @LOCAL01
    // Overlapping static entry reached from 0xC2BFA5.
    case 0xC2BFA7: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    case 0xC2BFA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    // Overlapping static entry reached from 0xC2BFA7.
    case 0xC2BFA9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    // Overlapping static entry reached from 0xC2BFA8.
    case 0xC2BFAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:315 STA @VIRTUAL02
    case 0xC2BFAB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:316 BRA @UNKNOWN24
    case 0xC2BFAD: cpu.execute_instruction<0x80>(0x000063, 2); return true;
    // src/battle/call_for_help_common.asm:318 TXA
    case 0xC2BFAF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:319 CLC
    case 0xC2BFB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:320 ADC #battler::consciousness
    case 0xC2BFB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:320 ADC #battler::consciousness
    // Overlapping static entry reached from 0xC2BFB1.
    case 0xC2BFB3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/call_for_help_common.asm:321 TAY
    case 0xC2BFB4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:322 STY @LOCAL02
    case 0xC2BFB5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:323 LDA __BSS_START__,Y
    case 0xC2BFB7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:324 AND #$00FF
    case 0xC2BFBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:324 AND #$00FF
    // Overlapping static entry reached from 0xC2BFBA.
    case 0xC2BFBC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:325 CMP #$0001
    case 0xC2BFBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:325 CMP #$0001
    // Overlapping static entry reached from 0xC2BFBD.
    case 0xC2BFBF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:326 BNE @UNKNOWN23
    case 0xC2BFC0: cpu.execute_instruction<0xD0>(0x000044, 2); return true;
    // src/battle/call_for_help_common.asm:327 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BFC2: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/call_for_help_common.asm:328 AND #$00FF
    case 0xC2BFC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC2BFC5.
    case 0xC2BFC7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:329 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BFC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:329 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BFC8.
    case 0xC2BFCA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:330 BNE @UNKNOWN23
    case 0xC2BFCB: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/battle/call_for_help_common.asm:331 LDA @LOCAL08
    case 0xC2BFCD: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:332 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BFCF: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/battle/call_for_help_common.asm:333 STA @VIRTUAL04
    case 0xC2BFD2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:334 LDX @LOCAL01
    case 0xC2BFD4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:335 LDA a:battler::sprite,X
    case 0xC2BFD6: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/call_for_help_common.asm:336 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BFD9: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/battle/call_for_help_common.asm:337 PHA
    case 0xC2BFDC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:338 LDA @VIRTUAL04
    case 0xC2BFDD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:339 PLY
    case 0xC2BFDF: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:340 STY @VIRTUAL04
    case 0xC2BFE0: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:341 CMP @VIRTUAL04
    case 0xC2BFE2: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:342 BNE @UNKNOWN23
    case 0xC2BFE4: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BFE6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:344 LDA #$0000
    case 0xC2BFE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A400, 3); return true;
    // src/battle/call_for_help_common.asm:345 LDY @LOCAL02 ;battler::consciousness
    case 0xC2BFEA: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:345 LDY @LOCAL02 ;battler::consciousness
    // Overlapping static entry reached from 0xC2BFE8.
    case 0xC2BFEB: cpu.execute_instruction<0x14>(0x000099, 2); return true;
    // src/battle/call_for_help_common.asm:346 STA __BSS_START__,Y
    case 0xC2BFEC: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:346 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2BFEB.
    case 0xC2BFED: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/call_for_help_common.asm:347 LDX @LOCAL01
    case 0xC2BFEF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:348 REP #PROC_FLAGS::ACCUM8
    case 0xC2BFF1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:349 LDA a:battler::sprite_x,X
    case 0xC2BFF3: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:350 AND #$00FF
    case 0xC2BFF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:350 AND #$00FF
    // Overlapping static entry reached from 0xC2BFF6.
    case 0xC2BFF8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/call_for_help_common.asm:351 TAY
    case 0xC2BFF9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:352 STY @LOCAL0A
    case 0xC2BFFA: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:353 LDA a:battler::row,X
    case 0xC2BFFC: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:354 AND #$00FF
    case 0xC2BFFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:354 AND #$00FF
    // Overlapping static entry reached from 0xC2BFFF.
    case 0xC2C001: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:355 STA @LOCAL06
    case 0xC2C002: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:356 BRA @UNKNOWN25
    case 0xC2C004: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:358 LDX @LOCAL01
    case 0xC2C006: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:359 TXA
    case 0xC2C008: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:360 CLC
    case 0xC2C009: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:361 ADC #.SIZEOF(battler)
    case 0xC2C00A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:361 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C00A.
    case 0xC2C00C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/call_for_help_common.asm:362 TAX
    case 0xC2C00D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:363 STX @LOCAL01
    case 0xC2C00E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:364 INC @VIRTUAL02
    case 0xC2C010: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:366 LDA @VIRTUAL02
    case 0xC2C012: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:367 CMP #BATTLER_COUNT
    case 0xC2C014: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:367 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2C014.
    case 0xC2C016: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/call_for_help_common.asm:368 BCC @UNKNOWN22
    case 0xC2C017: cpu.execute_instruction<0x90>(0x000096, 2); return true;
    // src/battle/call_for_help_common.asm:369 JMP @UNKNOWN2
    case 0xC2C019: cpu.execute_instruction<0x4C>(0x00BD71, 3); return true;
    // src/battle/call_for_help_common.asm:371 JSR UNKNOWN_C2BD13
    case 0xC2C01C: cpu.execute_instruction<0x20>(0x00BCBE, 3); return true;
    // src/battle/call_for_help_common.asm:372 TAX
    case 0xC2C01F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:373 STX @LOCAL09
    case 0xC2C020: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:374 LDA @LOCAL08
    case 0xC2C022: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:375 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2C024: cpu.execute_instruction<0x20>(0x00EF1A, 3); return true;
    // src/battle/call_for_help_common.asm:376 STA @VIRTUAL02
    case 0xC2C027: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:377 LDX @LOCAL09
    case 0xC2C029: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:378 TXA
    case 0xC2C02B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:379 CLC
    case 0xC2C02C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:380 ADC @VIRTUAL02
    case 0xC2C02D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:381 CMP #$0020
    case 0xC2C02F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:381 CMP #$0020
    // Overlapping static entry reached from 0xC2C02F.
    case 0xC2C031: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C032: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C034: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C036: cpu.execute_instruction<0x4C>(0x00BD71, 3); return true;
    // src/battle/call_for_help_common.asm:383 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C039: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00A41E, 3); return true;
    // src/battle/call_for_help_common.asm:383 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C039.
    case 0xC2C03B: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:384 STA @LOCAL09
    case 0xC2C03C: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:384 STA @LOCAL09
    // Overlapping static entry reached from 0xC2C03B.
    case 0xC2C03D: cpu.execute_instruction<0x22>(0x0008A2, 4); return true;
    // src/battle/call_for_help_common.asm:385 LDX #$0008
    case 0xC2C03E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:385 LDX #$0008
    // Overlapping static entry reached from 0xC2C03E.
    case 0xC2C040: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/call_for_help_common.asm:386 STX @LOCAL08
    case 0xC2C041: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:387 BRA @UNKNOWN28
    case 0xC2C043: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:389 TAX
    case 0xC2C045: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:390 LDA a:battler::consciousness,X
    case 0xC2C046: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:391 AND #$00FF
    case 0xC2C049: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:391 AND #$00FF
    // Overlapping static entry reached from 0xC2C049.
    case 0xC2C04B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:392 BEQ @UNKNOWN29
    case 0xC2C04C: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:393 LDA @LOCAL09
    case 0xC2C04E: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:394 CLC
    case 0xC2C050: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:395 ADC #.SIZEOF(battler)
    case 0xC2C051: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:395 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C051.
    case 0xC2C053: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:396 STA @LOCAL09
    case 0xC2C054: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:397 LDX @LOCAL08
    case 0xC2C056: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:398 INX
    case 0xC2C058: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:399 STX @LOCAL08
    case 0xC2C059: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:401 CPX #$0020
    case 0xC2C05B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:401 CPX #$0020
    // Overlapping static entry reached from 0xC2C05B.
    case 0xC2C05D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/call_for_help_common.asm:402 BCC @UNKNOWN27
    case 0xC2C05E: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/battle/call_for_help_common.asm:404 LDA @LOCAL09
    case 0xC2C060: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:405 STA CURRENT_TARGET
    case 0xC2C062: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:406 LDX CURRENT_TARGET
    case 0xC2C065: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:407 LDA @LOCAL0B
    case 0xC2C068: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:408 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C06A: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/call_for_help_common.asm:409 LDY @LOCAL0A
    case 0xC2C06E: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:410 TYA
    case 0xC2C070: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C071: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:412 LDX CURRENT_TARGET
    case 0xC2C073: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:413 STA a:battler::sprite_x,X
    case 0xC2C076: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC2C079: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:415 LDA @LOCAL06
    case 0xC2C07B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:416 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C07D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:417 LDX CURRENT_TARGET
    case 0xC2C07F: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:418 STA a:battler::row,X
    case 0xC2C082: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:419 LDX CURRENT_TARGET
    case 0xC2C085: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:419 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC24A54.
    case 0xC2C087: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:420 REP #PROC_FLAGS::ACCUM8
    case 0xC2C088: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:421 LDA a:battler::row,X
    case 0xC2C08A: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:422 AND #$00FF
    case 0xC2C08D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC2C08D.
    case 0xC2C08F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:423 BEQ @UNKNOWN30
    case 0xC2C090: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C092: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:425 LDA #$0080
    case 0xC2C094: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x00AE80, 3); return true;
    // src/battle/call_for_help_common.asm:426 LDX CURRENT_TARGET
    case 0xC2C096: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:426 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C094.
    case 0xC2C097: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/call_for_help_common.asm:427 STA a:battler::sprite_y,X
    case 0xC2C099: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/battle/call_for_help_common.asm:428 BRA @UNKNOWN31
    case 0xC2C09C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:430 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C09E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:431 LDA #$0090
    case 0xC2C0A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x00AE90, 3); return true;
    // src/battle/call_for_help_common.asm:432 LDX CURRENT_TARGET
    case 0xC2C0A2: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:432 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C0A0.
    case 0xC2C0A3: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/call_for_help_common.asm:433 STA a:battler::sprite_y,X
    case 0xC2C0A5: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/battle/call_for_help_common.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC2C0A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:436 LDA @LOCAL0B
    case 0xC2C0AA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:437 JSR UNKNOWN_C2F09F
    case 0xC2C0AC: cpu.execute_instruction<0x20>(0x00EFBC, 3); return true;
    // src/battle/call_for_help_common.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C0AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:439 LDX CURRENT_TARGET
    case 0xC2C0B1: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:440 STA a:battler::vram_sprite_index,X
    case 0xC2C0B4: cpu.execute_instruction<0x9D>(0x000043, 3); return true;
    // src/battle/call_for_help_common.asm:441 LDA #$0001
    case 0xC2C0B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/call_for_help_common.asm:442 LDX CURRENT_TARGET
    case 0xC2C0B9: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/call_for_help_common.asm:442 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C0B7.
    case 0xC2C0BA: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/call_for_help_common.asm:443 STA a:battler::has_taken_turn,X
    case 0xC2C0BC: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/call_for_help_common.asm:444 JSL FIX_TARGET_NAME
    case 0xC2C0BF: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/call_for_help_common.asm:446 LDA @LOCAL0C
    case 0xC2C0C3: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/call_for_help_common.asm:447 BEQ @UNKNOWN32
    case 0xC2C0C5: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x004683, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C0C7.
    case 0xC2C0C9: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C0C9.
    case 0xC2C0CB: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C0CC.
    case 0xC2C0CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0D1: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/call_for_help_common.asm:449 BRA @UNKNOWN33
    case 0xC2C0D5: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00466E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C0D7.
    case 0xC2C0D9: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C0D9.
    case 0xC2C0DB: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C0DC.
    case 0xC2C0DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0E1: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/call_for_help_common.asm:453 END_C_FUNCTION
    case 0xC2C0E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/call_for_help_common.asm:453 END_C_FUNCTION
    case 0xC2C0E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/check_dead_players.asm (source_named).
bool execute_battle_check_dead_players_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_dead_players.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BAC3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BAC5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BAC6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BAC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BAC7.
    case 0xC2BAC9: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BACA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:10 LDA #$0000
    case 0xC2BACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:10 LDA #$0000
    // Overlapping static entry reached from 0xC2BACB.
    case 0xC2BACD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/check_dead_players.asm:11 STA @VIRTUAL04
    case 0xC2BACE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:12 JMP @UNKNOWN9
    case 0xC2BAD0: cpu.execute_instruction<0x4C>(0x00BBF9, 3); return true;
    // src/battle/check_dead_players.asm:14 LDA @VIRTUAL04
    case 0xC2BAD3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    case 0xC2BAD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BAD5.
    case 0xC2BAD7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_dead_players.asm:16 JSL MULT168
    case 0xC2BAD8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/check_dead_players.asm:17 TAY
    case 0xC2BADC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:18 STY @LOCAL03
    case 0xC2BADD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/check_dead_players.asm:19 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2BADF: cpu.execute_instruction<0xB9>(0x00A1BA, 3); return true;
    // src/battle/check_dead_players.asm:20 AND #$00FF
    case 0xC2BAE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2BAE2.
    case 0xC2BAE4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BAE5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BAE7: cpu.execute_instruction<0x4C>(0x00BBF7, 3); return true;
    // src/battle/check_dead_players.asm:22 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2BAEA: cpu.execute_instruction<0xB9>(0x00A1BC, 3); return true;
    // src/battle/check_dead_players.asm:23 AND #$00FF
    case 0xC2BAED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BAED.
    case 0xC2BAEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BAF0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BAF2: cpu.execute_instruction<0x4C>(0x00BBF7, 3); return true;
    // src/battle/check_dead_players.asm:25 LDA BATTLERS_TABLE+battler::npc_id,Y
    case 0xC2BAF5: cpu.execute_instruction<0xB9>(0x00A1BD, 3); return true;
    // src/battle/check_dead_players.asm:26 AND #$00FF
    case 0xC2BAF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BAF8.
    case 0xC2BAFA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BAFB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BAFD: cpu.execute_instruction<0x4C>(0x00BBF7, 3); return true;
    // src/battle/check_dead_players.asm:28 LDA BATTLERS_TABLE+battler::row,Y
    case 0xC2BB00: cpu.execute_instruction<0xB9>(0x00A1BE, 3); return true;
    // src/battle/check_dead_players.asm:29 AND #$00FF
    case 0xC2BB03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2BB03.
    case 0xC2BB05: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    case 0xC2BB06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BB06.
    case 0xC2BB08: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_dead_players.asm:31 JSL MULT168
    case 0xC2BB09: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/check_dead_players.asm:32 CLC
    case 0xC2BB0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BB0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BB0E.
    case 0xC2BB10: cpu.execute_instruction<0x9C>(0x000285, 3); return true;
    // src/battle/check_dead_players.asm:34 STA @VIRTUAL02
    case 0xC2BB11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:35 STA @LOCAL02
    case 0xC2BB13: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/check_dead_players.asm:36 LDY @LOCAL03
    case 0xC2BB15: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/check_dead_players.asm:37 TYA
    case 0xC2BB17: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:38 CLC
    case 0xC2BB18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    case 0xC2BB19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BF, 2); else cpu.execute_instruction<0x69>(0x00A1BF, 3); return true;
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    // Overlapping static entry reached from 0xC2BB19.
    case 0xC2BB1B: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/check_dead_players.asm:40 TAX
    case 0xC2BB1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:41 STX @LOCAL01
    case 0xC2BB1D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:42 LDX @VIRTUAL02
    case 0xC2BB1F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:43 LDA a:char_struct::current_hp,X
    case 0xC2BB21: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/check_dead_players.asm:44 LDX @LOCAL01
    case 0xC2BB24: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:45 STA __BSS_START__,X
    case 0xC2BB26: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:46 LDX @VIRTUAL02
    case 0xC2BB29: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:47 LDA a:char_struct::current_pp,X
    case 0xC2BB2B: cpu.execute_instruction<0xBD>(0x00004A, 3); return true;
    // src/battle/check_dead_players.asm:48 STA BATTLERS_TABLE+battler::pp,Y
    case 0xC2BB2E: cpu.execute_instruction<0x99>(0x00A1C5, 3); return true;
    // src/battle/check_dead_players.asm:49 LDX @LOCAL01
    case 0xC2BB31: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:50 LDA __BSS_START__,X
    case 0xC2BB33: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:51 BNE @UNKNOWN4
    case 0xC2BB36: cpu.execute_instruction<0xD0>(0x000068, 2); return true;
    // src/battle/check_dead_players.asm:52 LDA BATTLERS_TABLE+battler::afflictions,Y
    case 0xC2BB38: cpu.execute_instruction<0xB9>(0x00A1CB, 3); return true;
    // src/battle/check_dead_players.asm:53 AND #$00FF
    case 0xC2BB3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2BB3B.
    case 0xC2BB3D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BB3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BB3E.
    case 0xC2BB40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_dead_players.asm:55 BEQ @UNKNOWN4
    case 0xC2BB41: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/battle/check_dead_players.asm:56 TYA
    case 0xC2BB43: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:57 CLC
    case 0xC2BB44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2BB45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BB45.
    case 0xC2BB47: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/battle/check_dead_players.asm:59 STA CURRENT_TARGET
    case 0xC2BB48: cpu.execute_instruction<0x8D>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:59 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2BB47.
    case 0xC2BB49: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/check_dead_players.asm:60 TAX
    case 0xC2BB4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BB4C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:62 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2BB4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BB50: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC2BB4E.
    case 0xC2BB51: cpu.execute_instruction<0x1D>(0x00AE00, 3); return true;
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    case 0xC2BB53: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2BB51.
    case 0xC2BB54: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/battle/check_dead_players.asm:65 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2BB56: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/check_dead_players.asm:66 LDX CURRENT_TARGET
    case 0xC2BB59: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:67 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2BB5C: cpu.execute_instruction<0x9E>(0x000022, 3); return true;
    // src/battle/check_dead_players.asm:68 LDX CURRENT_TARGET
    case 0xC2BB5F: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:69 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2BB62: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/check_dead_players.asm:70 LDX CURRENT_TARGET
    case 0xC2BB65: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:71 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2BB68: cpu.execute_instruction<0x9E>(0x000020, 3); return true;
    // src/battle/check_dead_players.asm:72 LDX CURRENT_TARGET
    case 0xC2BB6B: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:73 STZ a:battler::afflictions + STATUS_GROUP:: TEMPORARY,X
    case 0xC2BB6E: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/check_dead_players.asm:74 LDX CURRENT_TARGET
    case 0xC2BB71: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/check_dead_players.asm:75 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2BB74: cpu.execute_instruction<0x9E>(0x00001E, 3); return true;
    // src/battle/check_dead_players.asm:76 JSL FIX_TARGET_NAME
    case 0xC2BB77: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/check_dead_players.asm:78 LDX OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC2BB7B: cpu.execute_instruction<0xAE>(0x008C42, 3); return true;
    // src/battle/check_dead_players.asm:79 STX @LOCAL03
    case 0xC2BB7E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BB80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2BB80.
    case 0xC2BB82: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BB83: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00317D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BB87.
    case 0xC2BB89: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB8A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BB89.
    case 0xC2BB8B: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BB8C.
    case 0xC2BB8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB8F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BB91: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/check_dead_players.asm:82 LDX @LOCAL03
    case 0xC2BB95: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    case 0xC2BB97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    // Overlapping static entry reached from 0xC2BB97.
    case 0xC2BB99: cpu.execute_instruction<0xFF>(0x2204D0, 4); return true;
    // src/battle/check_dead_players.asm:84 BNE @UNKNOWN4
    case 0xC2BB9A: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC2BB9C: cpu.execute_instruction<0x22>(0xC1DB36, 4); return true;
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2BB99.
    case 0xC2BB9D: cpu.execute_instruction<0x36>(0x0000DB, 2); return true;
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2BB9D.
    case 0xC2BB9F: cpu.execute_instruction<0xC1>(0x0000A2, 2); return true;
    // src/battle/check_dead_players.asm:87 LDX #$0000
    case 0xC2BBA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:87 LDX #$0000
    // Overlapping static entry reached from 0xC2BB9F.
    case 0xC2BBA1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/check_dead_players.asm:87 LDX #$0000
    // Overlapping static entry reached from 0xC2BBA0.
    case 0xC2BBA2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/check_dead_players.asm:88 STX @LOCAL01
    case 0xC2BBA3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:89 BRA @UNKNOWN6
    case 0xC2BBA5: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/battle/check_dead_players.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC2BBA7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:92 LDA @LOCAL02
    case 0xC2BBA9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/check_dead_players.asm:93 STA @VIRTUAL02
    case 0xC2BBAB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:94 STX @VIRTUAL02
    case 0xC2BBAD: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:95 CLC
    case 0xC2BBAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:96 ADC @VIRTUAL02
    case 0xC2BBB0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:97 PHA
    case 0xC2BBB2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:98 STX @VIRTUAL02
    case 0xC2BBB3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:99 LDA @VIRTUAL04
    case 0xC2BBB5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    case 0xC2BBB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BBB7.
    case 0xC2BBB9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_dead_players.asm:101 JSL MULT168
    case 0xC2BBBA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/check_dead_players.asm:102 CLC
    case 0xC2BBBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    case 0xC2BBBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    // Overlapping static entry reached from 0xC2BBBF.
    case 0xC2BBC1: cpu.execute_instruction<0xA1>(0x000018, 2); return true;
    // src/battle/check_dead_players.asm:104 CLC
    case 0xC2BBC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:105 ADC @VIRTUAL02
    case 0xC2BBC3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:106 TAX
    case 0xC2BBC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BBC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:108 LDA __BSS_START__,X
    case 0xC2BBC8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:109 PLX
    case 0xC2BBCB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:110 STA a:char_struct::afflictions,X
    case 0xC2BBCC: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/check_dead_players.asm:111 LDX @LOCAL01
    case 0xC2BBCF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:112 INX
    case 0xC2BBD1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:113 STX @LOCAL01
    case 0xC2BBD2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    case 0xC2BBD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    // Overlapping static entry reached from 0xC2BBD4.
    case 0xC2BBD6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/check_dead_players.asm:116 BCC @UNKNOWN5
    case 0xC2BBD7: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/battle/check_dead_players.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2BBD9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:118 LDA @LOCAL02
    case 0xC2BBDB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/check_dead_players.asm:119 STA @VIRTUAL02
    case 0xC2BBDD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:120 CLC
    case 0xC2BBDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    case 0xC2BBE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000011, 2); else cpu.execute_instruction<0x69>(0x000011, 3); return true;
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    // Overlapping static entry reached from 0xC2BBE0.
    case 0xC2BBE2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/check_dead_players.asm:122 TAX
    case 0xC2BBE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:123 LDA __BSS_START__,X
    case 0xC2BBE4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:124 AND #$00FF
    case 0xC2BBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC2BBE7.
    case 0xC2BBE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_dead_players.asm:125 BEQ @UNKNOWN7
    case 0xC2BBEA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/check_dead_players.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BBEC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:127 LDA #$0001
    case 0xC2BBEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    case 0xC2BBF0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2BBEE.
    case 0xC2BBF1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/check_dead_players.asm:130 JSL UPDATE_PARTY
    case 0xC2BBF3: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // src/battle/check_dead_players.asm:132 INC @VIRTUAL04
    case 0xC2BBF7: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:135 LDA @VIRTUAL04
    case 0xC2BBF9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    case 0xC2BBFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BBFB.
    case 0xC2BBFD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BBFE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC00: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC02: cpu.execute_instruction<0x4C>(0x00BAD3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC05: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC06: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/check_if_valid_target.asm (source_named).
bool execute_battle_check_if_valid_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_if_valid_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47662: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    case 0xC47664: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC47664.
    case 0xC47666: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_if_valid_target.asm:8 JSL MULT168
    case 0xC47667: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/check_if_valid_target.asm:9 TAX
    case 0xC4766B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_if_valid_target.asm:10 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC4766C: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    case 0xC4766F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC4766F.
    case 0xC47671: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_if_valid_target.asm:12 BEQ @INVALID
    case 0xC47672: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/check_if_valid_target.asm:13 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC47674: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    case 0xC47677: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC47677.
    case 0xC47679: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/check_if_valid_target.asm:15 BNE @INVALID
    case 0xC4767A: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/check_if_valid_target.asm:16 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC4767C: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    case 0xC4767F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC4767F.
    case 0xC47681: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    case 0xC47682: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC47682.
    case 0xC47684: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_if_valid_target.asm:19 BEQ @INVALID
    case 0xC47685: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    case 0xC47687: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC47687.
    case 0xC47689: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_if_valid_target.asm:21 BEQ @INVALID
    case 0xC4768A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    case 0xC4768C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    // Overlapping static entry reached from 0xC4768C.
    case 0xC4768E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/check_if_valid_target.asm:23 BRA @RETURN
    case 0xC4768F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    case 0xC47691: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC47691.
    case 0xC47693: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_if_valid_target.asm:27 END_C_FUNCTION
    case 0xC47694: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
