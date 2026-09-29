// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/battle/actions/psi_rockin_common.asm (source_named).
bool execute_battle_actions_psi_rockin_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29516: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC29518: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC29519: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC2951A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC2951B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2951B.
    case 0xC2951D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC2951E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_rockin_common.asm:9 END_STACK_VARS
    case 0xC2951F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:10 TAX
    case 0xC29520: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:11 STX @LOCAL02
    case 0xC29521: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:12 JSR PSI_SHIELD_NULLIFY
    case 0xC29523: cpu.execute_instruction<0x20>(0x00941D, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:13 CMP #0
    case 0xC29526: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:13 CMP #0
    // Overlapping static entry reached from 0xC29526.
    case 0xC29528: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:14 BNE @RETURN
    case 0xC29529: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:15 LDX @LOCAL02
    case 0xC2952B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:16 TXA
    case 0xC2952D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:17 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2952E: cpu.execute_instruction<0x20>(0x006A44, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:18 STA @LOCAL01
    case 0xC29531: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:19 JSR DETERMINE_DODGE
    case 0xC29533: cpu.execute_instruction<0x20>(0x0084AD, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:20 TAX
    case 0xC29536: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_rockin_common.asm:21 BEQ @UNKNOWN0
    case 0xC29537: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29539: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29539.
    case 0xC2953B: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2953C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2953B.
    case 0xC2953D: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2953E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2953E.
    case 0xC29540: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29541: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_rockin_common.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29543: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_rockin_common.asm:23 BRA @UNKNOWN1
    case 0xC29547: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:25 LDX #$00FF
    case 0xC29549: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:25 LDX #$00FF
    // Overlapping static entry reached from 0xC29549.
    case 0xC2954B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:26 LDA @LOCAL01
    case 0xC2954C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/actions/psi_rockin_common.asm:27 JSR CALC_RESIST_DAMAGE
    case 0xC2954E: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/actions/psi_rockin_common.asm:29 JSR WEAKEN_SHIELD
    case 0xC29551: cpu.execute_instruction<0x20>(0x0094CE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_rockin_common.asm:31 END_C_FUNCTION
    case 0xC29554: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_rockin_common.asm:31 END_C_FUNCTION
    case 0xC29555: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_rockin_gamma.asm (source_named).
bool execute_battle_actions_psi_rockin_gamma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29568: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_rockin_gamma.asm:5 LDA #ROCKIN_GAMMA_DAMAGE
    case 0xC2956A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000140, 3); return true;
    // src/battle/actions/psi_rockin_gamma.asm:5 LDA #ROCKIN_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC2956A.
    case 0xC2956C: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/psi_rockin_gamma.asm:6 JSR PSI_ROCKIN_COMMON
    case 0xC2956D: cpu.execute_instruction<0x20>(0x009516, 3); return true;
    // src/battle/actions/psi_rockin_gamma.asm:6 JSR PSI_ROCKIN_COMMON
    // Overlapping static entry reached from 0xC2956C.
    case 0xC2956E: cpu.execute_instruction<0x16>(0x000095, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_rockin_gamma.asm:7 END_C_FUNCTION
    case 0xC29570: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_rockin_omega.asm (source_named).
bool execute_battle_actions_psi_rockin_omega_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29571: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    case 0xC29573: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC29573.
    case 0xC29575: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/battle/actions/psi_rockin_omega.asm:6 JSR PSI_ROCKIN_COMMON
    case 0xC29576: cpu.execute_instruction<0x20>(0x009516, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:7 END_C_FUNCTION
    case 0xC29579: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_alpha.asm (source_named).
bool execute_battle_actions_psi_shield_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DBE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29DC2.
    case 0xC29DC4: cpu.execute_instruction<0xFF>(0x02A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:6 END_STACK_VARS
    case 0xC29DC5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/psi_shield_alpha.asm:7 LDX #STATUS_6::PSI_SHIELD
    case 0xC29DC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:7 LDX #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC29DC6.
    case 0xC29DC8: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/psi_shield_alpha.asm:8 LDA CURRENT_TARGET
    case 0xC29DC9: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:9 JSR SHIELDS_COMMON
    case 0xC29DCC: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:10 CMP #0
    case 0xC29DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_shield_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29DCF.
    case 0xC29DD1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_shield_alpha.asm:11 BEQ @UNKNOWN0
    case 0xC29DD2: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x007032, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29DD4.
    case 0xC29DD6: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DD7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29DD6.
    case 0xC29DD8: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    // Overlapping static entry reached from 0xC29DD9.
    case 0xC29DDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ADD
    case 0xC29DDE: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_shield_alpha.asm:13 BRA @UNKNOWN1
    case 0xC29DE2: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00700C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29DE4.
    case 0xC29DE6: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29DE6.
    case 0xC29DE8: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    // Overlapping static entry reached from 0xC29DE9.
    case 0xC29DEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DEC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYCO_ON
    case 0xC29DEE: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29DF2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29DF3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_alpha_redirect.asm (source_named).
bool execute_battle_actions_psi_shield_alpha_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_alpha_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DF4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_shield_alpha_redirect.asm:5 JSL BTLACT_PSI_SHIELD_A
    case 0xC29DF6: cpu.execute_instruction<0x22>(0xC29DBE, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_alpha_redirect.asm:6 END_C_FUNCTION
    case 0xC29DFA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_beta.asm (source_named).
bool execute_battle_actions_psi_shield_beta_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DFB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DFD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29DFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29DFF.
    case 0xC29E01: cpu.execute_instruction<0xFF>(0x01A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_shield_beta.asm:6 END_STACK_VARS
    case 0xC29E02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/psi_shield_beta.asm:7 LDX #STATUS_6::PSI_SHIELD_POWER
    case 0xC29E03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:7 LDX #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC29E03.
    case 0xC29E05: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/psi_shield_beta.asm:8 LDA CURRENT_TARGET
    case 0xC29E06: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:9 JSR SHIELDS_COMMON
    case 0xC29E09: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:10 CMP #0
    case 0xC29E0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_shield_beta.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29E0C.
    case 0xC29E0E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_shield_beta.asm:11 BEQ @UNKNOWN0
    case 0xC29E0F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29E11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00707A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    // Overlapping static entry reached from 0xC29E11.
    case 0xC29E13: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29E14: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    // Overlapping static entry reached from 0xC29E13.
    case 0xC29E15: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29E16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    // Overlapping static entry reached from 0xC29E16.
    case 0xC29E18: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29E19: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ADD
    case 0xC29E1B: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_shield_beta.asm:13 BRA @UNKNOWN1
    case 0xC29E1F: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29E21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x007050, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    // Overlapping static entry reached from 0xC29E21.
    case 0xC29E23: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29E24: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    // Overlapping static entry reached from 0xC29E23.
    case 0xC29E25: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29E26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    // Overlapping static entry reached from 0xC29E26.
    case 0xC29E28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29E29: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PSYPOWER_ON
    case 0xC29E2B: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_shield_beta.asm:17 END_C_FUNCTION
    case 0xC29E2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_beta.asm:17 END_C_FUNCTION
    case 0xC29E30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_shield_beta_redirect.asm (source_named).
bool execute_battle_actions_psi_shield_beta_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_shield_beta_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29E31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_shield_beta_redirect.asm:5 JSL BTLACT_PSI_SHIELD_B
    case 0xC29E33: cpu.execute_instruction<0x22>(0xC29DFB, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_shield_beta_redirect.asm:6 END_C_FUNCTION
    case 0xC29E37: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_starstorm_alpha.asm (source_named).
bool execute_battle_actions_psi_starstorm_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29AA6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:5 LDA #STARSTORM_ALPHA_DAMAGE
    case 0xC29AA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x000168, 3); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:5 LDA #STARSTORM_ALPHA_DAMAGE
    // Overlapping static entry reached from 0xC29AA8.
    case 0xC29AAA: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:6 JSR PSI_STARSTORM_COMMON
    case 0xC29AAB: cpu.execute_instruction<0x20>(0x009A80, 3); return true;
    // src/battle/actions/psi_starstorm_alpha.asm:6 JSR PSI_STARSTORM_COMMON
    // Overlapping static entry reached from 0xC29AAA.
    case 0xC29AAC: cpu.execute_instruction<0x80>(0x00009A, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_starstorm_alpha.asm:7 END_C_FUNCTION
    case 0xC29AAE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_starstorm_common.asm (source_named).
bool execute_battle_actions_psi_starstorm_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29A80: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A82: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A83: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A84: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC29A85.
    case 0xC29A87: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A88: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:7 END_STACK_VARS
    case 0xC29A89: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/psi_starstorm_common.asm:8 TAX
    case 0xC29A8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_starstorm_common.asm:9 STX @LOCAL00
    case 0xC29A8B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:10 JSR PSI_SHIELD_NULLIFY
    case 0xC29A8D: cpu.execute_instruction<0x20>(0x00941D, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:11 CMP #0
    case 0xC29A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:11 CMP #0
    // Overlapping static entry reached from 0xC29A90.
    case 0xC29A92: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:12 BNE @UNKNOWN0
    case 0xC29A93: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:13 LDX @LOCAL00
    case 0xC29A95: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:14 TXA
    case 0xC29A97: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_starstorm_common.asm:15 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC29A98: cpu.execute_instruction<0x20>(0x006AFD, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:16 LDX #$00FF
    case 0xC29A9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:16 LDX #$00FF
    // Overlapping static entry reached from 0xC29A9B.
    case 0xC29A9D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_starstorm_common.asm:17 JSR CALC_RESIST_DAMAGE
    case 0xC29A9E: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/actions/psi_starstorm_common.asm:18 JSR WEAKEN_SHIELD
    case 0xC29AA1: cpu.execute_instruction<0x20>(0x0094CE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:20 END_C_FUNCTION
    case 0xC29AA4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_starstorm_common.asm:20 END_C_FUNCTION
    case 0xC29AA5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_starstorm_omega.asm (source_named).
bool execute_battle_actions_psi_starstorm_omega_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29AAF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_starstorm_omega.asm:5 LDA #STARSTORM_OMEGA_DAMAGE
    case 0xC29AB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0002D0, 3); return true;
    // src/battle/actions/psi_starstorm_omega.asm:5 LDA #STARSTORM_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC29AB1.
    case 0xC29AB3: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/battle/actions/psi_starstorm_omega.asm:6 JSR PSI_STARSTORM_COMMON
    case 0xC29AB4: cpu.execute_instruction<0x20>(0x009A80, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_starstorm_omega.asm:7 END_C_FUNCTION
    case 0xC29AB7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_alpha.asm (source_named).
bool execute_battle_actions_psi_thunder_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29871: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_alpha.asm:5 LDX #THUNDER_ALPHA_HITS
    case 0xC29873: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_alpha.asm:5 LDX #THUNDER_ALPHA_HITS
    // Overlapping static entry reached from 0xC29873.
    case 0xC29875: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_alpha.asm:6 LDA #THUNDER_ALPHA_DAMAGE
    case 0xC29876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/actions/psi_thunder_alpha.asm:6 LDA #THUNDER_ALPHA_DAMAGE
    // Overlapping static entry reached from 0xC29876.
    case 0xC29878: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_alpha.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC29879: cpu.execute_instruction<0x20>(0x00966B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_alpha.asm:8 END_C_FUNCTION
    case 0xC2987C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_beta.asm (source_named).
bool execute_battle_actions_psi_thunder_beta_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2987D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_beta.asm:5 LDX #THUNDER_BETA_HITS
    case 0xC2987F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/psi_thunder_beta.asm:5 LDX #THUNDER_BETA_HITS
    // Overlapping static entry reached from 0xC2987F.
    case 0xC29881: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_beta.asm:6 LDA #THUNDER_BETA_DAMAGE
    case 0xC29882: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/battle/actions/psi_thunder_beta.asm:6 LDA #THUNDER_BETA_DAMAGE
    // Overlapping static entry reached from 0xC29882.
    case 0xC29884: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_beta.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC29885: cpu.execute_instruction<0x20>(0x00966B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_beta.asm:8 END_C_FUNCTION
    case 0xC29888: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_common.asm (source_named).
bool execute_battle_actions_psi_thunder_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2966B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2966D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2966E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC2966F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29670: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC29670.
    case 0xC29672: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29673: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/psi_thunder_common.asm:12 END_STACK_VARS
    case 0xC29674: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    case 0xC29675: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC29672.
    case 0xC29676: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:14 STA @VIRTUAL04
    case 0xC29677: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    case 0xC29679: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:15 LDY #0
    // Overlapping static entry reached from 0xC29679.
    case 0xC2967B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:16 STY @LOCAL03
    case 0xC2967C: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:17 TYX
    case 0xC2967E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:18 STX @LOCAL02
    case 0xC2967F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:19 BRA @UNKNOWN2
    case 0xC29681: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:21 TXA
    case 0xC29683: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:22 JSL IS_CHAR_TARGETTED
    case 0xC29684: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    case 0xC29688: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:23 CMP #0
    // Overlapping static entry reached from 0xC29688.
    case 0xC2968A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:24 BEQ @UNKNOWN1
    case 0xC2968B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:25 LDY @LOCAL03
    case 0xC2968D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:26 INY
    case 0xC2968F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:27 STY @LOCAL03
    case 0xC29690: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:29 LDX @LOCAL02
    case 0xC29692: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:30 INX
    case 0xC29694: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:31 STX @LOCAL02
    case 0xC29695: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    case 0xC29697: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:33 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29697.
    case 0xC29699: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:34 BCC @UNKNOWN0
    case 0xC2969A: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:35 LDY @LOCAL03
    case 0xC2969C: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:36 TYA
    case 0xC2969E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC2969F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/battle/actions/psi_thunder_common.asm:37 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC296A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:38 STA @VIRTUAL02
    case 0xC296A5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    case 0xC296A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:39 CMP #256
    // Overlapping static entry reached from 0xC296A7.
    case 0xC296A9: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    case 0xC296AA: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:40 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC296A9.
    case 0xC296AB: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    case 0xC296AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC296AB.
    case 0xC296AD: cpu.execute_instruction<0xFF>(0x028500, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:41 LDA #255
    // Overlapping static entry reached from 0xC296AC.
    case 0xC296AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:42 STA @VIRTUAL02
    case 0xC296AF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B1: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B6: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:44 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC296B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC296C1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    case 0xC296C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:46 LDY #0
    // Overlapping static entry reached from 0xC296C3.
    case 0xC296C5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:47 STY @LOCAL03
    case 0xC296C6: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:48 JMP @UNKNOWN20
    case 0xC296C8: cpu.execute_instruction<0x4C>(0x00985A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296CB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296CF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:50 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC296D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D5: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:51 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC296DA: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:52 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC296DD: cpu.execute_instruction<0x22>(0xC2416F, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    case 0xC296E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:53 LDA #0
    // Overlapping static entry reached from 0xC296E1.
    case 0xC296E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:54 STA @VIRTUAL06
    case 0xC296E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    case 0xC296E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:55 LDA #0
    // Overlapping static entry reached from 0xC296E6.
    case 0xC296E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:56 STA @VIRTUAL06+2
    case 0xC296E9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296EB: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296EE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296F0: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:57 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL0A
    case 0xC296F3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:58 CMP @VIRTUAL06+2
    case 0xC296F5: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:59 BNE @UNKNOWN5
    case 0xC296F7: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:60 LDA @VIRTUAL0A
    case 0xC296F9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:61 CMP @VIRTUAL06
    case 0xC296FB: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296FD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:63 BEQL @UNKNOWN21
    case 0xC296FF: cpu.execute_instruction<0x4C>(0x009863, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29702: cpu.execute_instruction<0xAD>(0x00A96C, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29705: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC29707: cpu.execute_instruction<0xAD>(0x00A96E, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:68 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2970A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2970C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2970E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29710: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29712: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:71 JSL RANDOM_TARGETTING
    case 0xC29714: cpu.execute_instruction<0x22>(0xC26EF8, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC29718: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2971A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2971C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:72 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2971E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29720: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29722: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29724: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:73 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC29726: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC29728: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2972A: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2972D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:74 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2972F: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    case 0xC29732: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:75 LDX #0
    // Overlapping static entry reached from 0xC29732.
    case 0xC29734: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:76 STX @LOCAL02
    case 0xC29735: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:77 BRA @UNKNOWN8
    case 0xC29737: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:79 TXA
    case 0xC29739: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:80 JSL IS_CHAR_TARGETTED
    case 0xC2973A: cpu.execute_instruction<0x22>(0xC27029, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    case 0xC2973E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:81 CMP #0
    // Overlapping static entry reached from 0xC2973E.
    case 0xC29740: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:82 BNE @UNKNOWN9
    case 0xC29741: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:83 LDX @LOCAL02
    case 0xC29743: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:84 INX
    case 0xC29745: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:85 STX @LOCAL02
    case 0xC29746: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    case 0xC29748: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:87 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29748.
    case 0xC2974A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:88 BCC @UNKNOWN7
    case 0xC2974B: cpu.execute_instruction<0x90>(0x0000EC, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:90 LDX @LOCAL02
    case 0xC2974D: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:91 TXA
    case 0xC2974F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    case 0xC29750: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:92 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC29750.
    case 0xC29752: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:93 JSL MULT168
    case 0xC29753: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:94 CLC
    case 0xC29757: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC29758: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:95 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC29758.
    case 0xC2975A: cpu.execute_instruction<0x9F>(0xA9728D, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:96 STA CURRENT_TARGET
    case 0xC2975B: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:97 JSL FIX_TARGET_NAME
    case 0xC2975E: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:98 LDA @VIRTUAL02
    case 0xC29762: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC29764: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:100 JSR SUCCESS_255
    case 0xC29766: cpu.execute_instruction<0x20>(0x006BB8, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    case 0xC29769: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:102 CMP #0
    // Overlapping static entry reached from 0xC29769.
    case 0xC2976B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC2976C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:103 BEQL @UNKNOWN18
    case 0xC2976E: cpu.execute_instruction<0x4C>(0x009821, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:105 LDA @VIRTUAL04
    case 0xC29771: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    case 0xC29773: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000078, 2); else cpu.execute_instruction<0xC9>(0x000078, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:106 CMP #120
    // Overlapping static entry reached from 0xC29773.
    case 0xC29775: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:107 BNE @UNKNOWN11
    case 0xC29776: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29778: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x008814, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC29778.
    case 0xC2977A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC2977B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC2977D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    // Overlapping static entry reached from 0xC2977D.
    case 0xC2977F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29780: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:108 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_SMALL
    case 0xC29782: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:109 BRA @UNKNOWN13
    case 0xC29786: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29788: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x008823, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC29788.
    case 0xC2978A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC2978B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC2978D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    // Overlapping static entry reached from 0xC2978D.
    case 0xC2978F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29790: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:111 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_LARGE
    case 0xC29792: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:112 BRA @UNKNOWN13
    case 0xC29796: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:114 JSL WINDOW_TICK
    case 0xC29798: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:116 JSL UNKNOWN_C2EACF
    case 0xC2979C: cpu.execute_instruction<0x22>(0xC2EACF, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    case 0xC297A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:117 CMP #0
    // Overlapping static entry reached from 0xC297A0.
    case 0xC297A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:118 BNE @UNKNOWN12
    case 0xC297A3: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:119 LDX CURRENT_TARGET
    case 0xC297A5: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC297A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:121 STZ a:battler::use_alt_spritemap,X
    case 0xC297AA: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:122 LDX CURRENT_TARGET
    case 0xC297AD: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC297B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:124 LDA a:battler::ally_or_enemy,X
    case 0xC297B2: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    case 0xC297B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC297B5.
    case 0xC297B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:126 BNE @UNKNOWN14
    case 0xC297B8: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    case 0xC297BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:127 LDX #1
    // Overlapping static entry reached from 0xC297BA.
    case 0xC297BC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:128 STX @LOCAL02
    case 0xC297BD: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:129 LDX CURRENT_TARGET
    case 0xC297BF: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:130 LDA a:battler::row,X
    case 0xC297C2: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    case 0xC297C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC297C5.
    case 0xC297C7: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:132 INC
    case 0xC297C8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:133 LDX @LOCAL02
    case 0xC297C9: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:134 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC297CB: cpu.execute_instruction<0x22>(0xC45683, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    case 0xC297CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:135 CMP #0
    // Overlapping static entry reached from 0xC297CF.
    case 0xC297D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:136 BEQ @UNKNOWN14
    case 0xC297D2: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x007160, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC297D4.
    case 0xC297D6: cpu.execute_instruction<0x71>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297D7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC297D6.
    case 0xC297D8: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    // Overlapping static entry reached from 0xC297D9.
    case 0xC297DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:137 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FRANKLIN_TURN
    case 0xC297DE: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    case 0xC297E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:138 LDA #1
    // Overlapping static entry reached from 0xC297E2.
    case 0xC297E4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:139 STA DAMAGE_IS_REFLECTED
    case 0xC297E5: cpu.execute_instruction<0x8D>(0x00AA96, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:140 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC297E8: cpu.execute_instruction<0x20>(0x007E8A, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:142 LDX CURRENT_TARGET
    case 0xC297EB: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:143 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC297EE: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    case 0xC297F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC297F1.
    case 0xC297F3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:145 TAX
    case 0xC297F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    case 0xC297F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:146 CPX #1
    // Overlapping static entry reached from 0xC297F5.
    case 0xC297F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:147 BEQ @UNKNOWN15
    case 0xC297F8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    case 0xC297FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:148 CPX #2
    // Overlapping static entry reached from 0xC297FA.
    case 0xC297FC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:149 BNE @UNKNOWN16
    case 0xC297FD: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC297FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:152 LDA #1
    case 0xC29801: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    case 0xC29803: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:153 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC29801.
    case 0xC29804: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:154 STA a:battler::shield_hp,X
    case 0xC29806: cpu.execute_instruction<0x9D>(0x000025, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:156 JSR PSI_SHIELD_NULLIFY
    case 0xC29809: cpu.execute_instruction<0x20>(0x00941D, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    case 0xC2980C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:158 CMP #0
    // Overlapping static entry reached from 0xC2980C.
    case 0xC2980E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:159 BNE @UNKNOWN17
    case 0xC2980F: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:160 LDA @VIRTUAL04
    case 0xC29811: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:161 JSR FIFTY_PERCENT_VARIANCE
    case 0xC29813: cpu.execute_instruction<0x20>(0x006A44, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    case 0xC29816: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:162 LDX #$00FF
    // Overlapping static entry reached from 0xC29816.
    case 0xC29818: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:163 JSR CALC_RESIST_DAMAGE
    case 0xC29819: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:165 JSR WEAKEN_SHIELD
    case 0xC2981C: cpu.execute_instruction<0x20>(0x0094CE, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:166 BRA @UNKNOWN19
    case 0xC2981F: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29821: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x008837, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC29821.
    case 0xC29823: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29824: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29826: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    // Overlapping static entry reached from 0xC29826.
    case 0xC29828: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC29829: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:169 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_THUNDER_MISS_SE
    case 0xC2982B: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC2982F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F6, 2); else cpu.execute_instruction<0xA9>(0x00FAF6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC2982F.
    case 0xC29831: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29832: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29834: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    // Overlapping static entry reached from 0xC29834.
    case 0xC29836: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29837: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/psi_thunder_common.asm:170 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAMINARI_HAZURE
    case 0xC29839: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    case 0xC2983D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:172 LDA #0
    // Overlapping static entry reached from 0xC2983D.
    case 0xC2983F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:173 JSL COUNT_CHARS
    case 0xC29840: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    case 0xC29844: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:174 CMP #0
    // Overlapping static entry reached from 0xC29844.
    case 0xC29846: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:175 BEQ @UNKNOWN21
    case 0xC29847: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    case 0xC29849: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:176 LDA #1
    // Overlapping static entry reached from 0xC29849.
    case 0xC2984B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:177 JSL COUNT_CHARS
    case 0xC2984C: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    case 0xC29850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/psi_thunder_common.asm:178 CMP #0
    // Overlapping static entry reached from 0xC29850.
    case 0xC29852: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:179 BEQ @UNKNOWN21
    case 0xC29853: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:180 LDY @LOCAL03
    case 0xC29855: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:181 INY
    case 0xC29857: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/psi_thunder_common.asm:182 STY @LOCAL03
    case 0xC29858: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/psi_thunder_common.asm:184 CPY @LOCAL04
    case 0xC2985A: cpu.execute_instruction<0xC4>(0x00001A, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC2985C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC2985E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:185 BCCL @UNKNOWN4
    case 0xC29860: cpu.execute_instruction<0x4C>(0x0096CB, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29863: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29863.
    case 0xC29865: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29866: cpu.execute_instruction<0x8D>(0x00A96C, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC29869: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC29869.
    case 0xC2986B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/actions/psi_thunder_common.asm:187 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC2986C: cpu.execute_instruction<0x8D>(0x00A96E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC2986F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/psi_thunder_common.asm:188 END_C_FUNCTION
    case 0xC29870: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_gamma.asm (source_named).
bool execute_battle_actions_psi_thunder_gamma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29889: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_gamma.asm:5 LDX #THUNDER_GAMMA_HITS
    case 0xC2988B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/actions/psi_thunder_gamma.asm:5 LDX #THUNDER_GAMMA_HITS
    // Overlapping static entry reached from 0xC2988B.
    case 0xC2988D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_gamma.asm:6 LDA #THUNDER_GAMMA_DAMAGE
    case 0xC2988E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/psi_thunder_gamma.asm:6 LDA #THUNDER_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC2988E.
    case 0xC29890: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_gamma.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC29891: cpu.execute_instruction<0x20>(0x00966B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_gamma.asm:8 END_C_FUNCTION
    case 0xC29894: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/psi_thunder_omega.asm (source_named).
bool execute_battle_actions_psi_thunder_omega_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29895: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/psi_thunder_omega.asm:5 LDX #THUNDER_OMEGA_HITS
    case 0xC29897: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/actions/psi_thunder_omega.asm:5 LDX #THUNDER_OMEGA_HITS
    // Overlapping static entry reached from 0xC29897.
    case 0xC29899: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/actions/psi_thunder_omega.asm:6 LDA #THUNDER_OMEGA_DAMAGE
    case 0xC2989A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/psi_thunder_omega.asm:6 LDA #THUNDER_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC2989A.
    case 0xC2989C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/psi_thunder_omega.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC2989D: cpu.execute_instruction<0x20>(0x00966B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_omega.asm:8 END_C_FUNCTION
    case 0xC298A0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rainbow_of_colours.asm (source_named).
bool execute_battle_actions_rainbow_of_colours_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C14E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C150: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C151: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C152: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C152.
    case 0xC2C154: cpu.execute_instruction<0xFF>(0x70AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C155: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:8 LDX CURRENT_ATTACKER
    case 0xC2C156: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:8 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2C154.
    case 0xC2C158: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x0044BD, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    case 0xC2C159: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    // Overlapping static entry reached from 0xC2C158.
    case 0xC2C15A: cpu.execute_instruction<0x44>(0x002900, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    // Overlapping static entry reached from 0xC2C158.
    case 0xC2C15B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    case 0xC2C15C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2C15A.
    case 0xC2C15D: cpu.execute_instruction<0xFF>(0x028500, 4); return true;
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2C15C.
    case 0xC2C15E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:11 STA @VIRTUAL02
    case 0xC2C15F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:12 LDX CURRENT_ATTACKER
    case 0xC2C161: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:13 LDA a:battler::sprite_y,X
    case 0xC2C164: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:14 AND #$00FF
    case 0xC2C167: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2C167.
    case 0xC2C169: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:15 TAY
    case 0xC2C16A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:16 STY @LOCAL01
    case 0xC2C16B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:17 LDX CURRENT_ATTACKER
    case 0xC2C16D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:18 STX @LOCAL00
    case 0xC2C170: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:19 LDX CURRENT_ATTACKER
    case 0xC2C172: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2C175: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:21 AND #$00FF
    case 0xC2C178: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2C178.
    case 0xC2C17A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:22 LDX @LOCAL00
    case 0xC2C17B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:23 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C17D: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/actions/rainbow_of_colours.asm:24 LDA @VIRTUAL02
    case 0xC2C181: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C183: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:26 LDX CURRENT_ATTACKER
    case 0xC2C185: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:27 STA a:battler::sprite_x,X
    case 0xC2C188: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:28 LDY @LOCAL01
    case 0xC2C18B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2C18D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:30 TYA
    case 0xC2C18F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/rainbow_of_colours.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C190: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:32 LDX CURRENT_ATTACKER
    case 0xC2C192: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:33 STA a:battler::sprite_y,X
    case 0xC2C195: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:34 LDX CURRENT_ATTACKER
    case 0xC2C198: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC2C19B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:36 LDA __BSS_START__,X
    case 0xC2C19D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:37 JSR UNKNOWN_C2F09F
    case 0xC2C1A0: cpu.execute_instruction<0x20>(0x00F09F, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C1A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:39 LDX CURRENT_ATTACKER
    case 0xC2C1A5: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:40 STA a:battler::vram_sprite_index,X
    case 0xC2C1A8: cpu.execute_instruction<0x9D>(0x000043, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:41 LDA #1
    case 0xC2C1AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:42 LDX CURRENT_ATTACKER
    case 0xC2C1AD: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:42 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2C1AB.
    case 0xC2C1AE: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:43 STA a:battler::has_taken_turn,X
    case 0xC2C1B0: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC2C1B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:45 LDA #1
    case 0xC2C1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/rainbow_of_colours.asm:45 LDA #1
    // Overlapping static entry reached from 0xC2C1B5.
    case 0xC2C1B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/actions/rainbow_of_colours.asm:46 STA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2C1B8: cpu.execute_instruction<0x8D>(0x00AA92, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:47 END_C_FUNCTION
    case 0xC2C1BB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:47 END_C_FUNCTION
    case 0xC2C1BC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/random_stat_up_1d4.asm (source_named).
bool execute_battle_actions_random_stat_up_1d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A27F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A281: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A282: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A283: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A283.
    case 0xC2A285: cpu.execute_instruction<0xFF>(0x07A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A286: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:9 LDA #7
    case 0xC2A287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:9 LDA #7
    // Overlapping static entry reached from 0xC2A287.
    case 0xC2A289: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A28A: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:11 CMP #0
    case 0xC2A28D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:11 CMP #0
    // Overlapping static entry reached from 0xC2A28D.
    case 0xC2A28F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:12 BEQ @UNKNOWN5
    case 0xC2A290: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:13 CMP #1
    case 0xC2A292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:13 CMP #1
    // Overlapping static entry reached from 0xC2A292.
    case 0xC2A294: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:14 BEQ @UNKNOWN7
    case 0xC2A295: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:15 CMP #2
    case 0xC2A297: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:15 CMP #2
    // Overlapping static entry reached from 0xC2A297.
    case 0xC2A299: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:16 BEQL @UNKNOWN9
    case 0xC2A29A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:16 BEQL @UNKNOWN9
    case 0xC2A29C: cpu.execute_instruction<0x4C>(0x00A342, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:17 CMP #3
    case 0xC2A29F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:17 CMP #3
    // Overlapping static entry reached from 0xC2A29F.
    case 0xC2A2A1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:18 BEQL @UNKNOWN10
    case 0xC2A2A2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:18 BEQL @UNKNOWN10
    case 0xC2A2A4: cpu.execute_instruction<0x4C>(0x00A348, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:19 CMP #4
    case 0xC2A2A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:19 CMP #4
    // Overlapping static entry reached from 0xC2A2A7.
    case 0xC2A2A9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:20 BEQL @UNKNOWN11
    case 0xC2A2AA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:20 BEQL @UNKNOWN11
    case 0xC2A2AC: cpu.execute_instruction<0x4C>(0x00A34E, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:21 CMP #5
    case 0xC2A2AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:21 CMP #5
    // Overlapping static entry reached from 0xC2A2AF.
    case 0xC2A2B1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:22 BEQL @UNKNOWN12
    case 0xC2A2B2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:22 BEQL @UNKNOWN12
    case 0xC2A2B4: cpu.execute_instruction<0x4C>(0x00A354, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:23 CMP #6
    case 0xC2A2B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:23 CMP #6
    // Overlapping static entry reached from 0xC2A2B7.
    case 0xC2A2B9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:24 BEQL @UNKNOWN13
    case 0xC2A2BA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:24 BEQL @UNKNOWN13
    case 0xC2A2BC: cpu.execute_instruction<0x4C>(0x00A35A, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:25 JMP @UNKNOWN14
    case 0xC2A2BF: cpu.execute_instruction<0x4C>(0x00A35E, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:27 LDA #4
    case 0xC2A2C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:27 LDA #4
    // Overlapping static entry reached from 0xC2A2C2.
    case 0xC2A2C4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:28 JSR RAND_LIMIT
    case 0xC2A2C5: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:29 INC
    case 0xC2A2C8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:30 STA @LOCAL02
    case 0xC2A2C9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:31 LDA CURRENT_TARGET
    case 0xC2A2CB: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:32 CLC
    case 0xC2A2CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:33 ADC #battler::defense
    case 0xC2A2CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:33 ADC #battler::defense
    // Overlapping static entry reached from 0xC2A2CF.
    case 0xC2A2D1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:34 TAX
    case 0xC2A2D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:35 LDA @LOCAL02
    case 0xC2A2D3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:36 STA @VIRTUAL02
    case 0xC2A2D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:37 LDA __BSS_START__,X
    case 0xC2A2D7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:38 CLC
    case 0xC2A2DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:39 ADC @VIRTUAL02
    case 0xC2A2DB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:40 STA __BSS_START__,X
    case 0xC2A2DD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00F79A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2E0.
    case 0xC2A2E2: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2E2.
    case 0xC2A2E4: cpu.execute_instruction<0x0E>(0x00C8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A2E5.
    case 0xC2A2E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:41 LOADPTR MSG_BTL_DEFENSE_UP, @LOCAL00
    case 0xC2A2E8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2EA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2EC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2EE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2F0: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:42 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A2F2: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2F6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2F8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A2FA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:44 JSL DISPLAY_TEXT_WAIT
    case 0xC2A2FC: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:45 BRA @UNKNOWN14
    case 0xC2A300: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:47 LDA #4
    case 0xC2A302: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:47 LDA #4
    // Overlapping static entry reached from 0xC2A302.
    case 0xC2A304: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:48 JSR RAND_LIMIT
    case 0xC2A305: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:49 INC
    case 0xC2A308: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:50 STA @LOCAL02
    case 0xC2A309: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:51 LDA CURRENT_TARGET
    case 0xC2A30B: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:52 CLC
    case 0xC2A30E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:53 ADC #battler::offense
    case 0xC2A30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:53 ADC #battler::offense
    // Overlapping static entry reached from 0xC2A30F.
    case 0xC2A311: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:54 TAX
    case 0xC2A312: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:55 LDA @LOCAL02
    case 0xC2A313: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:56 STA @VIRTUAL02
    case 0xC2A315: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:57 LDA __BSS_START__,X
    case 0xC2A317: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/random_stat_up_1d4.asm:58 CLC
    case 0xC2A31A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/random_stat_up_1d4.asm:59 ADC @VIRTUAL02
    case 0xC2A31B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:60 STA __BSS_START__,X
    case 0xC2A31D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00F77D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A320.
    case 0xC2A322: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A323: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A322.
    case 0xC2A324: cpu.execute_instruction<0x0E>(0x00C8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A325.
    case 0xC2A327: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:61 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC2A328: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A32A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A32C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A32E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A330: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:62 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A332: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A334: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A336: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A338: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A33A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:64 JSL DISPLAY_TEXT_WAIT
    case 0xC2A33C: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:65 BRA @UNKNOWN14
    case 0xC2A340: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:67 JSL BTLACT_SPEED_UP_1D4
    case 0xC2A342: cpu.execute_instruction<0x22>(0xC2A193, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:68 BRA @UNKNOWN14
    case 0xC2A346: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:70 JSL BTLACT_GUTS_UP_1D4
    case 0xC2A348: cpu.execute_instruction<0x22>(0xC2A14B, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:71 BRA @UNKNOWN14
    case 0xC2A34C: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:73 JSL BTLACT_VITALITY_UP_1D4
    case 0xC2A34E: cpu.execute_instruction<0x22>(0xC2A1DB, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:74 BRA @UNKNOWN14
    case 0xC2A352: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:76 JSL BTLACT_IQ_UP_1D4
    case 0xC2A354: cpu.execute_instruction<0x22>(0xC2A0FF, 4); return true;
    // src/battle/actions/random_stat_up_1d4.asm:77 BRA @UNKNOWN14
    case 0xC2A358: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/actions/random_stat_up_1d4.asm:79 JSL BTLACT_LUCK_UP_1D4
    case 0xC2A35A: cpu.execute_instruction<0x22>(0xC2A227, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:81 END_C_FUNCTION
    case 0xC2A35E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/random_stat_up_1d4.asm:81 END_C_FUNCTION
    case 0xC2A35F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/reduce_offense.asm (source_named).
bool execute_battle_actions_reduce_offense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29254: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC29256: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC29257: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC29258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29258.
    case 0xC2925A: cpu.execute_instruction<0xFF>(0xFD205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC2925B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2925C: cpu.execute_instruction<0x20>(0x007CFD, 3); return true;
    // src/battle/actions/reduce_offense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2925A.
    case 0xC2925E: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/reduce_offense.asm:10 CMP #0
    case 0xC2925F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/reduce_offense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC2925F.
    case 0xC29261: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/reduce_offense.asm:11 BNE @UNKNOWN0
    case 0xC29262: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/battle/actions/reduce_offense.asm:12 LDX CURRENT_TARGET
    case 0xC29264: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense.asm:13 LDY a:battler::offense,X
    case 0xC29267: cpu.execute_instruction<0xBC>(0x000026, 3); return true;
    // src/battle/actions/reduce_offense.asm:14 STY @LOCAL02
    case 0xC2926A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense.asm:15 LDA CURRENT_TARGET
    case 0xC2926C: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC2926F: cpu.execute_instruction<0x20>(0x007DDC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x00F885, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29272.
    case 0xC29274: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29275: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29277: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29277.
    case 0xC29279: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC2927A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_offense.asm:18 LDX CURRENT_TARGET
    case 0xC2927C: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense.asm:19 LDY @LOCAL02
    case 0xC2927F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense.asm:20 TYA
    case 0xC29281: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense.asm:21 SEC
    case 0xC29282: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense.asm:22 SBC a:battler::offense,X
    case 0xC29283: cpu.execute_instruction<0xFD>(0x000026, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC29286: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC29288: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2928A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2928C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2928E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29290: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_offense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC29292: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense.asm:27 END_C_FUNCTION
    case 0xC29296: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense.asm:27 END_C_FUNCTION
    case 0xC29297: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/reduce_offense_defense.asm (source_named).
bool execute_battle_actions_reduce_offense_defense_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28F21: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F23: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28F25.
    case 0xC28F27: cpu.execute_instruction<0xFF>(0xFD205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28F29: cpu.execute_instruction<0x20>(0x007CFD, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28F27.
    case 0xC28F2B: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    case 0xC28F2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC28F2C.
    case 0xC28F2E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:11 BNE @UNKNOWN0
    case 0xC28F2F: cpu.execute_instruction<0xD0>(0x000064, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:12 LDX CURRENT_TARGET
    case 0xC28F31: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:13 LDY a:battler::offense,X
    case 0xC28F34: cpu.execute_instruction<0xBC>(0x000026, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:14 STY @LOCAL02
    case 0xC28F37: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:15 LDA CURRENT_TARGET
    case 0xC28F39: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC28F3C: cpu.execute_instruction<0x20>(0x007DDC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x00F885, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F3F.
    case 0xC28F41: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F44.
    case 0xC28F46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F47: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:18 LDX CURRENT_TARGET
    case 0xC28F49: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:19 LDY @LOCAL02
    case 0xC28F4C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:20 TYA
    case 0xC28F4E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:21 SEC
    case 0xC28F4F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:22 SBC a:battler::offense,X
    case 0xC28F50: cpu.execute_instruction<0xFD>(0x000026, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28F53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28F55: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F57: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F59: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F5B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F5D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC28F5F: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/actions/reduce_offense_defense.asm:26 LDX CURRENT_TARGET
    case 0xC28F63: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:27 LDY a:battler::defense,X
    case 0xC28F66: cpu.execute_instruction<0xBC>(0x000028, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:28 STY @LOCAL02
    case 0xC28F69: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:29 LDA CURRENT_TARGET
    case 0xC28F6B: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:30 JSR HEXADECIMATE_DEFENSE
    case 0xC28F6E: cpu.execute_instruction<0x20>(0x007E33, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A2, 2); else cpu.execute_instruction<0xA9>(0x00F8A2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F71.
    case 0xC28F73: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F76.
    case 0xC28F78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:32 LDX CURRENT_TARGET
    case 0xC28F7B: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_offense_defense.asm:33 LDY @LOCAL02
    case 0xC28F7E: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:34 TYA
    case 0xC28F80: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:35 SEC
    case 0xC28F81: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/reduce_offense_defense.asm:36 SBC a:battler::defense,X
    case 0xC28F82: cpu.execute_instruction<0xFD>(0x000028, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F87: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F89: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F8B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F8D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F8F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_offense_defense.asm:39 JSL DISPLAY_TEXT_WAIT
    case 0xC28F91: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F95: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F96: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/reduce_pp.asm (source_named).
bool execute_battle_actions_reduce_pp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_pp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28E42: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E44: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E45: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28E46.
    case 0xC28E48: cpu.execute_instruction<0xFF>(0x72AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E49: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:9 LDX CURRENT_TARGET
    case 0xC28E4A: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_pp.asm:9 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28E48.
    case 0xC28E4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x0019BD, 3); return true;
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    case 0xC28E4D: cpu.execute_instruction<0xBD>(0x000019, 3); return true;
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    // Overlapping static entry reached from 0xC28E4C.
    case 0xC28E4E: cpu.execute_instruction<0x19>(0x00D000, 3); return true;
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    // Overlapping static entry reached from 0xC28E4C.
    case 0xC28E4F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/reduce_pp.asm:11 BNE @UNKNOWN0
    case 0xC28E50: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/battle/actions/reduce_pp.asm:11 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC28E4E.
    case 0xC28E51: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x00FB05, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28E51.
    case 0xC28E53: cpu.execute_instruction<0x05>(0x0000FB, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28E52.
    case 0xC28E54: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E55: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28E57.
    case 0xC28E59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E5A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E5C: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/reduce_pp.asm:13 BRA @UNKNOWN3
    case 0xC28E60: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/battle/actions/reduce_pp.asm:15 LDX CURRENT_TARGET
    case 0xC28E62: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/reduce_pp.asm:16 LDA a:battler::pp_max,X
    case 0xC28E65: cpu.execute_instruction<0xBD>(0x00001B, 3); return true;
    // src/battle/actions/reduce_pp.asm:17 LSR
    case 0xC28E68: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:18 LSR
    case 0xC28E69: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:19 LSR
    case 0xC28E6A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:20 LSR
    case 0xC28E6B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:21 BEQ @UNKNOWN2
    case 0xC28E6C: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/battle/actions/reduce_pp.asm:22 JSR FIFTY_PERCENT_VARIANCE
    case 0xC28E6E: cpu.execute_instruction<0x20>(0x006A44, 3); return true;
    // src/battle/actions/reduce_pp.asm:23 TAY
    case 0xC28E71: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:24 STY @LOCAL02
    case 0xC28E72: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/actions/reduce_pp.asm:25 TYX
    case 0xC28E74: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/actions/reduce_pp.asm:26 LDA CURRENT_TARGET
    case 0xC28E75: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/reduce_pp.asm:27 JSR REDUCE_PP
    case 0xC28E78: cpu.execute_instruction<0x20>(0x00721D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x007755, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E7B.
    case 0xC28E7D: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E7E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E7D.
    case 0xC28E7F: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E80.
    case 0xC28E82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E83: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/reduce_pp.asm:29 LDY @LOCAL02
    case 0xC28E85: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/actions/reduce_pp.asm:30 TYA
    case 0xC28E87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E88: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E8A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E8C: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E8E: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E90: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E92: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E94: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E96: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/reduce_pp.asm:33 JSL DISPLAY_TEXT_WAIT
    case 0xC28E98: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/actions/reduce_pp.asm:34 BRA @UNKNOWN3
    case 0xC28E9C: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28E9E.
    case 0xC28EA0: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28EA0.
    case 0xC28EA2: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28EA3.
    case 0xC28EA5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA8: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_pp.asm:38 END_C_FUNCTION
    case 0xC28EAC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_pp.asm:38 END_C_FUNCTION
    case 0xC28EAD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rust_promoter.asm (source_named).
bool execute_battle_actions_rust_promoter_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA6D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/rust_promoter.asm:5 LDA #200
    case 0xC2AA6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/rust_promoter.asm:5 LDA #200
    // Overlapping static entry reached from 0xC2AA6F.
    case 0xC2AA71: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/rust_promoter.asm:6 JSR RUST_SPRAY_COMMON
    case 0xC2AA72: cpu.execute_instruction<0x20>(0x00AA1E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rust_promoter.asm:7 END_C_FUNCTION
    case 0xC2AA75: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rust_promoter_common.asm (source_named).
bool execute_battle_actions_rust_promoter_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2AA1E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA20: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA21: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA22: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AA23.
    case 0xC2AA25: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA27: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/rust_promoter_common.asm:9 TAX
    case 0xC2AA28: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/rust_promoter_common.asm:10 STX @LOCAL01
    case 0xC2AA29: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:11 JSR SUCCESS_LUCK80
    case 0xC2AA2B: cpu.execute_instruction<0x20>(0x007C96, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:12 CMP #0
    case 0xC2AA2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:12 CMP #0
    // Overlapping static entry reached from 0xC2AA2E.
    case 0xC2AA30: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:13 BEQ @FAILURE
    case 0xC2AA31: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:14 LDX CURRENT_TARGET
    case 0xC2AA33: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:15 LDA a:battler::ally_or_enemy,X
    case 0xC2AA36: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:16 AND #$00FF
    case 0xC2AA39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2AA39.
    case 0xC2AA3B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:17 CMP #1
    case 0xC2AA3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:17 CMP #1
    // Overlapping static entry reached from 0xC2AA3C.
    case 0xC2AA3E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:18 BNE @FAILURE
    case 0xC2AA3F: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:19 LDX CURRENT_TARGET
    case 0xC2AA41: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:20 LDA a:battler::id,X
    case 0xC2AA44: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:21 JSR GET_ENEMY_TYPE
    case 0xC2AA47: cpu.execute_instruction<0x20>(0x0069A8, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:22 CMP #2
    case 0xC2AA4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:22 CMP #2
    // Overlapping static entry reached from 0xC2AA4A.
    case 0xC2AA4C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:23 BNE @FAILURE
    case 0xC2AA4D: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:24 LDX @LOCAL01
    case 0xC2AA4F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:25 TXA
    case 0xC2AA51: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/actions/rust_promoter_common.asm:26 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2AA52: cpu.execute_instruction<0x20>(0x006A44, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:27 LDX #$00FF
    case 0xC2AA55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:27 LDX #$00FF
    // Overlapping static entry reached from 0xC2AA55.
    case 0xC2AA57: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/rust_promoter_common.asm:28 JSR CALC_RESIST_DAMAGE
    case 0xC2AA58: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/actions/rust_promoter_common.asm:29 BRA @RETURN
    case 0xC2AA5B: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA5D.
    case 0xC2AA5F: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA60: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA5F.
    case 0xC2AA61: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA62.
    case 0xC2AA64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA67: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:33 END_C_FUNCTION
    case 0xC2AA6B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/rust_promoter_common.asm:33 END_C_FUNCTION
    case 0xC2AA6C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/rust_promoter_dx.asm (source_named).
bool execute_battle_actions_rust_promoter_dx_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter_dx.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA76: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/rust_promoter_dx.asm:5 LDA #400
    case 0xC2AA78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000190, 3); return true;
    // src/battle/actions/rust_promoter_dx.asm:5 LDA #400
    // Overlapping static entry reached from 0xC2AA78.
    case 0xC2AA7A: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/rust_promoter_dx.asm:6 JSR RUST_SPRAY_COMMON
    case 0xC2AA7B: cpu.execute_instruction<0x20>(0x00AA1E, 3); return true;
    // src/battle/actions/rust_promoter_dx.asm:6 JSR RUST_SPRAY_COMMON
    // Overlapping static entry reached from 0xC2AA7A.
    case 0xC2AA7C: cpu.execute_instruction<0x1E>(0x006BAA, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rust_promoter_dx.asm:7 END_C_FUNCTION
    case 0xC2AA7E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_alpha.asm (source_named).
bool execute_battle_actions_shield_alpha_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D44: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D46: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D47: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29D48.
    case 0xC29D4A: cpu.execute_instruction<0xFF>(0x04A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29D4B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shield_alpha.asm:7 LDX #STATUS_6::SHIELD
    case 0xC29D4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/battle/actions/shield_alpha.asm:7 LDX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC29D4C.
    case 0xC29D4E: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/shield_alpha.asm:8 LDA CURRENT_TARGET
    case 0xC29D4F: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/shield_alpha.asm:9 JSR SHIELDS_COMMON
    case 0xC29D52: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/actions/shield_alpha.asm:10 CMP #0
    case 0xC29D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shield_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29D55.
    case 0xC29D57: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_alpha.asm:11 BEQ @UNKNOWN0
    case 0xC29D58: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x006FBD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D5A.
    case 0xC29D5C: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D5C.
    case 0xC29D60: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D5F.
    case 0xC29D61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D62: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D64: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/shield_alpha.asm:13 BRA @UNKNOWN1
    case 0xC29D68: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x006F9A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D6A.
    case 0xC29D6C: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D6C.
    case 0xC29D70: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D6F.
    case 0xC29D71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D72: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D74: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D78: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D79: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_alpha_redirect.asm (source_named).
bool execute_battle_actions_shield_alpha_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_alpha_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D7A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/shield_alpha_redirect.asm:5 JSL BTLACT_SHIELD_A
    case 0xC29D7C: cpu.execute_instruction<0x22>(0xC29D44, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_alpha_redirect.asm:6 END_C_FUNCTION
    case 0xC29D80: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_beta.asm (source_named).
bool execute_battle_actions_shield_beta_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D81: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D83: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D84: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29D85.
    case 0xC29D87: cpu.execute_instruction<0xFF>(0x03A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D88: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    case 0xC29D89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC29D89.
    case 0xC29D8B: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/shield_beta.asm:8 LDA CURRENT_TARGET
    case 0xC29D8C: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/shield_beta.asm:9 JSR SHIELDS_COMMON
    case 0xC29D8F: cpu.execute_instruction<0x20>(0x009CDC, 3); return true;
    // src/battle/actions/shield_beta.asm:10 CMP #0
    case 0xC29D92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shield_beta.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29D92.
    case 0xC29D94: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_beta.asm:11 BEQ @UNKNOWN0
    case 0xC29D95: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x006FF4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D97.
    case 0xC29D99: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D9A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D99.
    case 0xC29D9D: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D9C.
    case 0xC29D9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29DA1: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/shield_beta.asm:13 BRA @UNKNOWN1
    case 0xC29DA5: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x006FD3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29DA7.
    case 0xC29DA9: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29DA9.
    case 0xC29DAD: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29DAC.
    case 0xC29DAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DB1: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29DB5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29DB6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_beta_redirect.asm (source_named).
bool execute_battle_actions_shield_beta_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_beta_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DB7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/shield_beta_redirect.asm:5 JSL BTLACT_SHIELD_B
    case 0xC29DB9: cpu.execute_instruction<0x22>(0xC29D81, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_beta_redirect.asm:6 END_C_FUNCTION
    case 0xC29DBD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_common.asm (source_named).
bool execute_battle_actions_shield_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29CDC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29CDE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29CDF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29CE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29CE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29CE1.
    case 0xC29CE3: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29CE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29CE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:9 TXY
    case 0xC29CE6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:10 STA @LOCAL00
    case 0xC29CE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/shield_common.asm:11 CLC
    case 0xC29CE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    case 0xC29CEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x000023, 3); return true;
    // src/battle/actions/shield_common.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    // Overlapping static entry reached from 0xC29CEA.
    case 0xC29CEC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/shield_common.asm:13 TAX
    case 0xC29CED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:14 STY @VIRTUAL02
    case 0xC29CEE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/actions/shield_common.asm:15 LDA __BSS_START__,X
    case 0xC29CF0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:16 AND #$00FF
    case 0xC29CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/shield_common.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC29CF3.
    case 0xC29CF5: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/actions/shield_common.asm:17 CMP @VIRTUAL02
    case 0xC29CF6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/actions/shield_common.asm:18 BNE @UNKNOWN3
    case 0xC29CF8: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/actions/shield_common.asm:19 LDA @LOCAL00
    case 0xC29CFA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/actions/shield_common.asm:20 CLC
    case 0xC29CFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:21 ADC #battler::shield_hp
    case 0xC29CFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/actions/shield_common.asm:21 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29CFD.
    case 0xC29CFF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/shield_common.asm:22 TAX
    case 0xC29D00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC29D01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:24 LDA __BSS_START__,X
    case 0xC29D03: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:25 INC
    case 0xC29D06: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:26 INC
    case 0xC29D07: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:27 INC
    case 0xC29D08: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:28 STA __BSS_START__,X
    case 0xC29D09: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29D0C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:30 AND #$00FF
    case 0xC29D0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/shield_common.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC29D0E.
    case 0xC29D10: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/shield_common.asm:31 CLC
    case 0xC29D11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:32 SBC #8
    case 0xC29D12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/battle/actions/shield_common.asm:32 SBC #8
    // Overlapping static entry reached from 0xC29D12.
    case 0xC29D14: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29D15: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29D17: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29D19: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29D1B: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/battle/actions/shield_common.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC29D1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:35 LDA #8
    case 0xC29D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x009D08, 3); return true;
    // src/battle/actions/shield_common.asm:36 STA __BSS_START__,X
    case 0xC29D21: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:36 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29D1F.
    case 0xC29D22: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/actions/shield_common.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC29D24: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:39 LDA #1
    case 0xC29D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/shield_common.asm:39 LDA #1
    // Overlapping static entry reached from 0xC29D26.
    case 0xC29D28: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/actions/shield_common.asm:40 BRA @UNKNOWN4
    case 0xC29D29: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/actions/shield_common.asm:42 TYA
    case 0xC29D2B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC29D2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:44 STA __BSS_START__,X
    case 0xC29D2E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC29D31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:46 LDA @LOCAL00
    case 0xC29D33: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/actions/shield_common.asm:47 TAX
    case 0xC29D35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_common.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC29D36: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:49 LDA #3
    case 0xC29D38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009D03, 3); return true;
    // src/battle/actions/shield_common.asm:50 STA a:battler::shield_hp,X
    case 0xC29D3A: cpu.execute_instruction<0x9D>(0x000025, 3); return true;
    // src/battle/actions/shield_common.asm:50 STA a:battler::shield_hp,X
    // Overlapping static entry reached from 0xC29D38.
    case 0xC29D3B: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/battle/actions/shield_common.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC29D3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/shield_common.asm:52 LDA #0
    case 0xC29D3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/actions/shield_common.asm:52 LDA #0
    // Overlapping static entry reached from 0xC29D3F.
    case 0xC29D41: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_common.asm:54 END_C_FUNCTION
    case 0xC29D42: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/shield_common.asm:54 END_C_FUNCTION
    case 0xC29D43: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shield_killer.asm (source_named).
bool execute_battle_actions_shield_killer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_killer.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A422: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A424: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A425: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A426: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A426.
    case 0xC2A428: cpu.execute_instruction<0xFF>(0x96205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_killer.asm:6 END_STACK_VARS
    case 0xC2A429: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shield_killer.asm:7 JSR SUCCESS_LUCK80
    case 0xC2A42A: cpu.execute_instruction<0x20>(0x007C96, 3); return true;
    // src/battle/actions/shield_killer.asm:7 JSR SUCCESS_LUCK80
    // Overlapping static entry reached from 0xC2A428.
    case 0xC2A42C: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/shield_killer.asm:8 CMP #0
    case 0xC2A42D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shield_killer.asm:8 CMP #0
    // Overlapping static entry reached from 0xC2A42D.
    case 0xC2A42F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_killer.asm:9 BEQ @UNKNOWN0
    case 0xC2A430: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/actions/shield_killer.asm:10 LDA CURRENT_TARGET
    case 0xC2A432: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/shield_killer.asm:11 CLC
    case 0xC2A435: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/shield_killer.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    case 0xC2A436: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000023, 2); else cpu.execute_instruction<0x69>(0x000023, 3); return true;
    // src/battle/actions/shield_killer.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    // Overlapping static entry reached from 0xC2A436.
    case 0xC2A438: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/shield_killer.asm:13 TAX
    case 0xC2A439: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/shield_killer.asm:14 LDA __BSS_START__,X
    case 0xC2A43A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/shield_killer.asm:15 AND #$00FF
    case 0xC2A43D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/shield_killer.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2A43D.
    case 0xC2A43F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/shield_killer.asm:16 BEQ @UNKNOWN0
    case 0xC2A440: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/battle/actions/shield_killer.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A442: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/shield_killer.asm:18 LDA #0
    case 0xC2A444: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/actions/shield_killer.asm:19 STA __BSS_START__,X
    case 0xC2A446: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/shield_killer.asm:19 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2A444.
    case 0xC2A447: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/actions/shield_killer.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC2A449: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A44B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000099, 2); else cpu.execute_instruction<0xA9>(0x007099, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2A44B.
    case 0xC2A44D: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A44E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2A44D.
    case 0xC2A44F: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC2A450.
    case 0xC2A452: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A453: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_killer.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2A455: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/shield_killer.asm:22 BRA @UNKNOWN1
    case 0xC2A459: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A45B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A45B.
    case 0xC2A45D: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A45E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A45D.
    case 0xC2A45F: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A460: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A460.
    case 0xC2A462: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A463: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_killer.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A465: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_killer.asm:26 END_C_FUNCTION
    case 0xC2A469: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_killer.asm:26 END_C_FUNCTION
    case 0xC2A46A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/shoot.asm (source_named).
bool execute_battle_actions_shoot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shoot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28740: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC28742: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC28743: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC28744: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28744.
    case 0xC28746: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shoot.asm:6 END_STACK_VARS
    case 0xC28747: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/shoot.asm:7 LDA #1
    case 0xC28748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/shoot.asm:7 LDA #1
    // Overlapping static entry reached from 0xC28748.
    case 0xC2874A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/shoot.asm:8 JSR MISS_CALC
    case 0xC2874B: cpu.execute_instruction<0x20>(0x0082F8, 3); return true;
    // src/battle/actions/shoot.asm:9 CMP #0
    case 0xC2874E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shoot.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2874E.
    case 0xC28750: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/shoot.asm:10 BNE @UNKNOWN1
    case 0xC28751: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/battle/actions/shoot.asm:11 JSR DETERMINE_DODGE
    case 0xC28753: cpu.execute_instruction<0x20>(0x0084AD, 3); return true;
    // src/battle/actions/shoot.asm:12 CMP #0
    case 0xC28756: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/shoot.asm:12 CMP #0
    // Overlapping static entry reached from 0xC28756.
    case 0xC28758: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/shoot.asm:13 BNE @UNKNOWN0
    case 0xC28759: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/actions/shoot.asm:14 JSR BTLACT_LEVEL_2_ATK
    case 0xC2875B: cpu.execute_instruction<0x20>(0x008523, 3); return true;
    // src/battle/actions/shoot.asm:15 BRA @UNKNOWN1
    case 0xC2875E: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC28760: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00763C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    // Overlapping static entry reached from 0xC28760.
    case 0xC28762: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC28763: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    // Overlapping static entry reached from 0xC28762.
    case 0xC28764: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC28765: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    // Overlapping static entry reached from 0xC28765.
    case 0xC28767: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC28768: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shoot.asm:17 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_UTU_YOKETA
    case 0xC2876A: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shoot.asm:19 END_C_FUNCTION
    case 0xC2876E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shoot.asm:19 END_C_FUNCTION
    case 0xC2876F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/snake.asm (source_named).
bool execute_battle_actions_snake_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/snake.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A89D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A89F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A8A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A8A1.
    case 0xC2A8A3: cpu.execute_instruction<0xFF>(0xFD205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/snake.asm:6 END_STACK_VARS
    case 0xC2A8A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/snake.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2A8A5: cpu.execute_instruction<0x20>(0x007CFD, 3); return true;
    // src/battle/actions/snake.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2A8A3.
    case 0xC2A8A7: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/snake.asm:8 CMP #00
    case 0xC2A8A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:8 CMP #00
    // Overlapping static entry reached from 0xC2A8A8.
    case 0xC2A8AA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/snake.asm:9 BNE @UNKNOWN1
    case 0xC2A8AB: cpu.execute_instruction<0xD0>(0x000053, 2); return true;
    // src/battle/actions/snake.asm:10 LDA #250
    case 0xC2A8AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0000FA, 3); return true;
    // src/battle/actions/snake.asm:10 LDA #250
    // Overlapping static entry reached from 0xC2A8AD.
    case 0xC2A8AF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/snake.asm:11 JSR SUCCESS_SPEED
    case 0xC2A8B0: cpu.execute_instruction<0x20>(0x007CAF, 3); return true;
    // src/battle/actions/snake.asm:12 CMP #0
    case 0xC2A8B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:12 CMP #0
    // Overlapping static entry reached from 0xC2A8B3.
    case 0xC2A8B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/snake.asm:13 BEQ @UNKNOWN0
    case 0xC2A8B6: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/battle/actions/snake.asm:14 LDA #4
    case 0xC2A8B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/snake.asm:14 LDA #4
    // Overlapping static entry reached from 0xC2A8B8.
    case 0xC2A8BA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/snake.asm:15 JSR RAND_LIMIT
    case 0xC2A8BB: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/snake.asm:16 LDX #$00FF
    case 0xC2A8BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/snake.asm:16 LDX #$00FF
    // Overlapping static entry reached from 0xC2A8BE.
    case 0xC2A8C0: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/actions/snake.asm:17 INC
    case 0xC2A8C1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/snake.asm:18 JSR CALC_RESIST_DAMAGE
    case 0xC2A8C2: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/actions/snake.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A8C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/snake.asm:20 LDA #128
    case 0xC2A8C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x002080, 3); return true;
    // src/battle/actions/snake.asm:21 JSR SUCCESS_255
    case 0xC2A8C9: cpu.execute_instruction<0x20>(0x006BB8, 3); return true;
    // src/battle/actions/snake.asm:21 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC2A8C7.
    case 0xC2A8CA: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/battle/actions/snake.asm:21 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC2A8CA.
    case 0xC2A8CB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/battle/actions/snake.asm:23 CMP #0
    case 0xC2A8CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:23 CMP #0
    // Overlapping static entry reached from 0xC2A8CC.
    case 0xC2A8CE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/snake.asm:24 BEQ @UNKNOWN1
    case 0xC2A8CF: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/actions/snake.asm:25 LDY #STATUS_0::POISONED
    case 0xC2A8D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/actions/snake.asm:25 LDY #STATUS_0::POISONED
    // Overlapping static entry reached from 0xC2A8D1.
    case 0xC2A8D3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/actions/snake.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC2A8D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:26 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC2A8D4.
    case 0xC2A8D6: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/snake.asm:27 LDA CURRENT_TARGET
    case 0xC2A8D7: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/snake.asm:28 JSR INFLICT_STATUS_BATTLE
    case 0xC2A8DA: cpu.execute_instruction<0x20>(0x00724A, 3); return true;
    // src/battle/actions/snake.asm:30 CMP #0
    case 0xC2A8DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/snake.asm:30 CMP #0
    // Overlapping static entry reached from 0xC2A8DD.
    case 0xC2A8DF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/snake.asm:31 BEQ @UNKNOWN1
    case 0xC2A8E0: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A8E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x006B18, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    // Overlapping static entry reached from 0xC2A8E2.
    case 0xC2A8E4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A8E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A8E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    // Overlapping static entry reached from 0xC2A8E7.
    case 0xC2A8E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A8EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/snake.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MODOKU_ON
    case 0xC2A8EC: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/snake.asm:33 BRA @UNKNOWN1
    case 0xC2A8F0: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A8F2.
    case 0xC2A8F4: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A8F4.
    case 0xC2A8F6: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A8F7.
    case 0xC2A8F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/snake.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A8FC: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/snake.asm:37 END_C_FUNCTION
    case 0xC2A900: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/snake.asm:37 END_C_FUNCTION
    case 0xC2A901: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/solidify.asm (source_named).
bool execute_battle_actions_solidify_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/solidify.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28CF1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28CF3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28CF4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28CF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28CF5.
    case 0xC28CF7: cpu.execute_instruction<0xFF>(0xFD205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/solidify.asm:6 END_STACK_VARS
    case 0xC28CF8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/solidify.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28CF9: cpu.execute_instruction<0x20>(0x007CFD, 3); return true;
    // src/battle/actions/solidify.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28CF7.
    case 0xC28CFB: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/solidify.asm:8 CMP #0
    case 0xC28CFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28CFC.
    case 0xC28CFE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/solidify.asm:9 BNE @UNKNOWN1
    case 0xC28CFF: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/battle/actions/solidify.asm:10 JSR SUCCESS_LUCK80
    case 0xC28D01: cpu.execute_instruction<0x20>(0x007C96, 3); return true;
    // src/battle/actions/solidify.asm:11 CMP #0
    case 0xC28D04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify.asm:11 CMP #0
    // Overlapping static entry reached from 0xC28D04.
    case 0xC28D06: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify.asm:12 BEQ @UNKNOWN0
    case 0xC28D07: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/actions/solidify.asm:13 LDY #STATUS_2::SOLIDIFIED
    case 0xC28D09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/actions/solidify.asm:13 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC28D09.
    case 0xC28D0B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/actions/solidify.asm:14 LDX #STATUS_GROUP::TEMPORARY
    case 0xC28D0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/solidify.asm:14 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC28D0C.
    case 0xC28D0E: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/solidify.asm:15 LDA CURRENT_TARGET
    case 0xC28D0F: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/solidify.asm:16 JSR INFLICT_STATUS_BATTLE
    case 0xC28D12: cpu.execute_instruction<0x20>(0x00724A, 3); return true;
    // src/battle/actions/solidify.asm:17 CMP #0
    case 0xC28D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify.asm:17 CMP #0
    // Overlapping static entry reached from 0xC28D15.
    case 0xC28D17: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify.asm:18 BEQ @UNKNOWN0
    case 0xC28D18: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28D1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x006BEF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28D1A.
    case 0xC28D1C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28D1D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC28D1F.
    case 0xC28D21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28D22: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC28D24: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/solidify.asm:20 BRA @UNKNOWN1
    case 0xC28D28: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28D2A.
    case 0xC28D2C: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D2D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28D2C.
    case 0xC28D2E: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28D2F.
    case 0xC28D31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D32: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify.asm:22 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D34: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/solidify.asm:24 END_C_FUNCTION
    case 0xC28D38: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/solidify.asm:24 END_C_FUNCTION
    case 0xC28D39: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/solidify_2.asm (source_named).
bool execute_battle_actions_solidify_2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/solidify_2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A82A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A82C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A82D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A82E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A82E.
    case 0xC2A830: cpu.execute_instruction<0xFF>(0x96205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/solidify_2.asm:6 END_STACK_VARS
    case 0xC2A831: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/solidify_2.asm:7 JSR SUCCESS_LUCK80
    case 0xC2A832: cpu.execute_instruction<0x20>(0x007C96, 3); return true;
    // src/battle/actions/solidify_2.asm:7 JSR SUCCESS_LUCK80
    // Overlapping static entry reached from 0xC2A830.
    case 0xC2A834: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/solidify_2.asm:8 CMP #0
    case 0xC2A835: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify_2.asm:8 CMP #0
    // Overlapping static entry reached from 0xC2A835.
    case 0xC2A837: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify_2.asm:9 BEQ @UNKNOWN0
    case 0xC2A838: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/actions/solidify_2.asm:10 LDY #STATUS_2::SOLIDIFIED
    case 0xC2A83A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/actions/solidify_2.asm:10 LDY #STATUS_2::SOLIDIFIED
    // Overlapping static entry reached from 0xC2A83A.
    case 0xC2A83C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/actions/solidify_2.asm:11 LDX #STATUS_GROUP::TEMPORARY
    case 0xC2A83D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/battle/actions/solidify_2.asm:11 LDX #STATUS_GROUP::TEMPORARY
    // Overlapping static entry reached from 0xC2A83D.
    case 0xC2A83F: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/battle/actions/solidify_2.asm:12 LDA CURRENT_TARGET
    case 0xC2A840: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/solidify_2.asm:13 JSR INFLICT_STATUS_BATTLE
    case 0xC2A843: cpu.execute_instruction<0x20>(0x00724A, 3); return true;
    // src/battle/actions/solidify_2.asm:14 CMP #0
    case 0xC2A846: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/solidify_2.asm:14 CMP #0
    // Overlapping static entry reached from 0xC2A846.
    case 0xC2A848: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/solidify_2.asm:15 BEQ @UNKNOWN0
    case 0xC2A849: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A84B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x006BEF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A84B.
    case 0xC2A84D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A84E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    // Overlapping static entry reached from 0xC2A850.
    case 0xC2A852: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A853: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify_2.asm:16 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KOORI_ON
    case 0xC2A855: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/solidify_2.asm:17 BRA @UNKNOWN1
    case 0xC2A859: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A85B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A85B.
    case 0xC2A85D: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A85E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A85D.
    case 0xC2A85F: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A860.
    case 0xC2A862: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A863: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/solidify_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A865: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/solidify_2.asm:21 END_C_FUNCTION
    case 0xC2A869: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/solidify_2.asm:21 END_C_FUNCTION
    case 0xC2A86A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/sow_seeds.asm (source_named).
bool execute_battle_actions_sow_seeds_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/sow_seeds.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C13C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/sow_seeds.asm:5 LDA #1
    case 0xC2C13E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/sow_seeds.asm:5 LDA #1
    // Overlapping static entry reached from 0xC2C13E.
    case 0xC2C140: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/sow_seeds.asm:6 JSR CALL_FOR_HELP_COMMON
    case 0xC2C141: cpu.execute_instruction<0x20>(0x00BD5E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/sow_seeds.asm:7 END_C_FUNCTION
    case 0xC2C144: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/speed_up_1d4.asm (source_named).
bool execute_battle_actions_speed_up_1d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/speed_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A193: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A195: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A196: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A197: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A197.
    case 0xC2A199: cpu.execute_instruction<0xFF>(0x04A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/speed_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A19A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:9 LDA #4
    case 0xC2A19B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:9 LDA #4
    // Overlapping static entry reached from 0xC2A19B.
    case 0xC2A19D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A19E: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:11 INC
    case 0xC2A1A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:12 STA @LOCAL02
    case 0xC2A1A2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:13 LDA CURRENT_TARGET
    case 0xC2A1A4: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:14 CLC
    case 0xC2A1A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:15 ADC #battler::speed
    case 0xC2A1A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002A, 2); else cpu.execute_instruction<0x69>(0x00002A, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:15 ADC #battler::speed
    // Overlapping static entry reached from 0xC2A1A8.
    case 0xC2A1AA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:16 TAX
    case 0xC2A1AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:17 LDA @LOCAL02
    case 0xC2A1AC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:18 STA @VIRTUAL02
    case 0xC2A1AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:19 LDA __BSS_START__,X
    case 0xC2A1B0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/speed_up_1d4.asm:20 CLC
    case 0xC2A1B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/speed_up_1d4.asm:21 ADC @VIRTUAL02
    case 0xC2A1B4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:22 STA __BSS_START__,X
    case 0xC2A1B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A1B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00F82F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1B9.
    case 0xC2A1BB: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A1BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A1BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1BE.
    case 0xC2A1C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:23 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2A1C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1C3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1C7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1C9: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A1CB: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1CF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/speed_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A1D3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/speed_up_1d4.asm:26 JSL DISPLAY_TEXT_WAIT
    case 0xC2A1D5: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/speed_up_1d4.asm:27 END_C_FUNCTION
    case 0xC2A1D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/speed_up_1d4.asm:27 END_C_FUNCTION
    case 0xC2A1DA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/spy.asm (source_named).
bool execute_battle_actions_spy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/spy.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28770: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC28772: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC28773: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC28774: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC28774.
    case 0xC28776: cpu.execute_instruction<0xFF>(0xEAA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/spy.asm:7 END_STACK_VARS
    case 0xC28777: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28778: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x0069EA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28778.
    case 0xC2877A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000085, 2); else cpu.execute_instruction<0x69>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC2877B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2877A.
    case 0xC2877C: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC2877D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2877D.
    case 0xC2877F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:8 LOADPTR MSG_BTL_CHECK_OFFENSE, @LOCAL00
    case 0xC28780: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/spy.asm:9 LDX CURRENT_TARGET
    case 0xC28782: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:10 LDA a:battler::offense,X
    case 0xC28785: cpu.execute_instruction<0xBD>(0x000026, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/spy.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC28788: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/spy.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC2878A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2878C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2878E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28790: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/spy.asm:12 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28792: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/spy.asm:13 JSL DISPLAY_TEXT_WAIT
    case 0xC28794: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC28798: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0069FF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC28798.
    case 0xC2879A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000085, 2); else cpu.execute_instruction<0x69>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC2879B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2879A.
    case 0xC2879C: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC2879D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    // Overlapping static entry reached from 0xC2879D.
    case 0xC2879F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:14 LOADPTR MSG_BTL_CHECK_DEFENSE, @LOCAL00
    case 0xC287A0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/spy.asm:15 LDX CURRENT_TARGET
    case 0xC287A2: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:16 LDA a:battler::defense,X
    case 0xC287A5: cpu.execute_instruction<0xBD>(0x000028, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/spy.asm:17 STORE_INT1632 @VIRTUAL06
    case 0xC287A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/spy.asm:17 STORE_INT1632 @VIRTUAL06
    case 0xC287AA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC287AC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC287AE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC287B0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/spy.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC287B2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/spy.asm:19 JSL DISPLAY_TEXT_WAIT
    case 0xC287B4: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/actions/spy.asm:20 LDX CURRENT_TARGET
    case 0xC287B8: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:21 LDA a:battler::fire_resist,X
    case 0xC287BB: cpu.execute_instruction<0xBD>(0x00003A, 3); return true;
    // src/battle/actions/spy.asm:22 AND #$00FF
    case 0xC287BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC287BE.
    case 0xC287C0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:23 CMP #$00FF
    case 0xC287C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:23 CMP #$00FF
    // Overlapping static entry reached from 0xC287C1.
    case 0xC287C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:24 BNE @UNKNOWN0
    case 0xC287C4: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC287C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x006A0D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC287C6.
    case 0xC287C8: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC287C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC287CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    // Overlapping static entry reached from 0xC287CB.
    case 0xC287CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC287CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:25 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FIRE
    case 0xC287D0: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:27 LDX CURRENT_TARGET
    case 0xC287D4: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:28 LDA a:battler::freeze_resist,X
    case 0xC287D7: cpu.execute_instruction<0xBD>(0x000038, 3); return true;
    // src/battle/actions/spy.asm:29 AND #$00FF
    case 0xC287DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC287DA.
    case 0xC287DC: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:30 CMP #$00FF
    case 0xC287DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:30 CMP #$00FF
    // Overlapping static entry reached from 0xC287DD.
    case 0xC287DF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:31 BNE @UNKNOWN1
    case 0xC287E0: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC287E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x006A24, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC287E2.
    case 0xC287E4: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC287E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC287E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    // Overlapping static entry reached from 0xC287E7.
    case 0xC287E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC287EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:32 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FREEZE
    case 0xC287EC: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:34 LDX CURRENT_TARGET
    case 0xC287F0: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:35 LDA a:battler::flash_resist,X
    case 0xC287F3: cpu.execute_instruction<0xBD>(0x000039, 3); return true;
    // src/battle/actions/spy.asm:36 AND #$00FF
    case 0xC287F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC287F6.
    case 0xC287F8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:37 CMP #$00FF
    case 0xC287F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:37 CMP #$00FF
    // Overlapping static entry reached from 0xC287F9.
    case 0xC287FB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:38 BNE @UNKNOWN2
    case 0xC287FC: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC287FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x006A3C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC287FE.
    case 0xC28800: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC28801: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC28803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    // Overlapping static entry reached from 0xC28803.
    case 0xC28805: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC28806: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_FLASH
    case 0xC28808: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:41 LDX CURRENT_TARGET
    case 0xC2880C: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:42 LDA a:battler::paralysis_resist,X
    case 0xC2880F: cpu.execute_instruction<0xBD>(0x000037, 3); return true;
    // src/battle/actions/spy.asm:43 AND #$00FF
    case 0xC28812: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC28812.
    case 0xC28814: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:44 CMP #$00FF
    case 0xC28815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:44 CMP #$00FF
    // Overlapping static entry reached from 0xC28815.
    case 0xC28817: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:45 BNE @UNKNOWN3
    case 0xC28818: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC2881A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x006A54, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC2881A.
    case 0xC2881C: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC2881D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC2881F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    // Overlapping static entry reached from 0xC2881F.
    case 0xC28821: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC28822: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:46 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_ANTI_PARALYSIS
    case 0xC28824: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:48 LDX CURRENT_TARGET
    case 0xC28828: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:49 LDA a:battler::hypnosis_resist,X
    case 0xC2882B: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // src/battle/actions/spy.asm:50 AND #$00FF
    case 0xC2882E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC2882E.
    case 0xC28830: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:51 CMP #$00FF
    case 0xC28831: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:51 CMP #$00FF
    // Overlapping static entry reached from 0xC28831.
    case 0xC28833: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:52 BNE @UNKNOWN4
    case 0xC28834: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC28836: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006C, 2); else cpu.execute_instruction<0xA9>(0x006A6C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC28836.
    case 0xC28838: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC28839: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC2883B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    // Overlapping static entry reached from 0xC2883B.
    case 0xC2883D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC2883E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_0
    case 0xC28840: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:55 LDX CURRENT_TARGET
    case 0xC28844: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:56 LDA a:battler::brainshock_resist,X
    case 0xC28847: cpu.execute_instruction<0xBD>(0x00003B, 3); return true;
    // src/battle/actions/spy.asm:57 AND #$00FF
    case 0xC2884A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC2884A.
    case 0xC2884C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:58 CMP #$00FF
    case 0xC2884D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:58 CMP #$00FF
    // Overlapping static entry reached from 0xC2884D.
    case 0xC2884F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:59 BNE @UNKNOWN5
    case 0xC28850: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28852: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x006A7F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC28852.
    case 0xC28854: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28855: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC28857: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    // Overlapping static entry reached from 0xC28857.
    case 0xC28859: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC2885A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:60 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_BRAIN_LEVEL_3
    case 0xC2885C: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:62 LDX CURRENT_TARGET
    case 0xC28860: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/spy.asm:63 LDA a:battler::ally_or_enemy,X
    case 0xC28863: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/spy.asm:64 AND #$00FF
    case 0xC28866: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/spy.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC28866.
    case 0xC28868: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/spy.asm:65 CMP #1
    case 0xC28869: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/spy.asm:65 CMP #1
    // Overlapping static entry reached from 0xC28869.
    case 0xC2886B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/spy.asm:66 BNE @UNKNOWN6
    case 0xC2886C: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/battle/actions/spy.asm:67 LDA #3
    case 0xC2886E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/actions/spy.asm:67 LDA #3
    // Overlapping static entry reached from 0xC2886E.
    case 0xC28870: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/spy.asm:68 JSL FIND_INVENTORY_SPACE2
    case 0xC28871: cpu.execute_instruction<0x22>(0xC4572B, 4); return true;
    // src/battle/actions/spy.asm:69 CMP #0
    case 0xC28875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/spy.asm:69 CMP #0
    // Overlapping static entry reached from 0xC28875.
    case 0xC28877: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/spy.asm:70 BEQ @UNKNOWN6
    case 0xC28878: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/actions/spy.asm:71 LDA ITEM_DROPPED
    case 0xC2887A: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // src/battle/actions/spy.asm:72 BEQ @UNKNOWN6
    case 0xC2887D: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/actions/spy.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC2887F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/spy.asm:74 LDA ITEM_DROPPED
    case 0xC28881: cpu.execute_instruction<0xAD>(0x00AA10, 3); return true;
    // src/battle/actions/spy.asm:75 JSL REDIRECT_C1ACF8
    case 0xC28884: cpu.execute_instruction<0x22>(0xC1DD7C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28888: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x007DD5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    // Overlapping static entry reached from 0xC28888.
    case 0xC2888A: cpu.execute_instruction<0x7D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC2888B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC2888D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    // Overlapping static entry reached from 0xC2888D.
    case 0xC2888F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28890: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/spy.asm:77 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_CHECK_PRESENT_GET
    case 0xC28892: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/spy.asm:78 STZ ITEM_DROPPED
    case 0xC28896: cpu.execute_instruction<0x9C>(0x00AA10, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/spy.asm:80 END_C_FUNCTION
    case 0xC28899: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/spy.asm:80 END_C_FUNCTION
    case 0xC2889A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/steal.asm (source_named).
bool execute_battle_actions_steal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/steal.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2889E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/steal.asm:5 LDX CURRENT_TARGET
    case 0xC288A0: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/steal.asm:6 LDA a:battler::ally_or_enemy,X
    case 0xC288A3: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/steal.asm:7 AND #$00FF
    case 0xC288A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC288A6.
    case 0xC288A8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/steal.asm:8 CMP #1
    case 0xC288A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/steal.asm:8 CMP #1
    // Overlapping static entry reached from 0xC288A9.
    case 0xC288AB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/steal.asm:9 BEQ @UNKNOWN1
    case 0xC288AC: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/battle/actions/steal.asm:10 LDX CURRENT_TARGET
    case 0xC288AE: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/steal.asm:11 LDA a:battler::npc_id,X
    case 0xC288B1: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/actions/steal.asm:12 AND #$00FF
    case 0xC288B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC288B4.
    case 0xC288B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/steal.asm:13 BNE @UNKNOWN1
    case 0xC288B7: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/actions/steal.asm:14 LDA MIRROR_ENEMY
    case 0xC288B9: cpu.execute_instruction<0xAD>(0x00AA12, 3); return true;
    // src/battle/actions/steal.asm:15 BEQ @UNKNOWN0
    case 0xC288BC: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/actions/steal.asm:16 LDX CURRENT_ATTACKER
    case 0xC288BE: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/steal.asm:17 LDA a:battler::ally_or_enemy,X
    case 0xC288C1: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/actions/steal.asm:18 AND #$00FF
    case 0xC288C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC288C4.
    case 0xC288C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/steal.asm:19 BNE @UNKNOWN0
    case 0xC288C7: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/battle/actions/steal.asm:20 LDX CURRENT_ATTACKER
    case 0xC288C9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/steal.asm:21 LDA __BSS_START__,X
    case 0xC288CC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/steal.asm:22 CMP #4
    case 0xC288CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/actions/steal.asm:22 CMP #4
    // Overlapping static entry reached from 0xC288CF.
    case 0xC288D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/steal.asm:23 BEQ @UNKNOWN1
    case 0xC288D2: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/battle/actions/steal.asm:25 LDX CURRENT_ATTACKER
    case 0xC288D4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/steal.asm:26 LDA a:battler::current_action_argument,X
    case 0xC288D7: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/steal.asm:27 AND #$00FF
    case 0xC288DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC288DA.
    case 0xC288DC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/steal.asm:28 BEQ @UNKNOWN1
    case 0xC288DD: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/actions/steal.asm:29 AND #$00FF
    case 0xC288DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC288DF.
    case 0xC288E1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/steal.asm:30 TAX
    case 0xC288E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/steal.asm:31 LDA #$00FF
    case 0xC288E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/actions/steal.asm:31 LDA #$00FF
    // Overlapping static entry reached from 0xC288E3.
    case 0xC288E5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/steal.asm:32 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC288E6: cpu.execute_instruction<0x22>(0xC18EAD, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/steal.asm:34 END_C_FUNCTION
    case 0xC288EA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/sudden_guts_pill.asm (source_named).
bool execute_battle_actions_sudden_guts_pill_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA7F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA81: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA82: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AA83.
    case 0xC2AA85: cpu.execute_instruction<0xFF>(0xFD205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA86: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/sudden_guts_pill.asm:8 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2AA87: cpu.execute_instruction<0x20>(0x007CFD, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:8 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2AA85.
    case 0xC2AA89: cpu.execute_instruction<0x7C>(0x0000C9, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:9 CMP #0
    case 0xC2AA8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2AA8A.
    case 0xC2AA8C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:10 BNE @UNKNOWN1
    case 0xC2AA8D: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:11 LDX CURRENT_TARGET
    case 0xC2AA8F: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:12 LDA a:battler::guts,X
    case 0xC2AA92: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:13 ASL
    case 0xC2AA95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/actions/sudden_guts_pill.asm:14 CMP #$00FF
    case 0xC2AA96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC2AA96.
    case 0xC2AA98: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:15 BCC @UNKNOWN0
    case 0xC2AA99: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:16 LDA #$00FF
    case 0xC2AA9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:16 LDA #$00FF
    // Overlapping static entry reached from 0xC2AA9B.
    case 0xC2AA9D: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:18 LDX CURRENT_TARGET
    case 0xC2AA9E: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:19 STA a:battler::guts,X
    case 0xC2AAA1: cpu.execute_instruction<0x9D>(0x00002C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AAA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00F80A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AAA4.
    case 0xC2AAA6: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AAA7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AAA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AAA9.
    case 0xC2AAAB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AAAC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:21 LDX CURRENT_TARGET
    case 0xC2AAAE: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/actions/sudden_guts_pill.asm:22 LDA a:battler::guts,X
    case 0xC2AAB1: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2AAB4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2AAB6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AAB8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AABA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AABC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AABE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC2AAC0: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:27 END_C_FUNCTION
    case 0xC2AAC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:27 END_C_FUNCTION
    case 0xC2AAC5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/super_bomb.asm (source_named).
bool execute_battle_actions_super_bomb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/super_bomb.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A821: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/super_bomb.asm:5 LDA #270
    case 0xC2A823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00010E, 3); return true;
    // src/battle/actions/super_bomb.asm:5 LDA #270
    // Overlapping static entry reached from 0xC2A823.
    case 0xC2A825: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    case 0xC2A826: cpu.execute_instruction<0x20>(0x00A658, 3); return true;
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    // Overlapping static entry reached from 0xC2A825.
    case 0xC2A827: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    // Overlapping static entry reached from 0xC2A827.
    case 0xC2A828: cpu.execute_instruction<0xA6>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/super_bomb.asm:7 END_C_FUNCTION
    case 0xC2A829: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/switch_armor.asm (source_named).
bool execute_battle_actions_switch_armor_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_armor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1E00F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E011: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E012: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E013: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E013.
    case 0xC1E015: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E016: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:12 LDA #1
    case 0xC1E017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/switch_armor.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1E017.
    case 0xC1E019: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:13 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1E01A: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:14 LDX CURRENT_ATTACKER
    case 0xC1E01D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:15 LDA a:battler::current_action_argument,X
    case 0xC1E020: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    case 0xC1E023: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1E023.
    case 0xC1E025: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_armor.asm:17 TAX
    case 0xC1E026: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:18 STX @LOCAL05
    case 0xC1E027: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/actions/switch_armor.asm:19 LDX CURRENT_ATTACKER
    case 0xC1E029: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:20 LDA a:battler::id,X
    case 0xC1E02C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:21 LDX @LOCAL05
    case 0xC1E02F: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/actions/switch_armor.asm:22 JSL UNKNOWN_C3EE14
    case 0xC1E031: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // src/battle/actions/switch_armor.asm:23 CMP #0
    case 0xC1E035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:23 CMP #0
    // Overlapping static entry reached from 0xC1E035.
    case 0xC1E037: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1E038: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1E03A: cpu.execute_instruction<0x4C>(0x00E18F, 3); return true;
    // src/battle/actions/switch_armor.asm:25 LDX CURRENT_ATTACKER
    case 0xC1E03D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:26 LDA a:battler::row,X
    case 0xC1E040: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    case 0xC1E043: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1E043.
    case 0xC1E045: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    case 0xC1E046: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1E046.
    case 0xC1E048: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/switch_armor.asm:29 JSL MULT168
    case 0xC1E049: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/actions/switch_armor.asm:30 CLC
    case 0xC1E04D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1E04E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1E04E.
    case 0xC1E050: cpu.execute_instruction<0x99>(0x0084A8, 3); return true;
    // src/battle/actions/switch_armor.asm:32 TAY
    case 0xC1E051: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    case 0xC1E052: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    // Overlapping static entry reached from 0xC1E050.
    case 0xC1E053: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:34 LDX CURRENT_ATTACKER
    case 0xC1E054: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:35 LDA a:battler::base_defense,X
    case 0xC1E057: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    case 0xC1E05A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1E05A.
    case 0xC1E05C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_armor.asm:37 STA @VIRTUAL04
    case 0xC1E05D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:38 LDX CURRENT_ATTACKER
    case 0xC1E05F: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:39 LDA a:battler::defense,X
    case 0xC1E062: cpu.execute_instruction<0xBD>(0x000028, 3); return true;
    // src/battle/actions/switch_armor.asm:40 SEC
    case 0xC1E065: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:41 SBC @VIRTUAL04
    case 0xC1E066: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:42 STA @VIRTUAL02
    case 0xC1E068: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:43 STA @LOCAL03
    case 0xC1E06A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/switch_armor.asm:44 LDX CURRENT_ATTACKER
    case 0xC1E06C: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:45 LDA a:battler::base_speed,X
    case 0xC1E06F: cpu.execute_instruction<0xBD>(0x000034, 3); return true;
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    case 0xC1E072: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1E072.
    case 0xC1E074: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_armor.asm:47 STA @VIRTUAL02
    case 0xC1E075: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:48 LDX CURRENT_ATTACKER
    case 0xC1E077: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:49 LDA a:battler::speed,X
    case 0xC1E07A: cpu.execute_instruction<0xBD>(0x00002A, 3); return true;
    // src/battle/actions/switch_armor.asm:50 SEC
    case 0xC1E07D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:51 SBC @VIRTUAL02
    case 0xC1E07E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:52 STA @VIRTUAL04
    case 0xC1E080: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:53 LDX CURRENT_ATTACKER
    case 0xC1E082: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:54 LDA a:battler::base_luck,X
    case 0xC1E085: cpu.execute_instruction<0xBD>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    case 0xC1E088: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1E088.
    case 0xC1E08A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_armor.asm:56 STA @VIRTUAL02
    case 0xC1E08B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:57 LDX CURRENT_ATTACKER
    case 0xC1E08D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:58 LDA a:battler::luck,X
    case 0xC1E090: cpu.execute_instruction<0xBD>(0x00002E, 3); return true;
    // src/battle/actions/switch_armor.asm:59 SEC
    case 0xC1E093: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:60 SBC @VIRTUAL02
    case 0xC1E094: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:61 STA @LOCAL02
    case 0xC1E096: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:62 LDX CURRENT_ATTACKER
    case 0xC1E098: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:63 LDA a:battler::action_item_slot,X
    case 0xC1E09B: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    case 0xC1E09E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC1E09E.
    case 0xC1E0A0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_armor.asm:65 TAX
    case 0xC1E0A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:66 STX @LOCAL01
    case 0xC1E0A2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/actions/switch_armor.asm:67 LDX CURRENT_ATTACKER
    case 0xC1E0A4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:68 LDA a:battler::id,X
    case 0xC1E0A7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:69 LDX @LOCAL01
    case 0xC1E0AA: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/actions/switch_armor.asm:70 JSR EQUIP_ITEM
    case 0xC1E0AC: cpu.execute_instruction<0x20>(0x009066, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x007E11, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1E0AF.
    case 0xC1E0B1: cpu.execute_instruction<0x7E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1E0B4.
    case 0xC1E0B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B9: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/battle/actions/switch_armor.asm:72 LDY @LOCAL04
    case 0xC1E0BD: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E0BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:74 LDA a:char_struct::defense,Y
    case 0xC1E0C1: cpu.execute_instruction<0xB9>(0x000016, 3); return true;
    // src/battle/actions/switch_armor.asm:75 LDX CURRENT_ATTACKER
    case 0xC1E0C4: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:76 STA a:battler::base_defense,X
    case 0xC1E0C7: cpu.execute_instruction<0x9D>(0x000033, 3); return true;
    // src/battle/actions/switch_armor.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC1E0CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:78 LDA @LOCAL03
    case 0xC1E0CC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/switch_armor.asm:79 STA @VIRTUAL02
    case 0xC1E0CE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:80 LDX CURRENT_ATTACKER
    case 0xC1E0D0: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:81 LDA a:battler::base_defense,X
    case 0xC1E0D3: cpu.execute_instruction<0xBD>(0x000033, 3); return true;
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    case 0xC1E0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1E0D6.
    case 0xC1E0D8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:83 CLC
    case 0xC1E0D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:84 ADC @VIRTUAL02
    case 0xC1E0DA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/switch_armor.asm:85 LDX CURRENT_ATTACKER
    case 0xC1E0DC: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:86 STA a:battler::defense,X
    case 0xC1E0DF: cpu.execute_instruction<0x9D>(0x000028, 3); return true;
    // src/battle/actions/switch_armor.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E0E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:88 LDA a:char_struct::speed,Y
    case 0xC1E0E4: cpu.execute_instruction<0xB9>(0x000017, 3); return true;
    // src/battle/actions/switch_armor.asm:89 LDX CURRENT_ATTACKER
    case 0xC1E0E7: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:90 STA a:battler::base_speed,X
    case 0xC1E0EA: cpu.execute_instruction<0x9D>(0x000034, 3); return true;
    // src/battle/actions/switch_armor.asm:91 LDX CURRENT_ATTACKER
    case 0xC1E0ED: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1E0F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:93 LDA a:battler::base_speed,X
    case 0xC1E0F2: cpu.execute_instruction<0xBD>(0x000034, 3); return true;
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    case 0xC1E0F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC1E0F5.
    case 0xC1E0F7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:95 CLC
    case 0xC1E0F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:96 ADC @VIRTUAL04
    case 0xC1E0F9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/actions/switch_armor.asm:97 LDX CURRENT_ATTACKER
    case 0xC1E0FB: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:98 STA a:battler::speed,X
    case 0xC1E0FE: cpu.execute_instruction<0x9D>(0x00002A, 3); return true;
    // src/battle/actions/switch_armor.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E101: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:100 LDA a:char_struct::luck,Y
    case 0xC1E103: cpu.execute_instruction<0xB9>(0x000019, 3); return true;
    // src/battle/actions/switch_armor.asm:101 LDX CURRENT_ATTACKER
    case 0xC1E106: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:102 STA a:battler::base_luck,X
    case 0xC1E109: cpu.execute_instruction<0x9D>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:103 LDX CURRENT_ATTACKER
    case 0xC1E10C: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC1E10F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:105 LDA a:battler::base_luck,X
    case 0xC1E111: cpu.execute_instruction<0xBD>(0x000036, 3); return true;
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    case 0xC1E114: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC1E114.
    case 0xC1E116: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:107 CLC
    case 0xC1E117: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:108 ADC @LOCAL02
    case 0xC1E118: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:109 LDX CURRENT_ATTACKER
    case 0xC1E11A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:110 STA a:battler::luck,X
    case 0xC1E11D: cpu.execute_instruction<0x9D>(0x00002E, 3); return true;
    // src/battle/actions/switch_armor.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E120: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:112 LDA a:char_struct::fire_resist,Y
    case 0xC1E122: cpu.execute_instruction<0xB9>(0x000052, 3); return true;
    // src/battle/actions/switch_armor.asm:113 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1E125: cpu.execute_instruction<0x22>(0xC2B608, 4); return true;
    // src/battle/actions/switch_armor.asm:114 LDX CURRENT_ATTACKER
    case 0xC1E129: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:115 STA a:battler::fire_resist,X
    case 0xC1E12C: cpu.execute_instruction<0x9D>(0x00003A, 3); return true;
    // src/battle/actions/switch_armor.asm:116 LDY @LOCAL04
    case 0xC1E12F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:117 LDA a:char_struct::freeze_resist,Y
    case 0xC1E131: cpu.execute_instruction<0xB9>(0x000053, 3); return true;
    // src/battle/actions/switch_armor.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1E134: cpu.execute_instruction<0x22>(0xC2B608, 4); return true;
    // src/battle/actions/switch_armor.asm:119 LDX CURRENT_ATTACKER
    case 0xC1E138: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:120 STA a:battler::freeze_resist,X
    case 0xC1E13B: cpu.execute_instruction<0x9D>(0x000038, 3); return true;
    // src/battle/actions/switch_armor.asm:121 LDY @LOCAL04
    case 0xC1E13E: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:122 LDA a:char_struct::flash_resist,Y
    case 0xC1E140: cpu.execute_instruction<0xB9>(0x000054, 3); return true;
    // src/battle/actions/switch_armor.asm:123 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E143: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/actions/switch_armor.asm:124 LDX CURRENT_ATTACKER
    case 0xC1E147: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:125 STA a:battler::flash_resist,X
    case 0xC1E14A: cpu.execute_instruction<0x9D>(0x000039, 3); return true;
    // src/battle/actions/switch_armor.asm:126 LDY @LOCAL04
    case 0xC1E14D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:127 LDA a:char_struct::paralysis_resist,Y
    case 0xC1E14F: cpu.execute_instruction<0xB9>(0x000055, 3); return true;
    // src/battle/actions/switch_armor.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E152: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/actions/switch_armor.asm:129 LDX CURRENT_ATTACKER
    case 0xC1E156: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:130 STA a:battler::paralysis_resist,X
    case 0xC1E159: cpu.execute_instruction<0x9D>(0x000037, 3); return true;
    // src/battle/actions/switch_armor.asm:131 LDY @LOCAL04
    case 0xC1E15C: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/actions/switch_armor.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1E15E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:133 TYA
    case 0xC1E160: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:134 CLC
    case 0xC1E161: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC1E162: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x000056, 3); return true;
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC1E162.
    case 0xC1E164: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_armor.asm:136 TAX
    case 0xC1E165: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:137 STX @LOCAL02
    case 0xC1E166: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E168: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_armor.asm:139 LDA __BSS_START__,X
    case 0xC1E16A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:140 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E16D: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/actions/switch_armor.asm:141 LDX CURRENT_ATTACKER
    case 0xC1E171: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:142 STA a:battler::hypnosis_resist,X
    case 0xC1E174: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/battle/actions/switch_armor.asm:143 LDX @LOCAL02
    case 0xC1E177: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/actions/switch_armor.asm:144 LDA __BSS_START__,X
    case 0xC1E179: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_armor.asm:145 STA @VIRTUAL00
    case 0xC1E17C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/actions/switch_armor.asm:146 LDA #3
    case 0xC1E17E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x003803, 3); return true;
    // src/battle/actions/switch_armor.asm:147 SEC
    case 0xC1E180: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_armor.asm:148 SBC @VIRTUAL00
    case 0xC1E181: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/battle/actions/switch_armor.asm:149 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E183: cpu.execute_instruction<0x22>(0xC2B639, 4); return true;
    // src/battle/actions/switch_armor.asm:150 LDX CURRENT_ATTACKER
    case 0xC1E187: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_armor.asm:151 STA a:battler::brainshock_resist,X
    case 0xC1E18A: cpu.execute_instruction<0x9D>(0x00003B, 3); return true;
    // src/battle/actions/switch_armor.asm:152 BRA @UNKNOWN2
    case 0xC1E18D: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E18F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x007E33, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1E18F.
    case 0xC1E191: cpu.execute_instruction<0x7E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E192: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1E194.
    case 0xC1E196: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E197: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E199: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/battle/actions/switch_armor.asm:157 JSR CLEAR_BLINKING_PROMPT
    case 0xC1E19D: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1E1A0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1E1A1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/switch_weapon.asm (source_named).
bool execute_battle_actions_switch_weapon_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_weapon.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE43: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE45: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE46: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DE47.
    case 0xC1DE49: cpu.execute_instruction<0xFF>(0x70AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE4A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    case 0xC1DE4B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1DE49.
    case 0xC1DE4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x0000BD, 3); return true;
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    case 0xC1DE4E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC1DE4D.
    case 0xC1DE4F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC1DE4D.
    case 0xC1DE50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_weapon.asm:19 STA @LOCAL05
    case 0xC1DE51: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    case 0xC1DE53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1DE53.
    case 0xC1DE55: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:21 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DE56: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // src/battle/actions/switch_weapon.asm:22 LDX CURRENT_ATTACKER
    case 0xC1DE59: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:23 LDA a:battler::current_action_argument,X
    case 0xC1DE5C: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    case 0xC1DE5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1DE5F.
    case 0xC1DE61: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:25 TAX
    case 0xC1DE62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:26 LDA @LOCAL05
    case 0xC1DE63: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:27 JSL UNKNOWN_C3EE14
    case 0xC1DE65: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    case 0xC1DE69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1DE69.
    case 0xC1DE6B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DE6C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DE6E: cpu.execute_instruction<0x4C>(0x00DF13, 3); return true;
    // src/battle/actions/switch_weapon.asm:30 LDA @LOCAL05
    case 0xC1DE71: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:31 DEC
    case 0xC1DE73: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1DE74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DE74.
    case 0xC1DE76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/switch_weapon.asm:33 JSL MULT168
    case 0xC1DE77: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/actions/switch_weapon.asm:34 CLC
    case 0xC1DE7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DE7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DE7C.
    case 0xC1DE7E: cpu.execute_instruction<0x99>(0x0084A8, 3); return true;
    // src/battle/actions/switch_weapon.asm:36 TAY
    case 0xC1DE7F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    case 0xC1DE80: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DE7E.
    case 0xC1DE81: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:38 LDX CURRENT_ATTACKER
    case 0xC1DE82: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:39 LDA a:battler::base_offense,X
    case 0xC1DE85: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    case 0xC1DE88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1DE88.
    case 0xC1DE8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_weapon.asm:41 STA @VIRTUAL04
    case 0xC1DE8B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:42 LDX CURRENT_ATTACKER
    case 0xC1DE8D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:43 LDA a:battler::offense,X
    case 0xC1DE90: cpu.execute_instruction<0xBD>(0x000026, 3); return true;
    // src/battle/actions/switch_weapon.asm:44 SEC
    case 0xC1DE93: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:45 SBC @VIRTUAL04
    case 0xC1DE94: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:46 STA @VIRTUAL02
    case 0xC1DE96: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:47 STA @LOCAL03
    case 0xC1DE98: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:48 LDX CURRENT_ATTACKER
    case 0xC1DE9A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:49 LDA a:battler::base_guts,X
    case 0xC1DE9D: cpu.execute_instruction<0xBD>(0x000035, 3); return true;
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    case 0xC1DEA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1DEA0.
    case 0xC1DEA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/actions/switch_weapon.asm:51 STA @VIRTUAL02
    case 0xC1DEA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:52 LDX CURRENT_ATTACKER
    case 0xC1DEA5: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:53 LDA a:battler::guts,X
    case 0xC1DEA8: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/actions/switch_weapon.asm:54 SEC
    case 0xC1DEAB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:55 SBC @VIRTUAL02
    case 0xC1DEAC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:56 STA @VIRTUAL04
    case 0xC1DEAE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:57 LDX CURRENT_ATTACKER
    case 0xC1DEB0: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:58 LDA a:battler::action_item_slot,X
    case 0xC1DEB3: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    case 0xC1DEB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1DEB6.
    case 0xC1DEB8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:60 TAX
    case 0xC1DEB9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:61 LDA @LOCAL05
    case 0xC1DEBA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:62 JSR EQUIP_ITEM
    case 0xC1DEBC: cpu.execute_instruction<0x20>(0x009066, 3); return true;
    // src/battle/actions/switch_weapon.asm:63 LDY @LOCAL04
    case 0xC1DEBF: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/actions/switch_weapon.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEC1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:65 LDA a:char_struct::offense,Y
    case 0xC1DEC3: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // src/battle/actions/switch_weapon.asm:66 LDX CURRENT_ATTACKER
    case 0xC1DEC6: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:67 STA a:battler::base_offense,X
    case 0xC1DEC9: cpu.execute_instruction<0x9D>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC1DECC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:69 LDA @LOCAL03
    case 0xC1DECE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:70 STA @VIRTUAL02
    case 0xC1DED0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:71 LDX CURRENT_ATTACKER
    case 0xC1DED2: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:72 LDA a:battler::base_offense,X
    case 0xC1DED5: cpu.execute_instruction<0xBD>(0x000032, 3); return true;
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    case 0xC1DED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1DED8.
    case 0xC1DEDA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:74 CLC
    case 0xC1DEDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:75 ADC @VIRTUAL02
    case 0xC1DEDC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:76 LDX CURRENT_ATTACKER
    case 0xC1DEDE: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:77 STA a:battler::offense,X
    case 0xC1DEE1: cpu.execute_instruction<0x9D>(0x000026, 3); return true;
    // src/battle/actions/switch_weapon.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:79 LDA a:char_struct::guts,Y
    case 0xC1DEE6: cpu.execute_instruction<0xB9>(0x000018, 3); return true;
    // src/battle/actions/switch_weapon.asm:80 LDX CURRENT_ATTACKER
    case 0xC1DEE9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:81 STA a:battler::base_guts,X
    case 0xC1DEEC: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/battle/actions/switch_weapon.asm:82 LDX CURRENT_ATTACKER
    case 0xC1DEEF: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1DEF2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/switch_weapon.asm:84 LDA a:battler::base_guts,X
    case 0xC1DEF4: cpu.execute_instruction<0xBD>(0x000035, 3); return true;
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    case 0xC1DEF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC1DEF7.
    case 0xC1DEF9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/actions/switch_weapon.asm:86 CLC
    case 0xC1DEFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:87 ADC @VIRTUAL04
    case 0xC1DEFB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/actions/switch_weapon.asm:88 LDX CURRENT_ATTACKER
    case 0xC1DEFD: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/switch_weapon.asm:89 STA a:battler::guts,X
    case 0xC1DF00: cpu.execute_instruction<0x9D>(0x00002C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x007E11, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DF03.
    case 0xC1DF05: cpu.execute_instruction<0x7E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF06: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DF08.
    case 0xC1DF0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF0D: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/battle/actions/switch_weapon.asm:91 BRA @SKIPTEXT
    case 0xC1DF11: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x007E33, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF13.
    case 0xC1DF15: cpu.execute_instruction<0x7E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF18.
    case 0xC1DF1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF1B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF1D: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/battle/actions/switch_weapon.asm:95 LDA @LOCAL05
    case 0xC1DF21: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/actions/switch_weapon.asm:96 DEC
    case 0xC1DF23: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    case 0xC1DF24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DF24.
    case 0xC1DF26: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/actions/switch_weapon.asm:98 JSL MULT168
    case 0xC1DF27: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/actions/switch_weapon.asm:99 STA @LOCAL02
    case 0xC1DF2B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/switch_weapon.asm:100 TAX
    case 0xC1DF2D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:101 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1DF2E: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    case 0xC1DF31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC1DF31.
    case 0xC1DF33: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/actions/switch_weapon.asm:103 DEC
    case 0xC1DF34: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:104 STA @VIRTUAL02
    case 0xC1DF35: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:105 LDA @LOCAL02
    case 0xC1DF37: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/switch_weapon.asm:106 CLC
    case 0xC1DF39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1DF3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1DF3A.
    case 0xC1DF3C: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/actions/switch_weapon.asm:108 CLC
    case 0xC1DF3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    case 0xC1DF3E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DF3C.
    case 0xC1DF3F: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:110 TAX
    case 0xC1DF40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:111 LDA __BSS_START__,X
    case 0xC1DF41: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    case 0xC1DF44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC1DF44.
    case 0xC1DF46: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/switch_weapon.asm:113 BEQ @NOTSHOOT
    case 0xC1DF47: cpu.execute_instruction<0xF0>(0x00006F, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DF49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1DF49.
    case 0xC1DF4B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DF4C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/actions/switch_weapon.asm:115 CLC
    case 0xC1DF50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    case 0xC1DF51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    // Overlapping static entry reached from 0xC1DF51.
    case 0xC1DF53: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/switch_weapon.asm:117 TAX
    case 0xC1DF54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:118 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1DF55: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    case 0xC1DF59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1DF59.
    case 0xC1DF5B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    case 0xC1DF5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    // Overlapping static entry reached from 0xC1DF5C.
    case 0xC1DF5E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    case 0xC1DF5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    // Overlapping static entry reached from 0xC1DF5F.
    case 0xC1DF61: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/actions/switch_weapon.asm:122 BNE @NOTSHOOT
    case 0xC1DF62: cpu.execute_instruction<0xD0>(0x000054, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DF64.
    case 0xC1DF66: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DF69.
    case 0xC1DF6B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF6C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF6E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF70: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF72: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF74: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    case 0xC1DF76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DF76.
    case 0xC1DF78: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:126 LDA [@VIRTUAL06],Y
    case 0xC1DF79: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:127 PHA
    case 0xC1DF7B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:128 INY
    case 0xC1DF7C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:129 INY
    case 0xC1DF7D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:130 LDA [@VIRTUAL06],Y
    case 0xC1DF7E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:131 STA @TMP+2
    case 0xC1DF80: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:132 PLA
    case 0xC1DF82: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:133 STA @TMP
    case 0xC1DF83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:134 STA @LOCAL00
    case 0xC1DF85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/switch_weapon.asm:135 LDA @TMP+2
    case 0xC1DF87: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:136 STA @LOCAL00+2
    case 0xC1DF89: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/switch_weapon.asm:137 JSL DISPLAY_TEXT
    case 0xC1DF8B: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF8F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF91: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF93: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF95: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    case 0xC1DF97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DF97.
    case 0xC1DF99: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:140 LDA [@VIRTUAL06],Y
    case 0xC1DF9A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:141 PHA
    case 0xC1DF9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:142 INY
    case 0xC1DF9D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:143 INY
    case 0xC1DF9E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:144 LDA [@VIRTUAL06],Y
    case 0xC1DF9F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:145 STA @VIRTUAL06+2
    case 0xC1DFA1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:146 PLA
    case 0xC1DFA3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:147 STA @VIRTUAL06
    case 0xC1DFA4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:148 PHA
    case 0xC1DFA6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFA7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFA9: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFAC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFAE: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/battle/actions/switch_weapon.asm:150 PLA
    case 0xC1DFB1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:151 JSL UNKNOWN_C09279
    case 0xC1DFB2: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/battle/actions/switch_weapon.asm:152 BRA @RETURN
    case 0xC1DFB6: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DFB8.
    case 0xC1DFBA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DFBD.
    case 0xC1DFBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    case 0xC1DFCA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x000034, 3); return true;
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DFCA.
    case 0xC1DFCC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:157 LDA [@VIRTUAL06],Y
    case 0xC1DFCD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:158 PHA
    case 0xC1DFCF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:159 INY
    case 0xC1DFD0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:160 INY
    case 0xC1DFD1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:161 LDA [@VIRTUAL06],Y
    case 0xC1DFD2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:162 STA @TMP+2
    case 0xC1DFD4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:163 PLA
    case 0xC1DFD6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:164 STA @TMP
    case 0xC1DFD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:165 STA @LOCAL00
    case 0xC1DFD9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/switch_weapon.asm:166 LDA @TMP+2
    case 0xC1DFDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:167 STA @LOCAL00+2
    case 0xC1DFDD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/actions/switch_weapon.asm:168 JSL DISPLAY_TEXT
    case 0xC1DFDF: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    case 0xC1DFEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000038, 2); else cpu.execute_instruction<0xA0>(0x000038, 3); return true;
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DFEB.
    case 0xC1DFED: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/actions/switch_weapon.asm:171 LDA [@VIRTUAL06],Y
    case 0xC1DFEE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:172 PHA
    case 0xC1DFF0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:173 INY
    case 0xC1DFF1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:174 INY
    case 0xC1DFF2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:175 LDA [@VIRTUAL06],Y
    case 0xC1DFF3: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:176 STA @VIRTUAL06+2
    case 0xC1DFF5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/actions/switch_weapon.asm:177 PLA
    case 0xC1DFF7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:178 STA @VIRTUAL06
    case 0xC1DFF8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/actions/switch_weapon.asm:179 PHA
    case 0xC1DFFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFFB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFFD: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1E000: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1E002: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/battle/actions/switch_weapon.asm:181 PLA
    case 0xC1E005: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/actions/switch_weapon.asm:182 JSL UNKNOWN_C09279
    case 0xC1E006: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/battle/actions/switch_weapon.asm:184 JSR CLEAR_BLINKING_PROMPT
    case 0xC1E00A: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1E00D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1E00E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/teleport_box.asm (source_named).
bool execute_battle_actions_teleport_box_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/teleport_box.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AB71: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB73: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB74: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AB75.
    case 0xC2AB77: cpu.execute_instruction<0xFF>(0x7BAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB78: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC2AB79: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC2AB77.
    case 0xC2AB7B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC2AB7C: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/battle/actions/teleport_box.asm:11 JSL LOAD_SECTOR_ATTRS
    case 0xC2AB7F: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    case 0xC2AB83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    // Overlapping static entry reached from 0xC2AB83.
    case 0xC2AB85: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB86: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB88: cpu.execute_instruction<0x4C>(0x00AC1A, 3); return true;
    // src/battle/actions/teleport_box.asm:14 LDA BATTLE_MODE_FLAG
    case 0xC2AB8B: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/battle/actions/teleport_box.asm:15 BEQ @UNKNOWN1
    case 0xC2AB8E: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/battle/actions/teleport_box.asm:16 LDA #100
    case 0xC2AB90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/battle/actions/teleport_box.asm:16 LDA #100
    // Overlapping static entry reached from 0xC2AB90.
    case 0xC2AB92: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:17 JSR RAND_LIMIT
    case 0xC2AB93: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/teleport_box.asm:18 STA @LOCAL02
    case 0xC2AB96: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/teleport_box.asm:19 LDX CURRENT_ATTACKER
    case 0xC2AB98: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/teleport_box.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2AB9B: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    case 0xC2AB9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2AB9E.
    case 0xC2ABA0: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2ABA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2ABA1.
    case 0xC2ABA3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2ABA4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/actions/teleport_box.asm:23 CLC
    case 0xC2ABA8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    case 0xC2ABA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC2ABA9.
    case 0xC2ABAB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/teleport_box.asm:25 TAX
    case 0xC2ABAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ABAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:27 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2ABAF: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/actions/teleport_box.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC2ABB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:29 SEC
    case 0xC2ABB5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    case 0xC2ABB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2ABB6.
    case 0xC2ABB8: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    case 0xC2ABB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    // Overlapping static entry reached from 0xC2ABB9.
    case 0xC2ABBB: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    case 0xC2ABBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    // Overlapping static entry reached from 0xC2ABBC.
    case 0xC2ABBE: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/battle/actions/teleport_box.asm:33 STA @VIRTUAL02
    case 0xC2ABBF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    case 0xC2ABC1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    // Overlapping static entry reached from 0xC2ABBE.
    case 0xC2ABC2: cpu.execute_instruction<0x14>(0x0000C5, 2); return true;
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    case 0xC2ABC3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC2ABC2.
    case 0xC2ABC4: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // src/battle/actions/teleport_box.asm:36 BCS @TELEPORT_BOX_FAILURE
    case 0xC2ABC5: cpu.execute_instruction<0xB0>(0x000043, 2); return true;
    // src/battle/actions/teleport_box.asm:37 JSR BOSS_BATTLE_CHECK
    case 0xC2ABC7: cpu.execute_instruction<0x20>(0x00AB14, 3); return true;
    // src/battle/actions/teleport_box.asm:38 CMP #0
    case 0xC2ABCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/teleport_box.asm:38 CMP #0
    // Overlapping static entry reached from 0xC2ABCA.
    case 0xC2ABCC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/teleport_box.asm:39 BEQ @TELEPORT_BOX_FAILURE
    case 0xC2ABCD: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/actions/teleport_box.asm:41 LDX CURRENT_ATTACKER
    case 0xC2ABCF: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/teleport_box.asm:42 LDA a:battler::action_item_slot,X
    case 0xC2ABD2: cpu.execute_instruction<0xBD>(0x000007, 3); return true;
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    case 0xC2ABD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC2ABD5.
    case 0xC2ABD7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/teleport_box.asm:44 TAX
    case 0xC2ABD8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:45 STX @LOCAL01
    case 0xC2ABD9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/actions/teleport_box.asm:46 LDX CURRENT_ATTACKER
    case 0xC2ABDB: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/actions/teleport_box.asm:47 LDA a:battler::id,X
    case 0xC2ABDE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/teleport_box.asm:48 LDX @LOCAL01
    case 0xC2ABE1: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/actions/teleport_box.asm:49 JSL REDIRECT_REMOVE_ITEM_FROM_INVENTORY
    case 0xC2ABE3: cpu.execute_instruction<0x22>(0xC1DDC6, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x00FE41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2ABE7.
    case 0xC2ABE9: cpu.execute_instruction<0xFE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2ABEC.
    case 0xC2ABEE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABEF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABF1: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/teleport_box.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ABF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/teleport_box.asm:52 LDA #TELEPORT_STYLE::INSTANT
    case 0xC2ABF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008503, 3); return true;
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    case 0xC2ABF9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    // Overlapping static entry reached from 0xC2ABF7.
    case 0xC2ABFA: cpu.execute_instruction<0x0E>(0x00B8AD, 3); return true;
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    case 0xC2ABFB: cpu.execute_instruction<0xAD>(0x0098B8, 3); return true;
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC2ABFA.
    case 0xC2ABFD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/actions/teleport_box.asm:55 JSL SET_TELEPORT_STATE
    case 0xC2ABFE: cpu.execute_instruction<0x22>(0xC0DD53, 4); return true;
    // src/battle/actions/teleport_box.asm:57 LDA #1
    case 0xC2AC02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/actions/teleport_box.asm:57 LDA #1
    // Overlapping static entry reached from 0xC2AC02.
    case 0xC2AC04: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/actions/teleport_box.asm:58 STA SPECIAL_DEFEAT
    case 0xC2AC05: cpu.execute_instruction<0x8D>(0x00AA0E, 3); return true;
    // src/battle/actions/teleport_box.asm:59 BRA @RETURN
    case 0xC2AC08: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00FE9D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2AC0A.
    case 0xC2AC0C: cpu.execute_instruction<0xFE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC0D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2AC0F.
    case 0xC2AC11: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC12: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC14: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/actions/teleport_box.asm:63 BRA @RETURN
    case 0xC2AC18: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E3, 2); else cpu.execute_instruction<0xA9>(0x00FEE3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2AC1A.
    case 0xC2AC1C: cpu.execute_instruction<0xFE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC1D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2AC1F.
    case 0xC2AC21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC22: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC24: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2AC28: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2AC29: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/vitality_up_1d4.asm (source_named).
bool execute_battle_actions_vitality_up_1d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A1DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1DD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A1DF.
    case 0xC2A1E1: cpu.execute_instruction<0xFF>(0x04A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:9 LDA #4
    case 0xC2A1E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:9 LDA #4
    // Overlapping static entry reached from 0xC2A1E3.
    case 0xC2A1E5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A1E6: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:11 INC
    case 0xC2A1E9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:12 STA @LOCAL02
    case 0xC2A1EA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:13 LDA CURRENT_TARGET
    case 0xC2A1EC: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:14 CLC
    case 0xC2A1EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:15 ADC #battler::vitality
    case 0xC2A1F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:15 ADC #battler::vitality
    // Overlapping static entry reached from 0xC2A1F0.
    case 0xC2A1F2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:16 TAX
    case 0xC2A1F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:17 LDA @LOCAL02
    case 0xC2A1F4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A1F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:19 STA @VIRTUAL00
    case 0xC2A1F8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:20 LDA __BSS_START__,X
    case 0xC2A1FA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:21 CLC
    case 0xC2A1FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/actions/vitality_up_1d4.asm:22 ADC @VIRTUAL00
    case 0xC2A1FE: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:23 STA __BSS_START__,X
    case 0xC2A200: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/actions/vitality_up_1d4.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2A203: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A205: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00F84C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A205.
    case 0xC2A207: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A208: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A20A.
    case 0xC2A20C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:25 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2A20D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A20F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A211: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A213: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A215: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:26 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A217: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A219: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A21B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A21D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A21F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/actions/vitality_up_1d4.asm:28 JSL DISPLAY_TEXT_WAIT
    case 0xC2A221: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:29 END_C_FUNCTION
    case 0xC2A225: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/vitality_up_1d4.asm:29 END_C_FUNCTION
    case 0xC2A226: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/xterminator_spray.asm (source_named).
bool execute_battle_actions_xterminator_spray_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/xterminator_spray.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA15: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/actions/xterminator_spray.asm:5 LDA #200
    case 0xC2AA17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // src/battle/actions/xterminator_spray.asm:5 LDA #200
    // Overlapping static entry reached from 0xC2AA17.
    case 0xC2AA19: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/xterminator_spray.asm:6 JSR INSECT_SPRAY_COMMON
    case 0xC2AA1A: cpu.execute_instruction<0x20>(0x00A9BD, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/xterminator_spray.asm:7 END_C_FUNCTION
    case 0xC2AA1D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/actions/yogurt_dispenser.asm (source_named).
bool execute_battle_actions_yogurt_dispenser_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A86B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A86D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A86E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A86F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A86F.
    case 0xC2A871: cpu.execute_instruction<0xFF>(0xFAA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:6 END_STACK_VARS
    case 0xC2A872: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/actions/yogurt_dispenser.asm:7 LDA #250
    case 0xC2A873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0000FA, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:7 LDA #250
    // Overlapping static entry reached from 0xC2A873.
    case 0xC2A875: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:8 JSR SUCCESS_SPEED
    case 0xC2A876: cpu.execute_instruction<0x20>(0x007CAF, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:9 CMP #0
    case 0xC2A879: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2A879.
    case 0xC2A87B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:10 BEQ @UNKNOWN0
    case 0xC2A87C: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:11 LDA #4
    case 0xC2A87E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:11 LDA #4
    // Overlapping static entry reached from 0xC2A87E.
    case 0xC2A880: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:12 JSR RAND_LIMIT
    case 0xC2A881: cpu.execute_instruction<0x20>(0x006A2D, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:13 LDX #$00FF
    case 0xC2A884: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:13 LDX #$00FF
    // Overlapping static entry reached from 0xC2A884.
    case 0xC2A886: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/battle/actions/yogurt_dispenser.asm:14 INC
    case 0xC2A887: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/actions/yogurt_dispenser.asm:15 JSR CALC_RESIST_DAMAGE
    case 0xC2A888: cpu.execute_instruction<0x20>(0x008125, 3); return true;
    // src/battle/actions/yogurt_dispenser.asm:16 BRA @UNKNOWN1
    case 0xC2A88B: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A88D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A88D.
    case 0xC2A88F: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A890: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A88F.
    case 0xC2A891: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A892: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A892.
    case 0xC2A894: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A895: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A897: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:20 END_C_FUNCTION
    case 0xC2A89B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/yogurt_dispenser.asm:20 END_C_FUNCTION
    case 0xC2A89C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/apply_condiment.asm (source_named).
bool execute_battle_apply_condiment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/apply_condiment.asm:3 BEGIN_C_FUNCTION
    case 0xC2B172: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B174: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B175: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B176: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B176.
    case 0xC2B178: cpu.execute_instruction<0xFF>(0x70AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B179: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    case 0xC2B17A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2B178.
    case 0xC2B17C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x0008BD, 3); return true;
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    case 0xC2B17D: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    // Overlapping static entry reached from 0xC2B17C.
    case 0xC2B17E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    // Overlapping static entry reached from 0xC2B17C.
    case 0xC2B17F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/apply_condiment.asm:14 AND #$00FF
    case 0xC2B180: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2B180.
    case 0xC2B182: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/apply_condiment.asm:15 STA @VIRTUAL04
    case 0xC2B183: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:16 STA @LOCAL04
    case 0xC2B185: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/apply_condiment.asm:17 LDA @VIRTUAL04
    case 0xC2B187: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B189: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/apply_condiment.asm:19 JSL FIND_CONDIMENT
    case 0xC2B18B: cpu.execute_instruction<0x22>(0xC1DB33, 4); return true;
    // src/battle/apply_condiment.asm:21 STA @VIRTUAL02
    case 0xC2B18F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:22 CMP #$0000
    case 0xC2B191: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/apply_condiment.asm:22 CMP #$0000
    // Overlapping static entry reached from 0xC2B191.
    case 0xC2B193: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B194: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B196: cpu.execute_instruction<0x4C>(0x00B257, 3); return true;
    // src/battle/apply_condiment.asm:24 LDX @VIRTUAL02
    case 0xC2B199: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:25 STX @LOCAL03
    case 0xC2B19B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/apply_condiment.asm:26 LDX CURRENT_ATTACKER
    case 0xC2B19D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/apply_condiment.asm:27 LDA a:battler::id,X
    case 0xC2B1A0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/apply_condiment.asm:28 LDX @LOCAL03
    case 0xC2B1A3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/apply_condiment.asm:29 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC2B1A5: cpu.execute_instruction<0x22>(0xC18EAD, 4); return true;
    // src/battle/apply_condiment.asm:30 LDY #$0000
    case 0xC2B1A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/apply_condiment.asm:30 LDY #$0000
    // Overlapping static entry reached from 0xC2B1A9.
    case 0xC2B1AB: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/apply_condiment.asm:31 STY @LOCAL02
    case 0xC2B1AC: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/battle/apply_condiment.asm:32 BRA @UNKNOWN4
    case 0xC2B1AE: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/battle/apply_condiment.asm:34 PHA
    case 0xC2B1B0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:35 LDA @LOCAL04
    case 0xC2B1B1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/apply_condiment.asm:36 STA @VIRTUAL04
    case 0xC2B1B3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:37 PLA
    case 0xC2B1B5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:38 AND #$00FF
    case 0xC2B1B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC2B1B6.
    case 0xC2B1B8: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/apply_condiment.asm:39 CMP @VIRTUAL04
    case 0xC2B1B9: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:40 BNE @UNKNOWN3
    case 0xC2B1BB: cpu.execute_instruction<0xD0>(0x00005C, 2); return true;
    // src/battle/apply_condiment.asm:41 TXA
    case 0xC2B1BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:42 INC
    case 0xC2B1BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1BF: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1C1: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1C3: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1C5: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/apply_condiment.asm:44 CLC
    case 0xC2B1C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:45 ADC @VIRTUAL0A
    case 0xC2B1C8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:46 STA @VIRTUAL0A
    case 0xC2B1CA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:47 LDA [@VIRTUAL0A]
    case 0xC2B1CC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:48 AND #$00FF
    case 0xC2B1CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC2B1CE.
    case 0xC2B1D0: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/apply_condiment.asm:49 CMP @VIRTUAL02
    case 0xC2B1D1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:50 BEQ @UNKNOWN2
    case 0xC2B1D3: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/apply_condiment.asm:51 TXA
    case 0xC2B1D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:52 INC
    case 0xC2B1D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:53 INC
    case 0xC2B1D7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:54 CLC
    case 0xC2B1D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:55 ADC @VIRTUAL06
    case 0xC2B1D9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:56 STA @VIRTUAL06
    case 0xC2B1DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:57 LDA [@VIRTUAL06]
    case 0xC2B1DD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:58 AND #$00FF
    case 0xC2B1DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B259.
    case 0xC2B1E0: cpu.execute_instruction<0xFF>(0x02C500, 4); return true;
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B1DF.
    case 0xC2B1E1: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/apply_condiment.asm:59 CMP @VIRTUAL02
    case 0xC2B1E2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/apply_condiment.asm:60 BNE @UNKNOWN5
    case 0xC2B1E4: cpu.execute_instruction<0xD0>(0x000063, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x007C9D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B1E6.
    case 0xC2B1E8: cpu.execute_instruction<0x7C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B1EB.
    case 0xC2B1ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1EE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1F0: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x00EA77, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1F4.
    case 0xC2B1F6: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1F9.
    case 0xC2B1FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1FC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:65 LDY @LOCAL02
    case 0xC2B1FE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/battle/apply_condiment.asm:66 TYA
    case 0xC2B200: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B201: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B203: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B204: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B206: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B207: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:68 INC
    case 0xC2B209: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:69 INC
    case 0xC2B20A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:70 INC
    case 0xC2B20B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:71 CLC
    case 0xC2B20C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:72 ADC @VIRTUAL06
    case 0xC2B20D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:73 STA @VIRTUAL06
    case 0xC2B20F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:74 STA @RETURNVAL
    case 0xC2B211: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/apply_condiment.asm:75 LDA @VIRTUAL08
    case 0xC2B213: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:76 STA @RETURNVAL+2
    case 0xC2B215: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/apply_condiment.asm:77 BRA @UNKNOWN7
    case 0xC2B217: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/battle/apply_condiment.asm:79 INY
    case 0xC2B219: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:80 STY @LOCAL02
    case 0xC2B21A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B21C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x00EA77, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B21C.
    case 0xC2B21E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B21F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B221.
    case 0xC2B223: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B224: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:83 TYA
    case 0xC2B226: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B227: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B229: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B22A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B22C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B22D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/apply_condiment.asm:85 TAX
    case 0xC2B22F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:86 PHA
    case 0xC2B230: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B231: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B233: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B235: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B237: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/apply_condiment.asm:88 PLA
    case 0xC2B239: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:89 CLC
    case 0xC2B23A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:90 ADC @VIRTUAL0A
    case 0xC2B23B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:91 STA @VIRTUAL0A
    case 0xC2B23D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:92 LDA [@VIRTUAL0A]
    case 0xC2B23F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/apply_condiment.asm:93 AND #$00FF
    case 0xC2B241: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/apply_condiment.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2B241.
    case 0xC2B243: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B244: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B246: cpu.execute_instruction<0x4C>(0x00B1B0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B249: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x007CB1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B249.
    case 0xC2B24B: cpu.execute_instruction<0x7C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B24C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B24E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B24E.
    case 0xC2B250: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B251: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B253: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B257: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B257.
    case 0xC2B259: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B25A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B259.
    case 0xC2B25B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B25C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B25B.
    case 0xC2B25D: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B25C.
    case 0xC2B25E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B25F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:99 LDA @LOCAL04
    case 0xC2B261: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/apply_condiment.asm:100 STA @VIRTUAL04
    case 0xC2B263: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B265: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2B265.
    case 0xC2B267: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B268: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/apply_condiment.asm:102 CLC
    case 0xC2B26C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:103 ADC #item::params
    case 0xC2B26D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/battle/apply_condiment.asm:103 ADC #item::params
    // Overlapping static entry reached from 0xC2B26D.
    case 0xC2B26F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/apply_condiment.asm:104 CLC
    case 0xC2B270: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/apply_condiment.asm:105 ADC @VIRTUAL06
    case 0xC2B271: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:106 STA @VIRTUAL06
    case 0xC2B273: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/apply_condiment.asm:107 STA @RETURNVAL
    case 0xC2B275: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/apply_condiment.asm:108 LDA @VIRTUAL08
    case 0xC2B277: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/apply_condiment.asm:109 STA @RETURNVAL+2
    case 0xC2B279: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B27B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B27C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/autohealing.asm (source_named).
bool execute_battle_autohealing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autohealing.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A0CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4A0D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4A0D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4A0D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4A0D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A0D4.
    case 0xC4A0D6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4A0D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4A0D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/autohealing.asm:14 STX @LOCAL04
    case 0xC4A0D9: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/autohealing.asm:14 STX @LOCAL04
    // Overlapping static entry reached from 0xC4A0D6.
    case 0xC4A0DA: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/battle/autohealing.asm:15 STA @LOCAL03
    case 0xC4A0DB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/autohealing.asm:15 STA @LOCAL03
    // Overlapping static entry reached from 0xC4A0DA.
    case 0xC4A0DC: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/battle/autohealing.asm:16 LDA #9999
    case 0xC4A0DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00270F, 3); return true;
    // src/battle/autohealing.asm:16 LDA #9999
    // Overlapping static entry reached from 0xC4A0DC.
    case 0xC4A0DE: cpu.execute_instruction<0x0F>(0x128527, 4); return true;
    // src/battle/autohealing.asm:16 LDA #9999
    // Overlapping static entry reached from 0xC4A0DD.
    case 0xC4A0DF: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // src/battle/autohealing.asm:17 STA @LOCAL02
    case 0xC4A0E0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autohealing.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xC4A0DF.
    case 0xC4A0E1: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/battle/autohealing.asm:18 LDA #$0000
    case 0xC4A0E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/autohealing.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC4A0E1.
    case 0xC4A0E3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/autohealing.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC4A0E2.
    case 0xC4A0E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/autohealing.asm:19 STA @VIRTUAL04
    case 0xC4A0E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/autohealing.asm:20 STA @VIRTUAL02
    case 0xC4A0E7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autohealing.asm:21 BRA @UNKNOWN3
    case 0xC4A0E9: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/battle/autohealing.asm:30 LDX @VIRTUAL02
    case 0xC4A0EB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/autohealing.asm:31 LDA GAME_STATE + game_state::party_members,X
    case 0xC4A0ED: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/autohealing.asm:33 AND #$00FF
    case 0xC4A0F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autohealing.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC4A0F0.
    case 0xC4A0F2: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/autohealing.asm:34 TAY
    case 0xC4A0F3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/autohealing.asm:35 STY @LOCAL01
    case 0xC4A0F4: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/autohealing.asm:36 CPY #PARTY_MEMBER::NESS
    case 0xC4A0F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/battle/autohealing.asm:36 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC4A0F6.
    case 0xC4A0F8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autohealing.asm:37 BCC @UNKNOWN2
    case 0xC4A0F9: cpu.execute_instruction<0x90>(0x00003D, 2); return true;
    // src/battle/autohealing.asm:38 CPY #PARTY_MEMBER::POO
    case 0xC4A0FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/battle/autohealing.asm:38 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC4A0FB.
    case 0xC4A0FD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autohealing.asm:39 BGT @UNKNOWN2
    case 0xC4A0FE: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autohealing.asm:39 BGT @UNKNOWN2
    case 0xC4A100: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/battle/autohealing.asm:40 TYA
    case 0xC4A102: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/autohealing.asm:41 DEC
    case 0xC4A103: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:42 LDY #.SIZEOF(char_struct)
    case 0xC4A104: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/autohealing.asm:42 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4A104.
    case 0xC4A106: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autohealing.asm:43 JSL MULT168
    case 0xC4A107: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/autohealing.asm:44 TAX
    case 0xC4A10B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:45 STX @LOCAL00
    case 0xC4A10C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/battle/autohealing.asm:46 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC4A10E: cpu.execute_instruction<0xBD>(0x009A2C, 3); return true;
    // src/battle/autohealing.asm:47 AND #$00FF
    case 0xC4A111: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autohealing.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC4A111.
    case 0xC4A113: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/autohealing.asm:48 BNE @UNKNOWN2
    case 0xC4A114: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/battle/autohealing.asm:49 TXA
    case 0xC4A116: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:50 CLC
    case 0xC4A117: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/autohealing.asm:51 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC4A118: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/battle/autohealing.asm:51 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC4A118.
    case 0xC4A11A: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/autohealing.asm:52 CLC
    case 0xC4A11B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/autohealing.asm:53 ADC @LOCAL03
    case 0xC4A11C: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/battle/autohealing.asm:53 ADC @LOCAL03
    // Overlapping static entry reached from 0xC4A11A.
    case 0xC4A11D: cpu.execute_instruction<0x14>(0x0000AA, 2); return true;
    // src/battle/autohealing.asm:54 TAX
    case 0xC4A11E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:55 LDA __BSS_START__,X
    case 0xC4A11F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/autohealing.asm:56 AND #$00FF
    case 0xC4A122: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autohealing.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC4A122.
    case 0xC4A124: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/autohealing.asm:57 CMP @LOCAL04
    case 0xC4A125: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/battle/autohealing.asm:58 BNE @UNKNOWN2
    case 0xC4A127: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/battle/autohealing.asm:59 LDX @LOCAL00
    case 0xC4A129: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/battle/autohealing.asm:60 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC4A12B: cpu.execute_instruction<0xBD>(0x009A15, 3); return true;
    // src/battle/autohealing.asm:61 CMP @LOCAL02
    case 0xC4A12E: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/battle/autohealing.asm:62 BCS @UNKNOWN2
    case 0xC4A130: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/autohealing.asm:63 STA @LOCAL02
    case 0xC4A132: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autohealing.asm:64 LDY @LOCAL01
    case 0xC4A134: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/autohealing.asm:65 STY @VIRTUAL04
    case 0xC4A136: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/autohealing.asm:67 INC @VIRTUAL02
    case 0xC4A138: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/autohealing.asm:69 LDA @VIRTUAL02
    case 0xC4A13A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autohealing.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC4A13C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/autohealing.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC4A13C.
    case 0xC4A13E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autohealing.asm:71 BCC @UNKNOWN0
    case 0xC4A13F: cpu.execute_instruction<0x90>(0x0000AA, 2); return true;
    // src/battle/autohealing.asm:72 LDA @VIRTUAL04
    case 0xC4A141: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autohealing.asm:73 BEQ @UNKNOWN4
    case 0xC4A143: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/autohealing.asm:74 LDA @VIRTUAL04
    case 0xC4A145: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autohealing.asm:75 DEC
    case 0xC4A147: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autohealing.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC4A148: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/autohealing.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4A148.
    case 0xC4A14A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autohealing.asm:77 JSL MULT168
    case 0xC4A14B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/autohealing.asm:78 TAX
    case 0xC4A14F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autohealing.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A150: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/autohealing.asm:80 LDA #$01
    case 0xC4A152: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/autohealing.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC4A154: cpu.execute_instruction<0x9D>(0x009A2C, 3); return true;
    // src/battle/autohealing.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC4A152.
    case 0xC4A155: cpu.execute_instruction<0x2C>(0x00C29A, 3); return true;
    // src/battle/autohealing.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC4A157: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/autohealing.asm:83 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4A155.
    case 0xC4A158: cpu.execute_instruction<0x20>(0x0004A5, 3); return true;
    // src/battle/autohealing.asm:84 LDA @VIRTUAL04
    case 0xC4A159: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autohealing.asm:85 END_C_FUNCTION
    case 0xC4A15B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autohealing.asm:85 END_C_FUNCTION
    case 0xC4A15C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/autolifeup.asm (source_named).
bool execute_battle_autolifeup_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autolifeup.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A15D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A15F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A160: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A161: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A161.
    case 0xC4A163: cpu.execute_instruction<0xFF>(0x0FA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A164: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:11 LDA #9999
    case 0xC4A165: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00270F, 3); return true;
    // src/battle/autolifeup.asm:11 LDA #9999
    // Overlapping static entry reached from 0xC4A165.
    case 0xC4A167: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    case 0xC4A168: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    // Overlapping static entry reached from 0xC4A167.
    case 0xC4A169: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/battle/autolifeup.asm:13 LDA #$0000
    case 0xC4A16A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC4A169.
    case 0xC4A16B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC4A16A.
    case 0xC4A16C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/autolifeup.asm:14 STA @VIRTUAL04
    case 0xC4A16D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:15 STA @VIRTUAL02
    case 0xC4A16F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:16 STA @LOCAL02
    case 0xC4A171: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:17 BRA @UNKNOWN3
    case 0xC4A173: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/battle/autolifeup.asm:26 LDX @VIRTUAL02
    case 0xC4A175: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:27 LDA GAME_STATE + game_state::party_members,X
    case 0xC4A177: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/autolifeup.asm:29 AND #$00FF
    case 0xC4A17A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autolifeup.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC4A17A.
    case 0xC4A17C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/autolifeup.asm:30 TAY
    case 0xC4A17D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:31 STY @LOCAL01
    case 0xC4A17E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    case 0xC4A180: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC4A180.
    case 0xC4A182: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autolifeup.asm:33 BCC @UNKNOWN2
    case 0xC4A183: cpu.execute_instruction<0x90>(0x000040, 2); return true;
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    case 0xC4A185: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC4A185.
    case 0xC4A187: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC4A188: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC4A18A: cpu.execute_instruction<0xB0>(0x000039, 2); return true;
    // src/battle/autolifeup.asm:36 TYA
    case 0xC4A18C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:37 DEC
    case 0xC4A18D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC4A18E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4A18E.
    case 0xC4A190: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autolifeup.asm:39 JSL MULT168
    case 0xC4A191: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/autolifeup.asm:40 TAX
    case 0xC4A195: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:41 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC4A196: cpu.execute_instruction<0xBD>(0x009A2C, 3); return true;
    // src/battle/autolifeup.asm:42 AND #$00FF
    case 0xC4A199: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autolifeup.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC4A199.
    case 0xC4A19B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/autolifeup.asm:43 BNE @UNKNOWN2
    case 0xC4A19C: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/battle/autolifeup.asm:44 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC4A19E: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/battle/autolifeup.asm:45 AND #$00FF
    case 0xC4A1A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/autolifeup.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4A1A1.
    case 0xC4A1A3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    case 0xC4A1A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC4A1A4.
    case 0xC4A1A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/autolifeup.asm:47 BEQ @UNKNOWN2
    case 0xC4A1A7: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/battle/autolifeup.asm:48 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC4A1A9: cpu.execute_instruction<0xBD>(0x009A15, 3); return true;
    // src/battle/autolifeup.asm:49 STA @LOCAL00
    case 0xC4A1AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/autolifeup.asm:50 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC4A1AE: cpu.execute_instruction<0xBD>(0x0099D8, 3); return true;
    // src/battle/autolifeup.asm:51 LSR
    case 0xC4A1B1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:52 LSR
    case 0xC4A1B2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:53 STA @VIRTUAL02
    case 0xC4A1B3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:54 LDA @LOCAL00
    case 0xC4A1B5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/autolifeup.asm:55 CMP @VIRTUAL02
    case 0xC4A1B7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:56 BCS @UNKNOWN2
    case 0xC4A1B9: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/battle/autolifeup.asm:57 CMP @LOCAL03
    case 0xC4A1BB: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/battle/autolifeup.asm:58 BCS @UNKNOWN2
    case 0xC4A1BD: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/battle/autolifeup.asm:59 STA @LOCAL03
    case 0xC4A1BF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/autolifeup.asm:60 LDY @LOCAL01
    case 0xC4A1C1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/autolifeup.asm:61 STY @VIRTUAL04
    case 0xC4A1C3: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:63 LDA @LOCAL02
    case 0xC4A1C5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:64 STA @VIRTUAL02
    case 0xC4A1C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:65 INC @VIRTUAL02
    case 0xC4A1C9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:66 LDA @VIRTUAL02
    case 0xC4A1CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:67 STA @LOCAL02
    case 0xC4A1CD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:69 LDA @VIRTUAL02
    case 0xC4A1CF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC4A1D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC4A1D1.
    case 0xC4A1D3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/autolifeup.asm:71 BCC @UNKNOWN0
    case 0xC4A1D4: cpu.execute_instruction<0x90>(0x00009F, 2); return true;
    // src/battle/autolifeup.asm:72 LDA @VIRTUAL04
    case 0xC4A1D6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:73 BEQ @UNKNOWN4
    case 0xC4A1D8: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/autolifeup.asm:74 LDA @VIRTUAL04
    case 0xC4A1DA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/autolifeup.asm:75 DEC
    case 0xC4A1DC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC4A1DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4A1DD.
    case 0xC4A1DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/autolifeup.asm:77 JSL MULT168
    case 0xC4A1E0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/autolifeup.asm:78 TAX
    case 0xC4A1E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/autolifeup.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A1E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/autolifeup.asm:80 LDA #$01
    case 0xC4A1E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC4A1E9: cpu.execute_instruction<0x9D>(0x009A2C, 3); return true;
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC4A1E7.
    case 0xC4A1EA: cpu.execute_instruction<0x2C>(0x00C29A, 3); return true;
    // src/battle/autolifeup.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC4A1EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/autolifeup.asm:83 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4A1EA.
    case 0xC4A1ED: cpu.execute_instruction<0x20>(0x0004A5, 3); return true;
    // src/battle/autolifeup.asm:84 LDA @VIRTUAL04
    case 0xC4A1EE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4A1F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4A1F1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/battle_psi_menu.asm (source_named).
bool execute_battle_battle_psi_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/battle_psi_menu.asm:4 BEGIN_C_FUNCTION
    case 0xC1CBCD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBCF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CBD2.
    case 0xC1CBD4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/battle_psi_menu.asm:21 END_STACK_VARS
    case 0xC1CBD6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    case 0xC1CBD7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:22 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1CBD4.
    case 0xC1CBD8: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    case 0xC1CBD9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:23 STA @LOCAL06
    // Overlapping static entry reached from 0xC1CBD8.
    case 0xC1CBDA: cpu.execute_instruction<0x20>(0x001E64, 3); return true;
    // src/battle/battle_psi_menu.asm:25 STZ @LOCALEB
    case 0xC1CBDB: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1CBDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    // Overlapping static entry reached from 0xC1CBDD.
    case 0xC1CBDF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:28 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN10
    case 0xC1CBE0: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    case 0xC1CBE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:29 LDA #$0000
    // Overlapping static entry reached from 0xC1CBE3.
    case 0xC1CBE5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:30 STA @LOCAL05
    case 0xC1CBE6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:31 BRA @UNKNOWN2
    case 0xC1CBE8: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/battle/battle_psi_menu.asm:33 TAX
    case 0xC1CBEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:34 INX
    case 0xC1CBEB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:35 STX @LOCAL04
    case 0xC1CBEC: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x00F090, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBEE.
    case 0xC1CBF0: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBF0.
    case 0xC1CBF2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBF2.
    case 0xC1CBF4: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CBF3.
    case 0xC1CBF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:36 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1CBF6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:37 LDA @LOCAL05
    case 0xC1CBF8: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1CBFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1CBFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:38 OPTIMIZED_MULT @VIRTUAL04, PSI_CATEGORY_NAME_SIZE
    case 0xC1CBFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:39 CLC
    case 0xC1CBFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:40 ADC @VIRTUAL06
    case 0xC1CBFE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:41 STA @VIRTUAL06
    case 0xC1CC00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:42 STA @LOCAL00
    case 0xC1CC02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/battle_psi_menu.asm:43 LDA @VIRTUAL06+2
    case 0xC1CC04: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:44 STA @LOCAL00+2
    case 0xC1CC06: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1CC08.
    case 0xC1CC0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC0B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1CC0D.
    case 0xC1CC0F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1CC10: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/battle_psi_menu.asm:46 TXA
    case 0xC1CC12: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:47 JSR UNKNOWN_C115F4
    case 0xC1CC13: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/battle/battle_psi_menu.asm:48 LDX @LOCAL04
    case 0xC1CC16: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/battle_psi_menu.asm:49 TXA
    case 0xC1CC18: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:50 STA @LOCAL05
    case 0xC1CC19: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    case 0xC1CC1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/battle_psi_menu.asm:52 CMP #$0003
    // Overlapping static entry reached from 0xC1CC1B.
    case 0xC1CC1D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/battle_psi_menu.asm:53 BCC @UNKNOWN1
    case 0xC1CC1E: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    case 0xC1CC20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:54 LDY #$0000
    // Overlapping static entry reached from 0xC1CC20.
    case 0xC1CC22: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/battle/battle_psi_menu.asm:55 TYX
    case 0xC1CC23: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    case 0xC1CC24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:56 LDA #$0001
    // Overlapping static entry reached from 0xC1CC24.
    case 0xC1CC26: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:57 JSR UNKNOWN_C1180D
    case 0xC1CC27: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    case 0xC1CC2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:59 LDA #$0010
    // Overlapping static entry reached from 0xC1CC2A.
    case 0xC1CC2C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:60 JSR SET_WINDOW_FOCUS
    case 0xC1CC2D: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/battle/battle_psi_menu.asm:62 LDA @LOCALEB
    case 0xC1CC30: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/battle_psi_menu.asm:63 BNE @UNKNOWN4
    case 0xC1CC32: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/battle/battle_psi_menu.asm:65 JSR PRINT_MENU_ITEMS
    case 0xC1CC34: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/battle/battle_psi_menu.asm:68 INC @LOCALEB
    case 0xC1CC37: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00CAF5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1CC39.
    case 0xC1CC3B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1CC3E.
    case 0xC1CC40: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:70 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1CC41: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:71 JSR UNKNOWN_C11F5A
    case 0xC1CC43: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    case 0xC1CC46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:72 LDA #$0001
    // Overlapping static entry reached from 0xC1CC46.
    case 0xC1CC48: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:73 JSR SELECTION_MENU
    case 0xC1CC49: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/battle/battle_psi_menu.asm:74 STA @VIRTUAL02
    case 0xC1CC4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:75 JSR UNKNOWN_C11F8A
    case 0xC1CC4E: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/battle/battle_psi_menu.asm:76 LDA @VIRTUAL02
    case 0xC1CC51: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CC53: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:77 BEQL @UNKNOWN18
    case 0xC1CC55: cpu.execute_instruction<0x4C>(0x00CE73, 3); return true;
    // src/battle/battle_psi_menu.asm:78 LDA @LOCAL06
    case 0xC1CC58: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:79 STA @VIRTUAL04
    case 0xC1CC5A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:80 LDX @VIRTUAL04
    case 0xC1CC5C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:81 LDA a:battle_menu_selection::user,X
    case 0xC1CC5E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    case 0xC1CC61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1CC61.
    case 0xC1CC63: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/battle_psi_menu.asm:83 TAX
    case 0xC1CC64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:84 LDA @VIRTUAL02
    case 0xC1CC65: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:85 JSR UNKNOWN_C1CB7F
    case 0xC1CC67: cpu.execute_instruction<0x20>(0x00CB7F, 3); return true;
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    case 0xC1CC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:86 CMP #$0000
    // Overlapping static entry reached from 0xC1CC6A.
    case 0xC1CC6C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/battle_psi_menu.asm:87 BEQ @UNKNOWN3
    case 0xC1CC6D: cpu.execute_instruction<0xF0>(0x0000BB, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CC6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1CC6F.
    case 0xC1CC71: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:89 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CC72: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/battle/battle_psi_menu.asm:90 LDA @VIRTUAL02
    case 0xC1CC75: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:91 JSL UNKNOWN_C1CAF5
    case 0xC1CC77: cpu.execute_instruction<0x22>(0xC1CAF5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x00C8BC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CC7B.
    case 0xC1CC7D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC7E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1CC80.
    case 0xC1CC82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:92 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1CC83: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:93 JSR UNKNOWN_C11F5A
    case 0xC1CC85: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    case 0xC1CC88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:94 LDA #$0001
    // Overlapping static entry reached from 0xC1CC88.
    case 0xC1CC8A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:95 JSR SELECTION_MENU
    case 0xC1CC8B: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/battle/battle_psi_menu.asm:96 TAY
    case 0xC1CC8E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:97 STY @LOCAL04_2
    case 0xC1CC8F: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:98 JSR UNKNOWN_C11F8A
    case 0xC1CC91: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/battle/battle_psi_menu.asm:99 LDY @LOCAL04_2
    case 0xC1CC94: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CC96: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:100 BEQL @UNKNOWN14
    case 0xC1CC98: cpu.execute_instruction<0x4C>(0x00CE03, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CC9B.
    case 0xC1CC9D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CC9E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CCA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CCA0.
    case 0xC1CCA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:106 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1CCA3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:110 TYA
    case 0xC1CCA5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCA6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCA9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:111 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CCAF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:112 TAX
    case 0xC1CCB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:113 INX
    case 0xC1CCB2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:114 INX
    case 0xC1CCB3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:115 INX
    case 0xC1CCB4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:116 INX
    case 0xC1CCB5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:117 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CCB6: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:118 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CCC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:119 STA @LOCAL03
    case 0xC1CCC1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/battle_psi_menu.asm:120 LDA @LOCAL06
    case 0xC1CCC3: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:121 STA @VIRTUAL04
    case 0xC1CCC5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:122 LDX @VIRTUAL04
    case 0xC1CCC7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:123 LDA a:battle_menu_selection::user,X
    case 0xC1CCC9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    case 0xC1CCCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC1CCCC.
    case 0xC1CCCE: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/battle/battle_psi_menu.asm:125 DEC
    case 0xC1CCCF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    case 0xC1CCD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/battle_psi_menu.asm:126 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CCD0.
    case 0xC1CCD2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:127 JSL MULT168
    case 0xC1CCD3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/battle_psi_menu.asm:128 TAX
    case 0xC1CCD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:129 LDA @LOCAL03
    case 0xC1CCD8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/battle_psi_menu.asm:130 INC
    case 0xC1CCDA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:131 INC
    case 0xC1CCDB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:132 INC
    case 0xC1CCDC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCDD: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCDF: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCE1: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/battle_psi_menu.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1CCE3: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/battle/battle_psi_menu.asm:134 CLC
    case 0xC1CCE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:135 ADC @VIRTUAL0A
    case 0xC1CCE6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/battle_psi_menu.asm:136 STA @VIRTUAL0A
    case 0xC1CCE8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/battle_psi_menu.asm:137 LDA [@VIRTUAL0A]
    case 0xC1CCEA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    case 0xC1CCEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC1CCEC.
    case 0xC1CCEE: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/battle/battle_psi_menu.asm:139 CMP PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC1CCEF: cpu.execute_instruction<0xDD>(0x009A1B, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CCF2: cpu.execute_instruction<0x90>(0x00002A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/battle_psi_menu.asm:140 BLTEQ @UNKNOWN8
    case 0xC1CCF4: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1CCF6.
    case 0xC1CCF8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:141 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1CCF9: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    case 0xC1CCFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/battle_psi_menu.asm:142 LDA #$0002
    // Overlapping static entry reached from 0xC1CCFC.
    case 0xC1CCFE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:143 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1CCFF: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x00FAAA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CD02.
    case 0xC1CD04: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD05: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1CD07.
    case 0xC1CD09: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD0A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/battle_psi_menu.asm:144 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1CD0C: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/battle/battle_psi_menu.asm:145 JSR CLEAR_BLINKING_PROMPT
    case 0xC1CD10: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // src/battle/battle_psi_menu.asm:146 JSR CLOSE_FOCUS_WINDOW
    case 0xC1CD13: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    case 0xC1CD16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:147 LDX #$0000
    // Overlapping static entry reached from 0xC1CD16.
    case 0xC1CD18: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/battle_psi_menu.asm:148 STX @LOCAL02
    case 0xC1CD19: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:149 JMP @UNKNOWN15
    case 0xC1CD1B: cpu.execute_instruction<0x4C>(0x00CE08, 3); return true;
    // src/battle/battle_psi_menu.asm:151 LDA @LOCAL03
    case 0xC1CD1E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/battle_psi_menu.asm:152 INC
    case 0xC1CD20: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:153 CLC
    case 0xC1CD21: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:154 ADC @VIRTUAL06
    case 0xC1CD22: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:155 STA @VIRTUAL06
    case 0xC1CD24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:156 LDA [@VIRTUAL06]
    case 0xC1CD26: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    case 0xC1CD28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:157 AND #$00FF
    // Overlapping static entry reached from 0xC1CD28.
    case 0xC1CD2A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/battle_psi_menu.asm:158 TAX
    case 0xC1CD2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    case 0xC1CD2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:159 CPX #$0001
    // Overlapping static entry reached from 0xC1CD2C.
    case 0xC1CD2E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/battle_psi_menu.asm:160 BEQ @UNKNOWN9
    case 0xC1CD2F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    case 0xC1CD31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/battle/battle_psi_menu.asm:161 CPX #$0003
    // Overlapping static entry reached from 0xC1CD31.
    case 0xC1CD33: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/battle_psi_menu.asm:162 BNE @UNKNOWN10
    case 0xC1CD34: cpu.execute_instruction<0xD0>(0x000059, 2); return true;
    // src/battle/battle_psi_menu.asm:164 LDY @LOCAL04_2
    case 0xC1CD36: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:165 TYA
    case 0xC1CD38: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD39: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD3F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:166 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD42: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:167 TAX
    case 0xC1CD44: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:168 INX
    case 0xC1CD45: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:169 INX
    case 0xC1CD46: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:170 INX
    case 0xC1CD47: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:171 INX
    case 0xC1CD48: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:172 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CD49: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD4D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD50: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:173 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CD53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:174 TAX
    case 0xC1CD54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:175 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CD55: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    case 0xC1CD59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:176 AND #$00FF
    // Overlapping static entry reached from 0xC1CD59.
    case 0xC1CD5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/battle_psi_menu.asm:177 BNE @UNKNOWN10
    case 0xC1CD5C: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    case 0xC1CD5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:178 LDA #$0010
    // Overlapping static entry reached from 0xC1CD5E.
    case 0xC1CD60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:179 JSR CLOSE_WINDOW
    case 0xC1CD61: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    case 0xC1CD65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:180 LDA #$0004
    // Overlapping static entry reached from 0xC1CD65.
    case 0xC1CD67: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:181 JSR CLOSE_WINDOW
    case 0xC1CD68: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    case 0xC1CD6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:182 LDA #$0001
    // Overlapping static entry reached from 0xC1CD6C.
    case 0xC1CD6E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:183 JSR CLOSE_WINDOW
    case 0xC1CD6F: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CD73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1CD73.
    case 0xC1CD75: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/battle/battle_psi_menu.asm:184 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CD76: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/battle/battle_psi_menu.asm:185 JSR SET_INSTANT_PRINTING
    case 0xC1CD79: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    case 0xC1CD7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/battle_psi_menu.asm:186 LDA #$0006
    // Overlapping static entry reached from 0xC1CD7D.
    case 0xC1CD7F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:187 JSR UNKNOWN_C10FEA
    case 0xC1CD80: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/battle/battle_psi_menu.asm:188 LDY @LOCAL04_2
    case 0xC1CD83: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:189 TYA
    case 0xC1CD85: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:190 JSR UNKNOWN_C1CA06
    case 0xC1CD86: cpu.execute_instruction<0x20>(0x00CA06, 3); return true;
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    case 0xC1CD89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:191 LDA #$0000
    // Overlapping static entry reached from 0xC1CD89.
    case 0xC1CD8B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:192 JSR UNKNOWN_C10FEA
    case 0xC1CD8C: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CD8F.
    case 0xC1CD91: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CD94.
    case 0xC1CD96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/battle_psi_menu.asm:194 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CD97: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/battle_psi_menu.asm:195 LDY @LOCAL04_2
    case 0xC1CD99: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/battle/battle_psi_menu.asm:196 TYA
    case 0xC1CD9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD9C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CD9F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:197 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CDA5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:198 INC
    case 0xC1CDA7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:199 INC
    case 0xC1CDA8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:200 INC
    case 0xC1CDA9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:201 INC
    case 0xC1CDAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:202 CLC
    case 0xC1CDAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:203 ADC @VIRTUAL06
    case 0xC1CDAC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:203 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDD2.
    case 0xC1CDAD: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:204 STA @VIRTUAL06
    case 0xC1CDAE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:204 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC1CDAD.
    case 0xC1CDAF: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/battle/battle_psi_menu.asm:205 LDA @LOCAL06
    case 0xC1CDB0: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:205 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1CDAF.
    case 0xC1CDB1: cpu.execute_instruction<0x20>(0x000485, 3); return true;
    // src/battle/battle_psi_menu.asm:206 STA @VIRTUAL04
    case 0xC1CDB2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:207 LDX @VIRTUAL04
    case 0xC1CDB4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:208 LDA a:battle_menu_selection::user,X
    case 0xC1CDB6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    case 0xC1CDB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC1CDB9.
    case 0xC1CDBB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/battle_psi_menu.asm:210 TAX
    case 0xC1CDBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:211 LDA [@VIRTUAL06]
    case 0xC1CDBD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/battle_psi_menu.asm:212 JSR DETERMINE_TARGETTING
    case 0xC1CDBF: cpu.execute_instruction<0x20>(0x00ADB4, 3); return true;
    // src/battle/battle_psi_menu.asm:213 TAX
    case 0xC1CDC2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:214 STX @LOCAL02
    case 0xC1CDC3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:215 LDA [@VIRTUAL06]
    case 0xC1CDC5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDC7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDCA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDCC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:216 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1CDCD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:217 TAX
    case 0xC1CDCE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:218 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1CDCF: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    case 0xC1CDD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC1CDD3.
    case 0xC1CDD5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/battle_psi_menu.asm:220 BNE @UNKNOWN11
    case 0xC1CDD6: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    case 0xC1CDD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/battle/battle_psi_menu.asm:221 LDA #$0026
    // Overlapping static entry reached from 0xC1CDD8.
    case 0xC1CDDA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:222 JSR CLOSE_WINDOW
    case 0xC1CDDB: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:223 BRA @UNKNOWN12
    case 0xC1CDDF: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    case 0xC1CDE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:225 LDA #$0010
    // Overlapping static entry reached from 0xC1CDE1.
    case 0xC1CDE3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:226 JSR CLOSE_WINDOW
    case 0xC1CDE4: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    case 0xC1CDE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:227 LDA #$0004
    // Overlapping static entry reached from 0xC1CDE8.
    case 0xC1CDEA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:228 JSR CLOSE_WINDOW
    case 0xC1CDEB: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    case 0xC1CDEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:229 LDA #$0001
    // Overlapping static entry reached from 0xC1CDEF.
    case 0xC1CDF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:230 JSR CLOSE_WINDOW
    case 0xC1CDF2: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:232 LDX @LOCAL02
    case 0xC1CDF6: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:233 TXA
    case 0xC1CDF8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    case 0xC1CDF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/battle_psi_menu.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC1CDF9.
    case 0xC1CDFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CDFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:235 BEQL @UNKNOWN0
    case 0xC1CDFE: cpu.execute_instruction<0x4C>(0x00CBDD, 3); return true;
    // src/battle/battle_psi_menu.asm:236 BRA @UNKNOWN15
    case 0xC1CE01: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    case 0xC1CE03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:238 LDX #$0001
    // Overlapping static entry reached from 0xC1CE03.
    case 0xC1CE05: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/battle_psi_menu.asm:239 STX @LOCAL02
    case 0xC1CE06: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    case 0xC1CE08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/battle_psi_menu.asm:241 CPX #$0000
    // Overlapping static entry reached from 0xC1CE08.
    case 0xC1CE0A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CE0B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:242 BEQL @UNKNOWN6
    case 0xC1CE0D: cpu.execute_instruction<0x4C>(0x00CC6F, 3); return true;
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    case 0xC1CE10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:243 LDA #$0004
    // Overlapping static entry reached from 0xC1CE10.
    case 0xC1CE12: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:244 JSR CLOSE_WINDOW
    case 0xC1CE13: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:245 LDY @LOCAL04_2
    case 0xC1CE17: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CE19: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/battle_psi_menu.asm:246 BEQL @UNKNOWN3
    case 0xC1CE1B: cpu.execute_instruction<0x4C>(0x00CC2A, 3); return true;
    // src/battle/battle_psi_menu.asm:247 TYA
    case 0xC1CE1E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE1F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:249 LDX @LOCAL06
    case 0xC1CE21: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:250 STX @VIRTUAL04
    case 0xC1CE23: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:251 STA a:battle_menu_selection::param1,X
    case 0xC1CE25: cpu.execute_instruction<0x9D>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:253 TYA
    case 0xC1CE2A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE2B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE2E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE31: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/battle_psi_menu.asm:254 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1CE34: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:255 TAX
    case 0xC1CE36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:256 INX
    case 0xC1CE37: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:257 INX
    case 0xC1CE38: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:258 INX
    case 0xC1CE39: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:259 INX
    case 0xC1CE3A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:260 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1CE3B: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/battle/battle_psi_menu.asm:261 LDX @LOCAL06
    case 0xC1CE3F: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:262 STX @VIRTUAL04
    case 0xC1CE41: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:263 STA a:battle_menu_selection::selected_action,X
    case 0xC1CE43: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/battle/battle_psi_menu.asm:264 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE46: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:265 LDA #$08
    case 0xC1CE48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x004808, 3); return true;
    // src/battle/battle_psi_menu.asm:266 PHA
    case 0xC1CE4A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:267 LDX @LOCAL02
    case 0xC1CE4B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:268 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:269 TXA
    case 0xC1CE4F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:270 SEP #PROC_FLAGS::INDEX8
    case 0xC1CE50: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:271 PLY
    case 0xC1CE52: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:272 JSL ASR8_UNKNOWN1
    case 0xC1CE53: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/battle/battle_psi_menu.asm:273 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE57: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:274 REP #PROC_FLAGS::INDEX8
    case 0xC1CE59: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/battle_psi_menu.asm:275 LDX @VIRTUAL04
    case 0xC1CE5B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:276 STA a:battle_menu_selection::targetting,X
    case 0xC1CE5D: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/battle/battle_psi_menu.asm:277 LDX @LOCAL02
    case 0xC1CE60: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/battle_psi_menu.asm:278 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE62: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:279 TXA
    case 0xC1CE64: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/battle_psi_menu.asm:280 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE65: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:281 LDX @VIRTUAL04
    case 0xC1CE67: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/battle_psi_menu.asm:282 STA a:battle_menu_selection::selected_target,X
    case 0xC1CE69: cpu.execute_instruction<0x9D>(0x000005, 3); return true;
    // src/battle/battle_psi_menu.asm:283 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE6C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    case 0xC1CE6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:284 LDA #$0001
    // Overlapping static entry reached from 0xC1CE6E.
    case 0xC1CE70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/battle_psi_menu.asm:285 STA @VIRTUAL02
    case 0xC1CE71: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    case 0xC1CE73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/battle_psi_menu.asm:287 LDA #$0001
    // Overlapping static entry reached from 0xC1CE73.
    case 0xC1CE75: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:288 JSR CLOSE_WINDOW
    case 0xC1CE76: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    case 0xC1CE7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/battle_psi_menu.asm:289 LDA #$0010
    // Overlapping static entry reached from 0xC1CE7A.
    case 0xC1CE7C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/battle_psi_menu.asm:290 JSR CLOSE_WINDOW
    case 0xC1CE7D: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/battle/battle_psi_menu.asm:291 LDA @VIRTUAL02
    case 0xC1CE81: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CE83: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/battle_psi_menu.asm:292 END_C_FUNCTION
    case 0xC1CE84: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/battle_psi_menu_redirect.asm (source_named).
bool execute_battle_battle_psi_menu_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/battle_psi_menu_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE3D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/battle_psi_menu_redirect.asm:7 JSR BATTLE_PSI_MENU
    case 0xC1DE3F: cpu.execute_instruction<0x20>(0x00CBCD, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/battle_psi_menu_redirect.asm:8 END_C_FUNCTION
    case 0xC1DE42: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/boss_battle_check.asm (source_named).
bool execute_battle_boss_battle_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/boss_battle_check.asm:3 BEGIN_C_FUNCTION
    case 0xC2AB14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB17: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AB18.
    case 0xC2AB1A: cpu.execute_instruction<0xFF>(0xACA25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB1B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2AB1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2AB1C.
    case 0xC2AB1E: cpu.execute_instruction<0x9F>(0xA01086, 4); return true;
    // src/battle/boss_battle_check.asm:10 STX @LOCAL01
    case 0xC2AB1F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    case 0xC2AB21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AB1E.
    case 0xC2AB22: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AB21.
    case 0xC2AB23: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/boss_battle_check.asm:12 STY @LOCAL00
    case 0xC2AB24: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/boss_battle_check.asm:13 BRA @BEGIN_LOOP
    case 0xC2AB26: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/battle/boss_battle_check.asm:15 LDA a:battler::consciousness,X
    case 0xC2AB28: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    case 0xC2AB2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2AB2B.
    case 0xC2AB2D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/boss_battle_check.asm:17 BEQ @NOT_BOSS
    case 0xC2AB2E: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/battle/boss_battle_check.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2AB30: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    case 0xC2AB33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2AB33.
    case 0xC2AB35: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    case 0xC2AB36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    // Overlapping static entry reached from 0xC2AB36.
    case 0xC2AB38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/boss_battle_check.asm:21 BNE @NOT_BOSS
    case 0xC2AB39: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/battle/boss_battle_check.asm:22 LDA a:battler::id,X
    case 0xC2AB3B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    case 0xC2AB3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2AB3E.
    case 0xC2AB40: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/boss_battle_check.asm:24 JSL MULT168
    case 0xC2AB41: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/boss_battle_check.asm:25 CLC
    case 0xC2AB45: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    case 0xC2AB46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x000056, 3); return true;
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC2AB46.
    case 0xC2AB48: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/boss_battle_check.asm:27 TAX
    case 0xC2AB49: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:28 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2AB4A: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    case 0xC2AB4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2AB4E.
    case 0xC2AB50: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/boss_battle_check.asm:30 BEQ @NOT_BOSS
    case 0xC2AB51: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    case 0xC2AB53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    // Overlapping static entry reached from 0xC2AB53.
    case 0xC2AB55: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/boss_battle_check.asm:32 BRA @RETURN
    case 0xC2AB56: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/boss_battle_check.asm:34 LDY @LOCAL00
    case 0xC2AB58: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/battle/boss_battle_check.asm:35 INY
    case 0xC2AB5A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:36 STY @LOCAL00
    case 0xC2AB5B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/battle/boss_battle_check.asm:37 LDX @LOCAL01
    case 0xC2AB5D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/battle/boss_battle_check.asm:38 TXA
    case 0xC2AB5F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:39 CLC
    case 0xC2AB60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    case 0xC2AB61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2AB61.
    case 0xC2AB63: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/boss_battle_check.asm:41 TAX
    case 0xC2AB64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/boss_battle_check.asm:42 STX @LOCAL01
    case 0xC2AB65: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    case 0xC2AB67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    // Overlapping static entry reached from 0xC2AB67.
    case 0xC2AB69: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/boss_battle_check.asm:45 BCC @NEXT_ENEMY
    case 0xC2AB6A: cpu.execute_instruction<0x90>(0x0000BC, 2); return true;
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    case 0xC2AB6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    // Overlapping static entry reached from 0xC2AB6C.
    case 0xC2AB6E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB6F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB70: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_damage.asm (source_named).
bool execute_battle_calc_damage_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_damage.asm:4 BEGIN_C_FUNCTION
    case 0xC27EAF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27EB1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27EB2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27EB3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27EB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC27EB4.
    case 0xC27EB6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27EB7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27EB8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:18 STX @VIRTUAL04
    case 0xC27EB9: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/calc_damage.asm:18 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC27EB6.
    case 0xC27EBA: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/battle/calc_damage.asm:19 TAY
    case 0xC27EBB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:20 STY @LOCAL05
    case 0xC27EBC: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:21 STZ @LOCAL04
    case 0xC27EBE: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/battle/calc_damage.asm:22 LDA @VIRTUAL04
    case 0xC27EC0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/calc_damage.asm:23 BNE @UNKNOWN0
    case 0xC27EC2: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27EC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00766E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27EC4.
    case 0xC27EC6: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27EC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27EC6.
    case 0xC27EC8: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27EC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27EC9.
    case 0xC27ECB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27ECC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27ECE: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/calc_damage.asm:25 LDA #0
    case 0xC27ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:25 LDA #0
    // Overlapping static entry reached from 0xC27ED2.
    case 0xC27ED4: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/calc_damage.asm:26 JMP @RETURN
    case 0xC27ED5: cpu.execute_instruction<0x4C>(0x008123, 3); return true;
    // src/battle/calc_damage.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27ED8: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:29 AND #$00FF
    case 0xC27EDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC27EDB.
    case 0xC27EDD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage.asm:30 CMP #1
    case 0xC27EDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:30 CMP #1
    // Overlapping static entry reached from 0xC27EDE.
    case 0xC27EE0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:31 BNE @UNKNOWN2
    case 0xC27EE1: cpu.execute_instruction<0xD0>(0x000065, 2); return true;
    // src/battle/calc_damage.asm:32 LDA __BSS_START__ + battler::id,Y
    case 0xC27EE3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:33 CMP #ENEMY::GIYGAS_2
    case 0xC27EE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DA, 2); else cpu.execute_instruction<0xC9>(0x0000DA, 3); return true;
    // src/battle/calc_damage.asm:33 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC27EE6.
    case 0xC27EE8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:34 BNE @UNKNOWN2
    case 0xC27EE9: cpu.execute_instruction<0xD0>(0x00005D, 2); return true;
    // src/battle/calc_damage.asm:35 LDA #$0001
    case 0xC27EEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:35 LDA #$0001
    // Overlapping static entry reached from 0xC27EEB.
    case 0xC27EED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage.asm:36 STA @LOCAL04
    case 0xC27EEE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/calc_damage.asm:37 LDA CURRENT_TARGET
    case 0xC27EF0: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/calc_damage.asm:38 STA @LOCAL03
    case 0xC27EF3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:40 JSL RAND
    case 0xC27EF5: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/battle/calc_damage.asm:41 AND #$0003
    case 0xC27EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/calc_damage.asm:41 AND #$0003
    // Overlapping static entry reached from 0xC27EF9.
    case 0xC27EFB: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/calc_damage.asm:42 LDY #.SIZEOF(battler)
    case 0xC27EFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/calc_damage.asm:42 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27EFC.
    case 0xC27EFE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:43 JSL MULT168
    case 0xC27EFF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_damage.asm:44 CLC
    case 0xC27F03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:45 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC27F04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/calc_damage.asm:45 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27F04.
    case 0xC27F06: cpu.execute_instruction<0x9F>(0x728EAA, 4); return true;
    // src/battle/calc_damage.asm:46 TAX
    case 0xC27F07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:47 STX CURRENT_TARGET
    case 0xC27F08: cpu.execute_instruction<0x8E>(0x00A972, 3); return true;
    // src/battle/calc_damage.asm:47 STX CURRENT_TARGET
    // Overlapping static entry reached from 0xC27F06.
    case 0xC27F0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x000CBD, 3); return true;
    // src/battle/calc_damage.asm:48 LDA __BSS_START__ + battler::consciousness,X
    case 0xC27F0B: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/calc_damage.asm:48 LDA __BSS_START__ + battler::consciousness,X
    // Overlapping static entry reached from 0xC27F0A.
    case 0xC27F0C: cpu.execute_instruction<0x0C>(0x002900, 3); return true;
    // src/battle/calc_damage.asm:48 LDA __BSS_START__ + battler::consciousness,X
    // Overlapping static entry reached from 0xC27F0A.
    case 0xC27F0D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/battle/calc_damage.asm:49 AND #$00FF
    case 0xC27F0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC27F0C.
    case 0xC27F0F: cpu.execute_instruction<0xFF>(0xE2F000, 4); return true;
    // src/battle/calc_damage.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC27F0E.
    case 0xC27F10: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:50 BEQ @UNKNOWN1
    case 0xC27F11: cpu.execute_instruction<0xF0>(0x0000E2, 2); return true;
    // src/battle/calc_damage.asm:51 LDA __BSS_START__ + battler::npc_id,X
    case 0xC27F13: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/calc_damage.asm:52 AND #$00FF
    case 0xC27F16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC27F16.
    case 0xC27F18: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:53 BNE @UNKNOWN1
    case 0xC27F19: cpu.execute_instruction<0xD0>(0x0000DA, 2); return true;
    // src/battle/calc_damage.asm:54 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27F1B: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/calc_damage.asm:55 AND #$00FF
    case 0xC27F1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC27F1E.
    case 0xC27F20: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_damage.asm:56 TAX
    case 0xC27F21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:57 CPX #STATUS_0::UNCONSCIOUS
    case 0xC27F22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:57 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27F22.
    case 0xC27F24: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:58 BEQ @UNKNOWN1
    case 0xC27F25: cpu.execute_instruction<0xF0>(0x0000CE, 2); return true;
    // src/battle/calc_damage.asm:59 CPX #STATUS_0::DIAMONDIZED
    case 0xC27F27: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/calc_damage.asm:59 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC27F27.
    case 0xC27F29: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:60 BEQ @UNKNOWN1
    case 0xC27F2A: cpu.execute_instruction<0xF0>(0x0000C9, 2); return true;
    // src/battle/calc_damage.asm:61 JSL FIX_TARGET_NAME
    case 0xC27F2C: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/calc_damage.asm:62 LDY CURRENT_TARGET
    case 0xC27F30: cpu.execute_instruction<0xAC>(0x00A972, 3); return true;
    // src/battle/calc_damage.asm:63 STY @LOCAL05
    case 0xC27F33: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:64 LDA #$0010
    case 0xC27F35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/calc_damage.asm:64 LDA #$0010
    // Overlapping static entry reached from 0xC27F35.
    case 0xC27F37: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:65 STA REFLECT_FLASH_DURATION
    case 0xC27F38: cpu.execute_instruction<0x8D>(0x00ADA8, 3); return true;
    // src/battle/calc_damage.asm:66 LDA #SFX::REFLECT_DAMAGE
    case 0xC27F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/battle/calc_damage.asm:66 LDA #SFX::REFLECT_DAMAGE
    // Overlapping static entry reached from 0xC27F3B.
    case 0xC27F3D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:67 JSL PLAY_SOUND
    case 0xC27F3E: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/battle/calc_damage.asm:68 LDA #1*HALF_OF_A_SECOND
    case 0xC27F42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/battle/calc_damage.asm:68 LDA #1*HALF_OF_A_SECOND
    // Overlapping static entry reached from 0xC27F42.
    case 0xC27F44: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/calc_damage.asm:69 JSR WAIT
    case 0xC27F45: cpu.execute_instruction<0x20>(0x0069BE, 3); return true;
    // src/battle/calc_damage.asm:71 LDY @LOCAL05
    case 0xC27F48: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:72 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC27F4A: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/calc_damage.asm:73 STA @VIRTUAL02
    case 0xC27F4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:74 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27F4F: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:75 AND #$00FF
    case 0xC27F52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC27F52.
    case 0xC27F54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:76 BEQ @UNKNOWN3
    case 0xC27F55: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/calc_damage.asm:77 LDA __BSS_START__ + battler::id,Y
    case 0xC27F57: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:78 CMP #ENEMY::MASTER_BELCH_1
    case 0xC27F5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00005D, 2); else cpu.execute_instruction<0xC9>(0x00005D, 3); return true;
    // src/battle/calc_damage.asm:78 CMP #ENEMY::MASTER_BELCH_1
    // Overlapping static entry reached from 0xC27F5A.
    case 0xC27F5C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:79 BEQ @UNKNOWN4
    case 0xC27F5D: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/calc_damage.asm:80 CMP #ENEMY::MASTER_BELCH_3
    case 0xC27F5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/battle/calc_damage.asm:80 CMP #ENEMY::MASTER_BELCH_3
    // Overlapping static entry reached from 0xC27F5F.
    case 0xC27F61: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:81 BEQ @UNKNOWN4
    case 0xC27F62: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:82 CMP #ENEMY::GIYGAS_2
    case 0xC27F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DA, 2); else cpu.execute_instruction<0xC9>(0x0000DA, 3); return true;
    // src/battle/calc_damage.asm:82 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC27F64.
    case 0xC27F66: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:83 BEQ @UNKNOWN4
    case 0xC27F67: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/battle/calc_damage.asm:84 CMP #ENEMY::GIYGAS_3
    case 0xC27F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0000DB, 3); return true;
    // src/battle/calc_damage.asm:84 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27F69.
    case 0xC27F6B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:85 BEQ @UNKNOWN4
    case 0xC27F6C: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/battle/calc_damage.asm:86 CMP #ENEMY::GIYGAS_5
    case 0xC27F6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DD, 2); else cpu.execute_instruction<0xC9>(0x0000DD, 3); return true;
    // src/battle/calc_damage.asm:86 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC27F6E.
    case 0xC27F70: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:87 BEQ @UNKNOWN4
    case 0xC27F71: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/battle/calc_damage.asm:88 CMP #ENEMY::GIYGAS_6
    case 0xC27F73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/battle/calc_damage.asm:88 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27F73.
    case 0xC27F75: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:89 BEQ @UNKNOWN4
    case 0xC27F76: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/calc_damage.asm:91 LDX @VIRTUAL04
    case 0xC27F78: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/calc_damage.asm:92 TYA
    case 0xC27F7A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:93 JSR REDUCE_HP
    case 0xC27F7B: cpu.execute_instruction<0x20>(0x0071F0, 3); return true;
    // src/battle/calc_damage.asm:95 LDY @LOCAL05
    case 0xC27F7E: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:96 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27F80: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:97 AND #$00FF
    case 0xC27F83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC27F83.
    case 0xC27F85: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:98 BNE @UNKNOWN8
    case 0xC27F86: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/battle/calc_damage.asm:99 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC27F88: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/calc_damage.asm:100 BNE @UNKNOWN7
    case 0xC27F8B: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/battle/calc_damage.asm:101 LDA @VIRTUAL02
    case 0xC27F8D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:102 CMP #$0001
    case 0xC27F8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:102 CMP #$0001
    // Overlapping static entry reached from 0xC27F8F.
    case 0xC27F91: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/calc_damage.asm:103 BLTEQ @UNKNOWN7
    case 0xC27F92: cpu.execute_instruction<0x90>(0x000025, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/calc_damage.asm:103 BLTEQ @UNKNOWN7
    case 0xC27F94: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/calc_damage.asm:104 LDX CURRENT_ATTACKER
    case 0xC27F96: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/calc_damage.asm:105 LDA __BSS_START__ + battler::guts,X
    case 0xC27F99: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/battle/calc_damage.asm:106 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC27F9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/battle/calc_damage.asm:106 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC27F9C.
    case 0xC27F9E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/calc_damage.asm:107 BCS @UNKNOWN5
    case 0xC27F9F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/battle/calc_damage.asm:108 LDX #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC27FA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/battle/calc_damage.asm:108 LDX #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC27FA1.
    case 0xC27FA3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/calc_damage.asm:109 BRA @UNKNOWN6
    case 0xC27FA4: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/battle/calc_damage.asm:111 TAX
    case 0xC27FA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:113 TXA
    case 0xC27FA7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:114 JSR SUCCESS_500
    case 0xC27FA8: cpu.execute_instruction<0x20>(0x006BDB, 3); return true;
    // src/battle/calc_damage.asm:115 CMP #$0000
    case 0xC27FAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:115 CMP #$0000
    // Overlapping static entry reached from 0xC27FAB.
    case 0xC27FAD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:116 BEQ @UNKNOWN7
    case 0xC27FAE: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/calc_damage.asm:117 LDX #$0001
    case 0xC27FB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:117 LDX #$0001
    // Overlapping static entry reached from 0xC27FB0.
    case 0xC27FB2: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/calc_damage.asm:118 LDY @LOCAL05
    case 0xC27FB3: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:119 TYA
    case 0xC27FB5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:120 JSR SET_HP
    case 0xC27FB6: cpu.execute_instruction<0x20>(0x007126, 3); return true;
    // src/battle/calc_damage.asm:122 LDA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC27FB9: cpu.execute_instruction<0xAD>(0x00AA90, 3); return true;
    // src/battle/calc_damage.asm:123 BEQ @UNKNOWN8
    case 0xC27FBC: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/calc_damage.asm:124 LDA #$0001
    case 0xC27FBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:124 LDA #$0001
    // Overlapping static entry reached from 0xC27FBE.
    case 0xC27FC0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:125 JSL COUNT_CHARS
    case 0xC27FC1: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/calc_damage.asm:126 CMP #$0001
    case 0xC27FC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:126 CMP #$0001
    // Overlapping static entry reached from 0xC27FC5.
    case 0xC27FC7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:127 BNE @UNKNOWN8
    case 0xC27FC8: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/calc_damage.asm:128 LDA #$0000
    case 0xC27FCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:128 LDA #$0000
    // Overlapping static entry reached from 0xC27FCA.
    case 0xC27FCC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage.asm:129 JSL COUNT_CHARS
    case 0xC27FCD: cpu.execute_instruction<0x22>(0xC2BAC5, 4); return true;
    // src/battle/calc_damage.asm:130 CMP #$0001
    case 0xC27FD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:130 CMP #$0001
    // Overlapping static entry reached from 0xC27FD1.
    case 0xC27FD3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:131 BNE @UNKNOWN8
    case 0xC27FD4: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/calc_damage.asm:132 LDX #$0001
    case 0xC27FD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:132 LDX #$0001
    // Overlapping static entry reached from 0xC27FD6.
    case 0xC27FD8: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/calc_damage.asm:133 LDY @LOCAL05
    case 0xC27FD9: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:134 TYA
    case 0xC27FDB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:135 JSR SET_HP
    case 0xC27FDC: cpu.execute_instruction<0x20>(0x007126, 3); return true;
    // src/battle/calc_damage.asm:137 LDY @LOCAL05
    case 0xC27FDF: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/calc_damage.asm:138 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27FE1: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/calc_damage.asm:139 AND #$00FF
    case 0xC27FE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:139 AND #$00FF
    // Overlapping static entry reached from 0xC27FE4.
    case 0xC27FE6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage.asm:140 CMP #$0001
    case 0xC27FE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:140 CMP #$0001
    // Overlapping static entry reached from 0xC27FE7.
    case 0xC27FE9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:141 BNE @UNKNOWN12
    case 0xC27FEA: cpu.execute_instruction<0xD0>(0x00006C, 2); return true;
    // src/battle/calc_damage.asm:142 LDA __BSS_START__ + battler::id,Y
    case 0xC27FEC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:143 CMP #ENEMY::GIYGAS_3
    case 0xC27FEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0000DB, 3); return true;
    // src/battle/calc_damage.asm:143 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27FEF.
    case 0xC27FF1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:144 BEQ @UNKNOWN9
    case 0xC27FF2: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/calc_damage.asm:145 CMP #ENEMY::GIYGAS_4
    case 0xC27FF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DC, 2); else cpu.execute_instruction<0xC9>(0x0000DC, 3); return true;
    // src/battle/calc_damage.asm:145 CMP #ENEMY::GIYGAS_4
    // Overlapping static entry reached from 0xC27FF4.
    case 0xC27FF6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:146 BEQ @UNKNOWN9
    case 0xC27FF7: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/calc_damage.asm:147 CMP #ENEMY::GIYGAS_5
    case 0xC27FF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DD, 2); else cpu.execute_instruction<0xC9>(0x0000DD, 3); return true;
    // src/battle/calc_damage.asm:147 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC27FF9.
    case 0xC27FFB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage.asm:148 BEQ @UNKNOWN9
    case 0xC27FFC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/calc_damage.asm:149 CMP #ENEMY::GIYGAS_6
    case 0xC27FFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/battle/calc_damage.asm:149 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27FFE.
    case 0xC28000: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:150 BNE @UNKNOWN10
    case 0xC28001: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/calc_damage.asm:152 LDA #$0010
    case 0xC28003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/battle/calc_damage.asm:152 LDA #$0010
    // Overlapping static entry reached from 0xC28003.
    case 0xC28005: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:153 STA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC28006: cpu.execute_instruction<0x8D>(0x00ADAA, 3); return true;
    // src/battle/calc_damage.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC28009: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage.asm:156 LDA #$0015
    case 0xC2800B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x009915, 3); return true;
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    case 0xC2800D: cpu.execute_instruction<0x99>(0x000048, 3); return true;
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    // Overlapping static entry reached from 0xC2800B.
    case 0xC2800E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    // Overlapping static entry reached from 0xC2800E.
    case 0xC2800F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/calc_damage.asm:158 REP #PROC_FLAGS::ACCUM8
    case 0xC28010: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_damage.asm:159 LDA IS_SMAAAAASH_ATTACK
    case 0xC28012: cpu.execute_instruction<0xAD>(0x00AA8E, 3); return true;
    // src/battle/calc_damage.asm:160 BEQ @UNKNOWN11
    case 0xC28015: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC28017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0075F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC28017.
    case 0xC28019: cpu.execute_instruction<0x75>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC2801A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC28019.
    case 0xC2801B: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC2801C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC2801C.
    case 0xC2801E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC2801F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28021: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28023: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28025: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28027: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28029: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2802B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2802D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:164 JSL DISPLAY_TEXT_WAIT
    case 0xC2802F: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/calc_damage.asm:165 STZ IS_SMAAAAASH_ATTACK
    case 0xC28033: cpu.execute_instruction<0x9C>(0x00AA8E, 3); return true;
    // src/battle/calc_damage.asm:166 JMP @UNKNOWN20
    case 0xC28036: cpu.execute_instruction<0x4C>(0x008113, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC28039: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0075C2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC28039.
    case 0xC2803B: cpu.execute_instruction<0x75>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC2803C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC2803B.
    case 0xC2803D: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC2803E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC2803E.
    case 0xC28040: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC28041: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28043: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28045: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28047: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28049: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2804B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2804D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2804F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:171 JSL DISPLAY_TEXT_WAIT
    case 0xC28051: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/calc_damage.asm:172 JMP @UNKNOWN20
    case 0xC28055: cpu.execute_instruction<0x4C>(0x008113, 3); return true;
    // src/battle/calc_damage.asm:174 LDA __BSS_START__ + battler::npc_id,Y
    case 0xC28058: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/calc_damage.asm:175 AND #$00FF
    case 0xC2805B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:175 AND #$00FF
    // Overlapping static entry reached from 0xC2805B.
    case 0xC2805D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage.asm:176 BNE @UNKNOWN16
    case 0xC2805E: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/battle/calc_damage.asm:177 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC28060: cpu.execute_instruction<0xAD>(0x00ADA4, 3); return true;
    // src/battle/calc_damage.asm:178 BNE @UNKNOWN16
    case 0xC28063: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/battle/calc_damage.asm:179 LDA #$0015
    case 0xC28065: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/calc_damage.asm:179 LDA #$0015
    // Overlapping static entry reached from 0xC28065.
    case 0xC28067: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:180 STA HP_PP_BOX_BLINK_DURATION
    case 0xC28068: cpu.execute_instruction<0x8D>(0x00ADA4, 3); return true;
    // src/battle/calc_damage.asm:185 LDX #$0000
    case 0xC2806B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:185 LDX #$0000
    // Overlapping static entry reached from 0xC2806B.
    case 0xC2806D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/calc_damage.asm:187 BRA @UNKNOWN15
    case 0xC2806E: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/battle/calc_damage.asm:189 LDA __BSS_START__ + battler::id,Y
    case 0xC28070: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/calc_damage.asm:190 STA @VIRTUAL02
    case 0xC28073: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:203 LDA GAME_STATE + game_state::party_members,X
    case 0xC28075: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/battle/calc_damage.asm:204 AND #$00FF
    case 0xC28078: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC28078.
    case 0xC2807A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/calc_damage.asm:205 CMP @VIRTUAL02
    case 0xC2807B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/calc_damage.asm:206 BNE @UNKNOWN14
    case 0xC2807D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage.asm:207 STX HP_PP_BOX_BLINK_TARGET
    case 0xC2807F: cpu.execute_instruction<0x8E>(0x00ADA6, 3); return true;
    // src/battle/calc_damage.asm:209 BRA @UNKNOWN16
    case 0xC28082: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/battle/calc_damage.asm:216 INX
    case 0xC28084: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/calc_damage.asm:222 CPX #TOTAL_PARTY_COUNT
    case 0xC28085: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/battle/calc_damage.asm:222 CPX #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC28085.
    case 0xC28087: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/calc_damage.asm:224 BCC @UNKNOWN13
    case 0xC28088: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // src/battle/calc_damage.asm:226 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC2808A: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/calc_damage.asm:227 BNE @TARGET_SURVIVED
    case 0xC2808D: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/battle/calc_damage.asm:228 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL
    case 0xC2808F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/calc_damage.asm:228 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL
    // Overlapping static entry reached from 0xC2808F.
    case 0xC28091: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:229 STA VERTICAL_SHAKE_DURATION
    case 0xC28092: cpu.execute_instruction<0x8D>(0x00AD8C, 3); return true;
    // src/battle/calc_damage.asm:230 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL_HOLD
    case 0xC28095: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/battle/calc_damage.asm:230 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL_HOLD
    // Overlapping static entry reached from 0xC28095.
    case 0xC28097: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:231 STA VERTICAL_SHAKE_HOLD_DURATION
    case 0xC28098: cpu.execute_instruction<0x8D>(0x00AD8E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC2809B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x007607, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC2809B.
    case 0xC2809D: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC2809E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC2809D.
    case 0xC2809F: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC280A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC280A0.
    case 0xC280A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC280A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280AB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280AD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280AF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280B1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:235 JSL DISPLAY_TEXT_WAIT
    case 0xC280B3: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/calc_damage.asm:236 BRA @UNKNOWN19
    case 0xC280B7: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/battle/calc_damage.asm:238 LDA IS_SMAAAAASH_ATTACK
    case 0xC280B9: cpu.execute_instruction<0xAD>(0x00AA8E, 3); return true;
    // src/battle/calc_damage.asm:239 BEQ @UNKNOWN18
    case 0xC280BC: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/battle/calc_damage.asm:240 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR
    case 0xC280BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/battle/calc_damage.asm:240 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR
    // Overlapping static entry reached from 0xC280BE.
    case 0xC280C0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:241 STA VERTICAL_SHAKE_DURATION
    case 0xC280C1: cpu.execute_instruction<0x8D>(0x00AD8C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC280C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0075D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC280C4.
    case 0xC280C6: cpu.execute_instruction<0x75>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC280C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC280C6.
    case 0xC280C8: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC280C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC280C9.
    case 0xC280CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC280CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280CE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280D2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280DA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:245 JSL DISPLAY_TEXT_WAIT
    case 0xC280DC: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/calc_damage.asm:246 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC280E0: cpu.execute_instruction<0x9C>(0x00AD8E, 3); return true;
    // src/battle/calc_damage.asm:247 STZ IS_SMAAAAASH_ATTACK
    case 0xC280E3: cpu.execute_instruction<0x9C>(0x00AA8E, 3); return true;
    // src/battle/calc_damage.asm:248 BRA @UNKNOWN19
    case 0xC280E6: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/battle/calc_damage.asm:250 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR_UNKNOWN
    case 0xC280E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00002A, 3); return true;
    // src/battle/calc_damage.asm:250 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR_UNKNOWN
    // Overlapping static entry reached from 0xC280E8.
    case 0xC280EA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:251 STA VERTICAL_SHAKE_DURATION
    case 0xC280EB: cpu.execute_instruction<0x8D>(0x00AD8C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC280EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x0075AB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC280EE.
    case 0xC280F0: cpu.execute_instruction<0x75>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC280F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC280F0.
    case 0xC280F2: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC280F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC280F3.
    case 0xC280F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC280F6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280F8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280FC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28100: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28102: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28104: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/calc_damage.asm:255 JSL DISPLAY_TEXT_WAIT
    case 0xC28106: cpu.execute_instruction<0x22>(0xC1DC66, 4); return true;
    // src/battle/calc_damage.asm:256 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2810A: cpu.execute_instruction<0x9C>(0x00AD8E, 3); return true;
    // src/battle/calc_damage.asm:258 LDA #$0028
    case 0xC2810D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/battle/calc_damage.asm:258 LDA #$0028
    // Overlapping static entry reached from 0xC2810D.
    case 0xC2810F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/calc_damage.asm:259 STA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC28110: cpu.execute_instruction<0x8D>(0x00AD90, 3); return true;
    // src/battle/calc_damage.asm:261 LDA @LOCAL04
    case 0xC28113: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/calc_damage.asm:262 BEQ @UNKNOWN21
    case 0xC28115: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/battle/calc_damage.asm:263 LDA @LOCAL03
    case 0xC28117: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/battle/calc_damage.asm:264 STA CURRENT_TARGET
    case 0xC28119: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/calc_damage.asm:265 JSL FIX_TARGET_NAME
    case 0xC2811C: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/calc_damage.asm:267 LDA #$0001
    case 0xC28120: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage.asm:267 LDA #$0001
    // Overlapping static entry reached from 0xC28120.
    case 0xC28122: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_damage.asm:269 END_C_FUNCTION
    case 0xC28123: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/calc_damage.asm:269 END_C_FUNCTION
    case 0xC28124: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_damage_reduction.asm (source_named).
bool execute_battle_calc_damage_reduction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_damage_reduction.asm:3 BEGIN_C_FUNCTION
    case 0xC28125: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC28127: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC28128: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC28129: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC2812A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2812A.
    case 0xC2812C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC2812D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_damage_reduction.asm:10 END_STACK_VARS
    case 0xC2812E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:11 TXY
    case 0xC2812F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:12 STA @VIRTUAL02
    case 0xC28130: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:13 LDA #$0000
    case 0xC28132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC28132.
    case 0xC28134: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/calc_damage_reduction.asm:14 CLC
    case 0xC28135: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:15 SBC @VIRTUAL02
    case 0xC28136: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC28138: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2813A: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2813C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_damage_reduction.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC2813E: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:17 LDA #0
    case 0xC28140: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:17 LDA #0
    // Overlapping static entry reached from 0xC28140.
    case 0xC28142: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:18 STA @VIRTUAL02
    case 0xC28143: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:20 CPY #$00FF
    case 0xC28145: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:20 CPY #$00FF
    // Overlapping static entry reached from 0xC28145.
    case 0xC28147: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/battle/calc_damage_reduction.asm:21 BCS @UNKNOWN3
    case 0xC28148: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/battle/calc_damage_reduction.asm:22 LDX @VIRTUAL02
    case 0xC2814A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:23 TYA
    case 0xC2814C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2814D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:25 JSR TRUNCATE_16_TO_8
    case 0xC2814F: cpu.execute_instruction<0x20>(0x0069F8, 3); return true;
    // src/battle/calc_damage_reduction.asm:26 STA @VIRTUAL02
    case 0xC28152: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:29 LDX CURRENT_TARGET
    case 0xC28154: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:30 LDA a:battler::consciousness,X
    case 0xC28157: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/calc_damage_reduction.asm:31 AND #$00FF
    case 0xC2815A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2815A.
    case 0xC2815C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:32 CMP #1
    case 0xC2815D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:32 CMP #1
    // Overlapping static entry reached from 0xC2815D.
    case 0xC2815F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/calc_damage_reduction.asm:33 BNEL @UNKNOWN20
    case 0xC28160: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:33 BNEL @UNKNOWN20
    case 0xC28162: cpu.execute_instruction<0x4C>(0x0082F4, 3); return true;
    // src/battle/calc_damage_reduction.asm:34 LDX CURRENT_TARGET
    case 0xC28165: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:35 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC28168: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/calc_damage_reduction.asm:36 AND #$00FF
    case 0xC2816B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC2816B.
    case 0xC2816D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:37 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2816E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:37 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2816E.
    case 0xC28170: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/calc_damage_reduction.asm:38 BEQL @UNKNOWN20
    case 0xC28171: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:38 BEQL @UNKNOWN20
    case 0xC28173: cpu.execute_instruction<0x4C>(0x0082F4, 3); return true;
    // src/battle/calc_damage_reduction.asm:39 LDX CURRENT_TARGET
    case 0xC28176: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:40 LDA a:battler::guarding,X
    case 0xC28179: cpu.execute_instruction<0xBD>(0x000024, 3); return true;
    // src/battle/calc_damage_reduction.asm:41 AND #$00FF
    case 0xC2817C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC2817C.
    case 0xC2817E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:42 CMP #1
    case 0xC2817F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:42 CMP #1
    // Overlapping static entry reached from 0xC2817F.
    case 0xC28181: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:43 BNE @UNKNOWN6
    case 0xC28182: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/battle/calc_damage_reduction.asm:44 LDX CURRENT_ATTACKER
    case 0xC28184: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/calc_damage_reduction.asm:45 LDA a:battler::current_action,X
    case 0xC28187: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:46 JSR GET_BATTLE_ACTION_TYPE
    case 0xC2818A: cpu.execute_instruction<0x20>(0x00698B, 3); return true;
    // src/battle/calc_damage_reduction.asm:47 CMP #ACTION_TYPE::PHYSICAL
    case 0xC2818D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:47 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC2818D.
    case 0xC2818F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:48 BNE @UNKNOWN6
    case 0xC28190: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/calc_damage_reduction.asm:49 SEP #PROC_FLAGS::INDEX8
    case 0xC28192: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:50 LDY #1
    case 0xC28194: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00A501, 3); return true;
    // src/battle/calc_damage_reduction.asm:51 LDA @VIRTUAL02
    case 0xC28196: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:51 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC28194.
    case 0xC28197: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:52 JSL ASR16
    case 0xC28198: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_damage_reduction.asm:53 STA @VIRTUAL02
    case 0xC2819C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:55 REP #PROC_FLAGS::INDEX8
    case 0xC2819E: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:56 LDX CURRENT_ATTACKER
    case 0xC281A0: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/calc_damage_reduction.asm:57 LDA a:battler::current_action,X
    case 0xC281A3: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:58 JSR GET_BATTLE_ACTION_TYPE
    case 0xC281A6: cpu.execute_instruction<0x20>(0x00698B, 3); return true;
    // src/battle/calc_damage_reduction.asm:59 CMP #ACTION_TYPE::PHYSICAL
    case 0xC281A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:59 CMP #ACTION_TYPE::PHYSICAL
    // Overlapping static entry reached from 0xC281A9.
    case 0xC281AB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:60 BNE @UNKNOWN9
    case 0xC281AC: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/battle/calc_damage_reduction.asm:61 LDX CURRENT_TARGET
    case 0xC281AE: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:62 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC281B1: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/calc_damage_reduction.asm:63 AND #$00FF
    case 0xC281B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC281B4.
    case 0xC281B6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:64 CMP #STATUS_6::SHIELD_POWER
    case 0xC281B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_damage_reduction.asm:64 CMP #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC281B7.
    case 0xC281B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:65 BEQ @UNKNOWN8
    case 0xC281BA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:66 CMP #STATUS_6::SHIELD
    case 0xC281BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:66 CMP #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC281BC.
    case 0xC281BE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:67 BNE @UNKNOWN9
    case 0xC281BF: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/battle/calc_damage_reduction.asm:69 SEP #PROC_FLAGS::INDEX8
    case 0xC281C1: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:70 LDY #1
    case 0xC281C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00A501, 3); return true;
    // src/battle/calc_damage_reduction.asm:71 LDA @VIRTUAL02
    case 0xC281C5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:71 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC281C3.
    case 0xC281C6: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:72 JSL ASR16
    case 0xC281C7: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_damage_reduction.asm:73 STA @VIRTUAL02
    case 0xC281CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:75 LDA @VIRTUAL02
    case 0xC281CD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:76 BNE @UNKNOWN10
    case 0xC281CF: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:77 LDA #1
    case 0xC281D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:77 LDA #1
    // Overlapping static entry reached from 0xC281D1.
    case 0xC281D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:78 STA @VIRTUAL02
    case 0xC281D4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:80 REP #PROC_FLAGS::INDEX8
    case 0xC281D6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:81 LDX @VIRTUAL02
    case 0xC281D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:82 LDA CURRENT_TARGET
    case 0xC281DA: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:83 JSR CALC_DAMAGE
    case 0xC281DD: cpu.execute_instruction<0x20>(0x007EAF, 3); return true;
    // src/battle/calc_damage_reduction.asm:84 CMP #0
    case 0xC281E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:84 CMP #0
    // Overlapping static entry reached from 0xC281E0.
    case 0xC281E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:85 BEQ @UNKNOWN11
    case 0xC281E3: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/battle/calc_damage_reduction.asm:86 LDX CURRENT_TARGET
    case 0xC281E5: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:87 LDA a:battler::hp,X
    case 0xC281E8: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/calc_damage_reduction.asm:88 BNE @UNKNOWN11
    case 0xC281EB: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/calc_damage_reduction.asm:89 LDA CURRENT_TARGET
    case 0xC281ED: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:90 JSL KO_TARGET
    case 0xC281F0: cpu.execute_instruction<0x22>(0xC27550, 4); return true;
    // src/battle/calc_damage_reduction.asm:92 LDA @VIRTUAL02
    case 0xC281F4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:93 BNE @UNKNOWN12
    case 0xC281F6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:94 LDA #1
    case 0xC281F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:94 LDA #1
    // Overlapping static entry reached from 0xC281F8.
    case 0xC281FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:95 STA @VIRTUAL02
    case 0xC281FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:97 LDA SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC281FD: cpu.execute_instruction<0xAD>(0x00AA94, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/calc_damage_reduction.asm:98 BNEL @SHIELDS_DONE
    case 0xC28200: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/calc_damage_reduction.asm:98 BNEL @SHIELDS_DONE
    case 0xC28202: cpu.execute_instruction<0x4C>(0x008290, 3); return true;
    // src/battle/calc_damage_reduction.asm:99 LDX CURRENT_TARGET
    case 0xC28205: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:100 LDA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC28208: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/battle/calc_damage_reduction.asm:101 AND #$00FF
    case 0xC2820B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2820B.
    case 0xC2820D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:102 CMP #STATUS_6::SHIELD_POWER
    case 0xC2820E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_damage_reduction.asm:102 CMP #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2820E.
    case 0xC28210: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:103 BEQ @UNKNOWN14
    case 0xC28211: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/calc_damage_reduction.asm:104 CMP #STATUS_6::SHIELD
    case 0xC28213: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:104 CMP #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC28213.
    case 0xC28215: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:105 BEQ @WEAKEN_SHIELD
    case 0xC28216: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/battle/calc_damage_reduction.asm:106 BRA @SHIELDS_DONE
    case 0xC28218: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/battle/calc_damage_reduction.asm:108 LDA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC2821A: cpu.execute_instruction<0xAD>(0x00AA90, 3); return true;
    // src/battle/calc_damage_reduction.asm:109 BNE @WEAKEN_SHIELD
    case 0xC2821D: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/battle/calc_damage_reduction.asm:110 SEP #PROC_FLAGS::INDEX8
    case 0xC2821F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_damage_reduction.asm:111 LDY #1
    case 0xC28221: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00A501, 3); return true;
    // src/battle/calc_damage_reduction.asm:112 LDA @VIRTUAL02
    case 0xC28223: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:112 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC28221.
    case 0xC28224: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:113 JSL ASR16
    case 0xC28225: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_damage_reduction.asm:114 STA @VIRTUAL02
    case 0xC28229: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:115 CMP #0
    case 0xC2822B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:115 CMP #0
    // Overlapping static entry reached from 0xC2822B.
    case 0xC2822D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:116 BNE @DAMAGE_ABOVE_ZERO_AFTER_SHIELD
    case 0xC2822E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/calc_damage_reduction.asm:117 LDA #1
    case 0xC28230: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:117 LDA #1
    // Overlapping static entry reached from 0xC28230.
    case 0xC28232: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_damage_reduction.asm:118 STA @VIRTUAL02
    case 0xC28233: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC28235: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x0070B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC28235.
    case 0xC28237: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC28238: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC28237.
    case 0xC28239: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC2823A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    // Overlapping static entry reached from 0xC2823A.
    case 0xC2823C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC2823D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:121 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_TURN
    case 0xC2823F: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/calc_damage_reduction.asm:122 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC28243: cpu.execute_instruction<0x20>(0x007E8A, 3); return true;
    // src/battle/calc_damage_reduction.asm:123 LDX @VIRTUAL02
    case 0xC28246: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_damage_reduction.asm:124 LDA CURRENT_TARGET
    case 0xC28248: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:125 JSR CALC_DAMAGE
    case 0xC2824B: cpu.execute_instruction<0x20>(0x007EAF, 3); return true;
    // src/battle/calc_damage_reduction.asm:126 LDX CURRENT_TARGET
    case 0xC2824E: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:127 LDA a:battler::hp,X
    case 0xC28251: cpu.execute_instruction<0xBD>(0x000011, 3); return true;
    // src/battle/calc_damage_reduction.asm:128 BNE @STILL_HAS_HP_AFTER_REFLECT
    case 0xC28254: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/battle/calc_damage_reduction.asm:129 LDA CURRENT_TARGET
    case 0xC28256: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:130 JSL KO_TARGET
    case 0xC28259: cpu.execute_instruction<0x22>(0xC27550, 4); return true;
    // src/battle/calc_damage_reduction.asm:132 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC2825D: cpu.execute_instruction<0x20>(0x007E8A, 3); return true;
    // src/battle/calc_damage_reduction.asm:134 LDA CURRENT_TARGET
    case 0xC28260: cpu.execute_instruction<0xAD>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:135 CLC
    case 0xC28263: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:136 ADC #battler::shield_hp
    case 0xC28264: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/battle/calc_damage_reduction.asm:136 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC28264.
    case 0xC28266: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_damage_reduction.asm:137 TAX
    case 0xC28267: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC28268: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:139 LDA __BSS_START__,X
    case 0xC2826A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:140 DEC
    case 0xC2826D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:141 STA __BSS_START__,X
    case 0xC2826E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:142 REP #PROC_FLAGS::ACCUM8
    case 0xC28271: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:143 AND #$00FF
    case 0xC28273: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC28273.
    case 0xC28275: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:144 BNE @SHIELDS_DONE
    case 0xC28276: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/battle/calc_damage_reduction.asm:145 LDX CURRENT_TARGET
    case 0xC28278: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC2827B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:147 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2827D: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/calc_damage_reduction.asm:148 REP #PROC_FLAGS::ACCUM8
    case 0xC28280: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000099, 2); else cpu.execute_instruction<0xA9>(0x007099, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28282.
    case 0xC28284: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28285: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28284.
    case 0xC28286: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC28287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC28287.
    case 0xC28289: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2828A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:149 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2828C: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/calc_damage_reduction.asm:152 LDX CURRENT_TARGET
    case 0xC28290: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:153 LDA a:battler::ally_or_enemy,X
    case 0xC28293: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/calc_damage_reduction.asm:154 AND #$00FF
    case 0xC28296: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC28296.
    case 0xC28298: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:155 BNE @UNKNOWN19
    case 0xC28299: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/battle/calc_damage_reduction.asm:156 LDX CURRENT_TARGET
    case 0xC2829B: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:157 LDA a:battler::npc_id,X
    case 0xC2829E: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/calc_damage_reduction.asm:158 AND #$00FF
    case 0xC282A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:158 AND #$00FF
    // Overlapping static entry reached from 0xC282A1.
    case 0xC282A3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:159 BNE @UNKNOWN19
    case 0xC282A4: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/calc_damage_reduction.asm:160 LDX CURRENT_TARGET
    case 0xC282A6: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:161 LDA a:battler::row,X
    case 0xC282A9: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/calc_damage_reduction.asm:162 AND #$00FF
    case 0xC282AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC282AC.
    case 0xC282AE: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/calc_damage_reduction.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC282AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_damage_reduction.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC282AF.
    case 0xC282B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_damage_reduction.asm:164 JSL MULT168
    case 0xC282B2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_damage_reduction.asm:165 TAX
    case 0xC282B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:166 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC282B7: cpu.execute_instruction<0xBD>(0x009A13, 3); return true;
    // src/battle/calc_damage_reduction.asm:167 BEQ @UNKNOWN20
    case 0xC282BA: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/battle/calc_damage_reduction.asm:169 LDX CURRENT_TARGET
    case 0xC282BC: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:170 LDA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC282BF: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/battle/calc_damage_reduction.asm:171 AND #$00FF
    case 0xC282C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_damage_reduction.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC282C2.
    case 0xC282C4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/calc_damage_reduction.asm:172 CMP #STATUS_2::ASLEEP
    case 0xC282C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_damage_reduction.asm:172 CMP #STATUS_2::ASLEEP
    // Overlapping static entry reached from 0xC282C5.
    case 0xC282C7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/calc_damage_reduction.asm:173 BNE @UNKNOWN20
    case 0xC282C8: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/battle/calc_damage_reduction.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC282CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:175 LDA #CHANCE_OF_WAKING_UP_WHEN_ATTACKED
    case 0xC282CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x002080, 3); return true;
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    case 0xC282CE: cpu.execute_instruction<0x20>(0x006BB8, 3); return true;
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC282CC.
    case 0xC282CF: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:176 JSR SUCCESS_255
    // Overlapping static entry reached from 0xC282CF.
    case 0xC282D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/battle/calc_damage_reduction.asm:178 CMP #$0000
    case 0xC282D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/calc_damage_reduction.asm:178 CMP #$0000
    // Overlapping static entry reached from 0xC282D1.
    case 0xC282D3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_damage_reduction.asm:179 BEQ @UNKNOWN20
    case 0xC282D4: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/battle/calc_damage_reduction.asm:180 LDX CURRENT_TARGET
    case 0xC282D6: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:181 STZ a:battler::current_action,X
    case 0xC282D9: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/battle/calc_damage_reduction.asm:182 LDX CURRENT_TARGET
    case 0xC282DC: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/calc_damage_reduction.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC282DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_damage_reduction.asm:184 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC282E1: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/calc_damage_reduction.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC282E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x006F54, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC282E6.
    case 0xC282E8: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC282E8.
    case 0xC282EC: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    // Overlapping static entry reached from 0xC282EB.
    case 0xC282ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282EE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage_reduction.asm:186 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NEMURI_OFF
    case 0xC282F0: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/calc_damage_reduction.asm:188 LDA @VIRTUAL02
    case 0xC282F4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_damage_reduction.asm:189 END_C_FUNCTION
    case 0xC282F6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/calc_damage_reduction.asm:189 END_C_FUNCTION
    case 0xC282F7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_psi_damage_modifiers.asm (source_named).
bool execute_battle_calc_psi_damage_modifiers_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B608: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B625.
    case 0xC2B609: cpu.execute_instruction<0x31>(0x000029, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    case 0xC2B60A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B609.
    case 0xC2B60B: cpu.execute_instruction<0xFF>(0x11F000, 4); return true;
    // src/battle/calc_psi_damage_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B60A.
    case 0xC2B60C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:7 BEQ @UNKNOWN0
    case 0xC2B60D: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:8 CMP #1
    case 0xC2B60F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:8 CMP #1
    // Overlapping static entry reached from 0xC2B60F.
    case 0xC2B611: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:9 BEQ @UNKNOWN1
    case 0xC2B612: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:10 CMP #2
    case 0xC2B614: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:10 CMP #2
    // Overlapping static entry reached from 0xC2B614.
    case 0xC2B616: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:11 BEQ @UNKNOWN2
    case 0xC2B617: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:12 CMP #3
    case 0xC2B619: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:12 CMP #3
    // Overlapping static entry reached from 0xC2B619.
    case 0xC2B61B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:13 BEQ @UNKNOWN3
    case 0xC2B61C: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:14 BRA @UNKNOWN4
    case 0xC2B61E: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B620: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:17 LDA #255
    case 0xC2B622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0080FF, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:18 BRA @UNKNOWN4
    case 0xC2B624: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:18 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B622.
    case 0xC2B625: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B626: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B625.
    case 0xC2B627: cpu.execute_instruction<0x20>(0x00B3A9, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:21 LDA #179
    case 0xC2B628: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0080B3, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:22 BRA @UNKNOWN4
    case 0xC2B62A: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B628.
    case 0xC2B62B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_psi_damage_modifiers.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B62C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:25 LDA #102
    case 0xC2B62E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x008066, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:26 BRA @UNKNOWN4
    case 0xC2B630: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:26 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B62E.
    case 0xC2B631: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B632: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B631.
    case 0xC2B633: cpu.execute_instruction<0x20>(0x000DA9, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:29 LDA #13
    case 0xC2B634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00E20D, 3); return true;
    // src/battle/calc_psi_damage_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B636: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_damage_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B634.
    case 0xC2B637: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_psi_damage_modifiers.asm:32 END_C_FUNCTION
    case 0xC2B638: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_psi_resistance_modifiers.asm (source_named).
bool execute_battle_calc_psi_resistance_modifiers_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B639: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2B637.
    case 0xC2B63A: cpu.execute_instruction<0x31>(0x000029, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    case 0xC2B63B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B63A.
    case 0xC2B63C: cpu.execute_instruction<0xFF>(0x11F000, 4); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC2B63B.
    case 0xC2B63D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:7 BEQ @UNKNOWN0
    case 0xC2B63E: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:8 CMP #1
    case 0xC2B640: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:8 CMP #1
    // Overlapping static entry reached from 0xC2B640.
    case 0xC2B642: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:9 BEQ @UNKNOWN1
    case 0xC2B643: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:10 CMP #2
    case 0xC2B645: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:10 CMP #2
    // Overlapping static entry reached from 0xC2B645.
    case 0xC2B647: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:11 BEQ @UNKNOWN2
    case 0xC2B648: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:12 CMP #3
    case 0xC2B64A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:12 CMP #3
    // Overlapping static entry reached from 0xC2B64A.
    case 0xC2B64C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:13 BEQ @UNKNOWN3
    case 0xC2B64D: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:14 BRA @UNKNOWN4
    case 0xC2B64F: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B651: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:17 LDA #255
    case 0xC2B653: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0080FF, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:18 BRA @UNKNOWN4
    case 0xC2B655: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:18 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B653.
    case 0xC2B656: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B657: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B656.
    case 0xC2B658: cpu.execute_instruction<0x20>(0x0080A9, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:21 LDA #128
    case 0xC2B659: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008080, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:22 BRA @UNKNOWN4
    case 0xC2B65B: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B659.
    case 0xC2B65C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B65D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:25 LDA #26
    case 0xC2B65F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00801A, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:26 BRA @UNKNOWN4
    case 0xC2B661: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:26 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC2B65F.
    case 0xC2B662: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B663: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B662.
    case 0xC2B664: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:29 LDA #0
    case 0xC2B665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00E200, 3); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B667: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_psi_resistance_modifiers.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2B665.
    case 0xC2B668: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_psi_resistance_modifiers.asm:32 END_C_FUNCTION
    case 0xC2B669: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/calc_resistances.asm (source_named).
bool execute_battle_calc_resistances_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_resistances.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21E03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E07: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC21E08.
    case 0xC21E0A: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_resistances.asm:9 END_STACK_VARS
    case 0xC21E0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:10 TAX
    case 0xC21E0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:11 DEX
    case 0xC21E0E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:12 STX @LOCAL02
    case 0xC21E0F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:13 TXA
    case 0xC21E11: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC21E12: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21E12.
    case 0xC21E14: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:15 JSL MULT168
    case 0xC21E15: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:16 STA @LOCAL01
    case 0xC21E19: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:17 TAX
    case 0xC21E1B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:18 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21E1C: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/battle/calc_resistances.asm:19 AND #$00FF
    case 0xC21E1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC21E1F.
    case 0xC21E21: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:20 TAY
    case 0xC21E22: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:21 BEQ @UNKNOWN0
    case 0xC21E23: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/battle/calc_resistances.asm:22 TYA
    case 0xC21E25: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:23 DEC
    case 0xC21E26: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:24 STA @VIRTUAL02
    case 0xC21E27: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:25 LDA @LOCAL01
    case 0xC21E29: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:26 CLC
    case 0xC21E2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21E2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:27 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21E2C.
    case 0xC21E2E: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:28 CLC
    case 0xC21E2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    case 0xC21E30: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:29 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21E2E.
    case 0xC21E31: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:30 TAX
    case 0xC21E32: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:31 LDA __BSS_START__,X
    case 0xC21E33: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:32 AND #$00FF
    case 0xC21E36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC21E36.
    case 0xC21E38: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21E39.
    case 0xC21E3B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E3C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:34 CLC
    case 0xC21E40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    case 0xC21E41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:35 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21E41.
    case 0xC21E43: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:36 TAX
    case 0xC21E44: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E45: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:38 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21E47: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC21E4B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:40 SEC
    case 0xC21E4D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:41 AND #$00FF
    case 0xC21E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC21E4E.
    case 0xC21E50: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:42 SBC #$0080
    case 0xC21E51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:42 SBC #$0080
    // Overlapping static entry reached from 0xC21E51.
    case 0xC21E53: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    case 0xC21E54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:43 EOR #$FF80
    // Overlapping static entry reached from 0xC21E54.
    case 0xC21E56: cpu.execute_instruction<0xFF>(0x000329, 4); return true;
    // src/battle/calc_resistances.asm:44 AND #$0003
    case 0xC21E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:44 AND #$0003
    // Overlapping static entry reached from 0xC21E57.
    case 0xC21E59: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/calc_resistances.asm:45 BRA @UNKNOWN1
    case 0xC21E5A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:47 LDA #$0000
    case 0xC21E5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:47 LDA #$0000
    // Overlapping static entry reached from 0xC21E5C.
    case 0xC21E5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:49 STA @LOCAL00
    case 0xC21E5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:50 LDX @LOCAL02
    case 0xC21E61: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:51 TXA
    case 0xC21E63: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC21E64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21E64.
    case 0xC21E66: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:53 JSL MULT168
    case 0xC21E67: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:54 STA @VIRTUAL02
    case 0xC21E6B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:55 LDX @VIRTUAL02
    case 0xC21E6D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:56 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21E6F: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/battle/calc_resistances.asm:57 AND #$00FF
    case 0xC21E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC21E72.
    case 0xC21E74: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:58 TAY
    case 0xC21E75: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:59 BEQ @UNKNOWN2
    case 0xC21E76: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/battle/calc_resistances.asm:60 TYA
    case 0xC21E78: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:61 DEC
    case 0xC21E79: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:62 STA @VIRTUAL04
    case 0xC21E7A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:63 LDA @VIRTUAL02
    case 0xC21E7C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:64 CLC
    case 0xC21E7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21E7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:65 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21E7F.
    case 0xC21E81: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:66 CLC
    case 0xC21E82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    case 0xC21E83: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:67 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21E81.
    case 0xC21E84: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:68 TAX
    case 0xC21E85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:69 LDA __BSS_START__,X
    case 0xC21E86: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:70 AND #$00FF
    case 0xC21E89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC21E89.
    case 0xC21E8B: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21E8C.
    case 0xC21E8E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21E8F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:72 CLC
    case 0xC21E93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    case 0xC21E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:73 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21E94.
    case 0xC21E96: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:74 TAX
    case 0xC21E97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC21E98: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:76 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21E9A: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC21E9E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:78 SEC
    case 0xC21EA0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:79 AND #$00FF
    case 0xC21EA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC21EA1.
    case 0xC21EA3: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:80 SBC #$0080
    case 0xC21EA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:80 SBC #$0080
    // Overlapping static entry reached from 0xC2EBB1.
    case 0xC21EA5: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/battle/calc_resistances.asm:80 SBC #$0080
    // Overlapping static entry reached from 0xC21EA4.
    case 0xC21EA6: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    case 0xC21EA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:81 EOR #$FF80
    // Overlapping static entry reached from 0xC21EA7.
    case 0xC21EA9: cpu.execute_instruction<0xFF>(0x000329, 4); return true;
    // src/battle/calc_resistances.asm:82 AND #$0003
    case 0xC21EAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:82 AND #$0003
    // Overlapping static entry reached from 0xC21EAA.
    case 0xC21EAC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:83 STA @VIRTUAL02
    case 0xC21EAD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:84 LDA @LOCAL00
    case 0xC21EAF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:85 CLC
    case 0xC21EB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:86 ADC @VIRTUAL02
    case 0xC21EB2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:87 STA @LOCAL00
    case 0xC21EB4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:89 LDA @LOCAL00
    case 0xC21EB6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:90 CLC
    case 0xC21EB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:91 SBC #$0003
    case 0xC21EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:91 SBC #$0003
    // Overlapping static entry reached from 0xC21EB9.
    case 0xC21EBB: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EBC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EBE: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EC0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:92 BRANCHLTEQS @UNKNOWN5
    case 0xC21EC2: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:93 LDY #$0003
    case 0xC21EC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:93 LDY #$0003
    // Overlapping static entry reached from 0xC21EC4.
    case 0xC21EC6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:94 STY @LOCAL01
    case 0xC21EC7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:95 BRA @UNKNOWN6
    case 0xC21EC9: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/calc_resistances.asm:97 LDA @LOCAL00
    case 0xC21ECB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:98 TAY
    case 0xC21ECD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:99 STY @LOCAL01
    case 0xC21ECE: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:101 LDX @LOCAL02
    case 0xC21ED0: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:102 TXA
    case 0xC21ED2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21ED3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21ED3.
    case 0xC21ED5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:104 JSL MULT168
    case 0xC21ED6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:105 STA @LOCAL00
    case 0xC21EDA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:106 TAX
    case 0xC21EDC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:107 LDY @LOCAL01
    case 0xC21EDD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:108 TYA
    case 0xC21EDF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EE0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:110 STA PARTY_CHARACTERS+char_struct::fire_resist,X
    case 0xC21EE2: cpu.execute_instruction<0x9D>(0x009A20, 3); return true;
    // src/battle/calc_resistances.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC21EE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:112 LDA @LOCAL00
    case 0xC21EE7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:113 TAX
    case 0xC21EE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:114 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21EEA: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/battle/calc_resistances.asm:115 AND #$00FF
    case 0xC21EED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC21EED.
    case 0xC21EEF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:116 TAY
    case 0xC21EF0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:117 BEQ @UNKNOWN7
    case 0xC21EF1: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/battle/calc_resistances.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC21EF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:119 LDA #$0002
    case 0xC21EF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x004802, 3); return true;
    // src/battle/calc_resistances.asm:120 PHA
    case 0xC21EF7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:121 REP #PROC_FLAGS::ACCUM8
    case 0xC21EF8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:122 TYA
    case 0xC21EFA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:123 DEC
    case 0xC21EFB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:124 STA @VIRTUAL02
    case 0xC21EFC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:125 LDA @LOCAL00
    case 0xC21EFE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:126 CLC
    case 0xC21F00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21F01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:127 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21F01.
    case 0xC21F03: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:128 CLC
    case 0xC21F04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    case 0xC21F05: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:129 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21F03.
    case 0xC21F06: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:130 TAX
    case 0xC21F07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:131 LDA __BSS_START__,X
    case 0xC21F08: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:132 AND #$00FF
    case 0xC21F0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC21F0B.
    case 0xC21F0D: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21F0E.
    case 0xC21F10: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F11: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:134 CLC
    case 0xC21F15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    case 0xC21F16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:135 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F16.
    case 0xC21F18: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:136 TAX
    case 0xC21F19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F1A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:138 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F1C: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC21F20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:140 SEC
    case 0xC21F22: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:141 AND #$00FF
    case 0xC21F23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC21F23.
    case 0xC21F25: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:142 SBC #$0080
    case 0xC21F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:142 SBC #$0080
    // Overlapping static entry reached from 0xC21F26.
    case 0xC21F28: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    case 0xC21F29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:143 EOR #$FF80
    // Overlapping static entry reached from 0xC21F29.
    case 0xC21F2B: cpu.execute_instruction<0xFF>(0x000C29, 4); return true;
    // src/battle/calc_resistances.asm:144 AND #$000C
    case 0xC21F2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/battle/calc_resistances.asm:144 AND #$000C
    // Overlapping static entry reached from 0xC21F2C.
    case 0xC21F2E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:145 SEP #PROC_FLAGS::INDEX8
    case 0xC21F2F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:146 PLY
    case 0xC21F31: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:147 JSL ASR16
    case 0xC21F32: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_resistances.asm:148 BRA @UNKNOWN8
    case 0xC21F36: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:150 LDA #$0000
    case 0xC21F38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:150 LDA #$0000
    // Overlapping static entry reached from 0xC21F38.
    case 0xC21F3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:152 STA @LOCAL00
    case 0xC21F3B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:153 REP #PROC_FLAGS::INDEX8
    case 0xC21F3D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:154 LDX @LOCAL02
    case 0xC21F3F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:155 TXA
    case 0xC21F41: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    case 0xC21F42: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:156 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21F42.
    case 0xC21F44: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:157 JSL MULT168
    case 0xC21F45: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:158 STA @VIRTUAL02
    case 0xC21F49: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:159 LDX @VIRTUAL02
    case 0xC21F4B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:160 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC21F4D: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/battle/calc_resistances.asm:161 AND #$00FF
    case 0xC21F50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:161 AND #$00FF
    // Overlapping static entry reached from 0xC21F50.
    case 0xC21F52: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:162 TAY
    case 0xC21F53: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:163 BEQ @UNKNOWN9
    case 0xC21F54: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/battle/calc_resistances.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F56: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:165 LDA #$0002
    case 0xC21F58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x004802, 3); return true;
    // src/battle/calc_resistances.asm:166 PHA
    case 0xC21F5A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC21F5B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:168 TYA
    case 0xC21F5D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:169 DEC
    case 0xC21F5E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:170 STA @VIRTUAL04
    case 0xC21F5F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:171 LDA @VIRTUAL02
    case 0xC21F61: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:172 CLC
    case 0xC21F63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:173 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21F64.
    case 0xC21F66: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:174 CLC
    case 0xC21F67: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    case 0xC21F68: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:175 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC21F66.
    case 0xC21F69: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:176 TAX
    case 0xC21F6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:177 LDA __BSS_START__,X
    case 0xC21F6B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:178 AND #$00FF
    case 0xC21F6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC21F6E.
    case 0xC21F70: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21F71.
    case 0xC21F73: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21F74: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:180 CLC
    case 0xC21F78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    case 0xC21F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:181 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC21F79.
    case 0xC21F7B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:182 TAX
    case 0xC21F7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC21F7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:184 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC21F7F: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC21F83: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:186 SEC
    case 0xC21F85: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:187 AND #$00FF
    case 0xC21F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:187 AND #$00FF
    // Overlapping static entry reached from 0xC21F86.
    case 0xC21F88: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:188 SBC #$0080
    case 0xC21F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:188 SBC #$0080
    // Overlapping static entry reached from 0xC21F89.
    case 0xC21F8B: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    case 0xC21F8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:189 EOR #$FF80
    // Overlapping static entry reached from 0xC21F8C.
    case 0xC21F8E: cpu.execute_instruction<0xFF>(0x000C29, 4); return true;
    // src/battle/calc_resistances.asm:190 AND #$000C
    case 0xC21F8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/battle/calc_resistances.asm:190 AND #$000C
    // Overlapping static entry reached from 0xC21F8F.
    case 0xC21F91: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:191 SEP #PROC_FLAGS::INDEX8
    case 0xC21F92: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:192 PLY
    case 0xC21F94: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:193 JSL ASR16
    case 0xC21F95: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_resistances.asm:194 STA @VIRTUAL02
    case 0xC21F99: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:195 LDA @LOCAL00
    case 0xC21F9B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:196 CLC
    case 0xC21F9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:197 ADC @VIRTUAL02
    case 0xC21F9E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:198 STA @LOCAL00
    case 0xC21FA0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:200 LDA @LOCAL00
    case 0xC21FA2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:201 CLC
    case 0xC21FA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:202 SBC #$0003
    case 0xC21FA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:202 SBC #$0003
    // Overlapping static entry reached from 0xC21FA5.
    case 0xC21FA7: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FA8: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FAA: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FAC: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:203 BRANCHLTEQS @UNKNOWN12
    case 0xC21FAE: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/battle/calc_resistances.asm:204 REP #PROC_FLAGS::INDEX8
    case 0xC21FB0: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:205 LDY #$0003
    case 0xC21FB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:205 LDY #$0003
    // Overlapping static entry reached from 0xC21FB2.
    case 0xC21FB4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:206 STY @LOCAL01
    case 0xC21FB5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:207 BRA @UNKNOWN13
    case 0xC21FB7: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:209 LDA @LOCAL00
    case 0xC21FB9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:210 REP #PROC_FLAGS::INDEX8
    case 0xC21FBB: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:211 TAY
    case 0xC21FBD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:212 STY @LOCAL01
    case 0xC21FBE: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:214 LDX @LOCAL02
    case 0xC21FC0: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:215 TXA
    case 0xC21FC2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    case 0xC21FC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:216 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21FC3.
    case 0xC21FC5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:217 JSL MULT168
    case 0xC21FC6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:218 STA @LOCAL00
    case 0xC21FCA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:219 TAX
    case 0xC21FCC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:220 LDY @LOCAL01
    case 0xC21FCD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:221 TYA
    case 0xC21FCF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:223 STA PARTY_CHARACTERS+char_struct::freeze_resist,X
    case 0xC21FD2: cpu.execute_instruction<0x9D>(0x009A21, 3); return true;
    // src/battle/calc_resistances.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC21FD5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:225 LDA @LOCAL00
    case 0xC21FD7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:226 TAX
    case 0xC21FD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:227 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC21FDA: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/battle/calc_resistances.asm:228 AND #$00FF
    case 0xC21FDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC21FDD.
    case 0xC21FDF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:229 TAY
    case 0xC21FE0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:230 BEQ @UNKNOWN14
    case 0xC21FE1: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/battle/calc_resistances.asm:231 SEP #PROC_FLAGS::ACCUM8
    case 0xC21FE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:232 LDA #$0004
    case 0xC21FE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x004804, 3); return true;
    // src/battle/calc_resistances.asm:233 PHA
    case 0xC21FE7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:234 REP #PROC_FLAGS::ACCUM8
    case 0xC21FE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:235 TYA
    case 0xC21FEA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:236 DEC
    case 0xC21FEB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:237 STA @VIRTUAL02
    case 0xC21FEC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:238 LDA @LOCAL00
    case 0xC21FEE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:239 CLC
    case 0xC21FF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC21FF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:240 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC21FF1.
    case 0xC21FF3: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:241 CLC
    case 0xC21FF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    case 0xC21FF5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:242 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC21FF3.
    case 0xC21FF6: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:243 TAX
    case 0xC21FF7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:244 LDA __BSS_START__,X
    case 0xC21FF8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:245 AND #$00FF
    case 0xC21FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:245 AND #$00FF
    // Overlapping static entry reached from 0xC21FFB.
    case 0xC21FFD: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC21FFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC21FFE.
    case 0xC22000: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22001: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:246 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2C691.
    case 0xC22003: cpu.execute_instruction<0x8F>(0x6918C0, 4); return true;
    // src/battle/calc_resistances.asm:247 CLC
    case 0xC22005: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    case 0xC22006: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22003.
    case 0xC22007: cpu.execute_instruction<0x22>(0xE2AA00, 4); return true;
    // src/battle/calc_resistances.asm:248 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22006.
    case 0xC22008: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:249 TAX
    case 0xC22009: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC2200A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:250 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC22007.
    case 0xC2200B: cpu.execute_instruction<0x20>(0x0000BF, 3); return true;
    // src/battle/calc_resistances.asm:251 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2200C: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:251 LDA f:ITEM_CONFIGURATION_TABLE,X
    // Overlapping static entry reached from 0xC2200B.
    case 0xC2200E: cpu.execute_instruction<0x50>(0x0000D5, 2); return true;
    // src/battle/calc_resistances.asm:252 REP #PROC_FLAGS::ACCUM8
    case 0xC22010: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:253 SEC
    case 0xC22012: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:254 AND #$00FF
    case 0xC22013: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC22013.
    case 0xC22015: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:255 SBC #$0080
    case 0xC22016: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:255 SBC #$0080
    // Overlapping static entry reached from 0xC22016.
    case 0xC22018: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    case 0xC22019: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:256 EOR #$FF80
    // Overlapping static entry reached from 0xC22019.
    case 0xC2201B: cpu.execute_instruction<0xFF>(0x003029, 4); return true;
    // src/battle/calc_resistances.asm:257 AND #$0030
    case 0xC2201C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/battle/calc_resistances.asm:257 AND #$0030
    // Overlapping static entry reached from 0xC2201C.
    case 0xC2201E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:258 SEP #PROC_FLAGS::INDEX8
    case 0xC2201F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:259 PLY
    case 0xC22021: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:260 JSL ASR16
    case 0xC22022: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_resistances.asm:261 BRA @UNKNOWN15
    case 0xC22026: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:263 LDA #$0000
    case 0xC22028: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:263 LDA #$0000
    // Overlapping static entry reached from 0xC22028.
    case 0xC2202A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:265 STA @LOCAL00
    case 0xC2202B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:266 REP #PROC_FLAGS::INDEX8
    case 0xC2202D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:267 LDX @LOCAL02
    case 0xC2202F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:268 TXA
    case 0xC22031: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    case 0xC22032: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:269 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22032.
    case 0xC22034: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:270 JSL MULT168
    case 0xC22035: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:271 STA @VIRTUAL02
    case 0xC22039: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:272 LDX @VIRTUAL02
    case 0xC2203B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:273 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC2203D: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/battle/calc_resistances.asm:274 AND #$00FF
    case 0xC22040: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:274 AND #$00FF
    // Overlapping static entry reached from 0xC22040.
    case 0xC22042: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:275 TAY
    case 0xC22043: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:276 BEQ @UNKNOWN16
    case 0xC22044: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/battle/calc_resistances.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC22046: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:278 LDA #$0004
    case 0xC22048: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x004804, 3); return true;
    // src/battle/calc_resistances.asm:279 PHA
    case 0xC2204A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:280 REP #PROC_FLAGS::ACCUM8
    case 0xC2204B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:281 TYA
    case 0xC2204D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:282 DEC
    case 0xC2204E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:283 STA @VIRTUAL04
    case 0xC2204F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:284 LDA @VIRTUAL02
    case 0xC22051: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:285 CLC
    case 0xC22053: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC22054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:286 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC22054.
    case 0xC22056: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:287 CLC
    case 0xC22057: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    case 0xC22058: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:288 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC22056.
    case 0xC22059: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:289 TAX
    case 0xC2205A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:290 LDA __BSS_START__,X
    case 0xC2205B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:291 AND #$00FF
    case 0xC2205E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC2205E.
    case 0xC22060: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22061: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC22061.
    case 0xC22063: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:292 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22064: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:293 CLC
    case 0xC22068: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    case 0xC22069: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:294 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22069.
    case 0xC2206B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:295 TAX
    case 0xC2206C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:296 SEP #PROC_FLAGS::ACCUM8
    case 0xC2206D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:297 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2206F: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:298 REP #PROC_FLAGS::ACCUM8
    case 0xC22073: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:299 SEC
    case 0xC22075: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:300 AND #$00FF
    case 0xC22076: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:300 AND #$00FF
    // Overlapping static entry reached from 0xC22076.
    case 0xC22078: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:301 SBC #$0080
    case 0xC22079: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:301 SBC #$0080
    // Overlapping static entry reached from 0xC22079.
    case 0xC2207B: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    case 0xC2207C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:302 EOR #$FF80
    // Overlapping static entry reached from 0xC2207C.
    case 0xC2207E: cpu.execute_instruction<0xFF>(0x003029, 4); return true;
    // src/battle/calc_resistances.asm:303 AND #$0030
    case 0xC2207F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/battle/calc_resistances.asm:303 AND #$0030
    // Overlapping static entry reached from 0xC2207F.
    case 0xC22081: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:304 SEP #PROC_FLAGS::INDEX8
    case 0xC22082: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:305 PLY
    case 0xC22084: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:306 JSL ASR16
    case 0xC22085: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_resistances.asm:307 STA @VIRTUAL02
    case 0xC22089: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:308 LDA @LOCAL00
    case 0xC2208B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:309 CLC
    case 0xC2208D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:310 ADC @VIRTUAL02
    case 0xC2208E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:311 STA @LOCAL00
    case 0xC22090: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:313 LDA @LOCAL00
    case 0xC22092: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:314 CLC
    case 0xC22094: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:315 SBC #$0003
    case 0xC22095: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:315 SBC #$0003
    // Overlapping static entry reached from 0xC22095.
    case 0xC22097: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC22098: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC2209A: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC2209C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:316 BRANCHLTEQS @UNKNOWN19
    case 0xC2209E: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/battle/calc_resistances.asm:317 REP #PROC_FLAGS::INDEX8
    case 0xC220A0: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:318 LDY #$0003
    case 0xC220A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:318 LDY #$0003
    // Overlapping static entry reached from 0xC220A2.
    case 0xC220A4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:319 STY @LOCAL01
    case 0xC220A5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:320 BRA @UNKNOWN20
    case 0xC220A7: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:322 LDA @LOCAL00
    case 0xC220A9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:323 REP #PROC_FLAGS::INDEX8
    case 0xC220AB: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:324 TAY
    case 0xC220AD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:325 STY @LOCAL01
    case 0xC220AE: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:327 LDX @LOCAL02
    case 0xC220B0: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:328 TXA
    case 0xC220B2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    case 0xC220B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:329 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC220B3.
    case 0xC220B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:330 JSL MULT168
    case 0xC220B6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:331 STA @LOCAL00
    case 0xC220BA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:332 TAX
    case 0xC220BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:333 LDY @LOCAL01
    case 0xC220BD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:334 TYA
    case 0xC220BF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:335 SEP #PROC_FLAGS::ACCUM8
    case 0xC220C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:336 STA PARTY_CHARACTERS+char_struct::flash_resist,X
    case 0xC220C2: cpu.execute_instruction<0x9D>(0x009A22, 3); return true;
    // src/battle/calc_resistances.asm:337 REP #PROC_FLAGS::ACCUM8
    case 0xC220C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:338 LDA @LOCAL00
    case 0xC220C7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:339 TAX
    case 0xC220C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:340 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC220CA: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/battle/calc_resistances.asm:341 AND #$00FF
    case 0xC220CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC220CD.
    case 0xC220CF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:342 TAY
    case 0xC220D0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:343 BEQ @UNKNOWN21
    case 0xC220D1: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/battle/calc_resistances.asm:344 SEP #PROC_FLAGS::ACCUM8
    case 0xC220D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:345 LDA #$0006
    case 0xC220D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x004806, 3); return true;
    // src/battle/calc_resistances.asm:346 PHA
    case 0xC220D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:347 REP #PROC_FLAGS::ACCUM8
    case 0xC220D8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:348 TYA
    case 0xC220DA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:349 DEC
    case 0xC220DB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:350 STA @VIRTUAL02
    case 0xC220DC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:351 LDA @LOCAL00
    case 0xC220DE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:352 CLC
    case 0xC220E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC220E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC2D23F.
    case 0xC220E2: cpu.execute_instruction<0xF1>(0x000099, 2); return true;
    // src/battle/calc_resistances.asm:353 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC220E1.
    case 0xC220E3: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:354 CLC
    case 0xC220E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    case 0xC220E5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:355 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC220E3.
    case 0xC220E6: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:356 TAX
    case 0xC220E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:357 LDA __BSS_START__,X
    case 0xC220E8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:358 AND #$00FF
    case 0xC220EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:358 AND #$00FF
    // Overlapping static entry reached from 0xC220EB.
    case 0xC220ED: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC220EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC220EE.
    case 0xC220F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:359 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC220F1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:360 CLC
    case 0xC220F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    case 0xC220F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:361 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC220F6.
    case 0xC220F8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:362 TAX
    case 0xC220F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:363 SEP #PROC_FLAGS::ACCUM8
    case 0xC220FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:364 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC220FC: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:365 REP #PROC_FLAGS::ACCUM8
    case 0xC22100: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:366 SEC
    case 0xC22102: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:367 AND #$00FF
    case 0xC22103: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:367 AND #$00FF
    // Overlapping static entry reached from 0xC22103.
    case 0xC22105: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:368 SBC #$0080
    case 0xC22106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:368 SBC #$0080
    // Overlapping static entry reached from 0xC22106.
    case 0xC22108: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    case 0xC22109: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:369 EOR #$FF80
    // Overlapping static entry reached from 0xC22109.
    case 0xC2210B: cpu.execute_instruction<0xFF>(0x00C029, 4); return true;
    // src/battle/calc_resistances.asm:370 AND #$00C0
    case 0xC2210C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/battle/calc_resistances.asm:370 AND #$00C0
    // Overlapping static entry reached from 0xC2210C.
    case 0xC2210E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:371 SEP #PROC_FLAGS::INDEX8
    case 0xC2210F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:372 PLY
    case 0xC22111: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:373 JSL ASR16
    case 0xC22112: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_resistances.asm:374 BRA @UNKNOWN22
    case 0xC22116: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/calc_resistances.asm:376 LDA #$0000
    case 0xC22118: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:376 LDA #$0000
    // Overlapping static entry reached from 0xC22118.
    case 0xC2211A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:378 STA @LOCAL00
    case 0xC2211B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:379 REP #PROC_FLAGS::INDEX8
    case 0xC2211D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:380 LDX @LOCAL02
    case 0xC2211F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:381 TXA
    case 0xC22121: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    case 0xC22122: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:382 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22122.
    case 0xC22124: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:383 JSL MULT168
    case 0xC22125: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:384 STA @VIRTUAL02
    case 0xC22129: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:385 LDX @VIRTUAL02
    case 0xC2212B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:386 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC2212D: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/battle/calc_resistances.asm:387 AND #$00FF
    case 0xC22130: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC22130.
    case 0xC22132: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:388 TAY
    case 0xC22133: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:389 BEQ @UNKNOWN23
    case 0xC22134: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/battle/calc_resistances.asm:390 SEP #PROC_FLAGS::ACCUM8
    case 0xC22136: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:391 LDA #$0006
    case 0xC22138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x004806, 3); return true;
    // src/battle/calc_resistances.asm:392 PHA
    case 0xC2213A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:393 REP #PROC_FLAGS::ACCUM8
    case 0xC2213B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:394 TYA
    case 0xC2213D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:395 DEC
    case 0xC2213E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:396 STA @VIRTUAL04
    case 0xC2213F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:397 LDA @VIRTUAL02
    case 0xC22141: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:398 CLC
    case 0xC22143: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC22144: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:399 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC22144.
    case 0xC22146: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:400 CLC
    case 0xC22147: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    case 0xC22148: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/calc_resistances.asm:401 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC22146.
    case 0xC22149: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:402 TAX
    case 0xC2214A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:403 LDA __BSS_START__,X
    case 0xC2214B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:404 AND #$00FF
    case 0xC2214E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:404 AND #$00FF
    // Overlapping static entry reached from 0xC2214E.
    case 0xC22150: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22151: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC22151.
    case 0xC22153: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:405 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22154: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:406 CLC
    case 0xC22158: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    case 0xC22159: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:407 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC22159.
    case 0xC2215B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:408 TAX
    case 0xC2215C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:409 SEP #PROC_FLAGS::ACCUM8
    case 0xC2215D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:410 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2215F: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:411 REP #PROC_FLAGS::ACCUM8
    case 0xC22163: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:412 SEC
    case 0xC22165: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:413 AND #$00FF
    case 0xC22166: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC22166.
    case 0xC22168: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:414 SBC #$0080
    case 0xC22169: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:414 SBC #$0080
    // Overlapping static entry reached from 0xC22169.
    case 0xC2216B: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    case 0xC2216C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:415 EOR #$FF80
    // Overlapping static entry reached from 0xC2216C.
    case 0xC2216E: cpu.execute_instruction<0xFF>(0x00C029, 4); return true;
    // src/battle/calc_resistances.asm:416 AND #$00C0
    case 0xC2216F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/battle/calc_resistances.asm:416 AND #$00C0
    // Overlapping static entry reached from 0xC2216F.
    case 0xC22171: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/battle/calc_resistances.asm:417 SEP #PROC_FLAGS::INDEX8
    case 0xC22172: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:418 PLY
    case 0xC22174: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:419 JSL ASR16
    case 0xC22175: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/battle/calc_resistances.asm:420 STA @VIRTUAL02
    case 0xC22179: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:421 LDA @LOCAL00
    case 0xC2217B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:422 CLC
    case 0xC2217D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:423 ADC @VIRTUAL02
    case 0xC2217E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:424 STA @LOCAL00
    case 0xC22180: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:426 LDA @LOCAL00
    case 0xC22182: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:427 CLC
    case 0xC22184: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:428 SBC #$0003
    case 0xC22185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000003, 2); else cpu.execute_instruction<0xE9>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:428 SBC #$0003
    // Overlapping static entry reached from 0xC22185.
    case 0xC22187: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC22188: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2218A: cpu.execute_instruction<0x10>(0x00000D, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2218C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/calc_resistances.asm:429 BRANCHLTEQS @UNKNOWN26
    case 0xC2218E: cpu.execute_instruction<0x30>(0x000009, 2); return true;
    // src/battle/calc_resistances.asm:430 REP #PROC_FLAGS::INDEX8
    case 0xC22190: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:431 LDY #$0003
    case 0xC22192: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/calc_resistances.asm:431 LDY #$0003
    // Overlapping static entry reached from 0xC22192.
    case 0xC22194: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/calc_resistances.asm:432 STY @LOCAL01
    case 0xC22195: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:433 BRA @UNKNOWN27
    case 0xC22197: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/battle/calc_resistances.asm:435 LDA @LOCAL00
    case 0xC22199: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:436 REP #PROC_FLAGS::INDEX8
    case 0xC2219B: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:437 TAY
    case 0xC2219D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:438 STY @LOCAL01
    case 0xC2219E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:440 LDX @LOCAL02
    case 0xC221A0: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:441 TXA
    case 0xC221A2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    case 0xC221A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:442 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC221A3.
    case 0xC221A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:443 JSL MULT168
    case 0xC221A6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:443 JSL MULT168
    // Overlapping static entry reached from 0xC232B4.
    case 0xC221A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // src/battle/calc_resistances.asm:444 STA @LOCAL00
    case 0xC221AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:444 STA @LOCAL00
    // Overlapping static entry reached from 0xC221A9.
    case 0xC221AB: cpu.execute_instruction<0x0E>(0x00A4AA, 3); return true;
    // src/battle/calc_resistances.asm:445 TAX
    case 0xC221AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:446 LDY @LOCAL01
    case 0xC221AD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:446 LDY @LOCAL01
    // Overlapping static entry reached from 0xC221AB.
    case 0xC221AE: cpu.execute_instruction<0x10>(0x000098, 2); return true;
    // src/battle/calc_resistances.asm:447 TYA
    case 0xC221AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:448 SEP #PROC_FLAGS::ACCUM8
    case 0xC221B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:449 STA PARTY_CHARACTERS+char_struct::paralysis_resist,X
    case 0xC221B2: cpu.execute_instruction<0x9D>(0x009A23, 3); return true;
    // src/battle/calc_resistances.asm:450 REP #PROC_FLAGS::ACCUM8
    case 0xC221B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:451 LDA @LOCAL00
    case 0xC221B7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:452 TAX
    case 0xC221B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:453 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC221BA: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/battle/calc_resistances.asm:454 AND #$00FF
    case 0xC221BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:454 AND #$00FF
    // Overlapping static entry reached from 0xC221BD.
    case 0xC221BF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/calc_resistances.asm:455 TAY
    case 0xC221C0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:456 BEQ @UNKNOWN28
    case 0xC221C1: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/calc_resistances.asm:457 TYA
    case 0xC221C3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:458 DEC
    case 0xC221C4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:459 STA @VIRTUAL02
    case 0xC221C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:460 LDA @LOCAL00
    case 0xC221C7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/calc_resistances.asm:461 CLC
    case 0xC221C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC221CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/battle/calc_resistances.asm:462 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC221CA.
    case 0xC221CC: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/battle/calc_resistances.asm:463 CLC
    case 0xC221CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    case 0xC221CE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/calc_resistances.asm:464 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC221CC.
    case 0xC221CF: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:465 TAX
    case 0xC221D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:466 LDA __BSS_START__,X
    case 0xC221D1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:467 AND #$00FF
    case 0xC221D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:467 AND #$00FF
    // Overlapping static entry reached from 0xC221D4.
    case 0xC221D6: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC221D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC221D7.
    case 0xC221D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/calc_resistances.asm:468 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC221DA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:469 CLC
    case 0xC221DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    case 0xC221DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/battle/calc_resistances.asm:470 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC221DF.
    case 0xC221E1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/calc_resistances.asm:471 TAX
    case 0xC221E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC221E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:473 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC221E5: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/battle/calc_resistances.asm:474 REP #PROC_FLAGS::ACCUM8
    case 0xC221E9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:475 SEC
    case 0xC221EB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:476 AND #$00FF
    case 0xC221EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/calc_resistances.asm:476 AND #$00FF
    // Overlapping static entry reached from 0xC221EC.
    case 0xC221EE: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/battle/calc_resistances.asm:477 SBC #$0080
    case 0xC221EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/calc_resistances.asm:477 SBC #$0080
    // Overlapping static entry reached from 0xC221EF.
    case 0xC221F1: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    case 0xC221F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/battle/calc_resistances.asm:478 EOR #$FF80
    // Overlapping static entry reached from 0xC221F2.
    case 0xC221F4: cpu.execute_instruction<0xFF>(0x801085, 4); return true;
    // src/battle/calc_resistances.asm:479 STA @LOCAL01
    case 0xC221F5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    case 0xC221F7: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/calc_resistances.asm:480 BRA @UNKNOWN29
    // Overlapping static entry reached from 0xC221F4.
    case 0xC221F8: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/battle/calc_resistances.asm:482 LDA #$0000
    case 0xC221F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC221F8.
    case 0xC221FA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/calc_resistances.asm:482 LDA #$0000
    // Overlapping static entry reached from 0xC221F9.
    case 0xC221FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/calc_resistances.asm:483 STA @LOCAL01
    case 0xC221FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:485 LDX @LOCAL02
    case 0xC221FE: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/calc_resistances.asm:486 TXA
    case 0xC22200: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    case 0xC22201: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/calc_resistances.asm:487 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22201.
    case 0xC22203: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/calc_resistances.asm:488 JSL MULT168
    case 0xC22204: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/calc_resistances.asm:489 TAX
    case 0xC22208: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/calc_resistances.asm:490 LDA @LOCAL01
    case 0xC22209: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/battle/calc_resistances.asm:491 SEP #PROC_FLAGS::ACCUM8
    case 0xC2220B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/calc_resistances.asm:492 STA PARTY_CHARACTERS+char_struct::hypnosis_brainshock_resist,X
    case 0xC2220D: cpu.execute_instruction<0x9D>(0x009A24, 3); return true;
    // src/battle/calc_resistances.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC22210: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC22212: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/calc_resistances.asm:494 END_C_FUNCTION
    case 0xC22213: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/call_for_help_common.asm (source_named).
bool execute_battle_call_for_help_common_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/call_for_help_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2BD5E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD60: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD61: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD62: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BD63.
    case 0xC2BD65: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD66: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD67: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:20 STA @LOCAL0C
    case 0xC2BD68: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/call_for_help_common.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC2BD65.
    case 0xC2BD69: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:21 LDX CURRENT_ATTACKER
    case 0xC2BD6A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/call_for_help_common.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xC2BD6D: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/call_for_help_common.asm:23 AND #$00FF
    case 0xC2BD70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BD70.
    case 0xC2BD72: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:24 BEQ @UNKNOWN2
    case 0xC2BD73: cpu.execute_instruction<0xF0>(0x000051, 2); return true;
    // src/battle/call_for_help_common.asm:25 LDX CURRENT_ATTACKER
    case 0xC2BD75: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/battle/call_for_help_common.asm:26 LDA a:battler::current_action_argument,X
    case 0xC2BD78: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:27 AND #$00FF
    case 0xC2BD7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC2BD7B.
    case 0xC2BD7D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:28 STA @LOCAL0B
    case 0xC2BD7E: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD80.
    case 0xC2BD82: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD83: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD82.
    case 0xC2BD84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD85.
    case 0xC2BD87: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD88: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:30 LDA CURRENT_BATTLE_GROUP
    case 0xC2BD8A: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:32 CLC
    case 0xC2BD90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:33 ADC @VIRTUAL0A
    case 0xC2BD91: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:34 STA @VIRTUAL0A
    case 0xC2BD93: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BD95.
    case 0xC2BD97: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD98: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD9A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD9B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD9F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/battle/call_for_help_common.asm:36 BRA @UNKNOWN1
    case 0xC2BDA1: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/call_for_help_common.asm:38 LDY #$0001
    case 0xC2BDA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:38 LDY #$0001
    // Overlapping static entry reached from 0xC2BDA3.
    case 0xC2BDA5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/battle/call_for_help_common.asm:39 LDA [@VIRTUAL06],Y
    case 0xC2BDA6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:40 CMP @LOCAL0B
    case 0xC2BDA8: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:41 BEQ @UNKNOWN4
    case 0xC2BDAA: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/battle/call_for_help_common.asm:42 LDA #$0003
    case 0xC2BDAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/call_for_help_common.asm:42 LDA #$0003
    // Overlapping static entry reached from 0xC2BDAC.
    case 0xC2BDAE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:43 CLC
    case 0xC2BDAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:44 ADC @VIRTUAL06
    case 0xC2BDB0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:45 STA @VIRTUAL06
    case 0xC2BDB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDB4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDB6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDB8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDBA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:48 LDA [@VIRTUAL0A]
    case 0xC2BDBC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:49 AND #$00FF
    case 0xC2BDBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2BDBE.
    case 0xC2BDC0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:50 CMP #$00FF
    case 0xC2BDC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:50 CMP #$00FF
    // Overlapping static entry reached from 0xC2BDC1.
    case 0xC2BDC3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:51 BNE @UNKNOWN0
    case 0xC2BDC4: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/battle/call_for_help_common.asm:53 LDA @LOCAL0C
    case 0xC2BDC6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/call_for_help_common.asm:54 BEQ @UNKNOWN3
    case 0xC2BDC8: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BDCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x007830, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BDCA.
    case 0xC2BDCC: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BDCD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BDCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BDCF.
    case 0xC2BDD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BDD2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BDD4: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/call_for_help_common.asm:56 JMP @UNKNOWN33
    case 0xC2BDD8: cpu.execute_instruction<0x4C>(0x00C13A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BDDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007824, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BDDB.
    case 0xC2BDDD: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BDDE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BDE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BDE0.
    case 0xC2BDE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BDE3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BDE5: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/call_for_help_common.asm:59 JMP @UNKNOWN33
    case 0xC2BDE9: cpu.execute_instruction<0x4C>(0x00C13A, 3); return true;
    // src/battle/call_for_help_common.asm:61 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2BDEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AC, 2); else cpu.execute_instruction<0xA2>(0x009FAC, 3); return true;
    // src/battle/call_for_help_common.asm:61 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BDEC.
    case 0xC2BDEE: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    case 0xC2BDEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    // Overlapping static entry reached from 0xC2BDEF.
    case 0xC2BDF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:63 STA @LOCAL0A
    case 0xC2BDF2: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:64 LDY #$0008
    case 0xC2BDF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:64 LDY #$0008
    // Overlapping static entry reached from 0xC2BDF4.
    case 0xC2BDF6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/call_for_help_common.asm:65 BRA @UNKNOWN7
    case 0xC2BDF7: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/call_for_help_common.asm:67 LDA a:battler::consciousness,X
    case 0xC2BDF9: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:68 AND #$00FF
    case 0xC2BDFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC2BDFC.
    case 0xC2BDFE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:69 CMP #$0001
    case 0xC2BDFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:69 CMP #$0001
    // Overlapping static entry reached from 0xC2BDFF.
    case 0xC2BE01: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:70 BNE @UNKNOWN6
    case 0xC2BE02: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/battle/call_for_help_common.asm:71 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BE04: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/call_for_help_common.asm:72 AND #$00FF
    case 0xC2BE07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC2BE07.
    case 0xC2BE09: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:73 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BE0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:73 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BE0A.
    case 0xC2BE0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:74 BEQ @UNKNOWN6
    case 0xC2BE0D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:75 LDA a:battler::unknown76,X
    case 0xC2BE0F: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/battle/call_for_help_common.asm:76 CMP @LOCAL0B
    case 0xC2BE12: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:77 BNE @UNKNOWN6
    case 0xC2BE14: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/battle/call_for_help_common.asm:78 LDA @LOCAL0A
    case 0xC2BE16: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:79 INC
    case 0xC2BE18: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:80 STA @LOCAL0A
    case 0xC2BE19: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:82 TXA
    case 0xC2BE1B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:83 CLC
    case 0xC2BE1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:84 ADC #.SIZEOF(battler)
    case 0xC2BE1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:84 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BE1D.
    case 0xC2BE1F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/call_for_help_common.asm:85 TAX
    case 0xC2BE20: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:86 INY
    case 0xC2BE21: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:88 CPY #$0020
    case 0xC2BE22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:88 CPY #$0020
    // Overlapping static entry reached from 0xC2BE22.
    case 0xC2BE24: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/call_for_help_common.asm:89 BCC @UNKNOWN5
    case 0xC2BE25: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BE27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BE27.
    case 0xC2BE29: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BE2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BE29.
    case 0xC2BE2B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BE2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BE2B.
    case 0xC2BE2D: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BE2C.
    case 0xC2BE2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BE2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/call_for_help_common.asm:91 LDA @LOCAL0B
    case 0xC2BE31: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:92 LDY #.SIZEOF(enemy_data)
    case 0xC2BE33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/call_for_help_common.asm:92 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2BE33.
    case 0xC2BE35: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:93 JSL MULT168
    case 0xC2BE36: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/call_for_help_common.asm:94 TAX
    case 0xC2BE3A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:95 STX @LOCAL09
    case 0xC2BE3B: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:96 TXA
    case 0xC2BE3D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:97 CLC
    case 0xC2BE3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:98 ADC #enemy_data::max_called
    case 0xC2BE3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00005C, 3); return true;
    // src/battle/call_for_help_common.asm:98 ADC #enemy_data::max_called
    // Overlapping static entry reached from 0xC2BE3F.
    case 0xC2BE41: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE42: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE44: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE46: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE48: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:100 CLC
    case 0xC2BE4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:101 ADC @VIRTUAL0A
    case 0xC2BE4B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:102 STA @VIRTUAL0A
    case 0xC2BE4D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:103 LDA [@VIRTUAL0A]
    case 0xC2BE4F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:104 AND #$00FF
    case 0xC2BE51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC2BE51.
    case 0xC2BE53: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/call_for_help_common.asm:105 TAY
    case 0xC2BE54: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:106 STY @LOCAL08
    case 0xC2BE55: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:107 LDA @LOCAL0A
    case 0xC2BE57: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:108 STA @VIRTUAL02
    case 0xC2BE59: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:109 TYA
    case 0xC2BE5B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:110 SEC
    case 0xC2BE5C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:111 SBC @VIRTUAL02
    case 0xC2BE5D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:112 LDY #$00CD
    case 0xC2BE5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CD, 2); else cpu.execute_instruction<0xA0>(0x0000CD, 3); return true;
    // src/battle/call_for_help_common.asm:112 LDY #$00CD
    // Overlapping static entry reached from 0xC2BE5F.
    case 0xC2BE61: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:113 JSL MULT168
    case 0xC2BE62: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/call_for_help_common.asm:114 LDY @LOCAL08
    case 0xC2BE66: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2BE68: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/battle/call_for_help_common.asm:116 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BE6C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:117 JSR SUCCESS_255
    case 0xC2BE6E: cpu.execute_instruction<0x20>(0x006BB8, 3); return true;
    // src/battle/call_for_help_common.asm:119 CMP #$0000
    case 0xC2BE71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:119 CMP #$0000
    // Overlapping static entry reached from 0xC2BE71.
    case 0xC2BE73: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/call_for_help_common.asm:120 BEQL @UNKNOWN2
    case 0xC2BE74: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:120 BEQL @UNKNOWN2
    case 0xC2BE76: cpu.execute_instruction<0x4C>(0x00BDC6, 3); return true;
    // src/battle/call_for_help_common.asm:121 LDX @LOCAL09
    case 0xC2BE79: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:122 TXA
    case 0xC2BE7B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:123 CLC
    case 0xC2BE7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:124 ADC #enemy_data::battle_sprite
    case 0xC2BE7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/battle/call_for_help_common.asm:124 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2BE7D.
    case 0xC2BE7F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE80: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE82: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE84: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE86: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:126 CLC
    case 0xC2BE88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:127 ADC @VIRTUAL0A
    case 0xC2BE89: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:128 STA @VIRTUAL0A
    case 0xC2BE8B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:129 LDA [@VIRTUAL0A]
    case 0xC2BE8D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:130 STA @LOCAL08
    case 0xC2BE8F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:131 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE91: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:133 CLC
    case 0xC2BE97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:134 ADC #$0010
    case 0xC2BE98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:134 ADC #$0010
    // Overlapping static entry reached from 0xC2BE98.
    case 0xC2BE9A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:135 STA @LOCAL07
    case 0xC2BE9B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:136 LDX @LOCAL09
    case 0xC2BE9D: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:137 TXA
    case 0xC2BE9F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:138 CLC
    case 0xC2BEA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:139 ADC #enemy_data::row
    case 0xC2BEA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005B, 2); else cpu.execute_instruction<0x69>(0x00005B, 3); return true;
    // src/battle/call_for_help_common.asm:139 ADC #enemy_data::row
    // Overlapping static entry reached from 0xC2BEA1.
    case 0xC2BEA3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:140 CLC
    case 0xC2BEA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:141 ADC @VIRTUAL06
    case 0xC2BEA5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:142 STA @VIRTUAL06
    case 0xC2BEA7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:143 LDA [@VIRTUAL06]
    case 0xC2BEA9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/call_for_help_common.asm:144 AND #$00FF
    case 0xC2BEAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC2BEAB.
    case 0xC2BEAD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:145 STA @LOCAL06
    case 0xC2BEAE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:146 JSR UNKNOWN_C2BD13
    case 0xC2BEB0: cpu.execute_instruction<0x20>(0x00BD13, 3); return true;
    // src/battle/call_for_help_common.asm:147 TAX
    case 0xC2BEB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:148 STX @LOCAL05
    case 0xC2BEB4: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:149 LDA @LOCAL08
    case 0xC2BEB6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:150 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BEB8: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/battle/call_for_help_common.asm:151 STA @VIRTUAL02
    case 0xC2BEBB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:152 LDX @LOCAL05
    case 0xC2BEBD: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:153 TXA
    case 0xC2BEBF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:154 CLC
    case 0xC2BEC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:155 ADC @VIRTUAL02
    case 0xC2BEC1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:156 CMP #$0020
    case 0xC2BEC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:156 CMP #$0020
    // Overlapping static entry reached from 0xC2BEC3.
    case 0xC2BEC5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BEC6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BEC8: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BECA: cpu.execute_instruction<0x4C>(0x00BFF8, 3); return true;
    // src/battle/call_for_help_common.asm:158 LDA #$0080
    case 0xC2BECD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:158 LDA #$0080
    // Overlapping static entry reached from 0xC2BECD.
    case 0xC2BECF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:159 STA @LOCAL05
    case 0xC2BED0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:160 STA @LOCAL04
    case 0xC2BED2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:161 STA @VIRTUAL04
    case 0xC2BED4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:162 LDY @VIRTUAL04
    case 0xC2BED6: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:163 STY @LOCAL03
    case 0xC2BED8: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:164 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2BEDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00A21C, 3); return true;
    // src/battle/call_for_help_common.asm:164 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2BEDA.
    case 0xC2BEDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000086, 2); else cpu.execute_instruction<0xA2>(0x001486, 3); return true;
    // src/battle/call_for_help_common.asm:165 STX @LOCAL02
    case 0xC2BEDD: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:165 STX @LOCAL02
    // Overlapping static entry reached from 0xC2BEDC.
    case 0xC2BEDE: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    case 0xC2BEDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    // Overlapping static entry reached from 0xC2BEDE.
    case 0xC2BEE0: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    // Overlapping static entry reached from 0xC2BEDF.
    case 0xC2BEE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:167 STA @LOCAL09
    case 0xC2BEE2: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:168 BRA @UNKNOWN16
    case 0xC2BEE4: cpu.execute_instruction<0x80>(0x000077, 2); return true;
    // src/battle/call_for_help_common.asm:170 LDA a:battler::consciousness,X
    case 0xC2BEE6: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:171 AND #$00FF
    case 0xC2BEE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC2BEE9.
    case 0xC2BEEB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:172 BEQ @UNKNOWN15
    case 0xC2BEEC: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/battle/call_for_help_common.asm:173 LDA a:battler::sprite,X
    case 0xC2BEEE: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/call_for_help_common.asm:174 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BEF1: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEF6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:176 LSR
    case 0xC2BEF7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:177 STA @VIRTUAL02
    case 0xC2BEF8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:178 STA @LOCAL01
    case 0xC2BEFA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:179 LDX @LOCAL02
    case 0xC2BEFC: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:180 LDA a:battler::row,X
    case 0xC2BEFE: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:181 AND #$00FF
    case 0xC2BF01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC2BF01.
    case 0xC2BF03: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/battle/call_for_help_common.asm:182 CMP @LOCAL06
    case 0xC2BF04: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:183 BNE @UNKNOWN12
    case 0xC2BF06: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/battle/call_for_help_common.asm:184 LDA a:battler::sprite_x,X
    case 0xC2BF08: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:185 AND #$00FF
    case 0xC2BF0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:185 AND #$00FF
    // Overlapping static entry reached from 0xC2BF0B.
    case 0xC2BF0D: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:186 SEC
    case 0xC2BF0E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:187 SBC @VIRTUAL02
    case 0xC2BF0F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:188 LDY @LOCAL03
    case 0xC2BF11: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:189 STY @VIRTUAL02
    case 0xC2BF13: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:190 CMP @VIRTUAL02
    case 0xC2BF15: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:191 BCS @UNKNOWN11
    case 0xC2BF17: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/battle/call_for_help_common.asm:192 TAY
    case 0xC2BF19: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:193 STY @LOCAL03
    case 0xC2BF1A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:195 LDA @LOCAL01
    case 0xC2BF1C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:196 STA @VIRTUAL02
    case 0xC2BF1E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:197 LDA a:battler::sprite_x,X
    case 0xC2BF20: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:198 AND #$00FF
    case 0xC2BF23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:198 AND #$00FF
    // Overlapping static entry reached from 0xC2BF23.
    case 0xC2BF25: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:199 CLC
    case 0xC2BF26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:200 ADC @VIRTUAL02
    case 0xC2BF27: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:201 CMP @VIRTUAL04
    case 0xC2BF29: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:202 BLTEQ @UNKNOWN15
    case 0xC2BF2B: cpu.execute_instruction<0x90>(0x000026, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:202 BLTEQ @UNKNOWN15
    case 0xC2BF2D: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:203 STA @VIRTUAL04
    case 0xC2BF2F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:204 BRA @UNKNOWN15
    case 0xC2BF31: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:206 LDA a:battler::sprite_x,X
    case 0xC2BF33: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:207 AND #$00FF
    case 0xC2BF36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC2BF36.
    case 0xC2BF38: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:208 SEC
    case 0xC2BF39: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:209 SBC @VIRTUAL02
    case 0xC2BF3A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:210 CMP @LOCAL04
    case 0xC2BF3C: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:211 BCS @UNKNOWN13
    case 0xC2BF3E: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:212 STA @LOCAL04
    case 0xC2BF40: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:214 LDA a:battler::sprite_x,X
    case 0xC2BF42: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    case 0xC2BF45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    // Overlapping static entry reached from 0xC2BF9F.
    case 0xC2BF46: cpu.execute_instruction<0xFF>(0x651800, 4); return true;
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    // Overlapping static entry reached from 0xC2BF45.
    case 0xC2BF47: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:216 CLC
    case 0xC2BF48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:217 ADC @VIRTUAL02
    case 0xC2BF49: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:217 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2BF46.
    case 0xC2BF4A: cpu.execute_instruction<0x02>(0x0000C5, 2); return true;
    // src/battle/call_for_help_common.asm:218 CMP @LOCAL05
    case 0xC2BF4B: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:219 BLTEQ @UNKNOWN15
    case 0xC2BF4D: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:219 BLTEQ @UNKNOWN15
    case 0xC2BF4F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:220 STA @LOCAL05
    case 0xC2BF51: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:222 TXA
    case 0xC2BF53: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:223 CLC
    case 0xC2BF54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:224 ADC #.SIZEOF(battler)
    case 0xC2BF55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:224 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BF55.
    case 0xC2BF57: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/call_for_help_common.asm:225 TAX
    case 0xC2BF58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:226 STX @LOCAL02
    case 0xC2BF59: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:227 INC @LOCAL09
    case 0xC2BF5B: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:229 LDA @LOCAL09
    case 0xC2BF5D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:230 CMP #$0020
    case 0xC2BF5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:230 CMP #$0020
    // Overlapping static entry reached from 0xC2BF5F.
    case 0xC2BF61: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF62: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF64: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF66: cpu.execute_instruction<0x4C>(0x00BEE6, 3); return true;
    // src/battle/call_for_help_common.asm:232 LDA @VIRTUAL04
    case 0xC2BF69: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:233 SEC
    case 0xC2BF6B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:234 SBC #$0080
    case 0xC2BF6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:234 SBC #$0080
    // Overlapping static entry reached from 0xC2BF6C.
    case 0xC2BF6E: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/call_for_help_common.asm:235 PHA
    case 0xC2BF6F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:236 LDY @LOCAL03
    case 0xC2BF70: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:237 STY @VIRTUAL02
    case 0xC2BF72: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:238 LDA #$0080
    case 0xC2BF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:238 LDA #$0080
    // Overlapping static entry reached from 0xC2BF74.
    case 0xC2BF76: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:239 SEC
    case 0xC2BF77: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:240 SBC @VIRTUAL02
    case 0xC2BF78: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:241 PLX
    case 0xC2BF7A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:242 STX @VIRTUAL02
    case 0xC2BF7B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:243 CMP @VIRTUAL02
    case 0xC2BF7D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:244 BCS @UNKNOWN18
    case 0xC2BF7F: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/battle/call_for_help_common.asm:245 CPY @LOCAL07
    case 0xC2BF81: cpu.execute_instruction<0xC4>(0x00001E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:246 BLTEQ @UNKNOWN19
    case 0xC2BF83: cpu.execute_instruction<0x90>(0x00002B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:246 BLTEQ @UNKNOWN19
    case 0xC2BF85: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/call_for_help_common.asm:247 LDA @LOCAL07
    case 0xC2BF87: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:248 LSR
    case 0xC2BF89: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:249 STA @VIRTUAL02
    case 0xC2BF8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:250 TYA
    case 0xC2BF8C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:251 SEC
    case 0xC2BF8D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:252 SBC @VIRTUAL02
    case 0xC2BF8E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:253 TAY
    case 0xC2BF90: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:254 STY @LOCAL0A
    case 0xC2BF91: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:255 JMP @UNKNOWN25
    case 0xC2BF93: cpu.execute_instruction<0x4C>(0x00C071, 3); return true;
    // src/battle/call_for_help_common.asm:258 LDA @VIRTUAL04
    case 0xC2BF96: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:259 CLC
    case 0xC2BF98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:260 ADC @LOCAL07
    case 0xC2BF99: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:261 CMP #$0100
    case 0xC2BF9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/battle/call_for_help_common.asm:261 CMP #$0100
    // Overlapping static entry reached from 0xC2BF9B.
    case 0xC2BF9D: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/call_for_help_common.asm:262 BCS @UNKNOWN19
    case 0xC2BF9E: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/battle/call_for_help_common.asm:262 BCS @UNKNOWN19
    // Overlapping static entry reached from 0xC2BF9D.
    case 0xC2BF9F: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/battle/call_for_help_common.asm:263 LDA @LOCAL07
    case 0xC2BFA0: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:263 LDA @LOCAL07
    // Overlapping static entry reached from 0xC2BF9F.
    case 0xC2BFA1: cpu.execute_instruction<0x1E>(0x00854A, 3); return true;
    // src/battle/call_for_help_common.asm:264 LSR
    case 0xC2BFA2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:265 STA @VIRTUAL02
    case 0xC2BFA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:265 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2BFA1.
    case 0xC2BFA4: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/battle/call_for_help_common.asm:266 LDA @VIRTUAL04
    case 0xC2BFA5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:267 CLC
    case 0xC2BFA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:268 ADC @VIRTUAL02
    case 0xC2BFA8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:269 TAY
    case 0xC2BFAA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:270 STY @LOCAL0A
    case 0xC2BFAB: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:271 JMP @UNKNOWN25
    case 0xC2BFAD: cpu.execute_instruction<0x4C>(0x00C071, 3); return true;
    // src/battle/call_for_help_common.asm:273 LDA #$0001
    case 0xC2BFB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:273 LDA #$0001
    // Overlapping static entry reached from 0xC2BFB0.
    case 0xC2BFB2: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:274 SEC
    case 0xC2BFB3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:275 SBC @LOCAL06
    case 0xC2BFB4: cpu.execute_instruction<0xE5>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:276 STA @LOCAL06
    case 0xC2BFB6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:277 LDA @LOCAL05
    case 0xC2BFB8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:278 SEC
    case 0xC2BFBA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:279 SBC #$0080
    case 0xC2BFBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:279 SBC #$0080
    // Overlapping static entry reached from 0xC2BFBB.
    case 0xC2BFBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:280 STA @VIRTUAL02
    case 0xC2BFBE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:281 LDA #$0080
    case 0xC2BFC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/battle/call_for_help_common.asm:281 LDA #$0080
    // Overlapping static entry reached from 0xC2BFC0.
    case 0xC2BFC2: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/battle/call_for_help_common.asm:282 SEC
    case 0xC2BFC3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:283 SBC @LOCAL04
    case 0xC2BFC4: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:284 CMP @VIRTUAL02
    case 0xC2BFC6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:285 BCS @UNKNOWN20
    case 0xC2BFC8: cpu.execute_instruction<0xB0>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:286 LDA @LOCAL04
    case 0xC2BFCA: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:287 CMP @LOCAL07
    case 0xC2BFCC: cpu.execute_instruction<0xC5>(0x00001E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:288 BLTEQ @UNKNOWN21
    case 0xC2BFCE: cpu.execute_instruction<0x90>(0x000028, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:288 BLTEQ @UNKNOWN21
    case 0xC2BFD0: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:289 LDA @LOCAL07
    case 0xC2BFD2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:290 LSR
    case 0xC2BFD4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:291 STA @VIRTUAL02
    case 0xC2BFD5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:292 LDA @LOCAL04
    case 0xC2BFD7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/call_for_help_common.asm:293 SEC
    case 0xC2BFD9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:294 SBC @VIRTUAL02
    case 0xC2BFDA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:295 TAY
    case 0xC2BFDC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:296 STY @LOCAL0A
    case 0xC2BFDD: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:297 JMP @UNKNOWN25
    case 0xC2BFDF: cpu.execute_instruction<0x4C>(0x00C071, 3); return true;
    // src/battle/call_for_help_common.asm:299 LDA @LOCAL05
    case 0xC2BFE2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:300 CLC
    case 0xC2BFE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:301 ADC @LOCAL07
    case 0xC2BFE5: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:302 CMP #$0100
    case 0xC2BFE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/battle/call_for_help_common.asm:302 CMP #$0100
    // Overlapping static entry reached from 0xC2BFE7.
    case 0xC2BFE9: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/battle/call_for_help_common.asm:303 BCS @UNKNOWN21
    case 0xC2BFEA: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:303 BCS @UNKNOWN21
    // Overlapping static entry reached from 0xC2BFE9.
    case 0xC2BFEB: cpu.execute_instruction<0x0C>(0x001EA5, 3); return true;
    // src/battle/call_for_help_common.asm:304 LDA @LOCAL07
    case 0xC2BFEC: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/call_for_help_common.asm:305 LSR
    case 0xC2BFEE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:306 CLC
    case 0xC2BFEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:307 ADC @LOCAL05
    case 0xC2BFF0: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/battle/call_for_help_common.asm:308 TAY
    case 0xC2BFF2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:309 STY @LOCAL0A
    case 0xC2BFF3: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:310 JMP @UNKNOWN25
    case 0xC2BFF5: cpu.execute_instruction<0x4C>(0x00C071, 3); return true;
    // src/battle/call_for_help_common.asm:312 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2BFF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00A21C, 3); return true;
    // src/battle/call_for_help_common.asm:312 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2BFF8.
    case 0xC2BFFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000086, 2); else cpu.execute_instruction<0xA2>(0x001286, 3); return true;
    // src/battle/call_for_help_common.asm:313 STX @LOCAL01
    case 0xC2BFFB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:313 STX @LOCAL01
    // Overlapping static entry reached from 0xC2BFFA.
    case 0xC2BFFC: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    case 0xC2BFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    // Overlapping static entry reached from 0xC2BFFC.
    case 0xC2BFFE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    // Overlapping static entry reached from 0xC2BFFD.
    case 0xC2BFFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:315 STA @VIRTUAL02
    case 0xC2C000: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:316 BRA @UNKNOWN24
    case 0xC2C002: cpu.execute_instruction<0x80>(0x000063, 2); return true;
    // src/battle/call_for_help_common.asm:318 TXA
    case 0xC2C004: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:319 CLC
    case 0xC2C005: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:320 ADC #battler::consciousness
    case 0xC2C006: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:320 ADC #battler::consciousness
    // Overlapping static entry reached from 0xC2C006.
    case 0xC2C008: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/call_for_help_common.asm:321 TAY
    case 0xC2C009: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:322 STY @LOCAL02
    case 0xC2C00A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:323 LDA __BSS_START__,Y
    case 0xC2C00C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:324 AND #$00FF
    case 0xC2C00F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:324 AND #$00FF
    // Overlapping static entry reached from 0xC2C00F.
    case 0xC2C011: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:325 CMP #$0001
    case 0xC2C012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:325 CMP #$0001
    // Overlapping static entry reached from 0xC2C012.
    case 0xC2C014: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:326 BNE @UNKNOWN23
    case 0xC2C015: cpu.execute_instruction<0xD0>(0x000044, 2); return true;
    // src/battle/call_for_help_common.asm:327 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2C017: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/battle/call_for_help_common.asm:328 AND #$00FF
    case 0xC2C01A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC2C01A.
    case 0xC2C01C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/call_for_help_common.asm:329 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2C01D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/call_for_help_common.asm:329 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2C01D.
    case 0xC2C01F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/call_for_help_common.asm:330 BNE @UNKNOWN23
    case 0xC2C020: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/battle/call_for_help_common.asm:331 LDA @LOCAL08
    case 0xC2C022: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:332 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2C024: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/battle/call_for_help_common.asm:333 STA @VIRTUAL04
    case 0xC2C027: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:334 LDX @LOCAL01
    case 0xC2C029: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:335 LDA a:battler::sprite,X
    case 0xC2C02B: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/battle/call_for_help_common.asm:336 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2C02E: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/battle/call_for_help_common.asm:337 PHA
    case 0xC2C031: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:338 LDA @VIRTUAL04
    case 0xC2C032: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:339 PLY
    case 0xC2C034: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:340 STY @VIRTUAL04
    case 0xC2C035: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:341 CMP @VIRTUAL04
    case 0xC2C037: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/call_for_help_common.asm:342 BNE @UNKNOWN23
    case 0xC2C039: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C03B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:344 LDA #$0000
    case 0xC2C03D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A400, 3); return true;
    // src/battle/call_for_help_common.asm:345 LDY @LOCAL02 ;battler::consciousness
    case 0xC2C03F: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/battle/call_for_help_common.asm:345 LDY @LOCAL02 ;battler::consciousness
    // Overlapping static entry reached from 0xC2C03D.
    case 0xC2C040: cpu.execute_instruction<0x14>(0x000099, 2); return true;
    // src/battle/call_for_help_common.asm:346 STA __BSS_START__,Y
    case 0xC2C041: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/call_for_help_common.asm:346 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2C040.
    case 0xC2C042: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/call_for_help_common.asm:347 LDX @LOCAL01
    case 0xC2C044: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:348 REP #PROC_FLAGS::ACCUM8
    case 0xC2C046: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:349 LDA a:battler::sprite_x,X
    case 0xC2C048: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:350 AND #$00FF
    case 0xC2C04B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:350 AND #$00FF
    // Overlapping static entry reached from 0xC2C04B.
    case 0xC2C04D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/call_for_help_common.asm:351 TAY
    case 0xC2C04E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:352 STY @LOCAL0A
    case 0xC2C04F: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:353 LDA a:battler::row,X
    case 0xC2C051: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:354 AND #$00FF
    case 0xC2C054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:354 AND #$00FF
    // Overlapping static entry reached from 0xC2C054.
    case 0xC2C056: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:355 STA @LOCAL06
    case 0xC2C057: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:356 BRA @UNKNOWN25
    case 0xC2C059: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:358 LDX @LOCAL01
    case 0xC2C05B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:359 TXA
    case 0xC2C05D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:360 CLC
    case 0xC2C05E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:361 ADC #.SIZEOF(battler)
    case 0xC2C05F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:361 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C05F.
    case 0xC2C061: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/call_for_help_common.asm:362 TAX
    case 0xC2C062: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:363 STX @LOCAL01
    case 0xC2C063: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:364 INC @VIRTUAL02
    case 0xC2C065: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:366 LDA @VIRTUAL02
    case 0xC2C067: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:367 CMP #BATTLER_COUNT
    case 0xC2C069: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:367 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2C069.
    case 0xC2C06B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/call_for_help_common.asm:368 BCC @UNKNOWN22
    case 0xC2C06C: cpu.execute_instruction<0x90>(0x000096, 2); return true;
    // src/battle/call_for_help_common.asm:369 JMP @UNKNOWN2
    case 0xC2C06E: cpu.execute_instruction<0x4C>(0x00BDC6, 3); return true;
    // src/battle/call_for_help_common.asm:371 JSR UNKNOWN_C2BD13
    case 0xC2C071: cpu.execute_instruction<0x20>(0x00BD13, 3); return true;
    // src/battle/call_for_help_common.asm:372 TAX
    case 0xC2C074: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:373 STX @LOCAL09
    case 0xC2C075: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:374 LDA @LOCAL08
    case 0xC2C077: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:375 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2C079: cpu.execute_instruction<0x20>(0x00EFFD, 3); return true;
    // src/battle/call_for_help_common.asm:376 STA @VIRTUAL02
    case 0xC2C07C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:377 LDX @LOCAL09
    case 0xC2C07E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:378 TXA
    case 0xC2C080: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:379 CLC
    case 0xC2C081: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:380 ADC @VIRTUAL02
    case 0xC2C082: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/call_for_help_common.asm:381 CMP #$0020
    case 0xC2C084: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:381 CMP #$0020
    // Overlapping static entry reached from 0xC2C084.
    case 0xC2C086: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C087: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C089: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C08B: cpu.execute_instruction<0x4C>(0x00BDC6, 3); return true;
    // src/battle/call_for_help_common.asm:383 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C08E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00A21C, 3); return true;
    // src/battle/call_for_help_common.asm:383 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C08E.
    case 0xC2C090: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000085, 2); else cpu.execute_instruction<0xA2>(0x002285, 3); return true;
    // src/battle/call_for_help_common.asm:384 STA @LOCAL09
    case 0xC2C091: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:384 STA @LOCAL09
    // Overlapping static entry reached from 0xC2C090.
    case 0xC2C092: cpu.execute_instruction<0x22>(0x0008A2, 4); return true;
    // src/battle/call_for_help_common.asm:385 LDX #$0008
    case 0xC2C093: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/battle/call_for_help_common.asm:385 LDX #$0008
    // Overlapping static entry reached from 0xC2C093.
    case 0xC2C095: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/call_for_help_common.asm:386 STX @LOCAL08
    case 0xC2C096: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:387 BRA @UNKNOWN28
    case 0xC2C098: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/call_for_help_common.asm:389 TAX
    case 0xC2C09A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:390 LDA a:battler::consciousness,X
    case 0xC2C09B: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/call_for_help_common.asm:391 AND #$00FF
    case 0xC2C09E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:391 AND #$00FF
    // Overlapping static entry reached from 0xC2C09E.
    case 0xC2C0A0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:392 BEQ @UNKNOWN29
    case 0xC2C0A1: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/battle/call_for_help_common.asm:393 LDA @LOCAL09
    case 0xC2C0A3: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:394 CLC
    case 0xC2C0A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:395 ADC #.SIZEOF(battler)
    case 0xC2C0A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/call_for_help_common.asm:395 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C0A6.
    case 0xC2C0A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/call_for_help_common.asm:396 STA @LOCAL09
    case 0xC2C0A9: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:397 LDX @LOCAL08
    case 0xC2C0AB: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:398 INX
    case 0xC2C0AD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:399 STX @LOCAL08
    case 0xC2C0AE: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:401 CPX #$0020
    case 0xC2C0B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/call_for_help_common.asm:401 CPX #$0020
    // Overlapping static entry reached from 0xC2C0B0.
    case 0xC2C0B2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/call_for_help_common.asm:402 BCC @UNKNOWN27
    case 0xC2C0B3: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/battle/call_for_help_common.asm:404 LDA @LOCAL09
    case 0xC2C0B5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/call_for_help_common.asm:405 STA CURRENT_TARGET
    case 0xC2C0B7: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:406 LDX CURRENT_TARGET
    case 0xC2C0BA: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:407 LDA @LOCAL0B
    case 0xC2C0BD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:408 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C0BF: cpu.execute_instruction<0x22>(0xC2B6EB, 4); return true;
    // src/battle/call_for_help_common.asm:409 LDY @LOCAL0A
    case 0xC2C0C3: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/call_for_help_common.asm:410 TYA
    case 0xC2C0C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/call_for_help_common.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C0C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:412 LDX CURRENT_TARGET
    case 0xC2C0C8: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:413 STA a:battler::sprite_x,X
    case 0xC2C0CB: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/battle/call_for_help_common.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC2C0CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:415 LDA @LOCAL06
    case 0xC2C0D0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/battle/call_for_help_common.asm:416 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C0D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:417 LDX CURRENT_TARGET
    case 0xC2C0D4: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:418 STA a:battler::row,X
    case 0xC2C0D7: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:419 LDX CURRENT_TARGET
    case 0xC2C0DA: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:420 REP #PROC_FLAGS::ACCUM8
    case 0xC2C0DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:421 LDA a:battler::row,X
    case 0xC2C0DF: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/battle/call_for_help_common.asm:422 AND #$00FF
    case 0xC2C0E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/call_for_help_common.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC2C0E2.
    case 0xC2C0E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/call_for_help_common.asm:423 BEQ @UNKNOWN30
    case 0xC2C0E5: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/battle/call_for_help_common.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C0E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:425 LDA #$0080
    case 0xC2C0E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x00AE80, 3); return true;
    // src/battle/call_for_help_common.asm:426 LDX CURRENT_TARGET
    case 0xC2C0EB: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:426 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C0E9.
    case 0xC2C0EC: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:427 STA a:battler::sprite_y,X
    case 0xC2C0EE: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/battle/call_for_help_common.asm:428 BRA @UNKNOWN31
    case 0xC2C0F1: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/battle/call_for_help_common.asm:430 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C0F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:431 LDA #$0090
    case 0xC2C0F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x00AE90, 3); return true;
    // src/battle/call_for_help_common.asm:432 LDX CURRENT_TARGET
    case 0xC2C0F7: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:432 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C0F5.
    case 0xC2C0F8: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:433 STA a:battler::sprite_y,X
    case 0xC2C0FA: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/battle/call_for_help_common.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC2C0FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:436 LDA @LOCAL0B
    case 0xC2C0FF: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/call_for_help_common.asm:437 JSR UNKNOWN_C2F09F
    case 0xC2C101: cpu.execute_instruction<0x20>(0x00F09F, 3); return true;
    // src/battle/call_for_help_common.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C104: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/call_for_help_common.asm:439 LDX CURRENT_TARGET
    case 0xC2C106: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:440 STA a:battler::vram_sprite_index,X
    case 0xC2C109: cpu.execute_instruction<0x9D>(0x000043, 3); return true;
    // src/battle/call_for_help_common.asm:441 LDA #$0001
    case 0xC2C10C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/battle/call_for_help_common.asm:442 LDX CURRENT_TARGET
    case 0xC2C10E: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/call_for_help_common.asm:442 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C10C.
    case 0xC2C10F: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/call_for_help_common.asm:443 STA a:battler::has_taken_turn,X
    case 0xC2C111: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/battle/call_for_help_common.asm:444 JSL FIX_TARGET_NAME
    case 0xC2C114: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/call_for_help_common.asm:446 LDA @LOCAL0C
    case 0xC2C118: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/call_for_help_common.asm:447 BEQ @UNKNOWN32
    case 0xC2C11A: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C11C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x007810, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C11C.
    case 0xC2C11E: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C11F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C121.
    case 0xC2C123: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C124: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C126: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/call_for_help_common.asm:449 BRA @UNKNOWN33
    case 0xC2C12A: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C12C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0077FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C12C.
    case 0xC2C12E: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C12F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C12E.
    case 0xC2C130: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C131: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C131.
    case 0xC2C133: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C134: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C136: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/call_for_help_common.asm:453 END_C_FUNCTION
    case 0xC2C13A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/call_for_help_common.asm:453 END_C_FUNCTION
    case 0xC2C13B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/check_dead_players.asm (source_named).
bool execute_battle_check_dead_players_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_dead_players.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BB18: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BB1C.
    case 0xC2BB1E: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/check_dead_players.asm:9 END_STACK_VARS
    case 0xC2BB1F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:10 LDA #$0000
    case 0xC2BB20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:10 LDA #$0000
    // Overlapping static entry reached from 0xC2BB20.
    case 0xC2BB22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/check_dead_players.asm:11 STA @VIRTUAL04
    case 0xC2BB23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:12 JMP @UNKNOWN9
    case 0xC2BB25: cpu.execute_instruction<0x4C>(0x00BC4E, 3); return true;
    // src/battle/check_dead_players.asm:14 LDA @VIRTUAL04
    case 0xC2BB28: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    case 0xC2BB2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/check_dead_players.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BB2A.
    case 0xC2BB2C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_dead_players.asm:16 JSL MULT168
    case 0xC2BB2D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/check_dead_players.asm:17 TAY
    case 0xC2BB31: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:18 STY @LOCAL03
    case 0xC2BB32: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/check_dead_players.asm:19 LDA BATTLERS_TABLE+battler::consciousness,Y
    case 0xC2BB34: cpu.execute_instruction<0xB9>(0x009FB8, 3); return true;
    // src/battle/check_dead_players.asm:20 AND #$00FF
    case 0xC2BB37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2BB37.
    case 0xC2BB39: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BB3A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:21 BEQL @UNKNOWN8
    case 0xC2BB3C: cpu.execute_instruction<0x4C>(0x00BC4C, 3); return true;
    // src/battle/check_dead_players.asm:22 LDA BATTLERS_TABLE+battler::ally_or_enemy,Y
    case 0xC2BB3F: cpu.execute_instruction<0xB9>(0x009FBA, 3); return true;
    // src/battle/check_dead_players.asm:23 AND #$00FF
    case 0xC2BB42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BB42.
    case 0xC2BB44: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BB45: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:24 BNEL @UNKNOWN8
    case 0xC2BB47: cpu.execute_instruction<0x4C>(0x00BC4C, 3); return true;
    // src/battle/check_dead_players.asm:25 LDA BATTLERS_TABLE+battler::npc_id,Y
    case 0xC2BB4A: cpu.execute_instruction<0xB9>(0x009FBB, 3); return true;
    // src/battle/check_dead_players.asm:26 AND #$00FF
    case 0xC2BB4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BB4D.
    case 0xC2BB4F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BB50: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:27 BNEL @UNKNOWN8
    case 0xC2BB52: cpu.execute_instruction<0x4C>(0x00BC4C, 3); return true;
    // src/battle/check_dead_players.asm:28 LDA BATTLERS_TABLE+battler::row,Y
    case 0xC2BB55: cpu.execute_instruction<0xB9>(0x009FBC, 3); return true;
    // src/battle/check_dead_players.asm:29 AND #$00FF
    case 0xC2BB58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2BB58.
    case 0xC2BB5A: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    case 0xC2BB5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/battle/check_dead_players.asm:30 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BB5B.
    case 0xC2BB5D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_dead_players.asm:31 JSL MULT168
    case 0xC2BB5E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/check_dead_players.asm:32 CLC
    case 0xC2BB62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BB63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/battle/check_dead_players.asm:33 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BB63.
    case 0xC2BB65: cpu.execute_instruction<0x99>(0x000285, 3); return true;
    // src/battle/check_dead_players.asm:34 STA @VIRTUAL02
    case 0xC2BB66: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:35 STA @LOCAL02
    case 0xC2BB68: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/check_dead_players.asm:36 LDY @LOCAL03
    case 0xC2BB6A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/check_dead_players.asm:37 TYA
    case 0xC2BB6C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:38 CLC
    case 0xC2BB6D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    case 0xC2BB6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BD, 2); else cpu.execute_instruction<0x69>(0x009FBD, 3); return true;
    // src/battle/check_dead_players.asm:39 ADC #.LOWORD(BATTLERS_TABLE)+battler::hp
    // Overlapping static entry reached from 0xC2BB6E.
    case 0xC2BB70: cpu.execute_instruction<0x9F>(0x1286AA, 4); return true;
    // src/battle/check_dead_players.asm:40 TAX
    case 0xC2BB71: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:41 STX @LOCAL01
    case 0xC2BB72: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:42 LDX @VIRTUAL02
    case 0xC2BB74: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:43 LDA a:char_struct::current_hp,X
    case 0xC2BB76: cpu.execute_instruction<0xBD>(0x000045, 3); return true;
    // src/battle/check_dead_players.asm:44 LDX @LOCAL01
    case 0xC2BB79: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:45 STA __BSS_START__,X
    case 0xC2BB7B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:46 LDX @VIRTUAL02
    case 0xC2BB7E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:47 LDA a:char_struct::current_pp,X
    case 0xC2BB80: cpu.execute_instruction<0xBD>(0x00004B, 3); return true;
    // src/battle/check_dead_players.asm:48 STA BATTLERS_TABLE+battler::pp,Y
    case 0xC2BB83: cpu.execute_instruction<0x99>(0x009FC3, 3); return true;
    // src/battle/check_dead_players.asm:49 LDX @LOCAL01
    case 0xC2BB86: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:50 LDA __BSS_START__,X
    case 0xC2BB88: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:51 BNE @UNKNOWN4
    case 0xC2BB8B: cpu.execute_instruction<0xD0>(0x000068, 2); return true;
    // src/battle/check_dead_players.asm:52 LDA BATTLERS_TABLE+battler::afflictions,Y
    case 0xC2BB8D: cpu.execute_instruction<0xB9>(0x009FC9, 3); return true;
    // src/battle/check_dead_players.asm:53 AND #$00FF
    case 0xC2BB90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2BB90.
    case 0xC2BB92: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BB93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/check_dead_players.asm:54 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BB93.
    case 0xC2BB95: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_dead_players.asm:55 BEQ @UNKNOWN4
    case 0xC2BB96: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/battle/check_dead_players.asm:56 TYA
    case 0xC2BB98: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:57 CLC
    case 0xC2BB99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2BB9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x009FAC, 3); return true;
    // src/battle/check_dead_players.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BB9A.
    case 0xC2BB9C: cpu.execute_instruction<0x9F>(0xA9728D, 4); return true;
    // src/battle/check_dead_players.asm:59 STA CURRENT_TARGET
    case 0xC2BB9D: cpu.execute_instruction<0x8D>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:60 TAX
    case 0xC2BBA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BBA1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:62 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2BBA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BBA5: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/check_dead_players.asm:63 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC2BBA3.
    case 0xC2BBA6: cpu.execute_instruction<0x1D>(0x00AE00, 3); return true;
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    case 0xC2BBA8: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:64 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2BBA6.
    case 0xC2BBA9: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/battle/check_dead_players.asm:65 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC2BBAB: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/check_dead_players.asm:66 LDX CURRENT_TARGET
    case 0xC2BBAE: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:67 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2BBB1: cpu.execute_instruction<0x9E>(0x000022, 3); return true;
    // src/battle/check_dead_players.asm:68 LDX CURRENT_TARGET
    case 0xC2BBB4: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:69 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2BBB7: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/check_dead_players.asm:70 LDX CURRENT_TARGET
    case 0xC2BBBA: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:71 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2BBBD: cpu.execute_instruction<0x9E>(0x000020, 3); return true;
    // src/battle/check_dead_players.asm:72 LDX CURRENT_TARGET
    case 0xC2BBC0: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:73 STZ a:battler::afflictions + STATUS_GROUP:: TEMPORARY,X
    case 0xC2BBC3: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/check_dead_players.asm:74 LDX CURRENT_TARGET
    case 0xC2BBC6: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/battle/check_dead_players.asm:75 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2BBC9: cpu.execute_instruction<0x9E>(0x00001E, 3); return true;
    // src/battle/check_dead_players.asm:76 JSL FIX_TARGET_NAME
    case 0xC2BBCC: cpu.execute_instruction<0x22>(0xC23D05, 4); return true;
    // src/battle/check_dead_players.asm:78 LDX OPEN_WINDOW_TABLE + WINDOW::TEXT_BATTLE * 2
    case 0xC2BBD0: cpu.execute_instruction<0xAE>(0x008900, 3); return true;
    // src/battle/check_dead_players.asm:79 STX @LOCAL03
    case 0xC2BBD3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BBD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2BBD5.
    case 0xC2BBD7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/check_dead_players.asm:80 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2BBD8: cpu.execute_instruction<0x22>(0xC1DD47, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x006C6B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BBDC.
    case 0xC2BBDE: cpu.execute_instruction<0x6C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBDF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2BBE1.
    case 0xC2BBE3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/check_dead_players.asm:81 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2BBE6: cpu.execute_instruction<0x22>(0xC1DC1C, 4); return true;
    // src/battle/check_dead_players.asm:82 LDX @LOCAL03
    case 0xC2BBEA: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    case 0xC2BBEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/battle/check_dead_players.asm:83 CPX #$FFFF
    // Overlapping static entry reached from 0xC2BBEC.
    case 0xC2BBEE: cpu.execute_instruction<0xFF>(0x2204D0, 4); return true;
    // src/battle/check_dead_players.asm:84 BNE @UNKNOWN4
    case 0xC2BBEF: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC2BBF1: cpu.execute_instruction<0x22>(0xC1DD59, 4); return true;
    // src/battle/check_dead_players.asm:85 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2BBEE.
    case 0xC2BBF2: cpu.execute_instruction<0x59>(0x00C1DD, 3); return true;
    // src/battle/check_dead_players.asm:87 LDX #$0000
    case 0xC2BBF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:87 LDX #$0000
    // Overlapping static entry reached from 0xC2BBF5.
    case 0xC2BBF7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/check_dead_players.asm:88 STX @LOCAL01
    case 0xC2BBF8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:89 BRA @UNKNOWN6
    case 0xC2BBFA: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/battle/check_dead_players.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC2BBFC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:92 LDA @LOCAL02
    case 0xC2BBFE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/check_dead_players.asm:93 STA @VIRTUAL02
    case 0xC2BC00: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:94 STX @VIRTUAL02
    case 0xC2BC02: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:95 CLC
    case 0xC2BC04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:96 ADC @VIRTUAL02
    case 0xC2BC05: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:97 PHA
    case 0xC2BC07: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:98 STX @VIRTUAL02
    case 0xC2BC08: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:99 LDA @VIRTUAL04
    case 0xC2BC0A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    case 0xC2BC0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/check_dead_players.asm:100 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BC0C.
    case 0xC2BC0E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_dead_players.asm:101 JSL MULT168
    case 0xC2BC0F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/check_dead_players.asm:102 CLC
    case 0xC2BC13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    case 0xC2BC14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/battle/check_dead_players.asm:103 ADC #.LOWORD(BATTLERS_TABLE)+battler::afflictions
    // Overlapping static entry reached from 0xC2BC14.
    case 0xC2BC16: cpu.execute_instruction<0x9F>(0x026518, 4); return true;
    // src/battle/check_dead_players.asm:104 CLC
    case 0xC2BC17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:105 ADC @VIRTUAL02
    case 0xC2BC18: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:106 TAX
    case 0xC2BC1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:108 LDA __BSS_START__,X
    case 0xC2BC1D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:109 PLX
    case 0xC2BC20: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:110 STA a:char_struct::afflictions,X
    case 0xC2BC21: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/battle/check_dead_players.asm:111 LDX @LOCAL01
    case 0xC2BC24: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:112 INX
    case 0xC2BC26: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:113 STX @LOCAL01
    case 0xC2BC27: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    case 0xC2BC29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/battle/check_dead_players.asm:115 CPX #.SIZEOF(char_struct::afflictions)
    // Overlapping static entry reached from 0xC2BC29.
    case 0xC2BC2B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/check_dead_players.asm:116 BCC @UNKNOWN5
    case 0xC2BC2C: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/battle/check_dead_players.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2BC2E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:118 LDA @LOCAL02
    case 0xC2BC30: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/battle/check_dead_players.asm:119 STA @VIRTUAL02
    case 0xC2BC32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/check_dead_players.asm:120 CLC
    case 0xC2BC34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    case 0xC2BC35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/battle/check_dead_players.asm:121 ADC #char_struct::afflictions + 4
    // Overlapping static entry reached from 0xC2BC35.
    case 0xC2BC37: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/check_dead_players.asm:122 TAX
    case 0xC2BC38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_dead_players.asm:123 LDA __BSS_START__,X
    case 0xC2BC39: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:124 AND #$00FF
    case 0xC2BC3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_dead_players.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC2BC3C.
    case 0xC2BC3E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_dead_players.asm:125 BEQ @UNKNOWN7
    case 0xC2BC3F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/check_dead_players.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/check_dead_players.asm:127 LDA #$0001
    case 0xC2BC43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    case 0xC2BC45: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/check_dead_players.asm:128 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2BC43.
    case 0xC2BC46: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/check_dead_players.asm:130 JSL UPDATE_PARTY
    case 0xC2BC48: cpu.execute_instruction<0x22>(0xC034D6, 4); return true;
    // src/battle/check_dead_players.asm:132 INC @VIRTUAL04
    case 0xC2BC4C: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:135 LDA @VIRTUAL04
    case 0xC2BC4E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    case 0xC2BC50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/check_dead_players.asm:136 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BC50.
    case 0xC2BC52: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC53: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC55: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/check_dead_players.asm:137 BCCL @UNKNOWN0
    case 0xC2BC57: cpu.execute_instruction<0x4C>(0x00BB28, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC5A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_dead_players.asm:138 END_C_FUNCTION
    case 0xC2BC5B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/check_if_valid_target.asm (source_named).
bool execute_battle_check_if_valid_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/check_if_valid_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A1F5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    case 0xC4A1F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/check_if_valid_target.asm:7 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC4A1F7.
    case 0xC4A1F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/check_if_valid_target.asm:8 JSL MULT168
    case 0xC4A1FA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/battle/check_if_valid_target.asm:9 TAX
    case 0xC4A1FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/check_if_valid_target.asm:10 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC4A1FF: cpu.execute_instruction<0xBD>(0x009FB8, 3); return true;
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    case 0xC4A202: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_if_valid_target.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC4A202.
    case 0xC4A204: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_if_valid_target.asm:12 BEQ @INVALID
    case 0xC4A205: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/battle/check_if_valid_target.asm:13 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC4A207: cpu.execute_instruction<0xBD>(0x009FBB, 3); return true;
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    case 0xC4A20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_if_valid_target.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC4A20A.
    case 0xC4A20C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/check_if_valid_target.asm:15 BNE @INVALID
    case 0xC4A20D: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/battle/check_if_valid_target.asm:16 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC4A20F: cpu.execute_instruction<0xBD>(0x009FC9, 3); return true;
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    case 0xC4A212: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/check_if_valid_target.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC4A212.
    case 0xC4A214: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    case 0xC4A215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/check_if_valid_target.asm:18 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC4A215.
    case 0xC4A217: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_if_valid_target.asm:19 BEQ @INVALID
    case 0xC4A218: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    case 0xC4A21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/check_if_valid_target.asm:20 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC4A21A.
    case 0xC4A21C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/check_if_valid_target.asm:21 BEQ @INVALID
    case 0xC4A21D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    case 0xC4A21F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/check_if_valid_target.asm:22 LDA #$0001
    // Overlapping static entry reached from 0xC4A21F.
    case 0xC4A221: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/check_if_valid_target.asm:23 BRA @RETURN
    case 0xC4A222: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    case 0xC4A224: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/check_if_valid_target.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC4A224.
    case 0xC4A226: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/check_if_valid_target.asm:27 END_C_FUNCTION
    case 0xC4A227: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
